#include "hydrothunder_funcs.101.h"

DEFINE_REX_FUNC(sub_82125C98) {
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
	// blt cr6,0x82125cc8
	if (ctx.cr6.lt) goto loc_82125CC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82125ce0
	if (ctx.cr6.lt) goto loc_82125CE0;
loc_82125CC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82125CE0;
	sub_821231D0(ctx, base);
loc_82125CE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
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

DEFINE_REX_FUNC(sub_82129260) {
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
	ctx.lr = 0x82129268;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// beq cr6,0x82129454
	if (ctx.cr6.eq) goto loc_82129454;
	// addi r27,r4,40
	r27.s64 = ctx.r4.s64 + 40;
loc_8212928C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821292c4
	goto loc_821292C4;
loc_821292A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821292AC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821292bc
	if (!ctx.cr0.lt) goto loc_821292BC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821292c4
	goto loc_821292C4;
loc_821292BC:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821292C4:
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821292a0
	if (ctx.cr0.eq) goto loc_821292A0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821292fc
	if (ctx.cr6.eq) goto loc_821292FC;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x821292EC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821292fc
	if (ctx.cr0.lt) goto loc_821292FC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82129308
	goto loc_82129308;
loc_821292FC:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82129308:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212943c
	if (ctx.cr6.eq) goto loc_8212943C;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82129348
	goto loc_82129348;
loc_8212932C:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82122730
	ctx.lr = 0x82129338;
	sub_82122730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x82129340;
	sub_8212A9B0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82129348:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212932c
	if (!ctx.cr6.eq) goto loc_8212932C;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r5,r10,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// bl 0x8212bb78
	ctx.lr = 0x82129368;
	sub_8212BB78(ctx, base);
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x821293a4
	if (ctx.cr6.eq) goto loc_821293A4;
	// addi r31,r29,28
	r31.s64 = r29.s64 + 28;
	// b 0x8212939c
	goto loc_8212939C;
loc_82129380:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212938C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821293dc
	if (ctx.cr0.eq) goto loc_821293DC;
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
loc_8212939C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82129380
	if (!ctx.cr6.eq) goto loc_82129380;
loc_821293A4:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_821293A8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8212943c
	if (ctx.cr6.eq) goto loc_8212943C;
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x82129404
	goto loc_82129404;
loc_821293B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x821293C4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821293dc
	if (ctx.cr0.eq) goto loc_821293DC;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82120700
	ctx.lr = 0x821293DC;
	sub_82120700(ctx, base);
loc_821293DC:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x821293b8
	if (!ctx.cr6.eq) goto loc_821293B8;
	// addi r31,r29,28
	r31.s64 = r29.s64 + 28;
	// b 0x821293a8
	goto loc_821293A8;
loc_821293F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x821293FC;
	sub_82120700(ctx, base);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
loc_82129404:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x821293f0
	if (!ctx.cr6.eq) goto loc_821293F0;
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x82129438
	if (ctx.cr6.eq) goto loc_82129438;
loc_8212941C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212942C;
	sub_82120AC0(ctx, base);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8212941c
	if (!ctx.cr6.eq) goto loc_8212941C;
loc_82129438:
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8212943C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8212aa28
	ctx.lr = 0x82129444;
	sub_8212AA28(ctx, base);
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 56);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212928c
	if (!ctx.cr6.eq) goto loc_8212928C;
loc_82129454:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82139D28) {
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
	// bl 0x82167b60
	ctx.lr = 0x82139D48;
	sub_82167B60(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139d58
	if (ctx.cr0.eq) goto loc_82139D58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82139D58;
	sub_8269CE98(ctx, base);
loc_82139D58:
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

DEFINE_REX_FUNC(sub_8213B3D0) {
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
	ctx.lr = 0x8213B3F4;
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
	ctx.lr = 0x8213B40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6132(r10)
	REX_STORE_U32(ctx.r10.u32 + 6132, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213E4B8) {
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
	ctx.lr = 0x8213E4C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,4(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x8213E4E8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213e570
	if (ctx.cr0.eq) goto loc_8213E570;
	// addic. r11,r31,8
	ctx.xer.ca = r31.u32 > 4294967287;
	ctx.r11.s64 = r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// beq 0x8213e514
	if (ctx.cr0.eq) goto loc_8213E514;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r4,r25,4
	ctx.r4.s64 = r25.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82120670
	ctx.lr = 0x8213E514;
	sub_82120670(ctx, base);
loc_8213E514:
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8213e538
	if (!ctx.cr6.lt) goto loc_8213E538;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8213E538;
	sub_822F6020(ctx, base);
loc_8213E538:
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
	// bl 0x8213e590
	ctx.lr = 0x8213E564;
	sub_8213E590(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8213E570:
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
	ctx.lr = 0x8213E58C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82146738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82146740;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82146758
	if (!ctx.cr6.eq) goto loc_82146758;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82146758:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r31,6152(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x8214677c
	goto loc_8214677C;
loc_8214676C:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82146784
	if (ctx.cr6.eq) goto loc_82146784;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_8214677C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214676c
	if (!ctx.cr6.eq) goto loc_8214676C;
loc_82146784:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x8214679C;
	sub_8269CC20(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x821467b8
	if (!ctx.cr6.eq) goto loc_821467B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821467B8:
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// bl 0x82146418
	ctx.lr = 0x821467C0;
	sub_82146418(ctx, base);
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
	ctx.lr = 0x821467DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8214B668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214B670;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,560
	ctx.r11.s64 = ctx.r10.s64 + 560;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8214B698:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8214b698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B698;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// li r5,6
	ctx.r5.s64 = 6;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214b6d0
	if (ctx.cr0.eq) goto loc_8214B6D0;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// li r5,7
	ctx.r5.s64 = 7;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
loc_8214B6D0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r8,r10,-7640
	ctx.r8.s64 = ctx.r10.s64 + -7640;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,6060(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,6216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 6216);
	// ld r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 104);
	// lwz r10,196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// rldicl r9,r8,8,56
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFF;
	// rldicl r8,r8,10,54
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 10) & 0x3FF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x8214bd30
	ctx.lr = 0x8214B740;
	sub_8214BD30(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r10,560
	ctx.r11.s64 = ctx.r10.s64 + 560;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8214B75C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8214b75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B75C;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// li r5,6
	ctx.r5.s64 = 6;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214b794
	if (ctx.cr0.eq) goto loc_8214B794;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// li r5,7
	ctx.r5.s64 = 7;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
loc_8214B794:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-12960
	ctx.r11.s64 = ctx.r11.s64 + -12960;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8214bd30
	ctx.lr = 0x8214B7B8;
	sub_8214BD30(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82155A68) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82155fd0
	ctx.lr = 0x82155A84;
	sub_82155FD0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82155aac
	if (!ctx.cr6.gt) goto loc_82155AAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-8840
	ctx.r3.s64 = ctx.r10.s64 + -8840;
	// li r5,565
	ctx.r5.s64 = 565;
	// bl 0x821231d0
	ctx.lr = 0x82155AAC;
	sub_821231D0(ctx, base);
loc_82155AAC:
	// mulli r11,r31,308
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(308));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
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

DEFINE_REX_FUNC(sub_82159330) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82159338;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,-7684
	ctx.r10.s64 = ctx.r10.s64 + -7684;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215936C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,256(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82159388
	if (ctx.cr6.eq) goto loc_82159388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822937c0
	ctx.lr = 0x82159380;
	sub_822937C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82159388;
	sub_8269CE98(ctx, base);
loc_82159388:
	// addi r29,r31,196
	r29.s64 = r31.s64 + 196;
	// li r30,15
	r30.s64 = 15;
loc_82159390:
	// lwzu r3,-12(r29)
	ea = -12 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x8269d1b8
	ctx.lr = 0x82159398;
	sub_8269D1B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82159390
	if (!ctx.cr0.lt) goto loc_82159390;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-7660
	ctx.r11.s64 = ctx.r11.s64 + -7660;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821593bc
	if (ctx.cr0.eq) goto loc_821593BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821593BC;
	sub_8269CE98(ctx, base);
loc_821593BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8215C938) {
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
	ctx.lr = 0x8215C940;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// beq cr6,0x8215caac
	if (ctx.cr6.eq) goto loc_8215CAAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215caac
	if (!ctx.cr6.eq) goto loc_8215CAAC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8215C974;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8215ca3c
	if (ctx.cr0.eq) goto loc_8215CA3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bne cr6,0x8215c99c
	if (!ctx.cr6.eq) goto loc_8215C99C;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
loc_8215C99C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f66b0
	ctx.lr = 0x8215C9A8;
	sub_822F66B0(ctx, base);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stb r29,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r29.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stb r29,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stb r29,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, r29.u8);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// stb r29,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// bne cr6,0x8215c9f0
	if (!ctx.cr6.eq) goto loc_8215C9F0;
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
	ctx.lr = 0x8215C9F0;
	sub_82120018(ctx, base);
loc_8215C9F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f6bf0
	ctx.lr = 0x8215C9FC;
	sub_822F6BF0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18636
	ctx.r11.s64 = ctx.r11.s64 + 18636;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6f30
	ctx.lr = 0x8215CA14;
	sub_822F6F30(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x8215ca40
	goto loc_8215CA40;
loc_8215CA3C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8215CA40:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq 0x8215caac
	if (ctx.cr0.eq) goto loc_8215CAAC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f6b50
	ctx.lr = 0x8215CA54;
	sub_822F6B50(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ca64
	if (ctx.cr6.eq) goto loc_8215CA64;
	// bl 0x8269d770
	ctx.lr = 0x8215CA64;
	sub_8269D770(ctx, base);
loc_8215CA64:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ca78
	if (ctx.cr6.eq) goto loc_8215CA78;
	// bl 0x8269d770
	ctx.lr = 0x8215CA78;
	sub_8269D770(ctx, base);
loc_8215CA78:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ca8c
	if (ctx.cr6.eq) goto loc_8215CA8C;
	// bl 0x8269d770
	ctx.lr = 0x8215CA8C;
	sub_8269D770(ctx, base);
loc_8215CA8C:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215caa0
	if (ctx.cr6.eq) goto loc_8215CAA0;
	// bl 0x8269d770
	ctx.lr = 0x8215CAA0;
	sub_8269D770(ctx, base);
loc_8215CAA0:
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f6700
	ctx.lr = 0x8215CAAC;
	sub_822F6700(ctx, base);
loc_8215CAAC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82169CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82169CA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stb r10,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// blt cr6,0x82169d3c
	if (ctx.cr6.lt) goto loc_82169D3C;
	// ble cr6,0x82169cf0
	if (!ctx.cr6.gt) goto loc_82169CF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8216a7e8
	ctx.lr = 0x82169CF0;
	sub_8216A7E8(ctx, base);
loc_82169CF0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82169d3c
	if (!ctx.cr6.gt) goto loc_82169D3C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82169D00:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169d30
	if (ctx.cr0.eq) goto loc_82169D30;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_82169D30:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82169d00
	if (!ctx.cr0.eq) goto loc_82169D00;
loc_82169D3C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// ble cr6,0x82169d90
	if (!ctx.cr6.gt) goto loc_82169D90;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82169D50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169d80
	if (ctx.cr6.eq) goto loc_82169D80;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82169D80:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82169d50
	if (!ctx.cr0.eq) goto loc_82169D50;
loc_82169D90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821719A0) {
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
	ctx.lr = 0x821719A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r25,0(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,56(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821719D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// lwz r29,44(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82171a1c
	goto loc_82171A1C;
loc_821719E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x82171a18
	if (!ctx.cr6.eq) goto loc_82171A18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x82171A08;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// b 0x82171a1c
	goto loc_82171A1C;
loc_82171A18:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82171A1C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x821719e4
	if (!ctx.cr6.eq) goto loc_821719E4;
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x82171A4C;
	sub_82120AC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82171A54;
	sub_8269CE98(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823ed360
	ctx.lr = 0x82171A5C;
	sub_823ED360(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82178A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82178A58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82120d70
	ctx.lr = 0x82178A6C;
	sub_82120D70(ctx, base);
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82178ac8
	if (ctx.cr6.eq) goto loc_82178AC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-24460
	r29.s64 = ctx.r11.s64 + -24460;
loc_82178A80:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121610
	ctx.lr = 0x82178A90;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82178AA0;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x82178AAC;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82178ABC;
	sub_82120AC0(ctx, base);
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82178a80
	if (!ctx.cr6.eq) goto loc_82178A80;
loc_82178AC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217B0A8) {
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
	// bl 0x8217ac08
	ctx.lr = 0x8217B0C4;
	sub_8217AC08(ctx, base);
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
	// li r30,0
	r30.s64 = 0;
loc_8217B0CC:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8217b140
	if (ctx.cr6.eq) goto loc_8217B140;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b140
	if (ctx.cr0.eq) goto loc_8217B140;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// b 0x8217b0f4
	goto loc_8217B0F4;
loc_8217B0E8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8217b100
	if (ctx.cr6.eq) goto loc_8217B100;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8217B0F4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8217b0e8
	if (!ctx.cr6.eq) goto loc_8217B0E8;
	// b 0x8217b120
	goto loc_8217B120;
loc_8217B100:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
loc_8217B120:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217b0cc
	if (ctx.cr6.eq) goto loc_8217B0CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217B13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217b0cc
	goto loc_8217B0CC;
loc_8217B140:
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

DEFINE_REX_FUNC(sub_821801D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821801D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r29,r10,-25252
	r29.s64 = ctx.r10.s64 + -25252;
	// addi r28,r11,-25320
	r28.s64 = ctx.r11.s64 + -25320;
	// blt cr6,0x82180208
	if (ctx.cr6.lt) goto loc_82180208;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82180218
	if (ctx.cr6.lt) goto loc_82180218;
loc_82180208:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82180218;
	sub_821231D0(ctx, base);
loc_82180218:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lbzx r31,r11,r31
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82180234
	if (ctx.cr0.lt) goto loc_82180234;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82180244
	if (ctx.cr6.lt) goto loc_82180244;
loc_82180234:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82180244;
	sub_821231D0(ctx, base);
loc_82180244:
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
	// mulli r11,r31,34
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(34));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82186960) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821869b8
	if (ctx.cr0.eq) goto loc_821869B8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// lwz r31,56(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x821869b0
	goto loc_821869B0;
loc_82186994:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821869AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_821869B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82186994
	if (!ctx.cr6.eq) goto loc_82186994;
loc_821869B8:
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

DEFINE_REX_FUNC(sub_8218AB40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82189dd0
	ctx.lr = 0x8218AB60;
	sub_82189DD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-32392
	ctx.r11.s64 = ctx.r11.s64 + -32392;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lfs f0,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// lfs f11,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// lfs f10,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,224(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f9,228(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f11,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f13,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r7,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// std r9,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// std r8,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r8.u64);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
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

DEFINE_REX_FUNC(sub_82191980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r9,3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lbz r7,1(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// std r9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82195620) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82195628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219564C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,20(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,160(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821956B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821956D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82176050
	ctx.lr = 0x821956E4;
	sub_82176050(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219D228) {
	REX_FUNC_PROLOGUE();
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82120b20
	sub_82120B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219D650) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82120b20
	ctx.lr = 0x8219D680;
	sub_82120B20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82120700
	ctx.lr = 0x8219D6A8;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8219D6B8;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d6ec
	if (ctx.cr6.eq) goto loc_8219D6EC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D6EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D6EC:
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

DEFINE_REX_FUNC(sub_821A1E70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2748) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
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

DEFINE_REX_FUNC(sub_821A2F90) {
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
	// addi r11,r11,-27032
	ctx.r11.s64 = ctx.r11.s64 + -27032;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821780e8
	ctx.lr = 0x821A2FBC;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2fcc
	if (ctx.cr0.eq) goto loc_821A2FCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A2FCC;
	sub_8269CE98(ctx, base);
loc_821A2FCC:
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

DEFINE_REX_FUNC(sub_821A4790) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3ee8
	sub_821A3EE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A55D8) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25412
	ctx.r11.s64 = ctx.r11.s64 + -25412;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x821A5608;
	sub_8269D1B8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-25440
	ctx.r11.s64 = ctx.r11.s64 + -25440;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821A5624;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a5634
	if (ctx.cr0.eq) goto loc_821A5634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A5634;
	sub_8269CE98(ctx, base);
loc_821A5634:
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

DEFINE_REX_FUNC(sub_821A75B0) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821A75C8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a75f8
	if (ctx.cr0.eq) goto loc_821A75F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A75D8;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25116
	ctx.r10.s64 = ctx.r10.s64 + -25116;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x821a75fc
	goto loc_821A75FC;
loc_821A75F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A75FC:
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

DEFINE_REX_FUNC(sub_821A9680) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-24936
	ctx.r4.s64 = ctx.r11.s64 + -24936;
	// addi r3,r10,-24792
	ctx.r3.s64 = ctx.r10.s64 + -24792;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x821231d0
	sub_821231D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AAAC8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-24484
	ctx.r11.s64 = ctx.r11.s64 + -24484;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821aa9f8
	ctx.lr = 0x821AAAF8;
	sub_821AA9F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aab08
	if (ctx.cr0.eq) goto loc_821AAB08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AAB08;
	sub_8269CE98(ctx, base);
loc_821AAB08:
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

DEFINE_REX_FUNC(sub_821ACF68) {
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
	ctx.lr = 0x821ACF70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r25,r3,64
	r25.s64 = ctx.r3.s64 + 64;
	// li r24,0
	r24.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821ad0d8
	if (!ctx.cr0.gt) goto loc_821AD0D8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r22,0
	r22.s64 = 0;
	// addi r26,r10,-17264
	r26.s64 = ctx.r10.s64 + -17264;
	// addi r23,r9,-17568
	r23.s64 = ctx.r9.s64 + -17568;
	// addi r21,r11,-15256
	r21.s64 = ctx.r11.s64 + -15256;
loc_821ACFB0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwzx r3,r22,r11
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	// bl 0x821fd140
	ctx.lr = 0x821ACFC0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ad0b8
	if (ctx.cr0.eq) goto loc_821AD0B8;
	// lwz r11,120(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 120);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r28,r22,r10
	r28.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821acfe8
	if (ctx.cr6.eq) goto loc_821ACFE8;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821acfec
	goto loc_821ACFEC;
loc_821ACFE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821ACFEC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821ac3e0
	ctx.lr = 0x821ACFF4;
	sub_821AC3E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,168(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 168);
	// addi r31,r28,80
	r31.s64 = r28.s64 + 80;
	// bl 0x8215f1b0
	ctx.lr = 0x821AD004;
	sub_8215F1B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x821AD00C;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821AD014;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219b7d0
	ctx.lr = 0x821AD020;
	sub_8219B7D0(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// b 0x821ad038
	goto loc_821AD038;
loc_821AD028:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ad0e0
	if (!ctx.cr6.eq) goto loc_821AD0E0;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
loc_821AD038:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ad028
	if (!ctx.cr6.eq) goto loc_821AD028;
loc_821AD040:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ad0b8
	if (ctx.cr0.eq) goto loc_821AD0B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821ad098
	if (!ctx.cr0.gt) goto loc_821AD098;
	// li r29,0
	r29.s64 = 0;
loc_821AD064:
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AD078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ad064
	if (ctx.cr6.lt) goto loc_821AD064;
loc_821AD098:
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// lwz r3,172(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 172);
	// bl 0x8215f2d0
	ctx.lr = 0x821AD0A4;
	sub_8215F2D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821AD0AC;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219b7d0
	ctx.lr = 0x821AD0B8;
	sub_8219B7D0(ctx, base);
loc_821AD0B8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821acfb0
	if (ctx.cr6.lt) goto loc_821ACFB0;
loc_821AD0D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_821AD0E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ad040
	goto loc_821AD040;
}

DEFINE_REX_FUNC(sub_821B8468) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8524
	if (ctx.cr6.eq) goto loc_821B8524;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B84B0:
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b84b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B84B0;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f10,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x8218af90
	ctx.lr = 0x821B8524;
	sub_8218AF90(ctx, base);
loc_821B8524:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r5,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// ld r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// std r8,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
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

DEFINE_REX_FUNC(sub_821C3798) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C37A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// lbz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// clrlwi r30,r11,29
	r30.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x821c37dc
	if (ctx.cr6.lt) goto loc_821C37DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// addi r3,r10,-17712
	ctx.r3.s64 = ctx.r10.s64 + -17712;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x821231d0
	ctx.lr = 0x821C37DC;
	sub_821231D0(ctx, base);
loc_821C37DC:
	// addi r11,r30,38
	ctx.r11.s64 = r30.s64 + 38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821c37fc
	if (!ctx.cr6.eq) goto loc_821C37FC;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
loc_821C37FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3810
	ctx.lr = 0x821C3804;
	sub_821C3810(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C7290) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x821C7298;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c7600
	if (ctx.cr6.eq) goto loc_821C7600;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lbz r9,388(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 388);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq 0x821c7390
	if (ctx.cr0.eq) goto loc_821C7390;
	// lwz r27,20(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,392(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// addic. r29,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// ble 0x821c7338
	if (!ctx.cr0.gt) goto loc_821C7338;
loc_821C72F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821c56b8
	ctx.lr = 0x821C7300;
	sub_821C56B8(ctx, base);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
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
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blt cr6,0x821c72f4
	if (ctx.cr6.lt) goto loc_821C72F4;
loc_821C7338:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821c7390
	if (!ctx.cr6.gt) goto loc_821C7390;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821c56b8
	ctx.lr = 0x821C734C;
	sub_821C56B8(ctx, base);
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 + ctx.f13.f64));
	// lfs f0,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
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
	// fsel f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821c7390
	if (ctx.cr6.lt) goto loc_821C7390;
	// stfs f31,392(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// stb r26,388(r31)
	REX_STORE_U8(r31.u32 + 388, r26.u8);
loc_821C7390:
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addic. r29,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	r29.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x821c7404
	if (ctx.cr0.lt) goto loc_821C7404;
loc_821C73A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821c56b8
	ctx.lr = 0x821C73AC;
	sub_821C56B8(ctx, base);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821c73fc
	if (ctx.cr6.gt) goto loc_821C73FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821c56b8
	ctx.lr = 0x821C73C4;
	sub_821C56B8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r30,384(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 384);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x8212fe40
	ctx.lr = 0x821C73DC;
	sub_8212FE40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8212fe40
	ctx.lr = 0x821C73E8;
	sub_8212FE40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8212fe40
	ctx.lr = 0x821C73F4;
	sub_8212FE40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821357c8
	ctx.lr = 0x821C73FC;
	sub_821357C8(ctx, base);
loc_821C73FC:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x821c73a0
	if (!ctx.cr0.lt) goto loc_821C73A0;
loc_821C7404:
	// lwz r29,384(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 384);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821c7444
	if (!ctx.cr6.gt) goto loc_821C7444;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
loc_821C741C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821C7428;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x821e9910
	ctx.lr = 0x821C7434;
	sub_821E9910(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c741c
	if (ctx.cr6.lt) goto loc_821C741C;
loc_821C7444:
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821e9518
	ctx.lr = 0x821C744C;
	sub_821E9518(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r4,384(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 384);
	// bl 0x821e7d40
	ctx.lr = 0x821C7458;
	sub_821E7D40(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r9,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r9.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_821C748C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c748c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C748C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C74A8;
	sub_821884B0(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c74f4
	if (ctx.cr6.eq) goto loc_821C74F4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x823fbf60
	ctx.lr = 0x821C74C8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C74D8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c74d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C74D8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// bl 0x82191578
	ctx.lr = 0x821C74F4;
	sub_82191578(ctx, base);
loc_821C74F4:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r11,-7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c7600
	if (ctx.cr0.eq) goto loc_821C7600;
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r30,384(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 384);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,384(r1)
	REX_STORE_U8(ctx.r1.u32 + 384, r26.u8);
	// addi r3,r1,385
	ctx.r3.s64 = ctx.r1.s64 + 385;
	// bl 0x826a2e60
	ctx.lr = 0x821C7558;
	sub_826A2E60(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821c75fc
	if (!ctx.cr6.gt) goto loc_821C75FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r27,r11,-25252
	r27.s64 = ctx.r11.s64 + -25252;
	// addi r26,r10,-25320
	r26.s64 = ctx.r10.s64 + -25320;
	// addi r29,r9,15412
	r29.s64 = ctx.r9.s64 + 15412;
loc_821C7584:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x821c7598
	if (ctx.cr6.lt) goto loc_821C7598;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c75a8
	if (ctx.cr6.lt) goto loc_821C75A8;
loc_821C7598:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821C75A8;
	sub_821231D0(ctx, base);
loc_821C75A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lfs f2,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x826a0568
	ctx.lr = 0x821C75D8;
	sub_826A0568(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x826a1a08
	ctx.lr = 0x821C75E8;
	sub_826A1A08(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c7584
	if (ctx.cr6.lt) goto loc_821C7584;
loc_821C75FC:
	// bl 0x82130e88
	ctx.lr = 0x821C7600;
	sub_82130E88(ctx, base);
loc_821C7600:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E8D20) {
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
	ctx.lr = 0x821E8D28;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e8d50
	if (ctx.cr6.eq) goto loc_821E8D50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e8d70
	goto loc_821E8D70;
loc_821E8D50:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E8D70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e8d80
	if (!ctx.cr0.eq) goto loc_821E8D80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e8e8c
	goto loc_821E8E8C;
loc_821E8D80:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821e8de4
	if (!ctx.cr6.gt) goto loc_821E8DE4;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_821E8DA0:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_821E8DA8:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// beq 0x821e8dcc
	if (ctx.cr0.eq) goto loc_821E8DCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821e8da8
	if (ctx.cr6.eq) goto loc_821E8DA8;
loc_821E8DCC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821e8de8
	if (ctx.cr0.eq) goto loc_821E8DE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821e8da0
	if (ctx.cr6.lt) goto loc_821E8DA0;
loc_821E8DE4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821E8DE8:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r10,8
	ctx.r10.s64 = 8;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E8E08:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821e8e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8E08;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e8e48
	if (!ctx.cr6.eq) goto loc_821E8E48;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x821e8e40
	if (!ctx.cr0.eq) goto loc_821E8E40;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821E8E40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd9f0
	ctx.lr = 0x821E8E48;
	sub_821DD9F0(ctx, base);
loc_821E8E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e8e7c
	if (ctx.cr0.eq) goto loc_821E8E7C;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E8E70:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821e8e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8E70;
loc_821E8E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821E8E8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821F5DB8) {
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
	ctx.lr = 0x821F5DC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f5dfc
	if (ctx.cr6.eq) goto loc_821F5DFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,505
	ctx.r5.s64 = 505;
	// bl 0x821231d0
	ctx.lr = 0x821F5DFC;
	sub_821231D0(ctx, base);
loc_821F5DFC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F5E0C;
	sub_821F5FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6010
	ctx.lr = 0x821F5E20;
	sub_821F6010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821F8FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821F8FB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f900c
	if (!ctx.cr6.gt) goto loc_821F900C;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
loc_821F8FD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F8FE4;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f8fd8
	if (ctx.cr6.lt) goto loc_821F8FD8;
loc_821F900C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821FB308) {
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
	// beq cr6,0x821fb348
	if (ctx.cr6.eq) goto loc_821FB348;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,252
	ctx.r5.s64 = 252;
	// bl 0x821231d0
	ctx.lr = 0x821FB348;
	sub_821231D0(ctx, base);
loc_821FB348:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fbf98
	ctx.lr = 0x821FB368;
	sub_821FBF98(ctx, base);
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

DEFINE_REX_FUNC(sub_821FDF70) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x821fdfa8
	goto loc_821FDFA8;
loc_821FDF98:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x821fdfb0
	if (ctx.cr6.eq) goto loc_821FDFB0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821FDFA8:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fdf98
	if (!ctx.cr6.eq) goto loc_821FDF98;
loc_821FDFB0:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fdfdc
	if (ctx.cr6.eq) goto loc_821FDFDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821FDFD0;
	sub_8269CC20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821FDFDC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x821fdff8
	goto loc_821FDFF8;
loc_821FDFE8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x821fe000
	if (ctx.cr6.eq) goto loc_821FE000;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821FDFF8:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fdfe8
	if (!ctx.cr6.eq) goto loc_821FDFE8;
loc_821FE000:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fe02c
	if (ctx.cr6.eq) goto loc_821FE02C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821FE020;
	sub_8269CC20(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_821FE02C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// b 0x821fe048
	goto loc_821FE048;
loc_821FE038:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x821fe050
	if (ctx.cr6.eq) goto loc_821FE050;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821FE048:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe038
	if (!ctx.cr6.eq) goto loc_821FE038;
loc_821FE050:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fe07c
	if (ctx.cr6.eq) goto loc_821FE07C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821FE070;
	sub_8269CC20(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_821FE07C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x821fe098
	goto loc_821FE098;
loc_821FE088:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x821fe0a0
	if (ctx.cr6.eq) goto loc_821FE0A0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821FE098:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe088
	if (!ctx.cr6.eq) goto loc_821FE088;
loc_821FE0A0:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fe0cc
	if (ctx.cr6.eq) goto loc_821FE0CC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821FE0C0;
	sub_8269CC20(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_821FE0CC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r9,r31,68
	ctx.r9.s64 = r31.s64 + 68;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// b 0x821fe0ec
	goto loc_821FE0EC;
loc_821FE0DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// beq cr6,0x821fe0f8
	if (ctx.cr6.eq) goto loc_821FE0F8;
loc_821FE0EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821fe0dc
	if (!ctx.cr6.eq) goto loc_821FE0DC;
	// b 0x821fe158
	goto loc_821FE158;
loc_821FE0F8:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821fe130
	if (ctx.cr6.eq) goto loc_821FE130;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
loc_821FE108:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821fe108
	if (!ctx.cr6.eq) goto loc_821FE108;
loc_821FE130:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fe154
	if (ctx.cr6.eq) goto loc_821FE154;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821FE148:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe148
	if (!ctx.cr6.eq) goto loc_821FE148;
loc_821FE154:
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_821FE158:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x821fe178
	goto loc_821FE178;
loc_821FE160:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x821fe174
	if (!ctx.cr6.eq) goto loc_821FE174;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821FE174:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_821FE178:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821fe160
	if (!ctx.cr6.eq) goto loc_821FE160;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x821FE190;
	sub_8212E8B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821788c8
	ctx.lr = 0x821FE198;
	sub_821788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821357c8
	ctx.lr = 0x821FE1A0;
	sub_821357C8(ctx, base);
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

DEFINE_REX_FUNC(sub_8220E1C8) {
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
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x822f6280
	ctx.lr = 0x8220E1E0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220e21c
	if (ctx.cr0.eq) goto loc_8220E21C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220E1F0;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30504
	ctx.r11.s64 = ctx.r11.s64 + -30504;
	// addi r4,r10,-30980
	ctx.r4.s64 = ctx.r10.s64 + -30980;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220E20C;
	sub_82120600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,288(r31)
	REX_STORE_U8(r31.u32 + 288, ctx.r11.u8);
	// b 0x8220e220
	goto loc_8220E220;
loc_8220E21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220E220:
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

DEFINE_REX_FUNC(sub_82212148) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x82212150;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 840);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822122bc
	if (ctx.cr6.eq) goto loc_822122BC;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// bl 0x822e6ff8
	ctx.lr = 0x82212178;
	sub_822E6FF8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822122bc
	if (ctx.cr0.eq) goto loc_822122BC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,824
	ctx.r4.s64 = r31.s64 + 824;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221219C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f9,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f8,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,864(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 864);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,868(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 868);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f31,f11,f10
	f31.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// blt cr6,0x8221222c
	if (ctx.cr6.lt) goto loc_8221222C;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82212230
	goto loc_82212230;
loc_8221222C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82212230:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r30,r31,236
	r30.s64 = r31.s64 + 236;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82174318
	ctx.lr = 0x8221225C;
	sub_82174318(ctx, base);
	// lfs f0,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822122bc
	if (!ctx.cr6.gt) goto loc_822122BC;
	// lfs f0,856(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82212294
	if (ctx.cr6.lt) goto loc_82212294;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82212298
	goto loc_82212298;
loc_82212294:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82212298:
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,80
	ctx.r9.s64 = 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82174318
	ctx.lr = 0x822122BC;
	sub_82174318(ctx, base);
loc_822122BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82225A08) {
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
	// lbz r11,752(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 752);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82225a60
	if (ctx.cr0.eq) goto loc_82225A60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82126320
	ctx.lr = 0x82225A38;
	sub_82126320(ctx, base);
	// addi r4,r31,704
	ctx.r4.s64 = r31.s64 + 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821262a8
	ctx.lr = 0x82225A44;
	sub_821262A8(ctx, base);
	// addi r4,r31,688
	ctx.r4.s64 = r31.s64 + 688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216cfa0
	ctx.lr = 0x82225A50;
	sub_8216CFA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// bl 0x821d5c80
	ctx.lr = 0x82225A60;
	sub_821D5C80(ctx, base);
loc_82225A60:
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

DEFINE_REX_FUNC(sub_822281E0) {
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
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222820C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
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

DEFINE_REX_FUNC(sub_82229510) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13876
	ctx.r3.s64 = ctx.r11.s64 + -13876;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229750) {
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
	ctx.lr = 0x82229768;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222978c
	if (ctx.cr0.eq) goto loc_8222978C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x82229778;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22736
	ctx.r11.s64 = ctx.r11.s64 + -22736;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82229790
	goto loc_82229790;
loc_8222978C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229790:
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

DEFINE_REX_FUNC(sub_8222A480) {
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
	ctx.lr = 0x8222A494;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222a4a4
	if (ctx.cr0.eq) goto loc_8222A4A4;
	// bl 0x8222a280
	ctx.lr = 0x8222A4A0;
	sub_8222A280(ctx, base);
	// b 0x8222a4a8
	goto loc_8222A4A8;
loc_8222A4A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A4A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AEF8) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r10,1008
	ctx.r4.s64 = ctx.r10.s64 + 1008;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222AF2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8222CED0) {
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
	ctx.lr = 0x8222CED8;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x822355d0
	ctx.lr = 0x8222CEF0;
	sub_822355D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,-21312
	ctx.r10.s64 = ctx.r10.s64 + -21312;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r23,884(r31)
	REX_STORE_U32(r31.u32 + 884, r23.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,-19180
	ctx.r11.s64 = ctx.r8.s64 + -19180;
	// addi r9,r9,-21248
	ctx.r9.s64 = ctx.r9.s64 + -21248;
	// addi r8,r7,-21236
	ctx.r8.s64 = ctx.r7.s64 + -21236;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// addi r10,r6,-21232
	ctx.r10.s64 = ctx.r6.s64 + -21232;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r8,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// addi r28,r31,896
	r28.s64 = r31.s64 + 896;
	// stw r10,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8222d488
	ctx.lr = 0x8222CF48;
	sub_8222D488(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r31,1000
	ctx.r10.s64 = r31.s64 + 1000;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222CF58:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8222cf58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CF58;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r23,1056(r31)
	REX_STORE_U8(r31.u32 + 1056, r23.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r23,1057(r31)
	REX_STORE_U8(r31.u32 + 1057, r23.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stb r23,1058(r31)
	REX_STORE_U8(r31.u32 + 1058, r23.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r29,r31,1024
	r29.s64 = r31.s64 + 1024;
	// lfs f12,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r31,1028
	r27.s64 = r31.s64 + 1028;
	// lfs f0,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r31,1032
	r26.s64 = r31.s64 + 1032;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r31,1036
	r25.s64 = r31.s64 + 1036;
	// lfs f11,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r24,r31,1040
	r24.s64 = r31.s64 + 1040;
	// lfs f10,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// addi r22,r31,1044
	r22.s64 = r31.s64 + 1044;
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1024, temp.u32);
	// addi r21,r31,1048
	r21.s64 = r31.s64 + 1048;
	// stfs f13,1028(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 1028, temp.u32);
	// stfs f12,1032(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 1032, temp.u32);
	// stfs f11,1036(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 1036, temp.u32);
	// stfs f10,1040(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 1040, temp.u32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1044, temp.u32);
	// stfs f13,1048(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 1048, temp.u32);
	// bl 0x82273bc8
	ctx.lr = 0x8222CFD0;
	sub_82273BC8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222CFD8;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8222d008
	if (ctx.cr0.eq) goto loc_8222D008;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-21460
	ctx.r4.s64 = ctx.r11.s64 + -21460;
	// bl 0x82120600
	ctx.lr = 0x8222CFF0;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x8222D004;
	sub_82196BA8(ctx, base);
	// b 0x8222d00c
	goto loc_8222D00C;
loc_8222D008:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D00C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D020;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d03c
	if (ctx.cr0.eq) goto loc_8222D03C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8222D03C;
	sub_82120AC0(ctx, base);
loc_8222D03C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D044;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d074
	if (ctx.cr0.eq) goto loc_8222D074;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-21440
	ctx.r4.s64 = ctx.r11.s64 + -21440;
	// bl 0x82120600
	ctx.lr = 0x8222D05C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x8222D070;
	sub_82196BA8(ctx, base);
	// b 0x8222d078
	goto loc_8222D078;
loc_8222D074:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D078:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D088;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d0a4
	if (ctx.cr0.eq) goto loc_8222D0A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8222D0A4;
	sub_82120AC0(ctx, base);
loc_8222D0A4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D0AC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d0dc
	if (ctx.cr0.eq) goto loc_8222D0DC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-21424
	ctx.r4.s64 = ctx.r11.s64 + -21424;
	// bl 0x82120600
	ctx.lr = 0x8222D0C4;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8222D0D8;
	sub_82196BA8(ctx, base);
	// b 0x8222d0e0
	goto loc_8222D0E0;
loc_8222D0DC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D0E0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D0F0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d10c
	if (ctx.cr0.eq) goto loc_8222D10C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8222D10C;
	sub_82120AC0(ctx, base);
loc_8222D10C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D114;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d144
	if (ctx.cr0.eq) goto loc_8222D144;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-21404
	ctx.r4.s64 = ctx.r11.s64 + -21404;
	// bl 0x82120600
	ctx.lr = 0x8222D12C;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x8222D140;
	sub_82196BA8(ctx, base);
	// b 0x8222d148
	goto loc_8222D148;
loc_8222D144:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D148:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D158;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d174
	if (ctx.cr0.eq) goto loc_8222D174;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8222D174;
	sub_82120AC0(ctx, base);
loc_8222D174:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D17C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d1ac
	if (ctx.cr0.eq) goto loc_8222D1AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-21388
	ctx.r4.s64 = ctx.r11.s64 + -21388;
	// bl 0x82120600
	ctx.lr = 0x8222D194;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x8222D1A8;
	sub_82196BA8(ctx, base);
	// b 0x8222d1b0
	goto loc_8222D1B0;
loc_8222D1AC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D1B0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D1C0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d1dc
	if (ctx.cr0.eq) goto loc_8222D1DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8222D1DC;
	sub_82120AC0(ctx, base);
loc_8222D1DC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D1E4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d214
	if (ctx.cr0.eq) goto loc_8222D214;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-21376
	ctx.r4.s64 = ctx.r11.s64 + -21376;
	// bl 0x82120600
	ctx.lr = 0x8222D1FC;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x8222D210;
	sub_82196BA8(ctx, base);
	// b 0x8222d218
	goto loc_8222D218;
loc_8222D214:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D218:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D228;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d244
	if (ctx.cr0.eq) goto loc_8222D244;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x8222D244;
	sub_82120AC0(ctx, base);
loc_8222D244:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8222D24C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d27c
	if (ctx.cr0.eq) goto loc_8222D27C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-21360
	ctx.r4.s64 = ctx.r11.s64 + -21360;
	// bl 0x82120600
	ctx.lr = 0x8222D264;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x8222D278;
	sub_82196BA8(ctx, base);
	// b 0x8222d280
	goto loc_8222D280;
loc_8222D27C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8222D280:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8222D290;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d2a8
	if (ctx.cr0.eq) goto loc_8222D2A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x8222D2A8;
	sub_82120AC0(ctx, base);
loc_8222D2A8:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8222D2B0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8222d330
	if (ctx.cr0.eq) goto loc_8222D330;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r11,r11,-9872
	ctx.r11.s64 = ctx.r11.s64 + -9872;
	// addi r4,r10,-21344
	ctx.r4.s64 = ctx.r10.s64 + -21344;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222D2E4;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222D2F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222d320
	if (ctx.cr0.eq) goto loc_8222D320;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-19528
	ctx.r9.s64 = ctx.r9.s64 + -19528;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8222d324
	goto loc_8222D324;
loc_8222D320:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8222D324:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8222d334
	goto loc_8222D334;
loc_8222D330:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8222D334:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x8222D34C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8222D354;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8222d38c
	if (ctx.cr0.eq) goto loc_8222D38C;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21332
	ctx.r4.s64 = ctx.r11.s64 + -21332;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222D378;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8222d390
	goto loc_8222D390;
loc_8222D38C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8222D390:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x8222D3A8;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822520C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822520C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82252118
	if (!ctx.cr6.gt) goto loc_82252118;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x822520F4;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82252108;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82252110;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82252118:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200688
	ctx.lr = 0x8225212C;
	sub_82200688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82252288
	ctx.lr = 0x82252134;
	sub_82252288(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82254770) {
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
	ctx.lr = 0x82254778;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,104(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225479c
	if (ctx.cr0.eq) goto loc_8225479C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82254a38
	if (!ctx.cr6.eq) goto loc_82254A38;
loc_8225479C:
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
	ctx.lr = 0x822547C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x822547ec
	if (!ctx.cr0.eq) goto loc_822547EC;
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
	ctx.lr = 0x822547EC;
	sub_821231D0(ctx, base);
loc_822547EC:
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
	// beq cr6,0x82254a2c
	if (ctx.cr6.eq) goto loc_82254A2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x82254824;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82254830;
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
	ctx.lr = 0x82254844;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x82254854;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82254860;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82254874;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x82254884;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82254890;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822548A4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x822548B4;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822548C0;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822548D4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x822548E4;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822548F0;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82254904;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x82254914;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82254920;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82254934;
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
	ctx.lr = 0x82254950;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x82254964;
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
	ctx.lr = 0x8225497C;
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
	ctx.lr = 0x82254994;
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
	ctx.lr = 0x822549AC;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288848
	ctx.lr = 0x822549C4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-11260
	ctx.r4.s64 = ctx.r11.s64 + -11260;
	// bl 0x82288848
	ctx.lr = 0x822549D4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-11244
	ctx.r4.s64 = ctx.r11.s64 + -11244;
	// bl 0x82288848
	ctx.lr = 0x822549E4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x822549F4;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82254A00;
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
	ctx.lr = 0x82254A14;
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
	ctx.lr = 0x82254A2C;
	sub_82288798(ctx, base);
loc_82254A2C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x82254A38;
	sub_8226AFB8(ctx, base);
loc_82254A38:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,108(r28)
	REX_STORE_U32(r28.u32 + 108, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82267920) {
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
	ctx.lr = 0x82267928;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82267954;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82267984;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x822679A8;
	sub_82120600(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822679C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822679D4;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822679E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x822679F8;
	sub_82120600(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r26,r31,8
	r26.s64 = r31.s64 + 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82267A34;
	sub_82120AC0(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq 0x82267a40
	if (ctx.cr0.eq) goto loc_82267A40;
	// addi r27,r27,1000
	r27.s64 = r27.s64 + 1000;
loc_82267A40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82267A64;
	sub_82120600(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82267AA0;
	sub_82120AC0(ctx, base);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82267aac
	if (ctx.cr0.eq) goto loc_82267AAC;
	// addi r28,r28,1000
	r28.s64 = r28.s64 + 1000;
loc_82267AAC:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// beq cr6,0x82267acc
	if (ctx.cr6.eq) goto loc_82267ACC;
	// subfc r11,r28,r27
	ctx.xer.ca = r27.u32 >= r28.u32;
	ctx.r11.u64 = r27.u64 - r28.u64;
	// eqv r10,r28,r27
	ctx.r10.u64 = ~(r28.u64 ^ r27.u64);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x82267b48
	goto loc_82267B48;
loc_82267ACC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82267B04:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82267b28
	if (ctx.cr0.eq) goto loc_82267B28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82267b04
	if (ctx.cr6.eq) goto loc_82267B04;
loc_82267B28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82267b38
	if (ctx.cr0.eq) goto loc_82267B38;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// b 0x82267b48
	goto loc_82267B48;
loc_82267B38:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x82267B44;
	sub_82120780(ctx, base);
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_82267B48:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82276988) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82276990;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,244(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,245(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 245);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822769f0
	if (ctx.cr6.eq) goto loc_822769F0;
	// li r4,-32756
	ctx.r4.s64 = -32756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x822769BC;
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
	ctx.lr = 0x822769E8;
	sub_8217FB30(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 244);
	// stb r11,245(r31)
	REX_STORE_U8(r31.u32 + 245, ctx.r11.u8);
loc_822769F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8227AF18) {
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
	ctx.lr = 0x8227AF20;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8212cf70
	ctx.lr = 0x8227AF3C;
	sub_8212CF70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16492
	r30.s64 = ctx.r11.s64 + 16492;
	// addi r28,r10,1624
	r28.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227AF58;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8227AF64;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227AF68;
	sub_8215FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227AF78;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x8227AF84;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227AF88;
	sub_8215FA30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8226e158
	ctx.lr = 0x8227AFA0;
	sub_8226E158(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x8227AFB0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227AFB4;
	sub_8215FA30(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,6288(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227AFD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-7928
	ctx.r4.s64 = ctx.r11.s64 + -7928;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227AFE4;
	sub_8215F338(ctx, base);
	// li r24,-1
	r24.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227b11c
	if (ctx.cr6.eq) goto loc_8227B11C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,-16
	r28.s64 = -16;
	// addi r26,r11,-26856
	r26.s64 = ctx.r11.s64 + -26856;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_8227B008:
	// cmpwi cr6,r28,48
	ctx.cr6.compare<int32_t>(r28.s32, 48, ctx.xer);
	// bge cr6,0x8227b11c
	if (!ctx.cr6.lt) goto loc_8227B11C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227b11c
	if (!ctx.cr6.lt) goto loc_8227B11C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8227b0d8
	if (ctx.cr6.lt) goto loc_8227B0D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ca78
	ctx.lr = 0x8227B030;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82120600
	ctx.lr = 0x8227B048;
	sub_82120600(ctx, base);
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82120b20
	ctx.lr = 0x8227B060;
	sub_82120B20(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// addi r31,r11,252
	r31.s64 = ctx.r11.s64 + 252;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8227b090
	if (!ctx.cr6.eq) goto loc_8227B090;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8227b088
	if (!ctx.cr0.eq) goto loc_8227B088;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8227B088:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822321d0
	ctx.lr = 0x8227B090;
	sub_822321D0(ctx, base);
loc_8227B090:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b0b8
	if (ctx.cr0.eq) goto loc_8227B0B8;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82120d70
	ctx.lr = 0x8227B0B8;
	sub_82120D70(ctx, base);
loc_8227B0B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8227B0D4;
	sub_82120AC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8227B0D8:
	// lwz r3,6288(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227B0EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8227b0fc
	if (!ctx.cr6.eq) goto loc_8227B0FC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
loc_8227B0FC:
	// lwz r3,6288(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6288);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227B114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8227b008
	if (!ctx.cr0.eq) goto loc_8227B008;
loc_8227B11C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d1b8
	ctx.lr = 0x8227B124;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82289310) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82289318;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r31,104(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,3392
	ctx.r11.s64 = ctx.r11.s64 + 3392;
	// addi r10,r10,-10304
	ctx.r10.s64 = ctx.r10.s64 + -10304;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r9,r9,-10296
	ctx.r9.s64 = ctx.r9.s64 + -10296;
	// addi r11,r8,3420
	ctx.r11.s64 = ctx.r8.s64 + 3420;
	// addi r10,r7,-10012
	ctx.r10.s64 = ctx.r7.s64 + -10012;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82289378
	if (ctx.cr6.eq) goto loc_82289378;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208770
	ctx.lr = 0x82289370;
	sub_82208770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82289378;
	sub_8269CE98(ctx, base);
loc_82289378:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r31,r30,132
	r31.s64 = r30.s64 + 132;
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822893c4
	if (ctx.cr0.eq) goto loc_822893C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3060
	ctx.r4.s64 = ctx.r11.s64 + 3060;
	// addi r3,r10,3112
	ctx.r3.s64 = ctx.r10.s64 + 3112;
	// li r5,94
	ctx.r5.s64 = 94;
	// bl 0x821231d0
	ctx.lr = 0x822893C4;
	sub_821231D0(ctx, base);
loc_822893C4:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822893e8
	goto loc_822893E8;
loc_822893CC:
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822893E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_822893E8:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822893cc
	if (!ctx.cr6.eq) goto loc_822893CC;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82289424
	if (ctx.cr6.eq) goto loc_82289424;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8228941C;
	sub_8269CC20(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82289424:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82289434
	if (ctx.cr6.eq) goto loc_82289434;
	// bl 0x8269ce98
	ctx.lr = 0x82289434;
	sub_8269CE98(ctx, base);
loc_82289434:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82289454;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x82120ac0
	ctx.lr = 0x82289464;
	sub_82120AC0(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x8216bb58
	ctx.lr = 0x8228946C;
	sub_8216BB58(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82290900) {
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
	// lwz r10,204(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 204);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,204(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290958;
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

DEFINE_REX_FUNC(sub_822942E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x822942F0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c80
	ctx.lr = 0x822942F8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lfs f10,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f9,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f31,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f23,f4,f10
	f23.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f7,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f20,f31,f9
	f20.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfs f6,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f29,f6,f13
	f29.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f27,f6,f0
	f27.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f25,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f25.f64 = double(temp.f32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// lfs f24,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	f24.f64 = double(temp.f32);
	// fmsubs f12,f9,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f12.f64)));
	// lfs f22,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f22.f64 = double(temp.f32);
	// fmuls f26,f31,f7
	f26.f64 = double(float(f31.f64 * ctx.f7.f64));
	// lfs f21,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f21.f64 = double(temp.f32);
	// fmsubs f9,f6,f9,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f1.f64)));
	// lfs f19,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f19.f64 = double(temp.f32);
	// fmsubs f8,f7,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// lfs f18,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f1,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f0,f4,f0,f20
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, -f20.f64)));
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fmsubs f5,f13,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmsubs f7,f4,f7,f29
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -f29.f64)));
	// lfs f29,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	f29.f64 = double(temp.f32);
	// fmsubs f11,f31,f11,f27
	ctx.f11.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, -f27.f64)));
	// lfs f27,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f27.f64 = double(temp.f32);
	// fmsubs f13,f31,f13,f23
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, -f23.f64)));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmsubs f10,f2,f10,f26
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, -f26.f64)));
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmadds f6,f4,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f6,f5,f31,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f6.f64)));
	// fdivs f6,f30,f6
	ctx.f6.f64 = double(float(f30.f64 / ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f4,f25,f9
	ctx.f4.f64 = double(float(f25.f64 * ctx.f9.f64));
	// fmuls f6,f25,f7
	ctx.f6.f64 = double(float(f25.f64 * ctx.f7.f64));
	// fmuls f2,f24,f7
	ctx.f2.f64 = double(float(f24.f64 * ctx.f7.f64));
	// fmuls f3,f25,f5
	ctx.f3.f64 = double(float(f25.f64 * ctx.f5.f64));
	// fmuls f31,f24,f9
	f31.f64 = double(float(f24.f64 * ctx.f9.f64));
	// fmuls f28,f24,f5
	f28.f64 = double(float(f24.f64 * ctx.f5.f64));
	// fmuls f7,f22,f7
	ctx.f7.f64 = double(float(f22.f64 * ctx.f7.f64));
	// fmuls f9,f22,f9
	ctx.f9.f64 = double(float(f22.f64 * ctx.f9.f64));
	// fmuls f5,f22,f5
	ctx.f5.f64 = double(float(f22.f64 * ctx.f5.f64));
	// fmadds f4,f21,f11,f4
	ctx.f4.f64 = double(float(std::fma(f21.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f6,f21,f10,f6
	ctx.f6.f64 = double(float(std::fma(f21.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f2,f19,f10,f2
	ctx.f2.f64 = double(float(std::fma(f19.f64, ctx.f10.f64, ctx.f2.f64)));
	// fmadds f3,f21,f8,f3
	ctx.f3.f64 = double(float(std::fma(f21.f64, ctx.f8.f64, ctx.f3.f64)));
	// fmadds f31,f19,f11,f31
	f31.f64 = double(float(std::fma(f19.f64, ctx.f11.f64, f31.f64)));
	// fmadds f28,f19,f8,f28
	f28.f64 = double(float(std::fma(f19.f64, ctx.f8.f64, f28.f64)));
	// fmadds f10,f18,f10,f7
	ctx.f10.f64 = double(float(std::fma(f18.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f11,f18,f11,f9
	ctx.f11.f64 = double(float(std::fma(f18.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f7,f1,f0,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f9,f1,f13,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f4,f29,f13,f2
	ctx.f4.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f6,f1,f12,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmadds f3,f29,f0,f31
	ctx.f3.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, f31.f64)));
	// fmadds f2,f29,f12,f28
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, f28.f64)));
	// fmadds f13,f27,f13,f10
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f0,f27,f0,f11
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f0.f64, ctx.f11.f64)));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmadds f11,f18,f8,f5
	ctx.f11.f64 = double(float(std::fma(f18.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f27,f12,f11
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82293f08
	ctx.lr = 0x82294490;
	sub_82293F08(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(f30.f64 / ctx.f10.f64));
	// fmuls f28,f0,f10
	f28.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f29,f13,f10
	f29.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f27,f12,f10
	f27.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82293dd0
	ctx.lr = 0x822944E0;
	sub_82293DD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f10,1096(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1096);
	ctx.f10.f64 = double(temp.f32);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82294558
	if (!ctx.cr6.lt) goto loc_82294558;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
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
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x82294578
	goto loc_82294578;
loc_82294558:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_82294578:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ccc
	ctx.lr = 0x82294584;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822B57D8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x822B57E0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c78
	ctx.lr = 0x822B57E8;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r5,756(r1)
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// addi r29,r4,64
	r29.s64 = ctx.r4.s64 + 64;
	// stw r6,764(r1)
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r29.u64);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// std r31,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, r31.u64);
	// stfs f31,68(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// ld r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U64(r28.u32 + 16);
	// addi r22,r1,336
	r22.s64 = ctx.r1.s64 + 336;
	// ld r27,24(r28)
	r27.u64 = REX_LOAD_U64(r28.u32 + 24);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// ld r23,32(r28)
	r23.u64 = REX_LOAD_U64(r28.u32 + 32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// ld r21,40(r28)
	r21.u64 = REX_LOAD_U64(r28.u32 + 40);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// ld r20,48(r28)
	r20.u64 = REX_LOAD_U64(r28.u32 + 48);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// ld r19,56(r28)
	r19.u64 = REX_LOAD_U64(r28.u32 + 56);
	// addi r30,r1,304
	r30.s64 = ctx.r1.s64 + 304;
	// ld r18,64(r28)
	r18.u64 = REX_LOAD_U64(r28.u32 + 64);
	// addi r26,r1,320
	r26.s64 = ctx.r1.s64 + 320;
	// ld r17,80(r28)
	r17.u64 = REX_LOAD_U64(r28.u32 + 80);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r16,88(r28)
	r16.u64 = REX_LOAD_U64(r28.u32 + 88);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r15,96(r28)
	r15.u64 = REX_LOAD_U64(r28.u32 + 96);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// ld r14,104(r28)
	r14.u64 = REX_LOAD_U64(r28.u32 + 104);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r31,120(r28)
	r31.u64 = REX_LOAD_U64(r28.u32 + 120);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r29,72(r28)
	r29.u64 = REX_LOAD_U64(r28.u32 + 72);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r25,112(r28)
	r25.u64 = REX_LOAD_U64(r28.u32 + 112);
	// fmr f23,f31
	f23.f64 = f31.f64;
	// std r25,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r25.u64);
	// li r24,1
	r24.s64 = 1;
	// ld r28,0(r28)
	r28.u64 = REX_LOAD_U64(r28.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// std r28,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r28.u64);
	// std r4,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// std r3,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// std r27,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r27.u64);
	// std r23,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r23.u64);
	// std r21,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r21.u64);
	// std r20,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r20.u64);
	// std r19,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r19.u64);
	// lfs f10,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// std r9,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r9.u64);
	// lfs f8,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// std r31,8(r22)
	REX_STORE_U64(r22.u32 + 8, r31.u64);
	// lfs f12,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// std r29,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r29.u64);
	// rotlwi r22,r11,0
	r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// std r18,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r18.u64);
	// std r17,0(r30)
	REX_STORE_U64(r30.u32 + 0, r17.u64);
	// std r16,8(r30)
	REX_STORE_U64(r30.u32 + 8, r16.u64);
	// std r15,0(r26)
	REX_STORE_U64(r26.u32 + 0, r15.u64);
	// std r14,8(r26)
	REX_STORE_U64(r26.u32 + 8, r14.u64);
	// lfs f11,340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lfs f13,336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f21,f7,f0
	f21.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f20,f6,f0
	f20.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f19,f5,f0
	f19.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f0,f12,f21
	ctx.f0.f64 = double(float(ctx.f12.f64 - f21.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsubs f0,f13,f21
	ctx.f0.f64 = double(float(ctx.f13.f64 - f21.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fsubs f0,f10,f20
	ctx.f0.f64 = double(float(ctx.f10.f64 - f20.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f0,f8,f19
	ctx.f0.f64 = double(float(ctx.f8.f64 - f19.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f0,f11,f20
	ctx.f0.f64 = double(float(ctx.f11.f64 - f20.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fsubs f0,f9,f19
	ctx.f0.f64 = double(float(ctx.f9.f64 - f19.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// ld r31,192(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// ld r29,128(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// ld r28,112(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822b5978
	if (ctx.cr6.eq) goto loc_822B5978;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne cr6,0x822b597c
	if (!ctx.cr6.eq) goto loc_822B597C;
loc_822B5978:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822B597C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b59b0
	if (ctx.cr0.eq) goto loc_822B59B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822b59a0
	if (ctx.cr6.eq) goto loc_822B59A0;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne cr6,0x822b59a4
	if (!ctx.cr6.eq) goto loc_822B59A4;
loc_822B59A0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822B59A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne 0x822b59b4
	if (!ctx.cr0.eq) goto loc_822B59B4;
loc_822B59B0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_822B59B4:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lbz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 64);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	f27.f64 = double(temp.f32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// beq 0x822b59e4
	if (ctx.cr0.eq) goto loc_822B59E4;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fmr f27,f31
	f27.f64 = f31.f64;
loc_822B59E4:
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f0,308(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// clrlwi r26,r9,24
	r26.u64 = ctx.r9.u32 & 0xFF;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r25,76(r31)
	REX_STORE_U32(r31.u32 + 76, r25.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f24,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	f24.f64 = double(temp.f32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmr f25,f0
	f25.f64 = ctx.f0.f64;
	// stfs f24,20(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f22,f27,f13
	f22.f64 = double(float(f27.f64 + ctx.f13.f64));
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r21,r25
	r21.u64 = r25.u64;
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r25,80(r31)
	REX_STORE_U32(r31.u32 + 80, r25.u32);
	// stw r7,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r7.u32);
	// lfs f30,1212(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 1212);
	f30.f64 = double(temp.f32);
	// lfs f29,920(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 920);
	f29.f64 = double(temp.f32);
	// mr r27,r25
	r27.u64 = r25.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stb r25,324(r11)
	REX_STORE_U8(ctx.r11.u32 + 324, r25.u8);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// addi r10,r11,336
	ctx.r10.s64 = ctx.r11.s64 + 336;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r10.u64);
	// stb r24,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, r24.u8);
	// std r9,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r9.u64);
	// stfs f31,356(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stfs f31,360(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stb r25,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, r25.u8);
	// stfs f31,364(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// stfs f31,368(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// lhz r10,352(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 352);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// sth r10,352(r11)
	REX_STORE_U16(ctx.r11.u32 + 352, ctx.r10.u16);
loc_822B5A94:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f6,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f4,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f7,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,16(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f8,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lfs f28,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f26,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	f26.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f18,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	f18.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f1,24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f3,32(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f2,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f0,f28,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f6.f64)));
	// lfs f17,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f17.f64 = double(temp.f32);
	// fmadds f5,f11,f26,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f5.f64)));
	// lfs f28,40(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 40);
	f28.f64 = double(temp.f32);
	// fmadds f11,f11,f18,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f18.f64, ctx.f4.f64)));
	// lfs f4,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f16,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f16.f64 = double(temp.f32);
	// lfs f6,36(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// fmadds f13,f13,f1,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f7.f64)));
	// lfs f7,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmadds f9,f10,f3,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f9.f64)));
	// lfs f3,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f8,f12,f2,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, ctx.f8.f64)));
	// fmadds f0,f4,f17,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f17.f64, ctx.f0.f64)));
	// stfs f0,352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f0,f7,f17,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f17.f64, ctx.f5.f64)));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmadds f0,f17,f3,f11
	ctx.f0.f64 = double(float(std::fma(f17.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmadds f0,f28,f10,f13
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f10.f64, ctx.f13.f64)));
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fmadds f0,f16,f12,f9
	ctx.f0.f64 = double(float(std::fma(f16.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f0,384(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmadds f0,f10,f6,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f8.f64)));
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// bl 0x822a3cc8
	ctx.lr = 0x822B5B74;
	sub_822A3CC8(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x822a3cc8
	ctx.lr = 0x822B5B84;
	sub_822A3CC8(ctx, base);
	// lfs f0,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfs f9,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f4,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f5,f11,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f9,f4,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f9.f64)));
	// lfs f8,308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f10,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f10,f11,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f0,312(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f13,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f8.f64)));
	// lfs f10,328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f4,f12,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f13,f13,f10,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// lfs f0,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f7,f0,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f5.f64)));
	// lfs f5,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f9,f6,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f9.f64)));
	// lfs f10,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f5,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f8,f4,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f8.f64)));
	// lfs f5,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f6,f10,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f12.f64)));
	// lfs f12,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f3,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f10,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f2,344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f9,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// beq cr6,0x822b5c8c
	if (ctx.cr6.eq) goto loc_822B5C8C;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_822B5C8C:
	// fsubs f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r23,2
	r23.s64 = 2;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r19,3
	r19.s64 = 3;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r20,6
	r20.s64 = 6;
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f10,f0,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f11,f13,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// ble cr6,0x822b5ce4
	if (!ctx.cr6.gt) goto loc_822B5CE4;
	// lfs f10,128(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f10,f10,f25
	ctx.f10.f64 = double(float(ctx.f10.f64 * f25.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgt cr6,0x822b6014
	if (ctx.cr6.gt) goto loc_822B6014;
loc_822B5CE4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822b5d3c
	if (!ctx.cr6.gt) goto loc_822B5D3C;
	// lfs f10,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822B5D04:
	// lfs f9,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f7,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f9.f64)));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgt cr6,0x822b5d34
	if (ctx.cr6.gt) goto loc_822B5D34;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_822B5D34:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x822b5d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B5D04;
loc_822B5D3C:
	// lfs f10,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// bne cr6,0x822b5d70
	if (!ctx.cr6.eq) goto loc_822B5D70;
	// lfs f10,312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x822b5d70
	if (!ctx.cr6.eq) goto loc_822B5D70;
	// lfs f0,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x822b5d70
	if (!ctx.cr6.eq) goto loc_822B5D70;
	// lfs f0,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822b5d74
	if (ctx.cr6.eq) goto loc_822B5D74;
loc_822B5D70:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_822B5D74:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bne 0x822b5d84
	if (!ctx.cr0.eq) goto loc_822B5D84;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822B5D84:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b6024
	if (!ctx.cr0.eq) goto loc_822B6024;
	// fsubs f0,f25,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 - ctx.f11.f64));
	// fmuls f13,f25,f30
	ctx.f13.f64 = double(float(f25.f64 * f30.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b6030
	if (!ctx.cr6.gt) goto loc_822B6030;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stb r24,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, r24.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r3.u64);
	// std r8,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r8.u64);
	// stdx r6,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r6,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u64);
	// std r5,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r18,36(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822b6f48
	ctx.lr = 0x822B5E38;
	sub_822B6F48(ctx, base);
	// ld r11,288(r18)
	ctx.r11.u64 = REX_LOAD_U64(r18.u32 + 288);
	// ld r10,296(r18)
	ctx.r10.u64 = REX_LOAD_U64(r18.u32 + 296);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// beq 0x822b6050
	if (ctx.cr0.eq) goto loc_822B6050;
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x822b605c
	if (ctx.cr6.lt) goto loc_822B605C;
	// fmr f13,f25
	ctx.f13.f64 = f25.f64;
	// fmr f25,f0
	f25.f64 = ctx.f0.f64;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b6064
	if (!ctx.cr6.gt) goto loc_822B6064;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// bgt cr6,0x822b5ee0
	if (ctx.cr6.gt) goto loc_822B5EE0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822b5a94
	if (!ctx.cr6.eq) goto loc_822B5A94;
	// ld r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 288);
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r11,288
	ctx.r8.s64 = ctx.r11.s64 + 288;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 296);
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_822B5EDC:
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_822B5EE0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f26,1096(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 1096);
	f26.f64 = double(temp.f32);
	// li r27,5
	r27.s64 = 5;
	// beq 0x822b6090
	if (ctx.cr0.eq) goto loc_822B6090;
	// lwz r29,36(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b6f48
	ctx.lr = 0x822B5EFC;
	sub_822B6F48(ctx, base);
	// ld r7,280(r29)
	ctx.r7.u64 = REX_LOAD_U64(r29.u32 + 280);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r6,272(r29)
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + 272);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,264(r29)
	ctx.r5.u64 = REX_LOAD_U64(r29.u32 + 264);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ld r4,256(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 256);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfd f13,1216(r22)
	ctx.f13.u64 = REX_LOAD_U64(r22.u32 + 1216);
	// std r6,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// lfs f28,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f28.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// std r5,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r4,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f29,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f28
	ctx.f11.f64 = double(float(ctx.f10.f64 - f28.f64));
	// lfs f10,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f13,f10,f29
	ctx.f13.f64 = double(float(ctx.f10.f64 - f29.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// bge cr6,0x822b5f98
	if (!ctx.cr6.lt) goto loc_822B5F98;
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
loc_822B5F98:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x822b6088
	if (!ctx.cr6.gt) goto loc_822B6088;
	// fsqrts f12,f25
	ctx.f12.f64 = double(float(sqrt(f25.f64)));
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r21,r24
	r21.u64 = r24.u64;
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stw r24,72(r31)
	REX_STORE_U32(r31.u32 + 72, r24.u32);
	// lfs f8,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 / ctx.f12.f64));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fdivs f9,f24,f0
	ctx.f9.f64 = double(float(f24.f64 / ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f30,f11,f30
	f30.f64 = double(float(ctx.f11.f64 + f30.f64));
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f29,f10,f29
	f29.f64 = double(float(ctx.f10.f64 + f29.f64));
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f28,f12,f28
	f28.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f23,f9,f22
	f23.f64 = double(float(ctx.f9.f64 - f22.f64));
	// b 0x822b609c
	goto loc_822B609C;
loc_822B6014:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x822b5ee0
	goto loc_822B5EE0;
loc_822B6024:
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x822b5ee0
	goto loc_822B5EE0;
loc_822B6030:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x822b6040
	if (ctx.cr6.gt) goto loc_822B6040;
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// b 0x822b6048
	goto loc_822B6048;
loc_822B6040:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_822B6048:
	// mr r27,r24
	r27.u64 = r24.u64;
	// b 0x822b5ee0
	goto loc_822B5EE0;
loc_822B6050:
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x822b5ee0
	goto loc_822B5EE0;
loc_822B605C:
	// stw r20,80(r31)
	REX_STORE_U32(r31.u32 + 80, r20.u32);
	// b 0x822b6048
	goto loc_822B6048;
loc_822B6064:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r9,r11,288
	ctx.r9.s64 = ctx.r11.s64 + 288;
	// ld r9,288(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 288);
	// std r9,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r9.u64);
	// ld r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 296);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x822b5edc
	goto loc_822B5EDC;
loc_822B6088:
	// stw r23,72(r31)
	REX_STORE_U32(r31.u32 + 72, r23.u32);
	// b 0x822b609c
	goto loc_822B609C;
loc_822B6090:
	// lfs f28,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f28.f64 = double(temp.f32);
	// lfs f29,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
loc_822B609C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b60d4
	if (ctx.cr6.eq) goto loc_822B60D4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b60d4
	if (ctx.cr6.eq) goto loc_822B60D4;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b60d4
	if (ctx.cr6.eq) goto loc_822B60D4;
	// fadds f13,f22,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f22.f64 + f23.f64));
	// lfd f0,1224(r22)
	ctx.f0.u64 = REX_LOAD_U64(r22.u32 + 1224);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b60d8
	if (ctx.cr6.lt) goto loc_822B60D8;
loc_822B60D4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_822B60D8:
	// clrlwi. r29,r21,24
	r29.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822b60e8
	if (ctx.cr0.eq) goto loc_822B60E8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b63a0
	if (ctx.cr0.eq) goto loc_822B63A0;
loc_822B60E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b63a0
	if (ctx.cr6.eq) goto loc_822B63A0;
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lwz r8,764(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, ctx.r11.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,132(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 132);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B615C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b6298
	if (ctx.cr0.eq) goto loc_822B6298;
	// lfs f10,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f6,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f26
	ctx.cr6.compare(ctx.f11.f64, f26.f64);
	// bgt cr6,0x822b61e4
	if (ctx.cr6.gt) goto loc_822B61E4;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 8);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f11,f11,f11,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
loc_822B61E4:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f26.f64);
	// ble cr6,0x822b628c
	if (!ctx.cr6.gt) goto loc_822B628C;
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fdivs f11,f24,f11
	ctx.f11.f64 = double(float(f24.f64 / ctx.f11.f64));
	// fsubs f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f10,f9,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f8,f8,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f10.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// beq cr6,0x822b6244
	if (ctx.cr6.eq) goto loc_822B6244;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// blt cr6,0x822b6244
	if (ctx.cr6.lt) goto loc_822B6244;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x822b6290
	goto loc_822B6290;
loc_822B6244:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// fmr f23,f0
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f0.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r19,72(r31)
	REX_STORE_U32(r31.u32 + 72, r19.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f28,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f28.f64 = double(temp.f32);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f29,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// b 0x822b639c
	goto loc_822B639C;
loc_822B628C:
	// li r11,9
	ctx.r11.s64 = 9;
loc_822B6290:
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// b 0x822b63a0
	goto loc_822B63A0;
loc_822B6298:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822b63a0
	if (!ctx.cr6.gt) goto loc_822B63A0;
	// lfs f13,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f0,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 - f22.f64));
	// beq cr6,0x822b6308
	if (ctx.cr6.eq) goto loc_822B6308;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// blt cr6,0x822b6308
	if (ctx.cr6.lt) goto loc_822B6308;
	// stw r27,72(r31)
	REX_STORE_U32(r31.u32 + 72, r27.u32);
	// b 0x822b63a0
	goto loc_822B63A0;
loc_822B6308:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmr f23,f0
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f0.f64;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f27
	ctx.f10.f64 = double(float(ctx.f0.f64 * f27.f64));
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * f27.f64));
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// stw r20,72(r31)
	REX_STORE_U32(r31.u32 + 72, r20.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fadds f30,f12,f13
	f30.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f7,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f11,f7
	f28.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmadds f11,f13,f13,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfs f12,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fadds f29,f10,f8
	f29.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f24,f11
	ctx.f11.f64 = double(float(f24.f64 / ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_822B639C:
	// mr r21,r24
	r21.u64 = r24.u64;
loc_822B63A0:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b6414
	if (ctx.cr0.eq) goto loc_822B6414;
	// fcmpu cr6,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f23.f64, f31.f64);
	// blt cr6,0x822b63c0
	if (ctx.cr6.lt) goto loc_822B63C0;
	// fmuls f0,f23,f23
	ctx.f0.f64 = double(float(f23.f64 * f23.f64));
	// lfs f13,128(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b6414
	if (!ctx.cr6.lt) goto loc_822B6414;
loc_822B63C0:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fadds f0,f30,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f21.f64));
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f13,f29,f20
	ctx.f13.f64 = double(float(f29.f64 + f20.f64));
	// fadds f0,f28,f19
	ctx.f0.f64 = double(float(f28.f64 + f19.f64));
	// stfs f23,68(r31)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f13,372(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// lwz r3,756(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B6414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B6414:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cc4
	ctx.lr = 0x822B6420;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82314220) {
	REX_FUNC_PROLOGUE();
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82314460) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314494
	if (ctx.cr6.eq) goto loc_82314494;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231448C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314498
	if (!ctx.cr0.eq) goto loc_82314498;
loc_82314494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82315A28) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82315a50
	if (!ctx.cr6.eq) goto loc_82315A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82315a60
	goto loc_82315A60;
loc_82315A50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f3d8
	ctx.lr = 0x82315A58;
	sub_8233F3D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82315A60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82315a7c
	if (ctx.cr0.eq) goto loc_82315A7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8233ea78
	ctx.lr = 0x82315A74;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315a80
	if (!ctx.cr0.eq) goto loc_82315A80;
loc_82315A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315A80:
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

DEFINE_REX_FUNC(sub_823178F8) {
	REX_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,26740
	ctx.r3.u64 = ctx.r3.u64 | 26740;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823181F0) {
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
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82318230
	if (ctx.cr6.eq) goto loc_82318230;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
loc_82318214:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82318244
	if (ctx.cr6.eq) goto loc_82318244;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82318214
	if (ctx.cr6.lt) goto loc_82318214;
loc_82318230:
	// li r3,33
	ctx.r3.s64 = 33;
loc_82318234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82318244:
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317638
	ctx.lr = 0x82318258;
	sub_82317638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82318234
	goto loc_82318234;
}

DEFINE_REX_FUNC(sub_8231B058) {
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
	ctx.lr = 0x8231B060;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// bl 0x82340ff0
	ctx.lr = 0x8231B080;
	sub_82340FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82340ff0
	ctx.lr = 0x8231B0A8;
	sub_82340FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8231b240
	if (!ctx.cr6.lt) goto loc_8231B240;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,0
	r24.s64 = 0;
	// lis r20,-32126
	r20.s64 = -2105409536;
	// lis r25,-32129
	r25.s64 = -2105606144;
	// addi r21,r10,4376
	r21.s64 = ctx.r10.s64 + 4376;
	// addi r26,r11,6576
	r26.s64 = ctx.r11.s64 + 6576;
loc_8231B0DC:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82317938
	ctx.lr = 0x8231B0EC;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// lis r11,27764
	ctx.r11.s64 = 1819541504;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28261
	ctx.r11.u64 = ctx.r11.u64 | 28261;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231b200
	if (!ctx.cr6.eq) goto loc_8231B200;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82317da8
	ctx.lr = 0x8231B120;
	sub_82317DA8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1012
	ctx.r6.s64 = 1012;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r27,r23,12
	r27.s64 = r23.s64 + 12;
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,12(r23)
	REX_STORE_U64(r23.u32 + 12, ctx.r11.u64);
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231B15C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231b17c
	if (ctx.cr0.eq) goto loc_8231B17C;
	// stw r21,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r24.u32);
	// stw r24,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r24.u32);
	// b 0x8231b180
	goto loc_8231B180;
loc_8231B17C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8231B180:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8231b24c
	if (ctx.cr6.eq) goto loc_8231B24C;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r6,r11,20880
	ctx.r6.s64 = ctx.r11.s64 + 20880;
	// addi r5,r10,-29592
	ctx.r5.s64 = ctx.r10.s64 + -29592;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82314f40
	ctx.lr = 0x8231B1A4;
	sub_82314F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8231b1e4
	if (ctx.cr6.eq) goto loc_8231B1E4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8231B1BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// bl 0x82315050
	ctx.lr = 0x8231B1CC;
	sub_82315050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8231b1bc
	if (ctx.cr6.lt) goto loc_8231B1BC;
loc_8231B1E4:
	// lwz r11,-10820(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231b21c
	if (ctx.cr0.eq) goto loc_8231B21C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82316468
	ctx.lr = 0x8231B1FC;
	sub_82316468(ctx, base);
	// b 0x8231b21c
	goto loc_8231B21C;
loc_8231B200:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82340e38
	ctx.lr = 0x8231B214;
	sub_82340E38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
loc_8231B21C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340ff0
	ctx.lr = 0x8231B228;
	sub_82340FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b244
	if (!ctx.cr0.eq) goto loc_8231B244;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231b0dc
	if (ctx.cr6.lt) goto loc_8231B0DC;
loc_8231B240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231B244:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
loc_8231B24C:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231b244
	goto loc_8231B244;
}

DEFINE_REX_FUNC(sub_8232C350) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8232C358;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8232be90
	ctx.lr = 0x8232C364;
	sub_8232BE90(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r30,r29,52
	r30.s64 = r29.s64 + 52;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8232c3bc
	if (ctx.cr6.eq) goto loc_8232C3BC;
loc_8232C378:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
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
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// bl 0x823132b8
	ctx.lr = 0x8232C3B0;
	sub_823132B8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232c378
	if (!ctx.cr6.eq) goto loc_8232C378;
loc_8232C3BC:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// addi r30,r29,64
	r30.s64 = r29.s64 + 64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8232c40c
	if (ctx.cr6.eq) goto loc_8232C40C;
loc_8232C3CC:
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
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// bl 0x8232cb50
	ctx.lr = 0x8232C400;
	sub_8232CB50(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232c3cc
	if (!ctx.cr6.eq) goto loc_8232C3CC;
loc_8232C40C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c424
	if (ctx.cr6.eq) goto loc_8232C424;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8232c428
	goto loc_8232C428;
loc_8232C424:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8232C428:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r10,8240
	r31.s64 = ctx.r10.s64 + 8240;
	// bne cr6,0x8232c48c
	if (!ctx.cr6.eq) goto loc_8232C48C;
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232c464
	if (ctx.cr6.eq) goto loc_8232C464;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,108
	ctx.r6.s64 = 108;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C460;
	sub_82330D00(ctx, base);
	// stw r28,76(r29)
	REX_STORE_U32(r29.u32 + 76, r28.u32);
loc_8232C464:
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232c48c
	if (ctx.cr6.eq) goto loc_8232C48C;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,113
	ctx.r6.s64 = 113;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C488;
	sub_82330D00(ctx, base);
	// stw r28,80(r29)
	REX_STORE_U32(r29.u32 + 80, r28.u32);
loc_8232C48C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c4a0
	if (ctx.cr6.eq) goto loc_8232C4A0;
	// lwz r28,32(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8232C4A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8232c4c4
	if (!ctx.cr6.eq) goto loc_8232C4C4;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,123
	ctx.r6.s64 = 123;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C4C4;
	sub_82330D00(ctx, base);
loc_8232C4C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82338DF8) {
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
	ctx.lr = 0x82338E00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,15880(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 15880);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82338e40
	if (!ctx.cr6.eq) goto loc_82338E40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823382c0
	ctx.lr = 0x82338E34;
	sub_823382C0(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82338E40:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8872
	ctx.r5.s64 = ctx.r10.s64 + 8872;
	// li r6,9544
	ctx.r6.s64 = 9544;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82338E64;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338ed0
	if (ctx.cr6.eq) goto loc_82338ED0;
	// bl 0x82357fc0
	ctx.lr = 0x82338E70;
	sub_82357FC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338ed0
	if (ctx.cr6.eq) goto loc_82338ED0;
	// lwz r3,15880(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 15880);
	// bl 0x8233e7e0
	ctx.lr = 0x82338E84;
	sub_8233E7E0(ctx, base);
	// lwz r10,21936(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21936);
	// addi r11,r30,21936
	ctx.r11.s64 = r30.s64 + 21936;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r31.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r3,15880(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 15880);
	// bl 0x8233e820
	ctx.lr = 0x82338EB0;
	sub_8233E820(ctx, base);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82338ee4
	if (ctx.cr6.eq) goto loc_82338EE4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823317f0
	ctx.lr = 0x82338EC4;
	sub_823317F0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338ee8
	if (!ctx.cr6.eq) goto loc_82338EE8;
loc_82338ED0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823382c0
	ctx.lr = 0x82338ED8;
	sub_823382C0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82338EE4:
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
loc_82338EE8:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x823382c0
	ctx.lr = 0x82338EF8;
	sub_823382C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82341D70) {
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
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x823536d0
	ctx.lr = 0x82341DA0;
	sub_823536D0(ctx, base);
	// addi r11,r31,312
	ctx.r11.s64 = r31.s64 + 312;
	// addi r10,r31,332
	ctx.r10.s64 = r31.s64 + 332;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r10,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r10.u32);
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// stb r30,308(r31)
	REX_STORE_U8(r31.u32 + 308, r30.u8);
	// stb r30,329(r31)
	REX_STORE_U8(r31.u32 + 329, r30.u8);
	// stb r30,330(r31)
	REX_STORE_U8(r31.u32 + 330, r30.u8);
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

DEFINE_REX_FUNC(sub_82349280) {
	REX_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349294
	if (!ctx.cr6.eq) goto loc_82349294;
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
loc_82349294:
	// stw r3,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r3.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823496D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823496e8
	if (!ctx.cr6.eq) goto loc_823496E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823496E8:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234A328) {
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
	ctx.lr = 0x8234A330;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r24,4348(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4348);
	// li r27,0
	r27.s64 = 0;
	// lwz r26,4356(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234a374
	if (!ctx.cr6.eq) goto loc_8234A374;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8234A374:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8234a38c
	if (!ctx.cr6.eq) goto loc_8234A38C;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234a3e0
	if (!ctx.cr6.eq) goto loc_8234A3E0;
loc_8234A38C:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8234a3e0
	if (ctx.cr6.eq) goto loc_8234A3E0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a3f0
	if (ctx.cr6.eq) goto loc_8234A3F0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a1c0
	ctx.lr = 0x8234A3B4;
	sub_8234A1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a3ec
	if (!ctx.cr6.eq) goto loc_8234A3EC;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,22004(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a3e0
	if (ctx.cr6.eq) goto loc_8234A3E0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x8234A3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234A3E0:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8234A3EC:
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
loc_8234A3F0:
	// clrlwi r23,r29,24
	r23.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8234a418
	if (ctx.cr6.eq) goto loc_8234A418;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8234A404;
	sub_8233E7E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r25,1
	r25.s64 = 1;
	// bl 0x8233e7e0
	ctx.lr = 0x8234A410;
	sub_8233E7E0(ctx, base);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r27,1
	r27.s64 = 1;
loc_8234A418:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8234a47c
	if (!ctx.cr6.eq) goto loc_8234A47C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r11,1740
	ctx.r3.s64 = ctx.r11.s64 + 1740;
	// bl 0x8235d5e0
	ctx.lr = 0x8234A434;
	sub_8235D5E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234a474
	if (ctx.cr6.eq) goto loc_8234A474;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a454
	if (ctx.cr6.eq) goto loc_8234A454;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A454;
	sub_8233E820(ctx, base);
loc_8234A454:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a468
	if (ctx.cr6.eq) goto loc_8234A468;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A468;
	sub_8233E820(ctx, base);
loc_8234A468:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8234A474:
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r28,1
	r28.s64 = 1;
loc_8234A47C:
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// addi r9,r30,56
	ctx.r9.s64 = r30.s64 + 56;
	// clrlwi r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	// stw r8,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r5,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r4,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r11,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r11.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r9.u32);
	// stw r30,136(r10)
	REX_STORE_U32(ctx.r10.u32 + 136, r30.u32);
	// lwz r8,220(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r31,140(r8)
	REX_STORE_U32(ctx.r8.u32 + 140, r31.u32);
	// beq cr6,0x8234a4fc
	if (ctx.cr6.eq) goto loc_8234A4FC;
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x823a4908
	ctx.lr = 0x8234A4FC;
	sub_823A4908(ctx, base);
loc_8234A4FC:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8234a518
	if (ctx.cr6.lt) goto loc_8234A518;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82348aa0
	ctx.lr = 0x8234A518;
	sub_82348AA0(ctx, base);
loc_8234A518:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a548
	if (!ctx.cr6.eq) goto loc_8234A548;
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,307
	ctx.r9.s64 = ctx.r11.s64 + 307;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// rlwinm r6,r7,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r6,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r6.u32);
loc_8234A548:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8234a5f8
	if (!ctx.cr6.gt) goto loc_8234A5F8;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a5ec
	if (!ctx.cr6.eq) goto loc_8234A5EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// lwz r9,1196(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8234a578
	if (!ctx.cr6.lt) goto loc_8234A578;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8234A578:
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lwz r8,1212(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1212);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r11,1012(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r5,r7,9628
	ctx.r5.s64 = ctx.r7.s64 + 9628;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2581
	ctx.r6.s64 = 2581;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x8234A5A8;
	sub_82330E40(ctx, base);
	// stw r3,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234a5ec
	if (!ctx.cr6.eq) goto loc_8234A5EC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a5cc
	if (ctx.cr6.eq) goto loc_8234A5CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A5CC;
	sub_8233E820(ctx, base);
loc_8234A5CC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a5e0
	if (ctx.cr6.eq) goto loc_8234A5E0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A5E0;
	sub_8233E820(ctx, base);
loc_8234A5E0:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8234A5EC:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,272(r30)
	REX_STORE_U32(r30.u32 + 272, ctx.r10.u32);
loc_8234A5F8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8234a618
	if (ctx.cr6.eq) goto loc_8234A618;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A608;
	sub_8233E820(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x8233e820
	ctx.lr = 0x8234A614;
	sub_8233E820(ctx, base);
	// li r27,0
	r27.s64 = 0;
loc_8234A618:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8234a628
	if (ctx.cr6.eq) goto loc_8234A628;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_8234A628:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a63c
	if (ctx.cr6.eq) goto loc_8234A63C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A63C;
	sub_8233E820(ctx, base);
loc_8234A63C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a650
	if (ctx.cr6.eq) goto loc_8234A650;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8234A650;
	sub_8233E820(ctx, base);
loc_8234A650:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8235D5E0) {
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
	ctx.lr = 0x8235D5E8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r19,4356(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bne cr6,0x8235d618
	if (!ctx.cr6.eq) goto loc_8235D618;
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_8235D618:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x8235d62c
	if (!ctx.cr6.eq) goto loc_8235D62C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_8235D62C:
	// clrlwi r20,r5,24
	r20.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8235d644
	if (ctx.cr6.eq) goto loc_8235D644;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8235D640;
	sub_8233E7E0(ctx, base);
	// li r21,1
	r21.s64 = 1;
loc_8235D644:
	// lwz r11,1572(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1572);
	// addi r23,r30,1572
	r23.s64 = r30.s64 + 1572;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8235d664
	if (!ctx.cr6.eq) goto loc_8235D664;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8235d668
	if (ctx.cr6.eq) goto loc_8235D668;
loc_8235D664:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8235D668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d8a0
	if (ctx.cr6.eq) goto loc_8235D8A0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r11,r30,524
	ctx.r11.s64 = r30.s64 + 524;
loc_8235D680:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d6a0
	if (ctx.cr6.eq) goto loc_8235D6A0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// blt cr6,0x8235d680
	if (ctx.cr6.lt) goto loc_8235D680;
	// b 0x8235d6a8
	goto loc_8235D6A8;
loc_8235D6A0:
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// blt cr6,0x8235d6c8
	if (ctx.cr6.lt) goto loc_8235D6C8;
loc_8235D6A8:
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d6bc
	if (ctx.cr6.eq) goto loc_8235D6BC;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235D6BC;
	sub_8233E820(ctx, base);
loc_8235D6BC:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_8235D6C8:
	// lis r28,-32129
	r28.s64 = -2105606144;
	// lwz r10,1556(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mulli r10,r10,156
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(156));
	// addi r29,r11,10660
	r29.s64 = ctx.r11.s64 + 10660;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8235D6F8;
	sub_82330E40(ctx, base);
	// addi r9,r31,131
	ctx.r9.s64 = r31.s64 + 131;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r3.u32);
	// bne cr6,0x8235d72c
	if (!ctx.cr6.eq) goto loc_8235D72C;
loc_8235D70C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d720
	if (ctx.cr6.eq) goto loc_8235D720;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235D720;
	sub_8233E820(ctx, base);
loc_8235D720:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_8235D72C:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// rlwinm r24,r11,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,218
	ctx.r6.s64 = 218;
	// stwx r9,r24,r30
	REX_STORE_U32(r24.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,1012(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x8235D768;
	sub_82330E40(ctx, base);
	// addi r7,r31,259
	ctx.r7.s64 = r31.s64 + 259;
	// rlwinm r26,r7,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r26,r30
	REX_STORE_U32(r26.u32 + r30.u32, ctx.r3.u32);
	// beq cr6,0x8235d70c
	if (ctx.cr6.eq) goto loc_8235D70C;
	// lwz r11,1552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1552);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8235d790
	if (ctx.cr6.lt) goto loc_8235D790;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8235D790:
	// lwz r10,1548(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1548);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8235d7a0
	if (!ctx.cr6.lt) goto loc_8235D7A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8235D7A0:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,1556(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,230
	ctx.r6.s64 = 230;
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82330e40
	ctx.lr = 0x8235D7D0;
	sub_82330E40(ctx, base);
	// addi r10,r31,524
	ctx.r10.s64 = r31.s64 + 524;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r3.u32);
	// beq cr6,0x8235d70c
	if (ctx.cr6.eq) goto loc_8235D70C;
	// addi r11,r31,396
	ctx.r11.s64 = r31.s64 + 396;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,1556(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235d8a0
	if (!ctx.cr6.gt) goto loc_8235D8A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// addi r25,r11,10696
	r25.s64 = ctx.r11.s64 + 10696;
loc_8235D814:
	// lwzx r11,r24,r30
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r30.u32);
	// add. r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8235d844
	if (ctx.cr0.eq) goto loc_8235D844;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r22,16(r31)
	REX_STORE_U32(r31.u32 + 16, r22.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r22,28(r31)
	REX_STORE_U32(r31.u32 + 28, r22.u32);
loc_8235D844:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,1548(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1548);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,1552(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1552);
	// bl 0x823a4840
	ctx.lr = 0x8235D858;
	sub_823A4840(ctx, base);
	// lwzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r30.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// addi r29,r29,156
	r29.s64 = r29.s64 + 156;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,1556(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235d814
	if (ctx.cr6.lt) goto loc_8235D814;
loc_8235D8A0:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r11,r30,1560
	ctx.r11.s64 = r30.s64 + 1560;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r31,16(r31)
	REX_STORE_U32(r31.u32 + 16, r31.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r31,28(r31)
	REX_STORE_U32(r31.u32 + 28, r31.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r22,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r22.u32);
	// stw r9,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,1560(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1560);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8235d910
	if (ctx.cr6.eq) goto loc_8235D910;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235D90C;
	sub_8233E820(ctx, base);
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8235D910:
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// stw r31,0(r18)
	REX_STORE_U32(r18.u32 + 0, r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d928
	if (ctx.cr6.eq) goto loc_8235D928;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235D928;
	sub_8233E820(ctx, base);
loc_8235D928:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82379BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82379BE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x82379c10
	if (!ctx.cr6.eq) goto loc_82379C10;
	// lwz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82340e38
	ctx.lr = 0x82379C08;
	sub_82340E38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82379C10:
	// lbz r10,261(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 261);
	// rlwinm r29,r11,0,0,22
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82379cec
	if (ctx.cr6.eq) goto loc_82379CEC;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r10.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82379c60
	if (!ctx.cr0.gt) goto loc_82379C60;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82379C38:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82379c50
	if (ctx.cr6.lt) goto loc_82379C50;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82379c60
	if (!ctx.cr6.gt) goto loc_82379C60;
loc_82379C50:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82379c38
	if (ctx.cr6.lt) goto loc_82379C38;
loc_82379C60:
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82340e38
	ctx.lr = 0x82379C7C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82379e8c
	if (!ctx.cr6.eq) goto loc_82379E8C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82379d98
	if (!ctx.cr6.gt) goto loc_82379D98;
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// addi r9,r29,384
	ctx.r9.s64 = r29.s64 + 384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
loc_82379CA8:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82379cc4
	if (!ctx.cr6.lt) goto loc_82379CC4;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x82379cd4
	goto loc_82379CD4;
loc_82379CC4:
	// lwz r5,276(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 276);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// stwx r4,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u32);
loc_82379CD4:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82379ca8
	if (ctx.cr6.lt) goto loc_82379CA8;
	// b 0x82379d98
	goto loc_82379D98;
loc_82379CEC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,268(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x82379d10
	if (ctx.cr6.gt) goto loc_82379D10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82379d44
	goto loc_82379D44;
loc_82379D10:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r6,272(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// clrldi r5,r29,32
	ctx.r5.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// mulld r4,r7,r5
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r5.u64);
	// divdu r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 ? ctx.r4.u64 / ctx.r6.u64 : 0;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82379d44
	if (!ctx.cr6.gt) goto loc_82379D44;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82379D44:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82340e38
	ctx.lr = 0x82379D5C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82379e8c
	if (!ctx.cr6.eq) goto loc_82379E8C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82379d98
	if (!ctx.cr6.gt) goto loc_82379D98;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
loc_82379D7C:
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82379d7c
	if (ctx.cr6.lt) goto loc_82379D7C;
loc_82379D98:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// ble cr6,0x82379e80
	if (!ctx.cr6.gt) goto loc_82379E80;
loc_82379DA8:
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82379e80
	if (!ctx.cr6.eq) goto loc_82379E80;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r30.s64 = ctx.r11.s32 >> 1;
	// bl 0x82340ff0
	ctx.lr = 0x82379DC8;
	sub_82340FF0(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r8,188(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// lwz r4,268(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82379e80
	if (!ctx.cr6.lt) goto loc_82379E80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82379e4c
	if (ctx.cr6.eq) goto loc_82379E4C;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x82379E14;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82379e80
	if (!ctx.cr6.eq) goto loc_82379E80;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r8,15,17,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7E00;
	// addi r7,r11,2560
	ctx.r7.s64 = ctx.r11.s64 + 2560;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82379e70
	if (ctx.cr6.lt) goto loc_82379E70;
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82379E4C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// bgt cr6,0x82379da8
	if (ctx.cr6.gt) goto loc_82379DA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82378798
	ctx.lr = 0x82379E64;
	sub_82378798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82379E70:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340e38
	ctx.lr = 0x82379E80;
	sub_82340E38(ctx, base);
loc_82379E80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82378798
	ctx.lr = 0x82379E88;
	sub_82378798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82379E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8239B5A0) {
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
	// bne cr6,0x8239b5bc
	if (!ctx.cr6.eq) goto loc_8239B5BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239B5BC:
	// lwz r5,360(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r4,364(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 364);
	// bl 0x82359800
	ctx.lr = 0x8239B5C8;
	sub_82359800(ctx, base);
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

DEFINE_REX_FUNC(sub_8239BF08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8239BF10;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x82342310
	ctx.lr = 0x8239BF34;
	sub_82342310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239bf84
	if (!ctx.cr6.eq) goto loc_8239BF84;
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239bf80
	if (!ctx.cr6.gt) goto loc_8239BF80;
	// addi r30,r29,172
	r30.s64 = r29.s64 + 172;
loc_8239BF50:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239BF70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,172(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 172);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239bf50
	if (ctx.cr6.lt) goto loc_8239BF50;
loc_8239BF80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239BF84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_823A0158) {
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
	ctx.lr = 0x823A0160;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823a025c
	if (!ctx.cr6.gt) goto loc_823A025C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,284(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a01e0
	if (ctx.cr6.eq) goto loc_823A01E0;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823a01e0
	if (!ctx.cr6.eq) goto loc_823A01E0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0294
	if (!ctx.cr6.gt) goto loc_823A0294;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
loc_823A01AC:
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
	ctx.lr = 0x823A01C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a01ac
	if (ctx.cr6.lt) goto loc_823A01AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
loc_823A01E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823a025c
	if (!ctx.cr6.gt) goto loc_823A025C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823a025c
	if (!ctx.cr6.eq) goto loc_823A025C;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0294
	if (!ctx.cr6.gt) goto loc_823A0294;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
loc_823A0208:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lfs f4,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A0240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823a0208
	if (ctx.cr6.lt) goto loc_823A0208;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
loc_823A025C:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0294
	if (!ctx.cr6.gt) goto loc_823A0294;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
loc_823A026C:
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
	ctx.lr = 0x823A0284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a026c
	if (ctx.cr6.lt) goto loc_823A026C;
loc_823A0294:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A9E20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823d1958
	ctx.lr = 0x823A9E40;
	sub_823D1958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aa02c
	if (!ctx.cr6.eq) goto loc_823AA02C;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r4,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aa028
	if (!ctx.cr6.eq) goto loc_823AA028;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa028
	if (ctx.cr6.eq) goto loc_823AA028;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,84(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a9e84
	if (ctx.cr6.eq) goto loc_823A9E84;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa028
	if (ctx.cr6.eq) goto loc_823AA028;
loc_823A9E84:
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aa028
	if (!ctx.cr6.eq) goto loc_823AA028;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r10,144(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 144);
	// ld r9,20888(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 20888);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x823aa028
	if (ctx.cr6.lt) goto loc_823AA028;
	// lfs f0,296(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f13,180(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// divw r8,r8,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// bne cr6,0x823a9edc
	if (!ctx.cr6.eq) goto loc_823A9EDC;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_823A9EDC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r3,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x823aa028
	if (ctx.cr6.eq) goto loc_823AA028;
	// rlwinm r6,r5,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823a9f48
	if (!ctx.cr6.eq) goto loc_823A9F48;
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9f28
	if (ctx.cr6.eq) goto loc_823A9F28;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a9f48
	if (!ctx.cr6.eq) goto loc_823A9F48;
loc_823A9F28:
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823aa028
	if (ctx.cr6.lt) goto loc_823AA028;
	// rlwinm r10,r4,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// b 0x823aa028
	goto loc_823AA028;
loc_823A9F48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
loc_823A9F50:
	// lfs f0,180(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823a9f74
	if (!ctx.cr6.gt) goto loc_823A9F74;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823a9f8c
	if (!ctx.cr6.lt) goto loc_823A9F8C;
loc_823A9F74:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823aa028
	if (!ctx.cr6.lt) goto loc_823AA028;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823aa028
	if (ctx.cr6.gt) goto loc_823AA028;
loc_823A9F8C:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823a9ff8
	if (ctx.cr6.eq) goto loc_823A9FF8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a9fc0
	if (ctx.cr6.eq) goto loc_823A9FC0;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823a9fb4
	if (!ctx.cr6.gt) goto loc_823A9FB4;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x823a9fe0
	goto loc_823A9FE0;
loc_823A9FB4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x823a9fe4
	goto loc_823A9FE4;
loc_823A9FC0:
	// rlwinm r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a9fe4
	if (ctx.cr6.eq) goto loc_823A9FE4;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_823A9FE0:
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
loc_823A9FE4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823a9f50
	if (ctx.cr6.lt) goto loc_823A9F50;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x823a9f50
	goto loc_823A9F50;
loc_823A9FF8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823aa01c
	if (!ctx.cr6.eq) goto loc_823AA01C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823aa01c
	if (!ctx.cr6.gt) goto loc_823AA01C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x823aa020
	goto loc_823AA020;
loc_823AA01C:
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
loc_823AA020:
	// rlwinm r11,r4,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823AA028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA02C:
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

DEFINE_REX_FUNC(sub_823C1DC8) {
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
	ctx.lr = 0x823C1DD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,18500(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18500);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823c1e18
	if (!ctx.cr6.eq) goto loc_823C1E18;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823c1728
	ctx.lr = 0x823C1E0C;
	sub_823C1728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c1f04
	if (!ctx.cr6.eq) goto loc_823C1F04;
loc_823C1E18:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r10,18592(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18592);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stw r9,18604(r11)
	REX_STORE_U32(ctx.r11.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18592(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18592);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,18592(r11)
	REX_STORE_U32(ctx.r11.u32 + 18592, ctx.r7.u32);
	// lwz r6,264(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r28,18600(r6)
	REX_STORE_U32(ctx.r6.u32 + 18600, r28.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,18500(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 18500);
	// lwz r3,18604(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 18604);
	// bl 0x823ef2f8
	ctx.lr = 0x823C1E68;
	sub_823EF2F8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18540(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18540);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823c1eb0
	if (ctx.cr6.eq) goto loc_823C1EB0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r10.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18604(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 18604);
	// lwz r8,18600(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 18600);
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,18604(r9)
	REX_STORE_U32(ctx.r9.u32 + 18604, ctx.r7.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r6,18600(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stw r5,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r5.u32);
loc_823C1EB0:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18536(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18536);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823c1edc
	if (ctx.cr6.eq) goto loc_823C1EDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823c1ef0
	if (!ctx.cr6.eq) goto loc_823C1EF0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c6c48
	ctx.lr = 0x823C1ED8;
	sub_823C6C48(ctx, base);
	// b 0x823c1eec
	goto loc_823C1EEC;
loc_823C1EDC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c7cd0
	ctx.lr = 0x823C1EEC;
	sub_823C7CD0(ctx, base);
loc_823C1EEC:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823C1EF0:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18500(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18500);
	// stw r10,18504(r11)
	REX_STORE_U32(ctx.r11.u32 + 18504, ctx.r10.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r28,18500(r9)
	REX_STORE_U32(ctx.r9.u32 + 18500, r28.u32);
loc_823C1F04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823CA960) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ca994
	if (!ctx.cr6.eq) goto loc_823CA994;
loc_823CA98C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ca9ec
	goto loc_823CA9EC;
loc_823CA994:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CA9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ca98c
	if (!ctx.cr6.eq) goto loc_823CA98C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbc8
	ctx.lr = 0x823CA9C4;
	sub_823DCBC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ca98c
	if (ctx.cr6.eq) goto loc_823CA98C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbf0
	ctx.lr = 0x823CA9D8;
	sub_823DCBF0(ctx, base);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rlwinm r9,r3,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
loc_823CA9EC:
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

DEFINE_REX_FUNC(sub_823CDDC0) {
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
	ctx.lr = 0x823CDDC8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r25,448(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r31,-1
	r31.s64 = -1;
	// bl 0x823cd610
	ctx.lr = 0x823CDDF0;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cdecc
	if (ctx.cr6.lt) goto loc_823CDECC;
loc_823CDDF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e06d8
	ctx.lr = 0x823CDE00;
	sub_823E06D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdec0
	if (!ctx.cr6.eq) goto loc_823CDEC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e0758
	ctx.lr = 0x823CDE10;
	sub_823E0758(ctx, base);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r25.s32, ctx.xer);
	// bne cr6,0x823cde94
	if (!ctx.cr6.eq) goto loc_823CDE94;
	// addi r29,r28,112
	r29.s64 = r28.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e0cb0
	ctx.lr = 0x823CDE2C;
	sub_823E0CB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e1340
	ctx.lr = 0x823CDE38;
	sub_823E1340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cde84
	if (ctx.cr6.eq) goto loc_823CDE84;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_823CDE44:
	// ble cr6,0x823cde70
	if (!ctx.cr6.gt) goto loc_823CDE70;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e17f8
	ctx.lr = 0x823CDE54;
	sub_823E17F8(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x823cde6c
	if (ctx.cr6.eq) goto loc_823CDE6C;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// sradi r11,r10,2
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s64 >> 2;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_823CDE6C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823CDE70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e1340
	ctx.lr = 0x823CDE7C;
	sub_823E1340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cde44
	if (!ctx.cr6.eq) goto loc_823CDE44;
loc_823CDE84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e06f8
	ctx.lr = 0x823CDE8C;
	sub_823E06F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x823cdeb4
	if (!ctx.cr6.eq) goto loc_823CDEB4;
loc_823CDE94:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CDEA8;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x823cddf8
	if (!ctx.cr6.lt) goto loc_823CDDF8;
	// b 0x823cdec0
	goto loc_823CDEC0;
loc_823CDEB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e06f8
	ctx.lr = 0x823CDEBC;
	sub_823E06F8(ctx, base);
	// subf r30,r30,r3
	r30.u64 = ctx.r3.u64 - r30.u64;
loc_823CDEC0:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x823cded0
	if (ctx.cr6.lt) goto loc_823CDED0;
loc_823CDECC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823CDED0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823D1FA8) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d229c
	if (ctx.cr6.eq) goto loc_823D229C;
	// lwz r7,284(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823d229c
	if (ctx.cr6.eq) goto loc_823D229C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,22056(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// lfs f12,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,1200(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
	// fmr f30,f12
	f30.f64 = ctx.f12.f64;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// bne cr6,0x823d200c
	if (!ctx.cr6.eq) goto loc_823D200C;
	// li r6,6
	ctx.r6.s64 = 6;
loc_823D200C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823d2110
	if (ctx.cr6.lt) goto loc_823D2110;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D202C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x823d2060
	if (ctx.cr6.eq) goto loc_823D2060;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x823d2060
	if (ctx.cr6.eq) goto loc_823D2060;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,1196(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1196);
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
loc_823D2060:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823d2098
	if (ctx.cr6.eq) goto loc_823D2098;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d2098
	if (ctx.cr6.eq) goto loc_823D2098;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,1196(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 1196);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
loc_823D2098:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x823d20cc
	if (ctx.cr6.eq) goto loc_823D20CC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x823d20cc
	if (ctx.cr6.eq) goto loc_823D20CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,1196(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1196);
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
loc_823D20CC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823d2104
	if (ctx.cr6.eq) goto loc_823D2104;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d2104
	if (ctx.cr6.eq) goto loc_823D2104;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,1196(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 1196);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
loc_823D2104:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823d202c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D202C;
loc_823D2110:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823d215c
	if (!ctx.cr6.lt) goto loc_823D215C;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D2120:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x823d2154
	if (ctx.cr6.eq) goto loc_823D2154;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x823d2154
	if (ctx.cr6.eq) goto loc_823D2154;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,1196(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1196);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
loc_823D2154:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823d2120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2120;
loc_823D215C:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823d2214
	if (!ctx.cr6.gt) goto loc_823D2214;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D2170:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x823d21a0
	if (ctx.cr6.eq) goto loc_823D21A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,1196(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1196);
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fdivs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// b 0x823d21a4
	goto loc_823D21A4;
loc_823D21A0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_823D21A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d21dc
	if (ctx.cr6.eq) goto loc_823D21DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d21dc
	if (ctx.cr6.eq) goto loc_823D21DC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823d21dc
	if (ctx.cr6.eq) goto loc_823D21DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d21d4
	if (ctx.cr6.eq) goto loc_823D21D4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823d21d4
	if (ctx.cr6.eq) goto loc_823D21D4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823d21e0
	if (!ctx.cr6.eq) goto loc_823D21E0;
loc_823D21D4:
	// fadds f29,f0,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x823d21e0
	goto loc_823D21E0;
loc_823D21DC:
	// fsubs f29,f29,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 - ctx.f0.f64));
loc_823D21E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d2208
	if (ctx.cr6.eq) goto loc_823D2208;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d2208
	if (ctx.cr6.eq) goto loc_823D2208;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d2200
	if (ctx.cr6.eq) goto loc_823D2200;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823d220c
	if (!ctx.cr6.eq) goto loc_823D220C;
loc_823D2200:
	// fsubs f30,f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 - ctx.f0.f64));
	// b 0x823d220c
	goto loc_823D220C;
loc_823D2208:
	// fadds f30,f0,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_823D220C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823d2170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2170;
loc_823D2214:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x823d2228
	if (!ctx.cr6.gt) goto loc_823D2228;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_823D2228:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,3788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(f30.f64, ctx.f1.f64);
	// bge cr6,0x823d2258
	if (!ctx.cr6.lt) goto loc_823D2258;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x823d226c
	goto loc_823D226C;
loc_823D2258:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x823d2268
	if (!ctx.cr6.gt) goto loc_823D2268;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// b 0x823d226c
	goto loc_823D226C;
loc_823D2268:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_823D226C:
	// fcmpu cr6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, ctx.f1.f64);
	// blt cr6,0x823d2288
	if (ctx.cr6.lt) goto loc_823D2288;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x823d2284
	if (!ctx.cr6.gt) goto loc_823D2284;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x823d2288
	goto loc_823D2288;
loc_823D2284:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
loc_823D2288:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D229C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D229C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E73F8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x823E7400;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c98
	ctx.lr = 0x823E7408;
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r7,r5,268
	ctx.r7.s64 = ctx.r5.s64 + 268;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ldx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r31,r6,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 + ctx.r3.u64;
	// std r10,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r10.u64);
	// std r9,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r9.u64);
	// ble cr6,0x823e7620
	if (!ctx.cr6.gt) goto loc_823E7620;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,-236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f13,-240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r31,r5
	ctx.r6.u64 = ctx.r5.u64 - r31.u64;
	// lfs f12,-228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f12.f64 = double(temp.f32);
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lfs f11,-232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// add r29,r4,r10
	r29.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r30,r4,5,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r28,r4,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r4,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
loc_823E74A8:
	// lfs f10,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ld r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 4);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// std r5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f5,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f2,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfs f29,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f30,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f31,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f27,f29,f30
	f27.f64 = double(float(f29.f64 * f30.f64));
	// lfs f26,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f24,f31,f26
	f24.f64 = double(float(f31.f64 * f26.f64));
	// lfs f28,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmsubs f6,f7,f4,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, -ctx.f6.f64)));
	// lfs f25,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f25.f64 = double(temp.f32);
	// lfs f4,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f3,f28,f2,f3
	ctx.f3.f64 = double(float(std::fma(f28.f64, ctx.f2.f64, -ctx.f3.f64)));
	// fmadds f2,f7,f8,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f1.f64)));
	// lfs f7,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f28,f5,f10
	ctx.f8.f64 = double(float(std::fma(f28.f64, ctx.f5.f64, ctx.f10.f64)));
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f31,f25
	ctx.f5.f64 = double(float(f31.f64 * f25.f64));
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f30,f4,f30
	f30.f64 = double(float(ctx.f4.f64 * f30.f64));
	// lfs f28,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmadds f4,f4,f7,f27
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, f27.f64)));
	// fmadds f27,f1,f25,f24
	f27.f64 = double(float(std::fma(ctx.f1.f64, f25.f64, f24.f64)));
	// lfs f10,-224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-220(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f25,f6,f3
	f25.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fadds f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fmsubs f5,f1,f26,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, -ctx.f5.f64)));
	// fmsubs f1,f29,f7,f30
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, -f30.f64)));
	// fsubs f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fadds f7,f4,f27
	ctx.f7.f64 = double(float(ctx.f4.f64 + f27.f64));
	// fsubs f4,f27,f4
	ctx.f4.f64 = double(float(f27.f64 - ctx.f4.f64));
	// fmuls f2,f0,f25
	ctx.f2.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fmuls f30,f13,f3
	f30.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f29,f13,f6
	f29.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f26,f11,f6
	f26.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fadds f27,f1,f5
	f27.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fadds f31,f31,f7
	f31.f64 = double(float(f31.f64 + ctx.f7.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f24,f11,f3
	f24.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmadds f29,f11,f7,f29
	f29.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, f29.f64)));
	// fmadds f7,f13,f7,f26
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f26.f64)));
	// fmadds f30,f11,f27,f30
	f30.f64 = double(float(std::fma(ctx.f11.f64, f27.f64, f30.f64)));
	// fmuls f26,f0,f1
	f26.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fadds f28,f28,f27
	f28.f64 = double(float(f28.f64 + f27.f64));
	// fmadds f5,f12,f4,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f5.f64)));
	// fmadds f27,f13,f27,f24
	f27.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, f24.f64)));
	// fmsubs f8,f0,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, -ctx.f8.f64)));
	// fnmsubs f2,f12,f1,f2
	ctx.f2.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f1.f64, -ctx.f2.f64)));
	// fadds f1,f31,f6
	ctx.f1.f64 = double(float(f31.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f6,f29,f10
	ctx.f6.f64 = double(float(f29.f64 + ctx.f10.f64));
	// fadds f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f1,f30,f9
	ctx.f1.f64 = double(float(f30.f64 + ctx.f9.f64));
	// fadds f3,f28,f3
	ctx.f3.f64 = double(float(f28.f64 + ctx.f3.f64));
	// stfsu f3,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f4,f27,f9
	ctx.f4.f64 = double(float(f27.f64 + ctx.f9.f64));
	// fsubs f3,f6,f2
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fsubs f3,f1,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfsu f3,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfsu f2,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmsubs f6,f12,f25,f26
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, -f26.f64)));
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f1,4(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f10,f8,f4
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfsu f10,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fsubs f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfsu f8,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// bdnz 0x823e74a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E74A8;
loc_823E7620:
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce4
	ctx.lr = 0x823E7628;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F1780) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) return;
loc_823F17A4:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x823f17bc
	if (ctx.cr7.lt) goto loc_823F17BC;
	// ble 0x823f17b8
	if (!ctx.cr0.gt) goto loc_823F17B8;
	// dcbt r10,r4
loc_823F17B8:
	// dcbzl r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_823F17BC:
	// lvx v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge 0x823f17a4
	if (!ctx.cr0.lt) goto loc_823F17A4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FF168;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x823ff204
	if (!ctx.cr6.eq) goto loc_823FF204;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823FF184:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ff184
	if (!ctx.cr6.eq) goto loc_823FF184;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x823ff204
	if (!ctx.cr6.gt) goto loc_823FF204;
	// addi r30,r11,-3
	r30.s64 = ctx.r11.s64 + -3;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269f180
	ctx.lr = 0x823FF1C8;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ff1dc
	if (!ctx.cr0.eq) goto loc_823FF1DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16252
	ctx.r3.s64 = ctx.r11.s64 + 16252;
	// b 0x823ff23c
	goto loc_823FF23C;
loc_823FF1DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,17252
	ctx.r4.s64 = ctx.r11.s64 + 17252;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269f180
	ctx.lr = 0x823FF1F0;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ff204
	if (!ctx.cr0.eq) goto loc_823FF204;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x823ff23c
	goto loc_823FF23C;
loc_823FF204:
	// rlwinm. r11,r29,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ff238
	if (!ctx.cr0.eq) goto loc_823FF238;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// bne cr6,0x823ff228
	if (!ctx.cr6.eq) goto loc_823FF228;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-26484
	r31.s64 = ctx.r11.s64 + -26484;
	// b 0x823ff238
	goto loc_823FF238;
loc_823FF228:
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x823ff238
	if (!ctx.cr6.eq) goto loc_823FF238;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-26476
	r31.s64 = ctx.r11.s64 + -26476;
loc_823FF238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823FF23C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824048A0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824048A8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82404ED0) {
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
	// beq cr6,0x82404ef8
	if (ctx.cr6.eq) goto loc_82404EF8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82404EF8;
	sub_823F0350(ctx, base);
loc_82404EF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404f0c
	if (ctx.cr6.eq) goto loc_82404F0C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82404F0C;
	sub_823F0350(ctx, base);
loc_82404F0C:
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

DEFINE_REX_FUNC(sub_82407F60) {
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
	// beq cr6,0x82407f9c
	if (ctx.cr6.eq) goto loc_82407F9C;
	// bl 0x822d3520
	ctx.lr = 0x82407F84;
	sub_822D3520(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407f9c
	if (ctx.cr6.eq) goto loc_82407F9C;
	// bl 0x822c5ef0
	ctx.lr = 0x82407F94;
	sub_822C5EF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82407F9C:
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

DEFINE_REX_FUNC(sub_82409820) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x824098d0
	if (ctx.cr6.eq) goto loc_824098D0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82409884
	if (ctx.cr6.eq) goto loc_82409884;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82409884
	if (ctx.cr6.eq) goto loc_82409884;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82409a7c
	if (!ctx.cr6.lt) goto loc_82409A7C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82409870:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82409870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82409870;
	// b 0x82409a7c
	goto loc_82409A7C;
loc_82409884:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82409a7c
	if (!ctx.cr6.lt) goto loc_82409A7C;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824098A4:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824098a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824098A4;
	// b 0x82409a7c
	goto loc_82409A7C;
loc_824098D0:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82409964
	if (ctx.cr6.eq) goto loc_82409964;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82409964
	if (ctx.cr6.eq) goto loc_82409964;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82409a7c
	if (!ctx.cr6.lt) goto loc_82409A7C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,20184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20184);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,19160
	ctx.r11.s64 = ctx.r11.s64 + 19160;
loc_82409910:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82409910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82409910;
	// b 0x82409a7c
	goto loc_82409A7C;
loc_82409964:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82409a7c
	if (!ctx.cr6.lt) goto loc_82409A7C;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20184);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,19160
	ctx.r10.s64 = ctx.r10.s64 + 19160;
loc_82409994:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r4,-36(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// std r6,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r5,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfsx f7,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfsx f10,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f10,f11,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f7.f64)));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f9,r5,r8
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f12,f9,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfsx f11,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82409994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82409994;
loc_82409A7C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82415AB0) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415ad8
	if (ctx.cr6.eq) goto loc_82415AD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415a50
	ctx.lr = 0x82415AD8;
	sub_82415A50(ctx, base);
loc_82415AD8:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415aec
	if (ctx.cr6.eq) goto loc_82415AEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415b40
	ctx.lr = 0x82415AEC;
	sub_82415B40(ctx, base);
loc_82415AEC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82415b18
	if (ctx.cr6.eq) goto loc_82415B18;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82415b18
	if (ctx.cr6.eq) goto loc_82415B18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82415B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82415B18:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82404890
	ctx.lr = 0x82415B20;
	sub_82404890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82415B28;
	sub_82130E88(ctx, base);
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

DEFINE_REX_FUNC(sub_82419980) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241A3B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241A3B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8241A3C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241a3c8
	if (!ctx.cr6.eq) goto loc_8241A3C8;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x823f02b8
	ctx.lr = 0x8241A3F4;
	sub_823F02B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241a408
	if (!ctx.cr0.eq) goto loc_8241A408;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241a438
	goto loc_8241A438;
loc_8241A408:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8241A434;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8241DA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241DA88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8241db18
	if (!ctx.cr6.gt) goto loc_8241DB18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne cr6,0x8241dab4
	if (!ctx.cr6.eq) goto loc_8241DAB4;
	// li r30,256
	r30.s64 = 256;
loc_8241DAB4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// ble cr6,0x8241dad0
	if (!ctx.cr6.gt) goto loc_8241DAD0;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_8241DAC4:
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x8241dac4
	if (ctx.cr6.gt) goto loc_8241DAC4;
loc_8241DAD0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8241DADC;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8241daf0
	if (!ctx.cr0.eq) goto loc_8241DAF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241db1c
	goto loc_8241DB1C;
loc_8241DAF0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8241DB04;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x823f0350
	ctx.lr = 0x8241DB10;
	sub_823F0350(ctx, base);
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_8241DB18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241DB1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82423E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82423E60;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824009e0
	ctx.lr = 0x82423EA8;
	sub_824009E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// stb r10,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r10.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82423788
	ctx.lr = 0x82423EC8;
	sub_82423788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82423ED8;
	sub_8241A4F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824375C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824375D0;
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
	// beq 0x8243765c
	if (ctx.cr0.eq) goto loc_8243765C;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	r31.s64 = 0;
loc_824375FC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x824375c8
	ctx.lr = 0x82437608;
	sub_824375C8(ctx, base);
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
	// beq 0x82437624
	if (ctx.cr0.eq) goto loc_82437624;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82437624:
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
	// blt cr6,0x824375fc
	if (ctx.cr6.lt) goto loc_824375FC;
loc_8243765C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243A060) {
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
	ctx.lr = 0x8243A068;
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
	// blt cr6,0x8243a42c
	if (ctx.cr6.lt) goto loc_8243A42C;
	// beq cr6,0x8243a3a8
	if (ctx.cr6.eq) goto loc_8243A3A8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8243a24c
	if (ctx.cr6.lt) goto loc_8243A24C;
	// beq cr6,0x8243a194
	if (ctx.cr6.eq) goto loc_8243A194;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8243a0b4
	if (ctx.cr6.eq) goto loc_8243A0B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8243a640
	goto loc_8243A640;
loc_8243A0B4:
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
	// ble cr6,0x8243a0d4
	if (!ctx.cr6.gt) goto loc_8243A0D4;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8243A0D4:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8243a114
	if (ctx.cr0.eq) goto loc_8243A114;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_8243A0E8:
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
	// bdnz 0x8243a0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A0E8;
loc_8243A114:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8243a18c
	if (ctx.cr6.eq) goto loc_8243A18C;
loc_8243A124:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a180
	if (ctx.cr0.eq) goto loc_8243A180;
	// li r30,0
	r30.s64 = 0;
loc_8243A138:
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
	// bl 0x82438da8
	ctx.lr = 0x8243A158;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8243a640
	if (ctx.cr0.lt) goto loc_8243A640;
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
	// blt cr6,0x8243a138
	if (ctx.cr6.lt) goto loc_8243A138;
loc_8243A180:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x8243a124
	if (ctx.cr6.lt) goto loc_8243A124;
loc_8243A18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243a640
	goto loc_8243A640;
loc_8243A194:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a1a8
	if (!ctx.cr6.gt) goto loc_8243A1A8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A1A8:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8243a1c0
	if (!ctx.cr6.eq) goto loc_8243A1C0;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8243a484
	if (ctx.cr6.eq) goto loc_8243A484;
loc_8243A1C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a480
	if (ctx.cr6.eq) goto loc_8243A480;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_8243A1D4:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a240
	if (ctx.cr0.eq) goto loc_8243A240;
loc_8243A1E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243a230
	if (ctx.cr6.eq) goto loc_8243A230;
loc_8243A1F0:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8243a218
	if (ctx.cr6.gt) goto loc_8243A218;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x8243a218
	if (ctx.cr6.gt) goto loc_8243A218;
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
	// b 0x8243a21c
	goto loc_8243A21C;
loc_8243A218:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243A21C:
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
	// blt cr6,0x8243a1f0
	if (ctx.cr6.lt) goto loc_8243A1F0;
loc_8243A230:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243a1e4
	if (ctx.cr6.lt) goto loc_8243A1E4;
loc_8243A240:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8243a1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A1D4;
	// b 0x8243a480
	goto loc_8243A480;
loc_8243A24C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a260
	if (!ctx.cr6.gt) goto loc_8243A260;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A260:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8243a31c
	if (!ctx.cr6.eq) goto loc_8243A31C;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8243a31c
	if (!ctx.cr6.eq) goto loc_8243A31C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a480
	if (ctx.cr6.eq) goto loc_8243A480;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_8243A290:
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
	// bdnz 0x8243a290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A290;
	// b 0x8243a480
	goto loc_8243A480;
loc_8243A31C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a480
	if (ctx.cr6.eq) goto loc_8243A480;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_8243A330:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a39c
	if (ctx.cr6.eq) goto loc_8243A39C;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_8243A340:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243a38c
	if (ctx.cr6.eq) goto loc_8243A38C;
loc_8243A34C:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x8243a374
	if (ctx.cr6.gt) goto loc_8243A374;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8243a374
	if (ctx.cr6.gt) goto loc_8243A374;
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
	// b 0x8243a378
	goto loc_8243A378;
loc_8243A374:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243A378:
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
	// blt cr6,0x8243a34c
	if (ctx.cr6.lt) goto loc_8243A34C;
loc_8243A38C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243a340
	if (ctx.cr6.lt) goto loc_8243A340;
loc_8243A39C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8243a330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A330;
	// b 0x8243a480
	goto loc_8243A480;
loc_8243A3A8:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a3bc
	if (!ctx.cr6.gt) goto loc_8243A3BC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A3BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a480
	if (ctx.cr6.eq) goto loc_8243A480;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_8243A3D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243a41c
	if (ctx.cr6.eq) goto loc_8243A41C;
loc_8243A3DC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8243a3ec
	if (!ctx.cr6.gt) goto loc_8243A3EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8243a408
	goto loc_8243A408;
loc_8243A3EC:
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
loc_8243A408:
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
	// blt cr6,0x8243a3dc
	if (ctx.cr6.lt) goto loc_8243A3DC;
loc_8243A41C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8243a3d0
	if (ctx.cr6.lt) goto loc_8243A3D0;
	// b 0x8243a480
	goto loc_8243A480;
loc_8243A42C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a440
	if (!ctx.cr6.gt) goto loc_8243A440;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A440:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a480
	if (ctx.cr6.eq) goto loc_8243A480;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_8243A454:
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
	// bdnz 0x8243a454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A454;
loc_8243A480:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_8243A484:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8243a514
	if (ctx.cr6.eq) goto loc_8243A514;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x8243a4d4
	if (ctx.cr6.eq) goto loc_8243A4D4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8243a510
	if (!ctx.cr6.eq) goto loc_8243A510;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a510
	if (ctx.cr6.eq) goto loc_8243A510;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_8243A4BC:
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
	// bdnz 0x8243a4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A4BC;
	// b 0x8243a510
	goto loc_8243A510;
loc_8243A4D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a510
	if (ctx.cr6.eq) goto loc_8243A510;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8243A4F0:
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8243a504
	if (!ctx.cr6.eq) goto loc_8243A504;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243A504:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8243a4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A4F0;
loc_8243A510:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_8243A514:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243a5f4
	if (ctx.cr0.eq) goto loc_8243A5F4;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8243a538
	if (ctx.cr6.eq) goto loc_8243A538;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x8243a540
	goto loc_8243A540;
loc_8243A538:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_8243A540:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243a5f4
	if (ctx.cr0.eq) goto loc_8243A5F4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8243a55c
	if (!ctx.cr6.eq) goto loc_8243A55C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
	// b 0x8243a564
	goto loc_8243A564;
loc_8243A55C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21424
	ctx.r3.s64 = ctx.r9.s64 + -21424;
loc_8243A564:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x8243a5f0
	if (ctx.cr0.eq) goto loc_8243A5F0;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_8243A57C:
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
	// ble cr6,0x8243a5b8
	if (!ctx.cr6.gt) goto loc_8243A5B8;
	// subf r30,r11,r7
	r30.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243A59C:
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
	// bdnz 0x8243a59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A59C;
loc_8243A5B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a5e8
	if (ctx.cr6.eq) goto loc_8243A5E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8243A5C8:
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
	// bdnz 0x8243a5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A5C8;
loc_8243A5E8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8243a57c
	if (!ctx.cr6.eq) goto loc_8243A57C;
loc_8243A5F0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_8243A5F4:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243a60c
	if (!ctx.cr6.gt) goto loc_8243A60C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8243A60C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243a624
	if (!ctx.cr6.eq) goto loc_8243A624;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8243a640
	goto loc_8243A640;
loc_8243A624:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x8243A638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8243A640:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82466A80) {
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
	ctx.lr = 0x82466A88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82466A90:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82466c40
	if (!ctx.cr6.gt) goto loc_82466C40;
	// li r25,0
	r25.s64 = 0;
loc_82466AA8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r3,r25,r11
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// bl 0x82477748
	ctx.lr = 0x82466AB4;
	sub_82477748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82466c24
	if (ctx.cr0.eq) goto loc_82466C24;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// li r26,1
	r26.s64 = 1;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82466bd4
	if (!ctx.cr6.lt) goto loc_82466BD4;
	// addi r30,r25,4
	r30.s64 = r25.s64 + 4;
loc_82466AD8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824777a8
	ctx.lr = 0x82466AE8;
	sub_824777A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82466bcc
	if (!ctx.cr0.eq) goto loc_82466BCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82466bc8
	if (!ctx.cr6.eq) goto loc_82466BC8;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82466bb0
	if (ctx.cr6.eq) goto loc_82466BB0;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 20);
loc_82466B24:
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r9,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r31,56(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466b9c
	if (!ctx.cr6.eq) goto loc_82466B9C;
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r31,60(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466b9c
	if (!ctx.cr6.eq) goto loc_82466B9C;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466b9c
	if (!ctx.cr6.eq) goto loc_82466B9C;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,12(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466b9c
	if (!ctx.cr6.eq) goto loc_82466B9C;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466b9c
	if (!ctx.cr6.eq) goto loc_82466B9C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82466ba0
	if (ctx.cr6.eq) goto loc_82466BA0;
loc_82466B9C:
	// li r26,0
	r26.s64 = 0;
loc_82466BA0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82466b24
	if (ctx.cr6.lt) goto loc_82466B24;
loc_82466BB0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82466ad8
	if (ctx.cr6.lt) goto loc_82466AD8;
	// b 0x82466bcc
	goto loc_82466BCC;
loc_82466BC8:
	// li r26,0
	r26.s64 = 0;
loc_82466BCC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82466c24
	if (ctx.cr6.eq) goto loc_82466C24;
loc_82466BD4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r24,1
	r24.s64 = 1;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82466c24
	if (!ctx.cr6.lt) goto loc_82466C24;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82466BEC:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x824777a8
	ctx.lr = 0x82466BF8;
	sub_824777A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82466c24
	if (!ctx.cr0.eq) goto loc_82466C24;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82466bec
	if (ctx.cr6.lt) goto loc_82466BEC;
loc_82466C24:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82466aa8
	if (ctx.cr6.lt) goto loc_82466AA8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82466a90
	if (!ctx.cr6.eq) goto loc_82466A90;
loc_82466C40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82472778) {
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
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,90
	ctx.r4.s64 = 90;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r31,r9,12
	r31.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824727D0;
	sub_82471828(ctx, base);
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

DEFINE_REX_FUNC(sub_82474698) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82473f80
	sub_82473F80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474780) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82474884
	if (ctx.cr6.eq) goto loc_82474884;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8247487c
	if (ctx.cr6.eq) goto loc_8247487C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82474874
	if (ctx.cr6.eq) goto loc_82474874;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824747E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82474894
	if (ctx.cr0.lt) goto loc_82474894;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r31,0
	r31.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// bl 0x82471828
	ctx.lr = 0x82474824;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82474894
	if (ctx.cr0.lt) goto loc_82474894;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82471828
	ctx.lr = 0x82474864;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82474894
	if (ctx.cr0.lt) goto loc_82474894;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82474894
	goto loc_82474894;
loc_82474874:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82474888
	goto loc_82474888;
loc_8247487C:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82474888
	goto loc_82474888;
loc_82474884:
	// li r4,5
	ctx.r4.s64 = 5;
loc_82474888:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473e60
	ctx.lr = 0x82474894;
	sub_82473E60(ctx, base);
loc_82474894:
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

DEFINE_REX_FUNC(sub_82478F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,48(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82478f6c
	if (!ctx.cr6.lt) goto loc_82478F6C;
loc_82478F64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82478F6C:
	// ble cr6,0x82478f78
	if (!ctx.cr6.gt) goto loc_82478F78;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82478F78:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82478f64
	if (ctx.cr6.lt) goto loc_82478F64;
	// subfc r11,r3,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r3.u32;
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247C3D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8247c408
	if (ctx.cr6.eq) goto loc_8247C408;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_8247C3F0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247c3f0
	if (!ctx.cr6.eq) goto loc_8247C3F0;
loc_8247C408:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x8247c430
	if (ctx.cr6.eq) goto loc_8247C430;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_8247C418:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247c418
	if (!ctx.cr6.eq) goto loc_8247C418;
loc_8247C430:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8247c460
	if (!ctx.cr6.lt) goto loc_8247C460;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8247C444:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r5,24(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r4,20(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// bdnz 0x8247c444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C444;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
loc_8247C460:
	// ble cr6,0x8247c484
	if (!ctx.cr6.gt) goto loc_8247C484;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247C470:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bdnz 0x8247c470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C470;
loc_8247C484:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247c4b8
	if (ctx.cr6.eq) goto loc_8247C4B8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_8247C490:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,20(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8247c490
	if (!ctx.cr6.eq) goto loc_8247C490;
loc_8247C4B8:
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
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

DEFINE_REX_FUNC(sub_8248AA20) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8248AA28;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x8248AA30;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// stw r3,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// li r25,-1
	r25.s64 = -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// bl 0x82481098
	ctx.lr = 0x8248AA5C;
	sub_82481098(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8248aa94
	if (!ctx.cr6.gt) goto loc_8248AA94;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8248AA74:
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r25,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, r25.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248aa74
	if (ctx.cr6.lt) goto loc_8248AA74;
loc_8248AA94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r14,r26
	r14.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfd f30,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// ble cr6,0x8248afe4
	if (!ctx.cr6.gt) goto loc_8248AFE4;
	// mr r15,r26
	r15.u64 = r26.u64;
loc_8248AAB0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r22,r11,r15
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248afb0
	if (ctx.cr0.eq) goto loc_8248AFB0;
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248aaf0
	if (ctx.cr6.eq) goto loc_8248AAF0;
	// lwz r9,16(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8248afb0
	if (!ctx.cr0.eq) goto loc_8248AFB0;
loc_8248AAF0:
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8248ab08
	if (ctx.cr6.eq) goto loc_8248AB08;
	// lis r9,8272
	ctx.r9.s64 = 542113792;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8248afb0
	if (!ctx.cr6.eq) goto loc_8248AFB0;
loc_8248AB08:
	// mr r16,r26
	r16.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248afb0
	if (ctx.cr6.eq) goto loc_8248AFB0;
	// mr r20,r26
	r20.u64 = r26.u64;
loc_8248AB18:
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + r16.u64;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r19,r26
	r19.u64 = r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r11,r20
	r18.u64 = ctx.r11.u64 + r20.u64;
	// add r17,r10,r11
	r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// mr r23,r26
	r23.u64 = r26.u64;
	// stw r17,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r17.u32);
loc_8248AB3C:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// subfic r21,r19,1
	ctx.xer.ca = r19.u32 <= 1;
	r21.u64 = static_cast<uint64_t>(1) - r19.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwzx r11,r23,r6
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248af8c
	if (ctx.cr0.eq) goto loc_8248AF8C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8248af8c
	if (!ctx.cr6.eq) goto loc_8248AF8C;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// rlwinm. r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8248af8c
	if (!ctx.cr0.eq) goto loc_8248AF8C;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8248abf8
	if (ctx.cr6.eq) goto loc_8248ABF8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwzx r4,r23,r4
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + ctx.r4.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8248ABDC:
	// lwzx r3,r7,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8248abf8
	if (ctx.cr6.eq) goto loc_8248ABF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248abdc
	if (ctx.cr6.lt) goto loc_8248ABDC;
loc_8248ABF8:
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwzx r31,r23,r6
	r31.u64 = REX_LOAD_U32(r23.u32 + ctx.r6.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8248aca4
	if (!ctx.cr6.eq) goto loc_8248ACA4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8248aca4
	if (ctx.cr6.eq) goto loc_8248ACA4;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82479a28
	ctx.lr = 0x8248AC78;
	sub_82479A28(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// bl 0x82479a28
	ctx.lr = 0x8248AC9C;
	sub_82479A28(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r24,r11,1
	r24.u64 = ctx.r11.u64 ^ 1;
loc_8248ACA4:
	// li r27,2
	r27.s64 = 2;
loc_8248ACA8:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subfic r6,r27,5
	ctx.xer.ca = r27.u32 <= 5;
	ctx.r6.u64 = static_cast<uint64_t>(5) - r27.u64;
	// lwzx r8,r26,r11
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r7,r11,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8248ad10
	if (ctx.cr0.eq) goto loc_8248AD10;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248ad10
	if (!ctx.cr6.eq) goto loc_8248AD10;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r21,2,0,29
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248ad10
	if (ctx.cr0.eq) goto loc_8248AD10;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248adf4
	if (ctx.cr6.eq) goto loc_8248ADF4;
loc_8248AD10:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8248ade0
	if (!ctx.cr6.eq) goto loc_8248ADE0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r29,r21,2,0,29
	r29.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248ad40
	if (ctx.cr6.eq) goto loc_8248AD40;
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8248ade0
	if (!ctx.cr6.lt) goto loc_8248ADE0;
loc_8248AD40:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248ade0
	if (!ctx.cr6.eq) goto loc_8248ADE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8248ad78
	if (ctx.cr6.eq) goto loc_8248AD78;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248ad78
	if (!ctx.cr6.eq) goto loc_8248AD78;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248aeb0
	if (ctx.cr0.eq) goto loc_8248AEB0;
loc_8248AD78:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r28,r26,r9
	r28.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8248ade0
	if (ctx.cr6.eq) goto loc_8248ADE0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8248adc8
	if (!ctx.cr6.eq) goto loc_8248ADC8;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,372(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82479a28
	ctx.lr = 0x8248ADB8;
	sub_82479A28(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8248af1c
	if (!ctx.cr6.eq) goto loc_8248AF1C;
loc_8248ADC8:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248af1c
	if (ctx.cr6.eq) goto loc_8248AF1C;
loc_8248ADE0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x8248aca8
	if (ctx.cr6.lt) goto loc_8248ACA8;
	// b 0x8248af80
	goto loc_8248AF80;
loc_8248ADF4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8248ae34
	if (ctx.cr6.eq) goto loc_8248AE34;
	// lis r9,8272
	ctx.r9.s64 = 542113792;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8248ae4c
	if (!ctx.cr6.eq) goto loc_8248AE4C;
	// lfd f0,32(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// b 0x8248ae4c
	goto loc_8248AE4C;
loc_8248AE34:
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fadd f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_8248AE4C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r23,r9
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x8248AE7C;
	sub_82478758(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r25,-1
	r25.s64 = -1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwzx r10,r10,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r25.u32);
	// b 0x8248af88
	goto loc_8248AF88;
loc_8248AEB0:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r25,-1
	r25.s64 = -1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r29,r9
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r25,64(r31)
	REX_STORE_U32(r31.u32 + 64, r25.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r25,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r25.u32);
	// b 0x8248af8c
	goto loc_8248AF8C;
loc_8248AF1C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r5,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r5.u32);
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwzx r10,r10,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
loc_8248AF80:
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r25,-1
	r25.s64 = -1;
loc_8248AF88:
	// li r26,0
	r26.s64 = 0;
loc_8248AF8C:
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(r23.u32, 8, ctx.xer);
	// blt cr6,0x8248ab3c
	if (ctx.cr6.lt) goto loc_8248AB3C;
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248ab18
	if (ctx.cr6.lt) goto loc_8248AB18;
loc_8248AFB0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248aab0
	if (ctx.cr6.lt) goto loc_8248AAB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8248afe4
	if (ctx.cr6.eq) goto loc_8248AFE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82481098
	ctx.lr = 0x8248AFE4;
	sub_82481098(ctx, base);
loc_8248AFE4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r25,r26
	r25.u64 = r26.u64;
	// lis r16,12288
	r16.s64 = 805306368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248b244
	if (!ctx.cr6.gt) goto loc_8248B244;
	// li r26,0
	r26.s64 = 0;
loc_8248AFFC:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,372(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r29,r11,r26
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b230
	if (ctx.cr0.eq) goto loc_8248B230;
	// lwz r28,12(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8248b044
	if (ctx.cr6.eq) goto loc_8248B044;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248b230
	if (!ctx.cr0.eq) goto loc_8248B230;
loc_8248B044:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x8248b058
	if (ctx.cr6.eq) goto loc_8248B058;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248b230
	if (!ctx.cr6.eq) goto loc_8248B230;
loc_8248B058:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8248b230
	if (ctx.cr6.eq) goto loc_8248B230;
	// li r30,0
	r30.s64 = 0;
loc_8248B068:
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x8248b1fc
	goto loc_8248B1FC;
loc_8248B094:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248b208
	if (!ctx.cr6.eq) goto loc_8248B208;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8248b0d0
	if (!ctx.cr6.lt) goto loc_8248B0D0;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248B0B4:
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8248b0d0
	if (ctx.cr6.eq) goto loc_8248B0D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248b0b4
	if (ctx.cr6.lt) goto loc_8248B0B4;
loc_8248B0D0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248b208
	if (ctx.cr6.lt) goto loc_8248B208;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,24(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248b11c
	if (ctx.cr6.eq) goto loc_8248B11C;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8248B100:
	// lwzx r23,r7,r8
	r23.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8248b11c
	if (ctx.cr6.eq) goto loc_8248B11C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b100
	if (ctx.cr6.lt) goto loc_8248B100;
loc_8248B11C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r7,8256
	ctx.r7.s64 = 541065216;
	// rlwinm r8,r8,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8248b158
	if (!ctx.cr6.eq) goto loc_8248B158;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248b208
	if (!ctx.cr6.eq) goto loc_8248B208;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x8248b1e0
	goto loc_8248B1E0;
loc_8248B158:
	// lis r7,8272
	ctx.r7.s64 = 542113792;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8248b208
	if (!ctx.cr6.eq) goto loc_8248B208;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b1b0
	if (ctx.cr0.eq) goto loc_8248B1B0;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8248b1b0
	if (!ctx.cr6.gt) goto loc_8248B1B0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// b 0x8248b1e0
	goto loc_8248B1E0;
loc_8248B1B0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b208
	if (ctx.cr0.eq) goto loc_8248B208;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8248b208
	if (!ctx.cr6.gt) goto loc_8248B208;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8248B1E0:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8248B1FC:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248b094
	if (!ctx.cr0.eq) goto loc_8248B094;
loc_8248B208:
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8248b21c
	if (ctx.cr6.eq) goto loc_8248B21C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r6,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r6.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8248B21C:
	// lwz r28,12(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x8248b068
	if (ctx.cr6.lt) goto loc_8248B068;
loc_8248B230:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248affc
	if (ctx.cr6.lt) goto loc_8248AFFC;
loc_8248B244:
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,372(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8248b26c
	if (ctx.cr6.eq) goto loc_8248B26C;
	// li r14,0
	r14.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r15,1
	r15.s64 = 1;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// bl 0x82481098
	ctx.lr = 0x8248B268;
	sub_82481098(ctx, base);
	// b 0x8248b270
	goto loc_8248B270;
loc_8248B26C:
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8248B270:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248b6a4
	if (!ctx.cr6.gt) goto loc_8248B6A4;
	// li r19,0
	r19.s64 = 0;
loc_8248B284:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwzx r5,r11,r19
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b690
	if (ctx.cr0.eq) goto loc_8248B690;
	// lwz r21,12(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8248b2c4
	if (ctx.cr6.eq) goto loc_8248B2C4;
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248b690
	if (!ctx.cr0.eq) goto loc_8248B690;
loc_8248B2C4:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bne cr6,0x8248b690
	if (!ctx.cr6.eq) goto loc_8248B690;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8248b690
	if (ctx.cr6.eq) goto loc_8248B690;
	// li r20,0
	r20.s64 = 0;
loc_8248B2DC:
	// lwz r23,8(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r31,20(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r26,16(r17)
	r26.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwzx r6,r23,r20
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + r20.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b67c
	if (ctx.cr0.eq) goto loc_8248B67C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248b67c
	if (!ctx.cr6.eq) goto loc_8248B67C;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r22,24(r17)
	r22.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248b35c
	if (ctx.cr6.eq) goto loc_8248B35C;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8248B340:
	// lwzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8248b35c
	if (ctx.cr6.eq) goto loc_8248B35C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8248b340
	if (ctx.cr6.lt) goto loc_8248B340;
loc_8248B35C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r7,4112
	ctx.r7.s64 = 269484032;
	// rlwinm r24,r8,0,0,11
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8248b378
	if (!ctx.cr6.eq) goto loc_8248B378;
	// li r25,1
	r25.s64 = 1;
	// b 0x8248b388
	goto loc_8248B388;
loc_8248B378:
	// lis r8,8272
	ctx.r8.s64 = 542113792;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8248b67c
	if (!ctx.cr6.eq) goto loc_8248B67C;
	// li r25,2
	r25.s64 = 2;
loc_8248B388:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248b67c
	if (ctx.cr6.eq) goto loc_8248B67C;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r28,r10,-4
	r28.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(-4));
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8248B3B4:
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bne cr6,0x8248b408
	if (!ctx.cr6.eq) goto loc_8248B408;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b590
	if (ctx.cr0.eq) goto loc_8248B590;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248b590
	if (!ctx.cr6.eq) goto loc_8248B590;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8248b590
	if (!ctx.cr6.lt) goto loc_8248B590;
loc_8248B408:
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8248b464
	if (!ctx.cr6.eq) goto loc_8248B464;
	// add r11,r21,r30
	ctx.r11.u64 = r21.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8248b464
	if (ctx.cr0.eq) goto loc_8248B464;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x8248b464
	if (!ctx.cr6.eq) goto loc_8248B464;
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x8248b5a8
	if (ctx.cr6.eq) goto loc_8248B5A8;
loc_8248B464:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b590
	if (ctx.cr0.eq) goto loc_8248B590;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248b590
	if (!ctx.cr6.eq) goto loc_8248B590;
	// lwz r11,72(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bne cr6,0x8248b590
	if (!ctx.cr6.eq) goto loc_8248B590;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8248b4d8
	if (ctx.cr6.eq) goto loc_8248B4D8;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248B4BC:
	// lwzx r14,r11,r7
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r14,r8
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8248b4d8
	if (ctx.cr6.eq) goto loc_8248B4D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8248b4bc
	if (ctx.cr6.lt) goto loc_8248B4BC;
loc_8248B4D8:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b520
	if (ctx.cr0.eq) goto loc_8248B520;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8248b554
	goto loc_8248B554;
loc_8248B520:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b590
	if (ctx.cr0.eq) goto loc_8248B590;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8248b590
	if (!ctx.cr6.eq) goto loc_8248B590;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8248b590
	if (!ctx.cr6.gt) goto loc_8248B590;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8248B554:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248b5e8
	if (!ctx.cr0.eq) goto loc_8248B5E8;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b590
	if (ctx.cr0.eq) goto loc_8248B590;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248b590
	if (!ctx.cr6.eq) goto loc_8248B590;
	// lfd f0,32(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x8248b5f0
	if (ctx.cr6.gt) goto loc_8248B5F0;
loc_8248B590:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x8248b3b4
	if (ctx.cr6.lt) goto loc_8248B3B4;
	// b 0x8248b678
	goto loc_8248B678;
loc_8248B5A8:
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// li r14,1
	r14.s64 = 1;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// stwx r8,r20,r10
	REX_STORE_U32(r20.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x8248b67c
	goto loc_8248B67C;
loc_8248B5E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B5F0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8248B5F4:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stwx r9,r20,r4
	REX_STORE_U32(r20.u32 + ctx.r4.u32, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bne cr6,0x8248b638
	if (!ctx.cr6.eq) goto loc_8248B638;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8248B638:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// beq cr6,0x8248b658
	if (ctx.cr6.eq) goto loc_8248B658;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8248B658:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8248B678:
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8248B67C:
	// lwz r21,12(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// blt cr6,0x8248b2dc
	if (ctx.cr6.lt) goto loc_8248B2DC;
loc_8248B690:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248b284
	if (ctx.cr6.lt) goto loc_8248B284;
loc_8248B6A4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8248b6c0
	if (ctx.cr6.eq) goto loc_8248B6C0;
	// li r14,0
	r14.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r15,1
	r15.s64 = 1;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// bl 0x82481098
	ctx.lr = 0x8248B6C0;
	sub_82481098(ctx, base);
loc_8248B6C0:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248bb7c
	if (!ctx.cr6.gt) goto loc_8248BB7C;
	// li r25,0
	r25.s64 = 0;
	// li r23,-1
	r23.s64 = -1;
loc_8248B6D8:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwzx r28,r11,r25
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bb68
	if (ctx.cr0.eq) goto loc_8248BB68;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248b718
	if (ctx.cr6.eq) goto loc_8248B718;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248bb68
	if (!ctx.cr0.eq) goto loc_8248BB68;
loc_8248B718:
	// lis r10,4176
	ctx.r10.s64 = 273678336;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248bb68
	if (!ctx.cr6.eq) goto loc_8248BB68;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248bb68
	if (!ctx.cr6.gt) goto loc_8248BB68;
	// li r30,0
	r30.s64 = 0;
loc_8248B740:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r9,16(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b960
	if (ctx.cr0.eq) goto loc_8248B960;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248b960
	if (!ctx.cr6.eq) goto loc_8248B960;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// lwz r9,24(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248b960
	if (!ctx.cr6.eq) goto loc_8248B960;
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248b7d4
	if (ctx.cr6.eq) goto loc_8248B7D4;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248B7B8:
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8248b7d4
	if (ctx.cr6.eq) goto loc_8248B7D4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b7b8
	if (ctx.cr6.lt) goto loc_8248B7B8;
loc_8248B7D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,1
	r31.s64 = 1;
loc_8248B7DC:
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r8,16(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 16);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b950
	if (ctx.cr0.eq) goto loc_8248B950;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8248b950
	if (!ctx.cr6.eq) goto loc_8248B950;
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lis r8,4192
	ctx.r8.s64 = 274726912;
	// lwz r6,24(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8248b950
	if (!ctx.cr6.eq) goto loc_8248B950;
	// lwz r9,92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8248b8c0
	if (!ctx.cr6.eq) goto loc_8248B8C0;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// rlwinm. r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b888
	if (ctx.cr0.eq) goto loc_8248B888;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// b 0x8248b8a4
	goto loc_8248B8A4;
loc_8248B888:
	// rlwinm. r8,r10,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b898
	if (ctx.cr0.eq) goto loc_8248B898;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x8248b8a4
	goto loc_8248B8A4;
loc_8248B898:
	// rlwinm. r8,r10,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248b8a4
	if (ctx.cr0.eq) goto loc_8248B8A4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
loc_8248B8A4:
	// rlwinm r8,r9,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248b8c0
	if (ctx.cr6.eq) goto loc_8248B8C0;
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// li r14,1
	r14.s64 = 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8248B8C0:
	// lwz r11,108(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 108);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b950
	if (ctx.cr0.eq) goto loc_8248B950;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8248b950
	if (!ctx.cr6.eq) goto loc_8248B950;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b950
	if (ctx.cr0.eq) goto loc_8248B950;
	// lwz r8,12(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8248b92c
	if (ctx.cr6.eq) goto loc_8248B92C;
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248B910:
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8248b92c
	if (ctx.cr6.eq) goto loc_8248B92C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248b910
	if (ctx.cr6.lt) goto loc_8248B910;
loc_8248B92C:
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mullw r11,r31,r10
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r27,r9,r8
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r10
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8248B950:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8248b7dc
	if (ctx.cr6.lt) goto loc_8248B7DC;
loc_8248B960:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248b740
	if (ctx.cr6.lt) goto loc_8248B740;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x8248bb68
	if (ctx.cr6.eq) goto loc_8248BB68;
	// lis r4,20496
	ctx.r4.s64 = 1343225856;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824787f8
	ctx.lr = 0x8248B998;
	sub_824787F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248bd00
	if (ctx.cr6.eq) goto loc_8248BD00;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824787f8
	ctx.lr = 0x8248B9BC;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248bd00
	if (ctx.cr6.eq) goto loc_8248BD00;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r9,r11
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x8248B9E4;
	sub_82477420(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477420
	ctx.lr = 0x8248B9F0;
	sub_82477420(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
loc_8248BA14:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248BA2C;
	sub_82478758(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x8248bd00
	if (ctx.cr6.eq) goto loc_8248BD00;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
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
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8248ba14
	if (ctx.cr6.lt) goto loc_8248BA14;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82130e88
	ctx.lr = 0x8248BB00;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x8248BB08;
	sub_82477B20(ctx, base);
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r17)
	REX_STORE_U32(r17.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// ble cr6,0x8248bb44
	if (!ctx.cr6.gt) goto loc_8248BB44;
	// subf r9,r24,r10
	ctx.r9.u64 = ctx.r10.u64 - r24.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8248BB2C:
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x8248bb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248BB2C;
loc_8248BB44:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stwx r31,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r31.u32);
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// bl 0x82481098
	ctx.lr = 0x8248BB60;
	sub_82481098(ctx, base);
	// li r14,1
	r14.s64 = 1;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
loc_8248BB68:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248b6d8
	if (ctx.cr6.lt) goto loc_8248B6D8;
loc_8248BB7C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8248bb98
	if (ctx.cr6.eq) goto loc_8248BB98;
	// li r14,0
	r14.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r15,1
	r15.s64 = 1;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// bl 0x82481098
	ctx.lr = 0x8248BB98;
	sub_82481098(ctx, base);
loc_8248BB98:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248bd54
	if (!ctx.cr6.gt) goto loc_8248BD54;
	// li r28,0
	r28.s64 = 0;
loc_8248BBAC:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwzx r30,r28,r11
	r30.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bd3c
	if (ctx.cr0.eq) goto loc_8248BD3C;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248bbec
	if (ctx.cr6.eq) goto loc_8248BBEC;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248bd3c
	if (!ctx.cr0.eq) goto loc_8248BD3C;
loc_8248BBEC:
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248bd3c
	if (!ctx.cr6.eq) goto loc_8248BD3C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248bd3c
	if (!ctx.cr6.gt) goto loc_8248BD3C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248BC0C:
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r5,20(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r4,16(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248bd28
	if (ctx.cr0.eq) goto loc_8248BD28;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248bd28
	if (!ctx.cr6.eq) goto loc_8248BD28;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// lwz r9,24(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 24);
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
	// bne cr6,0x8248bd28
	if (!ctx.cr6.eq) goto loc_8248BD28;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8248bca0
	if (ctx.cr6.eq) goto loc_8248BCA0;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248BC84:
	// lwzx r26,r9,r10
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8248bca0
	if (ctx.cr6.eq) goto loc_8248BCA0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8248bc84
	if (ctx.cr6.lt) goto loc_8248BC84;
loc_8248BCA0:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248BCA8:
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8248bcf0
	if (ctx.cr0.eq) goto loc_8248BCF0;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r6,r6,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8248bcf0
	if (ctx.cr0.eq) goto loc_8248BCF0;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248bd0c
	if (ctx.cr6.eq) goto loc_8248BD0C;
loc_8248BCF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8248bca8
	if (ctx.cr6.lt) goto loc_8248BCA8;
	// b 0x8248bd28
	goto loc_8248BD28;
loc_8248BD00:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8248c8c0
	goto loc_8248C8C0;
loc_8248BD0C:
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r14,1
	r14.s64 = 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r3,r31
	REX_STORE_U32(ctx.r3.u32 + r31.u32, ctx.r11.u32);
loc_8248BD28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248bc0c
	if (ctx.cr6.lt) goto loc_8248BC0C;
loc_8248BD3C:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248bbac
	if (ctx.cr6.lt) goto loc_8248BBAC;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
loc_8248BD54:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x8248c898
	if (!ctx.cr6.eq) goto loc_8248C898;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x8248c898
	if (!ctx.cr6.eq) goto loc_8248C898;
	// lwz r19,12(r17)
	r19.u64 = REX_LOAD_U32(r17.u32 + 12);
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,88(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8248c850
	if (ctx.cr6.eq) goto loc_8248C850;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r15,104(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r16,108(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r24,-1
	r24.s64 = -1;
	// lfd f28,8312(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// lfd f29,4296(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// lfd f31,3728(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
loc_8248BDA0:
	// addi r19,r19,-1
	r19.s64 = r19.s64 + -1;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r18,r19,2,0,29
	r18.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r18,r11
	r23.u64 = REX_LOAD_U32(r18.u32 + ctx.r11.u32);
	// lwz r30,12(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248bddc
	if (ctx.cr6.eq) goto loc_8248BDDC;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248c840
	if (!ctx.cr0.eq) goto loc_8248C840;
loc_8248BDDC:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248bdfc
	if (ctx.cr6.eq) goto loc_8248BDFC;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248c23c
	if (!ctx.cr6.eq) goto loc_8248C23C;
loc_8248BDFC:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// ble cr6,0x8248be54
	if (!ctx.cr6.gt) goto loc_8248BE54;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// mr r14,r30
	r14.u64 = r30.u64;
	// bgt cr6,0x8248be14
	if (ctx.cr6.gt) goto loc_8248BE14;
	// li r14,16
	r14.s64 = 16;
loc_8248BE14:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x8248BE20;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r14,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8248BE2C;
	sub_823F02B8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8248c88c
	if (ctx.cr0.eq) goto loc_8248C88C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8248BE40;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r14,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x8248BE4C;
	sub_823F02B8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8248c88c
	if (ctx.cr0.eq) goto loc_8248C88C;
loc_8248BE54:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248bec0
	if (ctx.cr6.eq) goto loc_8248BEC0;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8248BE6C:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r29.u32 + 0, f31.u64);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x82479a28
	ctx.lr = 0x8248BE8C;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8248bec0
	if (ctx.cr0.lt) goto loc_8248BEC0;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248bec0
	if (ctx.cr6.eq) goto loc_8248BEC0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// blt cr6,0x8248be6c
	if (ctx.cr6.lt) goto loc_8248BE6C;
loc_8248BEC0:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// bne cr6,0x8248c23c
	if (!ctx.cr6.eq) goto loc_8248C23C;
	// li r25,1
	r25.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248bf30
	if (ctx.cr6.eq) goto loc_8248BF30;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8248BEE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248bf04
	if (ctx.cr6.eq) goto loc_8248BF04;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,-8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8248bf04
	if (ctx.cr6.eq) goto loc_8248BF04;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248BF04:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x8248bf18
	if (ctx.cr6.lt) goto loc_8248BF18;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8248bf1c
	if (!ctx.cr6.gt) goto loc_8248BF1C;
loc_8248BF18:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8248BF1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8248bee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248BEE8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8248c0f4
	if (ctx.cr6.eq) goto loc_8248C0F4;
loc_8248BF30:
	// lfd f0,0(r21)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r21.u32 + 0);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x8248bfe8
	if (!ctx.cr6.eq) goto loc_8248BFE8;
	// clrlwi r11,r30,12
	ctx.r11.u64 = r30.u32 & 0xFFFFF;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// oris r11,r11,8256
	ctx.r11.u64 = ctx.r11.u64 | 541065216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248bf8c
	if (ctx.cr6.eq) goto loc_8248BF8C;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8248bf8c
	if (!ctx.cr6.lt) goto loc_8248BF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477a88
	ctx.lr = 0x8248BF70;
	sub_82477A88(ctx, base);
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8248c88c
	if (ctx.cr0.eq) goto loc_8248C88C;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r23)
	REX_STORE_U32(r23.u32 + 4, r31.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x826a2e60
	ctx.lr = 0x8248BF8C;
	sub_826A2E60(ctx, base);
loc_8248BF8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248c23c
	if (ctx.cr6.eq) goto loc_8248C23C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248BFA0:
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248bfbc
	if (ctx.cr6.eq) goto loc_8248BFBC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8248BFBC:
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248bfd8
	if (ctx.cr6.eq) goto loc_8248BFD8;
	// stwx r10,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8248BFD8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8248bfa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248BFA0;
	// b 0x8248c23c
	goto loc_8248C23C;
loc_8248BFE8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8248c028
	if (!ctx.cr6.eq) goto loc_8248C028;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,4(r23)
	REX_STORE_U32(r23.u32 + 4, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// rlwimi r11,r25,28,0,11
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xFFF00000) | (ctx.r11.u64 & 0xFFFFFFFF000FFFFF);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8248c08c
	if (ctx.cr6.eq) goto loc_8248C08C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248C010:
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8248c010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C010;
	// b 0x8248c08c
	goto loc_8248C08C;
loc_8248C028:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x8248c094
	if (!ctx.cr6.eq) goto loc_8248C094;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,4(r23)
	REX_STORE_U32(r23.u32 + 4, r30.u32);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(r16.s32, -1, ctx.xer);
	// rlwimi r11,r25,28,0,11
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xFFF00000) | (ctx.r11.u64 & 0xFFFFFFFF000FFFFF);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8248c06c
	if (!ctx.cr6.eq) goto loc_8248C06C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C060;
	sub_82478758(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
loc_8248C06C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248c08c
	if (ctx.cr6.eq) goto loc_8248C08C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248C07C:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stwx r16,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r16.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8248c07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C07C;
loc_8248C08C:
	// mr r26,r25
	r26.u64 = r25.u64;
	// b 0x8248c23c
	goto loc_8248C23C;
loc_8248C094:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8248c0f4
	if (!ctx.cr6.eq) goto loc_8248C0F4;
	// clrlwi r11,r30,12
	ctx.r11.u64 = r30.u32 & 0xFFFFF;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// oris r11,r11,4112
	ctx.r11.u64 = ctx.r11.u64 | 269484032;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248c0bc
	if (ctx.cr6.eq) goto loc_8248C0BC;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r30,4(r23)
	REX_STORE_U32(r23.u32 + 4, r30.u32);
loc_8248C0BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248c23c
	if (ctx.cr6.eq) goto loc_8248C23C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248C0CC:
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248c0e8
	if (ctx.cr6.eq) goto loc_8248C0E8;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8248C0E8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8248c0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C0CC;
	// b 0x8248c23c
	goto loc_8248C23C;
loc_8248C0F4:
	// lwz r11,108(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248c108
	if (ctx.cr0.eq) goto loc_8248C108;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8248c23c
	if (ctx.cr6.eq) goto loc_8248C23C;
loc_8248C108:
	// clrlwi r11,r30,12
	ctx.r11.u64 = r30.u32 & 0xFFFFF;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// oris r11,r11,8272
	ctx.r11.u64 = ctx.r11.u64 | 542113792;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248c158
	if (ctx.cr6.eq) goto loc_8248C158;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8248c158
	if (!ctx.cr6.lt) goto loc_8248C158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477a88
	ctx.lr = 0x8248C13C;
	sub_82477A88(ctx, base);
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8248c88c
	if (ctx.cr0.eq) goto loc_8248C88C;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r23)
	REX_STORE_U32(r23.u32 + 4, r31.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x826a2e60
	ctx.lr = 0x8248C158;
	sub_826A2E60(ctx, base);
loc_8248C158:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8248c23c
	if (ctx.cr6.eq) goto loc_8248C23C;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_8248C170:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r11,r31,r20
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r20.u32);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248c18c
	if (ctx.cr6.eq) goto loc_8248C18C;
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8248C18C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c1ac
	if (ctx.cr6.eq) goto loc_8248C1AC;
	// lwz r10,20(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8248c1b0
	goto loc_8248C1B0;
loc_8248C1AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248C1B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248c1f0
	if (ctx.cr6.eq) goto loc_8248C1F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248c1f0
	if (ctx.cr0.eq) goto loc_8248C1F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248c1f0
	if (!ctx.cr6.eq) goto loc_8248C1F0;
	// lfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8248c224
	if (ctx.cr6.eq) goto loc_8248C224;
loc_8248C1F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C208;
	sub_82478758(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8248C224:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// blt cr6,0x8248c170
	if (ctx.cr6.lt) goto loc_8248C170;
loc_8248C23C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8248c840
	if (!ctx.cr6.eq) goto loc_8248C840;
	// lwz r25,12(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c420
	if (ctx.cr6.eq) goto loc_8248C420;
loc_8248C268:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// add r5,r11,r20
	ctx.r5.u64 = ctx.r11.u64 + r20.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stwx r24,r11,r20
	REX_STORE_U32(ctx.r11.u32 + r20.u32, r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82479da0
	ctx.lr = 0x8248C2A4;
	sub_82479DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8248c420
	if (ctx.cr0.lt) goto loc_8248C420;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8248c2fc
	if (ctx.cr6.eq) goto loc_8248C2FC;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8248c2fc
	if (ctx.cr6.eq) goto loc_8248C2FC;
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8248c2f4
	if (ctx.cr6.lt) goto loc_8248C2F4;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x8248c2fc
	goto loc_8248C2FC;
loc_8248C2F4:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
loc_8248C2FC:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248c354
	if (ctx.cr6.eq) goto loc_8248C354;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c34c
	if (ctx.cr6.eq) goto loc_8248C34C;
	// lwz r7,20(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lfd f0,32(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 32);
	// lfd f13,32(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8248c344
	if (ctx.cr6.gt) goto loc_8248C344;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// b 0x8248c34c
	goto loc_8248C34C;
loc_8248C344:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
loc_8248C34C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248c3a0
	if (!ctx.cr6.eq) goto loc_8248C3A0;
loc_8248C354:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248c370
	if (!ctx.cr6.eq) goto loc_8248C370;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8248c370
	if (ctx.cr6.eq) goto loc_8248C370;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8248c3d8
	goto loc_8248C3D8;
loc_8248C370:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248c3a0
	if (!ctx.cr6.eq) goto loc_8248C3A0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248c3a0
	if (!ctx.cr6.eq) goto loc_8248C3A0;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8248c3a0
	if (ctx.cr6.eq) goto loc_8248C3A0;
	// lwz r8,20(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,8240
	ctx.r11.s64 = 540016640;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x8248c3e4
	goto loc_8248C3E4;
loc_8248C3A0:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8248c420
	if (!ctx.cr6.eq) goto loc_8248C420;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8248c420
	if (!ctx.cr6.eq) goto loc_8248C420;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c3c8
	if (ctx.cr6.eq) goto loc_8248C3C8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,8240
	ctx.r11.s64 = 540016640;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8248c3dc
	goto loc_8248C3DC;
loc_8248C3C8:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248c420
	if (ctx.cr6.eq) goto loc_8248C420;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248C3D8:
	// lis r11,8224
	ctx.r11.s64 = 538968064;
loc_8248C3DC:
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_8248C3E4:
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stfdx f0,r7,r21
	REX_STORE_U64(ctx.r7.u32 + r21.u32, ctx.f0.u64);
	// bne cr6,0x8248c404
	if (!ctx.cr6.eq) goto loc_8248C404;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x8248c414
	goto loc_8248C414;
loc_8248C404:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8248c420
	if (!ctx.cr6.eq) goto loc_8248C420;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bne cr6,0x8248c420
	if (!ctx.cr6.eq) goto loc_8248C420;
loc_8248C414:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x8248c268
	if (ctx.cr6.lt) goto loc_8248C268;
loc_8248C420:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x8248c840
	if (!ctx.cr6.eq) goto loc_8248C840;
	// lwz r11,108(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 108);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248c4d0
	if (!ctx.cr0.eq) goto loc_8248C4D0;
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// rlwimi r22,r25,0,12,31
	r22.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF) | (r22.u64 & 0xFFFFFFFFFFF00000);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	// stw r22,0(r23)
	REX_STORE_U32(r23.u32 + 0, r22.u32);
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r27,0
	r27.s64 = 0;
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c4c8
	if (ctx.cr6.eq) goto loc_8248C4C8;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8248C474:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// lfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 0);
	// bl 0x82478758
	ctx.lr = 0x8248C494;
	sub_82478758(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x8248c474
	if (ctx.cr6.lt) goto loc_8248C474;
loc_8248C4C8:
	// li r26,1
	r26.s64 = 1;
	// b 0x8248c840
	goto loc_8248C840;
loc_8248C4D0:
	// clrlwi r28,r25,12
	r28.u64 = r25.u32 & 0xFFFFF;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// oris r4,r28,4112
	ctx.r4.u64 = r28.u64 | 269484032;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824787f8
	ctx.lr = 0x8248C4E8;
	sub_824787F8(ctx, base);
	// rlwinm r24,r25,1,0,30
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// oris r4,r28,8256
	ctx.r4.u64 = r28.u64 | 541065216;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824787f8
	ctx.lr = 0x8248C504;
	sub_824787F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mulli r5,r25,3
	ctx.r5.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(3));
	// oris r4,r28,12288
	ctx.r4.u64 = r28.u64 | 805306368;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824787f8
	ctx.lr = 0x8248C51C;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r26,r10,r11
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r27,r9,r11
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r28,r8,r11
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x82477420
	ctx.lr = 0x8248C55C;
	sub_82477420(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477420
	ctx.lr = 0x8248C568;
	sub_82477420(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82477420
	ctx.lr = 0x8248C574;
	sub_82477420(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x8248c5e4
	if (!ctx.cr6.eq) goto loc_8248C5E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c644
	if (ctx.cr6.eq) goto loc_8248C644;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8248C590:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C5A8;
	sub_82478758(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r31,r20
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r20.u32);
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x8248c590
	if (ctx.cr6.lt) goto loc_8248C590;
	// b 0x8248c644
	goto loc_8248C644;
loc_8248C5E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c644
	if (ctx.cr6.eq) goto loc_8248C644;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8248C5F4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r10,r31,r20
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x8248C618;
	sub_82478758(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x8248c5f4
	if (ctx.cr6.lt) goto loc_8248C5F4;
loc_8248C644:
	// cmpwi cr6,r15,-1
	ctx.cr6.compare<int32_t>(r15.s32, -1, ctx.xer);
	// bne cr6,0x8248c670
	if (!ctx.cr6.eq) goto loc_8248C670;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C664;
	sub_82478758(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
loc_8248C670:
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(r16.s32, -1, ctx.xer);
	// bne cr6,0x8248c69c
	if (!ctx.cr6.eq) goto loc_8248C69C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C690;
	sub_82478758(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
loc_8248C69C:
	// lis r11,8240
	ctx.r11.s64 = 540016640;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8248c6e4
	if (!ctx.cr6.eq) goto loc_8248C6E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c718
	if (ctx.cr6.eq) goto loc_8248C718;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248C6BC:
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r15.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stwx r16,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r16.u32);
	// bdnz 0x8248c6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C6BC;
	// b 0x8248c718
	goto loc_8248C718;
loc_8248C6E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c718
	if (ctx.cr6.eq) goto loc_8248C718;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248C6F4:
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r16.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stwx r15,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r15.u32);
	// bdnz 0x8248c6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C6F4;
loc_8248C718:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8248c7c8
	if (ctx.cr6.eq) goto loc_8248C7C8;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248C72C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82478758
	ctx.lr = 0x8248C744;
	sub_82478758(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,136(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 136);
	// bl 0x82478758
	ctx.lr = 0x8248C764;
	sub_82478758(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248c88c
	if (ctx.cr6.eq) goto loc_8248C88C;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// blt cr6,0x8248c72c
	if (ctx.cr6.lt) goto loc_8248C72C;
loc_8248C7C8:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// ble cr6,0x8248c7fc
	if (!ctx.cr6.gt) goto loc_8248C7FC;
	// subf r10,r19,r11
	ctx.r10.u64 = ctx.r11.u64 - r19.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8248C7E4:
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bdnz 0x8248c7e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248C7E4;
loc_8248C7FC:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// addi r10,r19,2
	ctx.r10.s64 = r19.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r18,r11
	ctx.r11.u64 = r18.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r9,r19,3
	ctx.r9.s64 = r19.s64 + 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// li r24,-1
	r24.s64 = -1;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// stwx r27,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r27.u32);
	// stw r8,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r8.u32);
loc_8248C840:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x8248bda0
	if (!ctx.cr6.eq) goto loc_8248BDA0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8248c880
	if (!ctx.cr6.eq) goto loc_8248C880;
loc_8248C850:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82482568
	ctx.lr = 0x8248C858;
	sub_82482568(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8248c8a4
	if (ctx.cr0.lt) goto loc_8248C8A4;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8247d160
	ctx.lr = 0x8248C868;
	sub_8247D160(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8248c8a4
	if (ctx.cr0.lt) goto loc_8248C8A4;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824856b0
	ctx.lr = 0x8248C878;
	sub_824856B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8248c8a4
	if (ctx.cr0.lt) goto loc_8248C8A4;
loc_8248C880:
	// cntlzw r11,r26
	ctx.r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8248c8a4
	goto loc_8248C8A4;
loc_8248C88C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8248c8a4
	goto loc_8248C8A4;
loc_8248C898:
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r31,0
	r31.s64 = 0;
	// lwz r21,88(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8248C8A4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x8248C8B0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8248C8BC;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248C8C0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8248C8CC;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825A3FF0) {
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
	ctx.lr = 0x825A3FF8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-10504
	r26.s64 = ctx.r10.s64 + -10504;
	// bne cr6,0x825a4044
	if (!ctx.cr6.eq) goto loc_825A4044;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-10512
	ctx.r5.s64 = ctx.r11.s64 + -10512;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,371
	ctx.r7.s64 = 371;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4044;
	sub_824EA978(ctx, base);
loc_825A4044:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825a4068
	if (!ctx.cr6.eq) goto loc_825A4068;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-10296
	ctx.r5.s64 = ctx.r11.s64 + -10296;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4068;
	sub_824EA978(ctx, base);
loc_825A4068:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825a408c
	if (!ctx.cr6.eq) goto loc_825A408C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-10304
	ctx.r5.s64 = ctx.r11.s64 + -10304;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,373
	ctx.r7.s64 = 373;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A408C;
	sub_824EA978(ctx, base);
loc_825A408C:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a1088
	ctx.lr = 0x825A4098;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a41ec
	if (ctx.cr0.eq) goto loc_825A41EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f01a0
	ctx.lr = 0x825A40A8;
	sub_824F01A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f01a0
	ctx.lr = 0x825A40B0;
	sub_824F01A0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x825a27b8
	ctx.lr = 0x825A40B8;
	sub_825A27B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825a40f4
	if (!ctx.cr0.eq) goto loc_825A40F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-10376
	ctx.r5.s64 = ctx.r11.s64 + -10376;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A40DC;
	sub_824EA978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824effc8
	ctx.lr = 0x825A40E4;
	sub_824EFFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824effc8
	ctx.lr = 0x825A40EC;
	sub_824EFFC8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x825a41f0
	goto loc_825A41F0;
loc_825A40F4:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,4(r28)
	REX_STORE_U32(r28.u32 + 4, r29.u32);
	// bl 0x824f03b8
	ctx.lr = 0x825A4104;
	sub_824F03B8(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f03b8
	ctx.lr = 0x825A4110;
	sub_824F03B8(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825d6920
	ctx.lr = 0x825A4128;
	sub_825D6920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a4140
	if (ctx.cr0.eq) goto loc_825A4140;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825d69e0
	ctx.lr = 0x825A4138;
	sub_825D69E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825a4198
	goto loc_825A4198;
loc_825A4140:
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824efce0
	ctx.lr = 0x825A4154;
	sub_824EFCE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825a4178
	if (!ctx.cr0.eq) goto loc_825A4178;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-10400
	ctx.r5.s64 = ctx.r11.s64 + -10400;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4178;
	sub_824EA978(ctx, base);
loc_825A4178:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x824ef768
	ctx.lr = 0x825A4184;
	sub_824EF768(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825d6b60
	ctx.lr = 0x825A4198;
	sub_825D6B60(ctx, base);
loc_825A4198:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef610
	ctx.lr = 0x825A41A4;
	sub_824EF610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef4f0
	ctx.lr = 0x825A41AC;
	sub_824EF4F0(ctx, base);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// ble cr6,0x825a41ec
	if (!ctx.cr6.gt) goto loc_825A41EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef970
	ctx.lr = 0x825A41BC;
	sub_824EF970(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824efba8
	ctx.lr = 0x825A41C4;
	sub_824EFBA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824effc8
	ctx.lr = 0x825A41D0;
	sub_824EFFC8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x824effc8
	ctx.lr = 0x825A41D8;
	sub_824EFFC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x825a28c0
	ctx.lr = 0x825A41E4;
	sub_825A28C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efb70
	ctx.lr = 0x825A41EC;
	sub_824EFB70(ctx, base);
loc_825A41EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A41F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B32D0) {
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
	// lwz r3,2736(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2736);
	// bl 0x825d79a0
	ctx.lr = 0x825B32EC;
	sub_825D79A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_825B3610) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x824f0eb0
	sub_824F0EB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B3618) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r11,1380(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3630
	if (ctx.cr0.eq) goto loc_825B3630;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x824f0eb0
	sub_824F0EB0(ctx, base);
	return;
loc_825B3630:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x824f0eb0
	sub_824F0EB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B3968) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B3970;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1504);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r11,1500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1500);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,1496(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1496);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,1504(r3)
	REX_STORE_U32(ctx.r3.u32 + 1504, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r6,r9,-4248
	ctx.r6.s64 = ctx.r9.s64 + -4248;
	// addi r5,r8,28576
	ctx.r5.s64 = ctx.r8.s64 + 28576;
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1a58
	ctx.lr = 0x825B39B0;
	sub_826A1A58(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// lwz r10,1496(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1496);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r11.u32);
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8269d1a8
	ctx.lr = 0x825B39D4;
	sub_8269D1A8(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r11.u32);
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// blt cr6,0x825b3a0c
	if (ctx.cr6.lt) goto loc_825B3A0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-4368
	ctx.r6.s64 = ctx.r11.s64 + -4368;
	// addi r5,r10,-4280
	ctx.r5.s64 = ctx.r10.s64 + -4280;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1585
	ctx.r7.s64 = 1585;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B3A0C;
	sub_824EA978(ctx, base);
loc_825B3A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B69E8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b6a14
	if (ctx.cr6.eq) goto loc_825B6A14;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b6a38
	goto loc_825B6A38;
loc_825B6A14:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-2432
	ctx.r6.s64 = ctx.r11.s64 + -2432;
	// addi r5,r10,-2240
	ctx.r5.s64 = ctx.r10.s64 + -2240;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6A38;
	sub_824EA978(ctx, base);
loc_825B6A38:
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

DEFINE_REX_FUNC(sub_825B7878) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x825b7894
	if (ctx.cr6.lt) goto loc_825B7894;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825b7898
	if (!ctx.cr6.gt) goto loc_825B7898;
loc_825B7894:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B7898:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b78a8
	if (ctx.cr0.eq) goto loc_825B78A8;
loc_825B78A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825B78A8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825b78c8
	if (ctx.cr6.lt) goto loc_825B78C8;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// ble cr6,0x825b78a0
	if (!ctx.cr6.gt) goto loc_825B78A0;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ble cr6,0x825b78c8
	if (!ctx.cr6.gt) goto loc_825B78C8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x825b78a0
	if (!ctx.cr6.gt) goto loc_825B78A0;
loc_825B78C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B8570) {
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
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b85ac
	if (!ctx.cr0.eq) goto loc_825B85AC;
	// li r31,0
	r31.s64 = 0;
	// b 0x825b85c0
	goto loc_825B85C0;
loc_825B85AC:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r11,30
	r31.u64 = ctx.r11.u32 & 0x3;
loc_825B85C0:
	// bl 0x8254fa20
	ctx.lr = 0x825B85C4;
	sub_8254FA20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825b8348
	ctx.lr = 0x825B85D0;
	sub_825B8348(ctx, base);
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

DEFINE_REX_FUNC(sub_825BB770) {
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
	ctx.lr = 0x825BB778;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r10,r11,-104
	ctx.r10.s64 = ctx.r11.s64 + -104;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x825bb1e0
	ctx.lr = 0x825BB7B0;
	sub_825BB1E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825BB7C8;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwimi r28,r11,14,16,17
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (r28.u64 & 0xFFFFFFFFFFFF3FFF);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r9,r28,15,1,16
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0x7FFF8000) | (ctx.r9.u64 & 0xFFFFFFFF80007FFF);
	// rlwimi r8,r27,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r9,r29,0,17,31
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7FFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF8000);
	// oris r8,r8,16
	ctx.r8.u64 = ctx.r8.u64 | 1048576;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// beq cr6,0x825bb840
	if (ctx.cr6.eq) goto loc_825BB840;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825bb828
	if (ctx.cr6.eq) goto loc_825BB828;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825bb858
	if (!ctx.cr6.eq) goto loc_825BB858;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x825bb858
	if (ctx.cr6.eq) goto loc_825BB858;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
	// b 0x825bb854
	goto loc_825BB854;
loc_825BB828:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x825bb858
	if (ctx.cr6.eq) goto loc_825BB858;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x825bb854
	goto loc_825BB854;
loc_825BB840:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x825bb858
	if (ctx.cr6.eq) goto loc_825BB858;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
loc_825BB854:
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
loc_825BB858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825C2288) {
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
	ctx.lr = 0x825C2290;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825c22c0
	if (!ctx.cr6.eq) goto loc_825C22C0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c2504
	if (!ctx.cr0.eq) goto loc_825C2504;
loc_825C22C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825c22e4
	if (ctx.cr6.eq) goto loc_825C22E4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825297d0
	ctx.lr = 0x825C22D8;
	sub_825297D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ba910
	ctx.lr = 0x825C22E4;
	sub_825BA910(ctx, base);
loc_825C22E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2394
	if (ctx.cr0.eq) goto loc_825C2394;
loc_825C22F0:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_825C22F4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825c235c
	if (ctx.cr6.eq) goto loc_825C235C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c2314
	if (!ctx.cr0.eq) goto loc_825C2314;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c2318
	if (ctx.cr0.eq) goto loc_825C2318;
loc_825C2314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C2318:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c232c
	if (ctx.cr0.eq) goto loc_825C232C;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825c2330
	if (!ctx.cr0.eq) goto loc_825C2330;
loc_825C232C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C2330:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c2340
	if (!ctx.cr0.eq) goto loc_825C2340;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825c22f4
	goto loc_825C22F4;
loc_825C2340:
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825c6a50
	ctx.lr = 0x825C2358;
	sub_825C6A50(ctx, base);
	// b 0x825c22f0
	goto loc_825C22F0;
loc_825C235C:
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825C236C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x825c2380
	if (!ctx.cr6.eq) goto loc_825C2380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825C2380:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825c236c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C236C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_825C2394:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825c2400
	if (!ctx.cr6.eq) goto loc_825C2400;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c23d0
	if (ctx.cr0.eq) goto loc_825C23D0;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825C23D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r4,112
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 112, ctx.xer);
	// blt cr6,0x825c24b8
	if (ctx.cr6.lt) goto loc_825C24B8;
	// cmpwi cr6,r4,113
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 113, ctx.xer);
	// ble cr6,0x825c23f0
	if (!ctx.cr6.gt) goto loc_825C23F0;
	// cmpwi cr6,r4,125
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 125, ctx.xer);
	// bne cr6,0x825c24b8
	if (!ctx.cr6.eq) goto loc_825C24B8;
loc_825C23F0:
	// li r10,115
	ctx.r10.s64 = 115;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x825c2504
	goto loc_825C2504;
loc_825C2400:
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825c241c
	if (ctx.cr6.eq) goto loc_825C241C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C241C;
	sub_8255E698(ctx, base);
loc_825C241C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C242C;
	sub_8250B470(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825c2394
	if (ctx.cr6.eq) goto loc_825C2394;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x825c2394
	if (!ctx.cr6.eq) goto loc_825C2394;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_825C244C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c2484
	if (ctx.cr6.eq) goto loc_825C2484;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c247c
	if (ctx.cr6.eq) goto loc_825C247C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825c247c
	if (!ctx.cr6.eq) goto loc_825C247C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c2488
	if (!ctx.cr0.eq) goto loc_825C2488;
loc_825C247C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c244c
	goto loc_825C244C;
loc_825C2484:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C2488:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825c2394
	if (!ctx.cr6.eq) goto loc_825C2394;
loc_825C2490:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c2394
	if (ctx.cr6.eq) goto loc_825C2394;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825c24b0
	if (ctx.cr6.eq) goto loc_825C24B0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C24B0;
	sub_8255E698(ctx, base);
loc_825C24B0:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825c2490
	goto loc_825C2490;
loc_825C24B8:
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c24e0
	if (ctx.cr0.eq) goto loc_825C24E0;
	// li r10,115
	ctx.r10.s64 = 115;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,540(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 540);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r30,540(r28)
	REX_STORE_U32(r28.u32 + 540, r30.u32);
	// b 0x825c2504
	goto loc_825C2504;
loc_825C24E0:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825C24F0;
	sub_824F71B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// bl 0x824f7a20
	ctx.lr = 0x825C2504;
	sub_824F7A20(ctx, base);
loc_825C2504:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825CF930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ca8
	ctx.lr = 0x825CF944;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825cfc40
	if (ctx.cr6.eq) goto loc_825CFC40;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825cfc40
	if (ctx.cr6.eq) goto loc_825CFC40;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r7,136(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// ori r4,r9,75
	ctx.r4.u64 = ctx.r9.u64 | 75;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// blt cr6,0x825cfc38
	if (ctx.cr6.lt) goto loc_825CFC38;
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x825cfb80
	if (!ctx.cr6.gt) goto loc_825CFB80;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,74
	ctx.r6.u64 = ctx.r6.u64 | 74;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x825cfc38
	if (!ctx.cr6.gt) goto loc_825CFC38;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x825cfc38
	if (ctx.cr6.gt) goto loc_825CFC38;
	// lwz r8,140(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825cfc38
	if (!ctx.cr6.lt) goto loc_825CFC38;
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f6,20324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20324);
	ctx.f6.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfs f7,20320(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20320);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,20316(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20316);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f9,20312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20308(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,3720(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20300(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20296(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20296);
	ctx.f13.f64 = double(temp.f32);
loc_825CFA34:
	// lfs f5,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f31,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fmuls f29,f31,f12
	f29.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f28,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmadds f5,f2,f12,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmsubs f3,f31,f10,f3
	ctx.f3.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fmadds f2,f31,f7,f1
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f1,f28,f13,f29
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, f29.f64)));
	// fmadds f5,f30,f13,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, ctx.f5.f64)));
	// fnmsubs f3,f28,f8,f3
	ctx.f3.f64 = double(float(-std::fma(f28.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fmsubs f2,f28,f10,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f10.f64, -ctx.f2.f64)));
	// fmadds f4,f4,f11,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f1.f64)));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// stfd f3,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f3.u64);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r8,-60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f5,f4
	ctx.f5.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f5,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f5.u64);
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addic. r6,r6,16
	ctx.xer.ca = ctx.r6.u32 > 4294967279;
	ctx.r6.s64 = ctx.r6.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r7,128
	ctx.r9.s64 = ctx.r7.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bge 0x825cfad8
	if (!ctx.cr0.lt) goto loc_825CFAD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825cfae4
	goto loc_825CFAE4;
loc_825CFAD8:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// ble cr6,0x825cfae4
	if (!ctx.cr6.gt) goto loc_825CFAE4;
	// li r6,255
	ctx.r6.s64 = 255;
loc_825CFAE4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x825cfaf4
	if (!ctx.cr6.lt) goto loc_825CFAF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x825cfb00
	goto loc_825CFB00;
loc_825CFAF4:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x825cfb00
	if (!ctx.cr6.gt) goto loc_825CFB00;
	// li r5,255
	ctx.r5.s64 = 255;
loc_825CFB00:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x825cfb10
	if (!ctx.cr6.lt) goto loc_825CFB10;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x825cfb1c
	goto loc_825CFB1C;
loc_825CFB10:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x825cfb1c
	if (!ctx.cr6.gt) goto loc_825CFB1C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_825CFB1C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x825cfb2c
	if (!ctx.cr6.lt) goto loc_825CFB2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825cfb38
	goto loc_825CFB38;
loc_825CFB2C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x825cfb38
	if (!ctx.cr6.gt) goto loc_825CFB38;
	// li r9,255
	ctx.r9.s64 = 255;
loc_825CFB38:
	// lwz r7,172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r31,168(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r6,r31
	ctx.r7.u64 = r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r31.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// lwz r7,172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r8,168(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// slw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// sthu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r4.u32 = ea;
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825cfa34
	if (ctx.cr6.lt) goto loc_825CFA34;
	// b 0x825cfc38
	goto loc_825CFC38;
loc_825CFB80:
	// lwz r6,140(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825cfc38
	if (!ctx.cr6.lt) goto loc_825CFC38;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// lfs f13,20204(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_825CFBA8:
	// lfs f12,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,168(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lfs f11,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// lwz r6,172(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r4,-52(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r7,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// lfs f11,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// lwz r6,168(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r7,172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sthu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825cfba8
	if (ctx.cr6.lt) goto loc_825CFBA8;
loc_825CFC38:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
loc_825CFC40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cf4
	ctx.lr = 0x825CFC4C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E9488) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r9.u32);
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,2136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825E94B0:
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x825e94e4
	if (ctx.cr0.gt) goto loc_825E94E4;
	// lwz r11,2080(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2080);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e94e0
	if (!ctx.cr6.gt) goto loc_825E94E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825E94E0:
	// stw r11,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r11.u32);
loc_825E94E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825e94b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E94B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825ED970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825ED978;
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
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,15448
	r28.s64 = ctx.r10.s64 + 15448;
	// bne 0x825ed9c8
	if (!ctx.cr0.eq) goto loc_825ED9C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16084
	ctx.r5.s64 = ctx.r11.s64 + 16084;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,213
	ctx.r7.s64 = 213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ED9C8;
	sub_824EA978(ctx, base);
loc_825ED9C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED9DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eda00
	if (!ctx.cr0.eq) goto loc_825EDA00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16064
	ctx.r5.s64 = ctx.r11.s64 + 16064;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EDA00;
	sub_824EA978(ctx, base);
loc_825EDA00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa6a0
	ctx.lr = 0x825EDA08;
	sub_825FA6A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fa6a0
	ctx.lr = 0x825EDA14;
	sub_825FA6A0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825eda40
	if (!ctx.cr6.eq) goto loc_825EDA40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825eda40
	if (ctx.cr6.eq) goto loc_825EDA40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eda40
	if (ctx.cr6.eq) goto loc_825EDA40;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825eda44
	if (ctx.cr6.eq) goto loc_825EDA44;
loc_825EDA40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EDA44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F48C8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x825f4924
	if (ctx.cr6.gt) goto loc_825F4924;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,19176
	ctx.r12.s64 = ctx.r12.s64 + 19176;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32161
	ctx.r12.s64 = -2107703296;
	// nop 
	// addi r12,r12,18684
	ctx.r12.s64 = ctx.r12.s64 + 18684;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825F48FC;
	case 1:
		goto loc_825F4904;
	case 2:
		goto loc_825F4904;
	case 3:
		goto loc_825F4904;
	case 4:
		goto loc_825F490C;
	case 5:
		goto loc_825F490C;
	case 6:
		goto loc_825F48FC;
	case 7:
		goto loc_825F48FC;
	case 8:
		goto loc_825F4904;
	case 9:
		goto loc_825F4924;
	case 10:
		goto loc_825F4924;
	case 11:
		goto loc_825F4924;
	case 12:
		goto loc_825F490C;
	case 13:
		goto loc_825F4904;
	case 14:
		goto loc_825F490C;
	case 15:
		goto loc_825F490C;
	case 16:
		goto loc_825F4924;
	case 17:
		goto loc_825F4924;
	case 18:
		goto loc_825F4924;
	case 19:
		goto loc_825F4924;
	case 20:
		goto loc_825F4924;
	case 21:
		goto loc_825F4924;
	case 22:
		goto loc_825F4904;
	case 23:
		goto loc_825F490C;
	case 24:
		goto loc_825F4914;
	case 25:
		goto loc_825F4924;
	case 26:
		goto loc_825F4924;
	case 27:
		goto loc_825F4924;
	case 28:
		goto loc_825F4904;
	case 29:
		goto loc_825F490C;
	case 30:
		goto loc_825F4914;
	case 31:
		goto loc_825F4924;
	case 32:
		goto loc_825F4924;
	case 33:
		goto loc_825F4924;
	case 34:
		goto loc_825F490C;
	case 35:
		goto loc_825F4914;
	case 36:
		goto loc_825F491C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825F48FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825F4904:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_825F490C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_825F4914:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_825F491C:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_825F4924:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7108) {
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
	// bl 0x825f6338
	ctx.lr = 0x825F7120;
	sub_825F6338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f7138
	if (ctx.cr0.lt) goto loc_825F7138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6600
	ctx.lr = 0x825F7130;
	sub_825F6600(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_825F7138:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x825f7150
	if (ctx.cr6.lt) goto loc_825F7150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f5488
	ctx.lr = 0x825F7148;
	sub_825F5488(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_825F7150:
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

DEFINE_REX_FUNC(sub_825F7EA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825F7EA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F7ECC;
	sub_825B33A0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825f7eec
	if (ctx.cr0.eq) goto loc_825F7EEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x825f7ef0
	goto loc_825F7EF0;
loc_825F7EEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F7EF0:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F8CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F8CE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x825f7fb8
	ctx.lr = 0x825F8CFC;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,28736
	ctx.r11.s64 = ctx.r11.s64 + 28736;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x825e9338
	ctx.lr = 0x825F8D14;
	sub_825E9338(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r11,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r11.u8);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F9F38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F9F40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// blt cr6,0x825f9f7c
	if (ctx.cr6.lt) goto loc_825F9F7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,30240
	ctx.r6.s64 = ctx.r11.s64 + 30240;
	// addi r5,r10,30492
	ctx.r5.s64 = ctx.r10.s64 + 30492;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9F7C;
	sub_824EA978(ctx, base);
loc_825F9F7C:
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r9,r31,14
	ctx.r9.s64 = r31.s64 + 14;
	// addi r8,r31,7
	ctx.r8.s64 = r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r11.u32);
	// stwx r29,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FB3A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FB3B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB3C4;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r29,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, r29.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r30,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r8,-32592
	ctx.r8.s64 = ctx.r8.s64 + -32592;
	// stb r11,176(r3)
	REX_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// lwz r10,30220(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 30220);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r7,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD4B8) {
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
	// beq cr6,0x825fd4e4
	if (ctx.cr6.eq) goto loc_825FD4E4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825fd508
	if (!ctx.cr6.eq) goto loc_825FD508;
loc_825FD4E4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-31120
	ctx.r6.s64 = ctx.r11.s64 + -31120;
	// addi r5,r10,-30948
	ctx.r5.s64 = ctx.r10.s64 + -30948;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FD508;
	sub_824EA978(ctx, base);
loc_825FD508:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FD514;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FD524;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_82608258) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82608260;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8260828c
	if (!ctx.cr6.lt) goto loc_8260828C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608298
	goto loc_82608298;
loc_8260828C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608294;
	sub_825F7718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82608298:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826082b8
	if (!ctx.cr6.lt) goto loc_826082B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x826082c0
	goto loc_826082C0;
loc_826082B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826082C0;
	sub_825F7718(ctx, base);
loc_826082C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x826082D0;
	sub_825F7718(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260BB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260BB78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BB9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BBB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BC00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E7DC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260E808) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8260F120) {
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
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6056
	ctx.r5.s64 = ctx.r11.s64 + -6056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8260e870
	ctx.lr = 0x8260F150;
	sub_8260E870(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260f160
	if (ctx.cr0.eq) goto loc_8260F160;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8260F160:
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

DEFINE_REX_FUNC(sub_82610B90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r7,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r9,r10,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// subfic r8,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r8.u64;
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82610be0
	if (!ctx.cr6.lt) goto loc_82610BE0;
	// rlwinm r5,r10,5,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82610bec
	if (ctx.cr6.lt) goto loc_82610BEC;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x82610bec
	goto loc_82610BEC;
loc_82610BE0:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r8,r9,6
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFF;
loc_82610BEC:
	// rlwinm r9,r10,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82610c04
	if (ctx.cr6.eq) goto loc_82610C04;
	// rlwimi r10,r8,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82610C04:
	// rlwinm r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// oris r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 2147483648;
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82614778) {
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
	// bl 0x82614710
	ctx.lr = 0x82614798;
	sub_82614710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826147a8
	if (ctx.cr0.eq) goto loc_826147A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826147A8;
	sub_8264C3D0(ctx, base);
loc_826147A8:
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

DEFINE_REX_FUNC(sub_82615D28) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615da0
	sub_82615DA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FA0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261c3b8
	sub_8261C3B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FF0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615fb8
	sub_82615FB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826162B8) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82626248
	ctx.lr = 0x826162CC;
	sub_82626248(ctx, base);
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

DEFINE_REX_FUNC(sub_82617148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82617150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,-15972
	ctx.r11.s64 = ctx.r11.s64 + -15972;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r29,1
	r29.s64 = 1;
	// addi r11,r9,-14192
	ctx.r11.s64 = ctx.r9.s64 + -14192;
	// addi r10,r10,-14272
	ctx.r10.s64 = ctx.r10.s64 + -14272;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// addi r9,r8,-14280
	ctx.r9.s64 = ctx.r8.s64 + -14280;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r7,-14296
	ctx.r10.s64 = ctx.r7.s64 + -14296;
	// addi r11,r6,-14312
	ctx.r11.s64 = ctx.r6.s64 + -14312;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r9,r5,-15996
	ctx.r9.s64 = ctx.r5.s64 + -15996;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// bl 0x826166a0
	ctx.lr = 0x826171E4;
	sub_826166A0(ctx, base);
	// addi r11,r31,340
	ctx.r11.s64 = r31.s64 + 340;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r30,368(r31)
	REX_STORE_U32(r31.u32 + 368, r30.u32);
	// addi r3,r10,20576
	ctx.r3.s64 = ctx.r10.s64 + 20576;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r30,372(r31)
	REX_STORE_U32(r31.u32 + 372, r30.u32);
	// stw r29,376(r31)
	REX_STORE_U32(r31.u32 + 376, r29.u32);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// stw r29,380(r31)
	REX_STORE_U32(r31.u32 + 380, r29.u32);
	// stw r30,384(r31)
	REX_STORE_U32(r31.u32 + 384, r30.u32);
	// bl 0x8260b4a0
	ctx.lr = 0x82617230;
	sub_8260B4A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261E208) {
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
	ctx.lr = 0x8261E210;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	r25.u64 = r26.u64;
	// bne cr6,0x8261e238
	if (!ctx.cr6.eq) goto loc_8261E238;
loc_8261E228:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8261E238:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8261e228
	if (ctx.cr6.eq) goto loc_8261E228;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8261e254
	if (ctx.cr6.gt) goto loc_8261E254;
	// li r25,4
	r25.s64 = 4;
loc_8261E254:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8261e4d4
	if (ctx.cr6.eq) goto loc_8261E4D4;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	REX_STORE_U16(r31.u32 + 16, r27.u16);
	// bne cr6,0x8261e56c
	if (!ctx.cr6.eq) goto loc_8261E56C;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261e2f0
	if (!ctx.cr6.eq) goto loc_8261E2F0;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8261e2f0
	if (ctx.cr6.gt) goto loc_8261E2F0;
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8261e2a8
	if (!ctx.cr6.lt) goto loc_8261E2A8;
	// stw r26,4(r29)
	REX_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
loc_8261E2A8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8261e2c0
	if (ctx.cr0.eq) goto loc_8261E2C0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e55d0
	ctx.lr = 0x8261E2C0;
	sub_826E55D0(ctx, base);
loc_8261E2C0:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8261e2e8
	if (!ctx.cr6.eq) goto loc_8261E2E8;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826385e8
	ctx.lr = 0x8261E2D8;
	sub_826385E8(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8261E2E8:
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x8261e480
	goto loc_8261E480;
loc_8261E2F0:
	// li r28,-2
	r28.s64 = -2;
loc_8261E2F4:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261e354
	if (!ctx.cr6.eq) goto loc_8261E354;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
loc_8261E304:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261e33c
	if (!ctx.cr6.eq) goto loc_8261E33C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826385e8
	ctx.lr = 0x8261E318;
	sub_826385E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261d770
	ctx.lr = 0x8261E320;
	sub_8261D770(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82638bf0
	ctx.lr = 0x8261E330;
	sub_82638BF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261e570
	if (ctx.cr6.lt) goto loc_8261E570;
	// b 0x8261e348
	goto loc_8261E348;
loc_8261E33C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r26,16(r30)
	REX_STORE_U32(r30.u32 + 16, r26.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_8261E348:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261e304
	if (ctx.cr6.eq) goto loc_8261E304;
loc_8261E354:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// ble cr6,0x8261e440
	if (!ctx.cr6.gt) goto loc_8261E440;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8261e3bc
	if (!ctx.cr6.eq) goto loc_8261E3BC;
	// sth r27,16(r31)
	REX_STORE_U16(r31.u32 + 16, r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261e3d8
	if (ctx.cr6.lt) goto loc_8261E3D8;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8261E3BC:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r3.u16);
loc_8261E3D8:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8261e3f8
	if (!ctx.cr6.eq) goto loc_8261E3F8;
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8261e420
	if (!ctx.cr6.eq) goto loc_8261E420;
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// b 0x8261e2f4
	goto loc_8261E2F4;
loc_8261E3F8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8261e420
	if (!ctx.cr6.eq) goto loc_8261E420;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8261e420
	if (!ctx.cr6.eq) goto loc_8261E420;
	// stw r28,276(r31)
	REX_STORE_U32(r31.u32 + 276, r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// bl 0x826385e8
	ctx.lr = 0x8261E418;
	sub_826385E8(ctx, base);
	// stw r27,284(r31)
	REX_STORE_U32(r31.u32 + 284, r27.u32);
	// b 0x8261e2f4
	goto loc_8261E2F4;
loc_8261E420:
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261e46c
	if (ctx.cr6.lt) goto loc_8261E46C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8261e438
	if (!ctx.cr6.eq) goto loc_8261E438;
	// stw r28,276(r31)
	REX_STORE_U32(r31.u32 + 276, r28.u32);
loc_8261E438:
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// b 0x8261e2f4
	goto loc_8261E2F4;
loc_8261E440:
	// subfic r10,r25,32
	ctx.xer.ca = r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8261E46C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261e47c
	if (!ctx.cr6.eq) goto loc_8261E47C;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e55d0
	ctx.lr = 0x8261E47C;
	sub_826E55D0(ctx, base);
loc_8261E47C:
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
loc_8261E480:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8261e4c8
	if (!ctx.cr6.eq) goto loc_8261E4C8;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8261e578
	if (!ctx.cr6.eq) goto loc_8261E578;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// mulld r6,r8,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// divd r5,r6,r7
	ctx.r5.s64 = (ctx.r7.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r6.s64 / ctx.r7.s64 : 0;
	// std r5,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r5.u64);
loc_8261E4BC:
	// sth r26,154(r31)
	REX_STORE_U16(r31.u32 + 154, r26.u16);
	// stw r26,156(r31)
	REX_STORE_U32(r31.u32 + 156, r26.u32);
loc_8261E4C4:
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
loc_8261E4C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e56c
	if (ctx.cr6.eq) goto loc_8261E56C;
loc_8261E4D4:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x8261e514
	if (!ctx.cr6.gt) goto loc_8261E514;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
loc_8261E4E8:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82638ef0
	ctx.lr = 0x8261E4F4;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261e570
	if (ctx.cr6.lt) goto loc_8261E570;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x8261e4e8
	if (ctx.cr6.gt) goto loc_8261E4E8;
loc_8261E514:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x82638ef0
	ctx.lr = 0x8261E520;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261e570
	if (ctx.cr6.lt) goto loc_8261E570;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261e560
	if (ctx.cr6.eq) goto loc_8261E560;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_8261E53C:
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// lhz r7,34(r29)
	ctx.r7.u64 = REX_LOAD_U16(r29.u32 + 34);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8261e53c
	if (ctx.cr6.lt) goto loc_8261E53C;
loc_8261E560:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	REX_STORE_U32(r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_8261E56C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8261E570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8261E578:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8261e4bc
	if (!ctx.cr6.eq) goto loc_8261E4BC;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ld r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 176);
	// ori r6,r10,38528
	ctx.r6.u64 = ctx.r10.u64 | 38528;
	// sth r27,154(r31)
	REX_STORE_U16(r31.u32 + 154, r27.u16);
	// mulld r5,r8,r9
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r4.u64);
	// b 0x8261e4c4
	goto loc_8261E4C4;
}

DEFINE_REX_FUNC(sub_8263CB18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-32120
	ctx.r8.s64 = -2105016320;
	// lwz r11,23248(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 23248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263cb6c
	if (!ctx.cr6.eq) goto loc_8263CB6C;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r11,22224
	ctx.r10.s64 = ctx.r11.s64 + 22224;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8263CB40:
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,15
	ctx.r4.s64 = ctx.r9.s64 + 15;
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8263cb40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263CB40;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,23248(r8)
	REX_STORE_U32(ctx.r8.u32 + 23248, ctx.r11.u32);
loc_8263CB6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263FF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8263FF68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826f1f78
	ctx.lr = 0x8263FF84;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f1e00
	ctx.lr = 0x8263FF9C;
	sub_826F1E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8263ffd8
	if (!ctx.cr6.eq) goto loc_8263FFD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x8263FFC0;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8263FFD8:
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82640024
	if (!ctx.cr6.eq) goto loc_82640024;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x8263FFF0;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638d80
	ctx.lr = 0x82640008;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82640024:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82640070
	if (!ctx.cr6.eq) goto loc_82640070;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x8264003C;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638d80
	ctx.lr = 0x82640054;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640078
	if (ctx.cr6.lt) goto loc_82640078;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82640070:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82640078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82643360) {
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
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// bl 0x82642cf8
	ctx.lr = 0x8264337C;
	sub_82642CF8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// beq 0x826433f4
	if (ctx.cr0.eq) goto loc_826433F4;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826433ac
	if (ctx.cr6.eq) goto loc_826433AC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826433AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826433AC:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826433ec
	if (!ctx.cr6.lt) goto loc_826433EC;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x826433f0
	goto loc_826433F0;
loc_826433EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826433F0:
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
loc_826433F4:
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

DEFINE_REX_FUNC(sub_826498F8) {
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
	// bl 0x826a1c98
	ctx.lr = 0x82649900;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2c9c
	ctx.lr = 0x82649908;
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
	// ble cr6,0x82649944
	if (!ctx.cr6.gt) goto loc_82649944;
loc_82649934:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// srw r11,r28,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (r28.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82649934
	if (ctx.cr6.gt) goto loc_82649934;
loc_82649944:
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
	// blt cr6,0x826499d4
	if (ctx.cr6.lt) goto loc_826499D4;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(r28.s32, 2048, ctx.xer);
	// bgt cr6,0x826499d4
	if (ctx.cr6.gt) goto loc_826499D4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x826499d4
	if (ctx.cr6.eq) goto loc_826499D4;
	// srawi r11,r28,7
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7F) != 0);
	ctx.r11.s64 = r28.s32 >> 7;
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
	// b 0x82649a90
	goto loc_82649A90;
loc_826499D4:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f29,f0
	f29.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f0,4296(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fdiv f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 / f29.f64;
	// lfd f0,-21784(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -21784);
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826a15c0
	ctx.lr = 0x82649A04;
	sub_826A15C0(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f30,f12
	f30.f64 = double(float(ctx.f12.f64));
	// bl 0x826a14e0
	ctx.lr = 0x82649A14;
	sub_826A14E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * f31.f64;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lfd f0,3728(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// fdiv f27,f0,f29
	f27.f64 = ctx.f0.f64 / f29.f64;
	// lfd f0,-21792(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -21792);
	// frsp f29,f11
	f29.f64 = double(float(ctx.f11.f64));
	// fmul f28,f27,f0
	f28.f64 = f27.f64 * ctx.f0.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x826a15c0
	ctx.lr = 0x82649A3C;
	sub_826A15C0(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// frsp f28,f10
	f28.f64 = double(float(ctx.f10.f64));
	// bl 0x826a14e0
	ctx.lr = 0x82649A4C;
	sub_826A14E0(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,-21800(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + -21800);
	// fmul f31,f27,f0
	f31.f64 = f27.f64 * ctx.f0.f64;
	// frsp f27,f9
	f27.f64 = double(float(ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82649A68;
	sub_826A14E0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f0,8312(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8312);
	// fmul f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82649A80;
	sub_826A15C0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
	// lfs f0,3824(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f31,f0
	f25.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_82649A90:
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
	// blt cr6,0x82649ba0
	if (ctx.cr6.lt) goto loc_82649BA0;
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
loc_82649ABC:
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
	// bdnz 0x82649abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649ABC;
loc_82649BA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82649bfc
	if (!ctx.cr6.gt) goto loc_82649BFC;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82649BB0:
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
	// bdnz 0x82649bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649BB0;
loc_82649BFC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x82649ce8
	if (ctx.cr6.lt) goto loc_82649CE8;
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
loc_82649C20:
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
	// bdnz 0x82649c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649C20;
loc_82649CE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82649d34
	if (!ctx.cr6.gt) goto loc_82649D34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
loc_82649CF8:
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
	// bdnz 0x82649cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649CF8;
loc_82649D34:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r5,r23,-1
	ctx.r5.s64 = r23.s64 + -1;
	// bne cr6,0x82649d44
	if (!ctx.cr6.eq) goto loc_82649D44;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82649D44:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bctrl 
	ctx.lr = 0x82649D58;
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
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x82649ef8
	if (ctx.cr6.lt) goto loc_82649EF8;
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
loc_82649D9C:
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
	// bdnz 0x82649d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649D9C;
loc_82649EF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82649f70
	if (!ctx.cr6.gt) goto loc_82649F70;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82649F0C:
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
	// bdnz 0x82649f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82649F0C;
loc_82649F70:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82649f84
	if (ctx.cr6.eq) goto loc_82649F84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_82649F84:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ce8
	ctx.lr = 0x82649F90;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82677230) {
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
	ctx.lr = 0x82677238;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r10,r10,-10532
	ctx.r10.s64 = ctx.r10.s64 + -10532;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// addi r9,r9,-10540
	ctx.r9.s64 = ctx.r9.s64 + -10540;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r29,r3,348
	r29.s64 = ctx.r3.s64 + 348;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// bl 0x82676808
	ctx.lr = 0x826772A8;
	sub_82676808(ctx, base);
	// addi r27,r31,400
	r27.s64 = r31.s64 + 400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82676808
	ctx.lr = 0x826772BC;
	sub_82676808(ctx, base);
	// addi r10,r26,32
	ctx.r10.s64 = r26.s64 + 32;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x826800e8
	ctx.lr = 0x826772DC;
	sub_826800E8(ctx, base);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r30,448(r31)
	REX_STORE_U32(r31.u32 + 448, r30.u32);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x82793894
	ctx.lr = 0x826772EC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = r31.s64 + 200;
	// addi r10,r31,288
	ctx.r10.s64 = r31.s64 + 288;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// addi r11,r31,300
	ctx.r11.s64 = r31.s64 + 300;
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,296(r31)
	REX_STORE_U32(r31.u32 + 296, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r10.u32);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// bl 0x82676808
	ctx.lr = 0x82677328;
	sub_82676808(ctx, base);
	// addi r11,r31,340
	ctx.r11.s64 = r31.s64 + 340;
	// stw r23,440(r31)
	REX_STORE_U32(r31.u32 + 440, r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,388(r31)
	REX_STORE_U32(r31.u32 + 388, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// bl 0x82676808
	ctx.lr = 0x82677354;
	sub_82676808(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,396(r31)
	REX_STORE_U32(r31.u32 + 396, r22.u32);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// bl 0x82793894
	ctx.lr = 0x82677368;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// std r30,312(r31)
	REX_STORE_U64(r31.u32 + 312, r30.u64);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// beq cr6,0x826773a0
	if (ctx.cr6.eq) goto loc_826773A0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826773a8
	if (!ctx.cr0.eq) goto loc_826773A8;
	// b 0x826773a4
	goto loc_826773A4;
loc_826773A0:
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
loc_826773A4:
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_826773A8:
	// sth r11,276(r31)
	REX_STORE_U16(r31.u32 + 276, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267ff70
	ctx.lr = 0x826773B4;
	sub_8267FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8267EEF8) {
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
	ctx.lr = 0x8267EF00;
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
	// cmplwi cr6,r5,1200
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1200, ctx.xer);
	// ble cr6,0x8267ef24
	if (!ctx.cr6.gt) goto loc_8267EF24;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x8267f000
	goto loc_8267F000;
loc_8267EF24:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267EF30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,424
	r29.s64 = r31.s64 + 424;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82681770
	ctx.lr = 0x8267EF3C;
	sub_82681770(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8267ef54
	if (!ctx.cr0.lt) goto loc_8267EF54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267EF4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8267f000
	goto loc_8267F000;
loc_8267EF54:
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lhz r7,1070(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 1070);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lhz r6,1068(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1068);
	// lhz r5,1074(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 1074);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// beq 0x8267efb8
	if (ctx.cr0.eq) goto loc_8267EFB8;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// lwz r10,432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 432);
	// addi r28,r31,536
	r28.s64 = r31.s64 + 536;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x826818d8
	ctx.lr = 0x8267EF98;
	sub_826818D8(ctx, base);
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267efd8
	if (ctx.cr6.eq) goto loc_8267EFD8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8264c850
	ctx.lr = 0x8267EFB4;
	sub_8264C850(ctx, base);
	// b 0x8267efd8
	goto loc_8267EFD8;
loc_8267EFB8:
	// lwz r28,432(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 432);
	// addi r30,r31,536
	r30.s64 = r31.s64 + 536;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// lwz r10,436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 436);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82681958
	ctx.lr = 0x8267EFD8;
	sub_82681958(ctx, base);
loc_8267EFD8:
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,1184(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r10.u8);
	// sth r11,1076(r31)
	REX_STORE_U16(r31.u32 + 1076, ctx.r11.u16);
	// bl 0x8267cae0
	ctx.lr = 0x8267EFFC;
	sub_8267CAE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267F000:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82684020) {
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
	// ld r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x82684064
	if (ctx.cr6.eq) goto loc_82684064;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82684064
	if (!ctx.cr6.lt) goto loc_82684064;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r4,r4,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_82684064:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8268407c
	if (ctx.cr6.gt) goto loc_8268407C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82684080
	if (!ctx.cr6.lt) goto loc_82684080;
loc_8268407C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82684080:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// blt cr6,0x82684090
	if (ctx.cr6.lt) goto loc_82684090;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_82684090:
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826840b4
	if (!ctx.cr6.lt) goto loc_826840B4;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_826840B4:
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r9,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82684254
	if (ctx.cr6.lt) goto loc_82684254;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r5,r9,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// beq cr6,0x826840f4
	if (ctx.cr6.eq) goto loc_826840F4;
	// divwu r5,r5,r10
	ctx.r5.u64 = uint32_t(ctx.r10.u32 ? ctx.r5.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_826840F4:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf. r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268411c
	if (ctx.cr0.eq) goto loc_8268411C;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulli r8,r8,8000
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(8000));
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 ? ctx.r8.u64 / ctx.r10.u64 : 0;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82684124
	goto loc_82684124;
loc_8268411C:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_82684124:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826841dc
	if (!ctx.cr6.eq) goto loc_826841DC;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82684150
	if (ctx.cr6.gt) goto loc_82684150;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8268420c
	if (ctx.cr6.lt) goto loc_8268420C;
loc_82684148:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82684208
	goto loc_82684208;
loc_82684150:
	// rlwinm r9,r30,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82684174
	if (ctx.cr6.gt) goto loc_82684174;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268420c
	if (!ctx.cr6.lt) goto loc_8268420C;
	// b 0x82684148
	goto loc_82684148;
loc_82684174:
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x826841ac
	if (!ctx.cr6.gt) goto loc_826841AC;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x826841a0
	if (!ctx.cr6.gt) goto loc_826841A0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826841a0
	if (!ctx.cr6.gt) goto loc_826841A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8268420c
	goto loc_8268420C;
loc_826841A0:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x8268420c
	goto loc_8268420C;
loc_826841AC:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x826841c8
	if (!ctx.cr6.gt) goto loc_826841C8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826841c8
	if (!ctx.cr6.gt) goto loc_826841C8;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x826841d4
	goto loc_826841D4;
loc_826841C8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268420c
	if (ctx.cr6.lt) goto loc_8268420C;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_826841D4:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8268420c
	goto loc_8268420C;
loc_826841DC:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8268420c
	if (ctx.cr6.gt) goto loc_8268420C;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8268420c
	if (ctx.cr6.gt) goto loc_8268420C;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8268420c
	if (ctx.cr6.lt) goto loc_8268420C;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82684208:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8268420C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82684224
	if (ctx.cr6.gt) goto loc_82684224;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82684228
	if (!ctx.cr6.lt) goto loc_82684228;
loc_82684224:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82684228:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r6,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// stw r4,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_82684254:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82682d50
	ctx.lr = 0x82684264;
	sub_82682D50(ctx, base);
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

DEFINE_REX_FUNC(sub_82697878) {
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
	// beq cr6,0x826978b0
	if (ctx.cr6.eq) goto loc_826978B0;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-5956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826978A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826978B0:
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

DEFINE_REX_FUNC(sub_82699888) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// fcmpu cr6,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bgt cr6,0x82699920
	if (ctx.cr6.gt) goto loc_82699920;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r4,-32127
	ctx.r4.s64 = -2105475072;
	// lfs f12,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,13964(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 13964);
	ctx.f13.f64 = double(temp.f32);
loc_826998B0:
	// fmadds f11,f2,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f12.f64)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwz r5,-28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// ble cr6,0x82699900
	if (!ctx.cr6.gt) goto loc_82699900;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
loc_826998D8:
	// lwzx r31,r9,r11
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,24720(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24720);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r31,r31,r5
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// addis r31,r31,128
	r31.s64 = r31.s64 + 8388608;
	// rlwinm r31,r31,10,22,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 10) & 0x3FC;
	// lfsx f10,r31,r30
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// bdnz 0x826998d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826998D8;
loc_82699900:
	// lfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82699914
	if (!ctx.cr6.gt) goto loc_82699914;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82699914:
	// fadds f2,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// ble cr6,0x826998b0
	if (!ctx.cr6.gt) goto loc_826998B0;
loc_82699920:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269C9B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c9e8
	if (ctx.cr6.eq) goto loc_8269C9E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8269C9E8:
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269D1B8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8269d770
	sub_8269D770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269DCF0) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x8269DD10;
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

DEFINE_REX_FUNC(sub_8269EB00) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8269eb24
	if (!ctx.cr6.eq) goto loc_8269EB24;
	// bl 0x8269eb80
	ctx.lr = 0x8269EB20;
	sub_8269EB80(ctx, base);
	// b 0x8269eb64
	goto loc_8269EB64;
loc_8269EB24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ea68
	ctx.lr = 0x8269EB2C;
	sub_8269EA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8269eb3c
	if (ctx.cr0.eq) goto loc_8269EB3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269eb64
	goto loc_8269EB64;
loc_8269EB3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269eb60
	if (ctx.cr0.eq) goto loc_8269EB60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x8269EB50;
	sub_826A3320(ctx, base);
	// bl 0x826aa448
	ctx.lr = 0x8269EB54;
	sub_826AA448(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8269eb64
	goto loc_8269EB64;
loc_8269EB60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269EB64:
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

DEFINE_REX_FUNC(__savegprlr_18) {
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
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, r23.u64);
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

DEFINE_REX_FUNC(sub_826A2C68) {
	REX_FUNC_PROLOGUE();
	// b 0x826a2bd0
	sub_826A2BD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
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
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
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

DEFINE_REX_FUNC(sub_826A3648) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x826a96a8
	sub_826A96A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A3928) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,26352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 26352);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a3954
	if (ctx.cr6.eq) goto loc_826A3954;
	// bl 0x82793f24
	ctx.lr = 0x826A394C;
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,26352(r31)
	REX_STORE_U32(r31.u32 + 26352, ctx.r11.u32);
loc_826A3954:
	// bl 0x826a9638
	ctx.lr = 0x826A3958;
	sub_826A9638(ctx, base);
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

DEFINE_REX_FUNC(__savevmx_101) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A42A0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r8,r4,0,22,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// rlwinm r9,r4,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x826a42f4
	if (ctx.cr0.eq) goto loc_826A42F4;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x826a42d8
	if (!ctx.cr6.eq) goto loc_826A42D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a42f4
	goto loc_826A42F4;
loc_826A42D8:
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x826a42e8
	if (!ctx.cr6.eq) goto loc_826A42E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x826a42f4
	goto loc_826A42F4;
loc_826A42E8:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x826a42f4
	if (!ctx.cr6.eq) goto loc_826A42F4;
	// li r3,3
	ctx.r3.s64 = 3;
loc_826A42F4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a4300
	if (ctx.cr0.eq) goto loc_826A4300;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_826A4300:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a430c
	if (ctx.cr0.eq) goto loc_826A430C;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_826A430C:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a4318
	if (ctx.cr0.eq) goto loc_826A4318;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_826A4318:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a4324
	if (ctx.cr0.eq) goto loc_826A4324;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_826A4324:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a4330
	if (ctx.cr0.eq) goto loc_826A4330;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_826A4330:
	// rlwinm. r10,r9,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826a4368
	if (ctx.cr0.eq) goto loc_826A4368;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// bne cr6,0x826a434c
	if (!ctx.cr6.eq) goto loc_826A434C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826a4368
	goto loc_826A4368;
loc_826A434C:
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x826a435c
	if (!ctx.cr6.eq) goto loc_826A435C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x826a4368
	goto loc_826A4368;
loc_826A435C:
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x826a4368
	if (!ctx.cr6.eq) goto loc_826A4368;
	// li r11,3
	ctx.r11.s64 = 3;
loc_826A4368:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4374
	if (ctx.cr0.eq) goto loc_826A4374;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_826A4374:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4380
	if (ctx.cr0.eq) goto loc_826A4380;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_826A4380:
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a438c
	if (ctx.cr0.eq) goto loc_826A438C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_826A438C:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4398
	if (ctx.cr0.eq) goto loc_826A4398;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_826A4398:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a43a4
	if (ctx.cr0.eq) goto loc_826A43A4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_826A43A4:
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A43B0;
	sub_826ADF00(ctx, base);
	// bl 0x826a4220
	ctx.lr = 0x826A43B4;
	sub_826A4220(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826adf00
	ctx.lr = 0x826A43C4;
	sub_826ADF00(ctx, base);
	// bl 0x826a4220
	ctx.lr = 0x826A43C8;
	sub_826A4220(ctx, base);
	// clrlwi r10,r3,12
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFF;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r10,0,27,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori r11,r11,31
	ctx.r11.u64 = ctx.r11.u64 | 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a43e8
	if (!ctx.cr6.eq) goto loc_826A43E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A43E8:
	// bl 0x827942f4
	ctx.lr = 0x826A43EC;
	__imp__KeEnableFpuExceptions(ctx, base);
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

DEFINE_REX_FUNC(sub_826AF230) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,9464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9464);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826af270
	if (ctx.cr0.eq) goto loc_826AF270;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AF264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826AF270:
	// bl 0x826af1d0
	ctx.lr = 0x826AF274;
	sub_826AF1D0(ctx, base);
}

DEFINE_REX_FUNC(sub_826B06B8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b06dc
	if (ctx.cr6.eq) goto loc_826B06DC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b06f4
	if (!ctx.cr6.eq) goto loc_826B06F4;
loc_826B06DC:
	// bl 0x826a33d0
	ctx.lr = 0x826B06E0;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B06EC;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826b078c
	goto loc_826B078C;
loc_826B06F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826b0708
	if (!ctx.cr6.eq) goto loc_826B0708;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x826b06dc
	goto loc_826B06DC;
loc_826B0708:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826B070C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826b0724
	if (ctx.cr0.eq) goto loc_826B0724;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x826b070c
	if (!ctx.cr0.eq) goto loc_826B070C;
loc_826B0724:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b074c
	if (!ctx.cr6.eq) goto loc_826B074C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x826a33d0
	ctx.lr = 0x826B0738;
	sub_826A33D0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_826B073C:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B0744;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826b078c
	goto loc_826B078C;
loc_826B074C:
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_826B0750:
	// lbz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x826b076c
	if (ctx.cr0.eq) goto loc_826B076C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826b0750
	if (!ctx.cr0.eq) goto loc_826B0750;
loc_826B076C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b0788
	if (!ctx.cr6.eq) goto loc_826B0788;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x826a33d0
	ctx.lr = 0x826B0780;
	sub_826A33D0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x826b073c
	goto loc_826B073C;
loc_826B0788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B078C:
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

DEFINE_REX_FUNC(sub_826B7D10) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7d48
	if (ctx.cr6.eq) goto loc_826B7D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B7D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
loc_826B7D48:
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

DEFINE_REX_FUNC(sub_826BA458) {
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
	ctx.lr = 0x826BA484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r8.u32);
	// ori r6,r9,52429
	ctx.r6.u64 = ctx.r9.u64 | 52429;
	// std r7,304(r31)
	REX_STORE_U64(r31.u32 + 304, ctx.r7.u64);
	// lwz r5,316(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 316);
	// mulhwu r4,r5,r6
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ba4d4
	if (!ctx.cr0.eq) goto loc_826BA4D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA4D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BA4D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA4E8;
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

DEFINE_REX_FUNC(sub_826BF7A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826BF7B0;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r29,r5,31,17,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// beq cr6,0x826bf890
	if (ctx.cr6.eq) goto loc_826BF890;
loc_826BF7CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826bf7fc
	if (!ctx.cr6.eq) goto loc_826BF7FC;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x826bf7ec
	if (ctx.cr6.lt) goto loc_826BF7EC;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x826bf7fc
	if (!ctx.cr6.gt) goto loc_826BF7FC;
loc_826BF7EC:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_826BF7FC:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x826bf81c
	if (!ctx.cr6.eq) goto loc_826BF81C;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826bf81c
	if (ctx.cr6.eq) goto loc_826BF81C;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// stwx r28,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, r28.u32);
loc_826BF81C:
	// clrlwi r5,r30,24
	ctx.r5.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x826bf854
	if (!ctx.cr6.eq) goto loc_826BF854;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826bf854
	if (ctx.cr6.eq) goto loc_826BF854;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
loc_826BF854:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826bf874
	if (!ctx.cr6.eq) goto loc_826BF874;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x826bf874
	if (ctx.cr6.eq) goto loc_826BF874;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826bf898
	if (!ctx.cr6.eq) goto loc_826BF898;
loc_826BF874:
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x826bf7cc
	if (ctx.cr6.lt) goto loc_826BF7CC;
loc_826BF890:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
loc_826BF898:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826C7B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826C7B38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bne cr6,0x826c7b64
	if (!ctx.cr6.eq) goto loc_826C7B64;
loc_826C7B54:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826C7B64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826c7b54
	if (ctx.cr6.eq) goto loc_826C7B54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c7b54
	if (ctx.cr6.eq) goto loc_826C7B54;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826c7c38
	if (ctx.cr6.eq) goto loc_826C7C38;
loc_826C7B84:
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c7b9c
	if (ctx.cr6.eq) goto loc_826C7B9C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r29,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C7B9C:
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C7BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826c7c00
	if (ctx.cr6.eq) goto loc_826C7C00;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C7BDC;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7c4c
	if (ctx.cr6.lt) goto loc_826C7C4C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x826c68d8
	ctx.lr = 0x826C7BF8;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7c4c
	if (ctx.cr6.lt) goto loc_826C7C4C;
loc_826C7C00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c68d8
	ctx.lr = 0x826C7C10;
	sub_826C68D8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7c48
	if (ctx.cr6.lt) goto loc_826C7C48;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x826c7b84
	if (!ctx.cr6.eq) goto loc_826C7B84;
loc_826C7C38:
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_826C7C48:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_826C7C4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826D4340) {
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
	ctx.lr = 0x826D4348;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r26,r11,-24
	r26.s64 = ctx.r11.s64 + -24;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826D438C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d43bc
	if (!ctx.cr6.gt) goto loc_826D43BC;
loc_826D43A8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_826D43BC:
	// cmplwi cr6,r26,80
	ctx.cr6.compare<uint32_t>(r26.u32, 80, ctx.xer);
	// blt cr6,0x826d43a8
	if (ctx.cr6.lt) goto loc_826D43A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D43DC;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D43FC;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D441C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D443C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D445C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D447C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D449C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D44BC;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D44DC;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D44FC;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D451C;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r30,112(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicl r3,r30,32,32
	ctx.r3.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x826a2d40
	ctx.lr = 0x826D4548;
	sub_826A2D40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r27,10000
	r27.s64 = 10000;
	// ld r28,120(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// divwu r11,r5,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r5.u32 / r27.u32 : 0);
	// lfs f31,31300(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 31300);
	f31.f64 = double(temp.f32);
	// rldicl r3,r28,32,32
	ctx.r3.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// bl 0x826a2d40
	ctx.lr = 0x826D4588;
	sub_826A2D40(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(r28.u32, 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// divwu r11,r3,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r3.u32 / r27.u32 : 0);
	// ld r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r3,42(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r8,r26
	ctx.r11.u64 = r26.u64 - ctx.r8.u64;
	// addi r30,r11,-80
	r30.s64 = ctx.r11.s64 + -80;
	// bl 0x826c65a8
	ctx.lr = 0x826D4608;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826d4648
	if (ctx.cr6.eq) goto loc_826D4648;
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
	ctx.lr = 0x826D4630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4648
	if (ctx.cr6.lt) goto loc_826D4648;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_826D4648:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826E5A28) {
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
	ctx.lr = 0x826E5A30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826e5aa8
	if (!ctx.cr6.gt) goto loc_826E5AA8;
loc_826E5A54:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// slw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826e5a88
	if (ctx.cr6.eq) goto loc_826E5A88;
loc_826E5A74:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826e5a74
	if (!ctx.cr6.eq) goto loc_826E5A74;
loc_826E5A88:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bge 0x826e5b98
	if (!ctx.cr0.lt) goto loc_826E5B98;
loc_826E5AA8:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e5afc
	if (ctx.cr6.eq) goto loc_826E5AFC;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// bgt cr6,0x826e5ac8
	if (ctx.cr6.gt) goto loc_826E5AC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E5AC8:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// slw r10,r28,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r9.u8 & 0x3F));
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_826E5AFC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x826e5b70
	if (ctx.cr6.gt) goto loc_826E5B70;
loc_826E5B08:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826e5b70
	if (!ctx.cr6.gt) goto loc_826E5B70;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826E5B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x826e5b08
	if (!ctx.cr6.gt) goto loc_826E5B08;
loc_826E5B70:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826e5a54
	if (!ctx.cr6.lt) goto loc_826E5A54;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638bf0
	ctx.lr = 0x826E5B8C;
	sub_82638BF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826e5a54
	if (!ctx.cr6.lt) goto loc_826E5A54;
loc_826E5B98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826F4E00) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826F4E44;
	sub_826A2E60(ctx, base);
	// lwz r8,716(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 716);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x826f4e88
	if (!ctx.cr6.eq) goto loc_826F4E88;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f4e88
	if (!ctx.cr6.gt) goto loc_826F4E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826F4E64:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sthx r7,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826f4e64
	if (ctx.cr6.lt) goto loc_826F4E64;
loc_826F4E88:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826F4E98;
	sub_826A2E60(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x826a2e60
	ctx.lr = 0x826F4EA8;
	sub_826A2E60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r10,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r10.u16);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r9,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r9.u16);
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_826FB7D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826FB7D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22512);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb7f8
	if (ctx.cr6.eq) goto loc_826FB7F8;
	// bl 0x82716ce8
	ctx.lr = 0x826FB7F8;
	sub_82716CE8(ctx, base);
loc_826FB7F8:
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb82c
	if (ctx.cr6.eq) goto loc_826FB82C;
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// stw r10,596(r11)
	REX_STORE_U32(ctx.r11.u32 + 596, ctx.r10.u32);
	// lwz r9,3728(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r8,600(r9)
	REX_STORE_U32(ctx.r9.u32 + 600, ctx.r8.u32);
	// lwz r7,3728(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// lwz r6,21900(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21900);
	// stw r6,604(r7)
	REX_STORE_U32(ctx.r7.u32 + 604, ctx.r6.u32);
	// b 0x826fb84c
	goto loc_826FB84C;
loc_826FB82C:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// stw r10,596(r11)
	REX_STORE_U32(ctx.r11.u32 + 596, ctx.r10.u32);
	// lwz r9,3712(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r8,600(r9)
	REX_STORE_U32(ctx.r9.u32 + 600, ctx.r8.u32);
	// lwz r7,21900(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21900);
	// lwz r6,3712(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// stw r7,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r7.u32);
loc_826FB84C:
	// lwz r10,14804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826fb87c
	if (!ctx.cr6.gt) goto loc_826FB87C;
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fb898
	if (!ctx.cr6.eq) goto loc_826FB898;
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fb898
	if (!ctx.cr6.eq) goto loc_826FB898;
	// lwz r11,3476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fb898
	if (!ctx.cr6.eq) goto loc_826FB898;
loc_826FB87C:
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb890
	if (ctx.cr6.eq) goto loc_826FB890;
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// b 0x826fb894
	goto loc_826FB894;
loc_826FB890:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
loc_826FB894:
	// stw r11,3740(r31)
	REX_STORE_U32(r31.u32 + 3740, ctx.r11.u32);
loc_826FB898:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826fb8e0
	if (ctx.cr6.eq) goto loc_826FB8E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826fb8e0
	if (ctx.cr6.eq) goto loc_826FB8E0;
	// ld r9,3600(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// ble cr6,0x826fb8d8
	if (!ctx.cr6.gt) goto loc_826FB8D8;
	// lwz r9,3428(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3428);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826fb8d8
	if (!ctx.cr6.eq) goto loc_826FB8D8;
	// lwz r9,15596(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x826fb8d8
	if (!ctx.cr6.eq) goto loc_826FB8D8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_826FB8D8:
	// lwz r9,15596(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// stw r9,3428(r31)
	REX_STORE_U32(r31.u32 + 3428, ctx.r9.u32);
loc_826FB8E0:
	// lwz r9,15504(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x826fb8f0
	if (ctx.cr6.eq) goto loc_826FB8F0;
	// stw r28,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r28.u32);
loc_826FB8F0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// ld r9,3600(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// bne cr6,0x826fb93c
	if (!ctx.cr6.eq) goto loc_826FB93C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb914
	if (ctx.cr6.eq) goto loc_826FB914;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826fb93c
	if (!ctx.cr6.eq) goto loc_826FB93C;
loc_826FB914:
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb934
	if (ctx.cr6.eq) goto loc_826FB934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827037e8
	ctx.lr = 0x826FB928;
	sub_827037E8(ctx, base);
	// lwz r11,3732(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// stw r30,3436(r31)
	REX_STORE_U32(r31.u32 + 3436, r30.u32);
	// b 0x826fba28
	goto loc_826FBA28;
loc_826FB934:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// b 0x826fba28
	goto loc_826FBA28;
loc_826FB93C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// lwz r9,3432(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826fb968
	if (!ctx.cr6.eq) goto loc_826FB968;
	// lwz r9,3408(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826fb968
	if (!ctx.cr6.eq) goto loc_826FB968;
	// lwz r9,3476(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826fb99c
	if (ctx.cr6.eq) goto loc_826FB99C;
loc_826FB968:
	// lwz r10,3408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826fba24
	if (!ctx.cr6.eq) goto loc_826FBA24;
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fba24
	if (ctx.cr6.eq) goto loc_826FBA24;
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb934
	if (ctx.cr6.eq) goto loc_826FB934;
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// b 0x826fba28
	goto loc_826FBA28;
loc_826FB99C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fb9bc
	if (ctx.cr6.eq) goto loc_826FB9BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826fb9bc
	if (ctx.cr6.eq) goto loc_826FB9BC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826fba2c
	if (!ctx.cr6.eq) goto loc_826FBA2C;
loc_826FB9BC:
	// lwz r10,3436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3436);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,15596(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// beq cr6,0x826fb9f0
	if (ctx.cr6.eq) goto loc_826FB9F0;
	// lwz r11,3732(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,3436(r31)
	REX_STORE_U32(r31.u32 + 3436, r28.u32);
	// stw r11,3740(r31)
	REX_STORE_U32(r31.u32 + 3740, ctx.r11.u32);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827037e8
	ctx.lr = 0x826FB9E8;
	sub_827037E8(ctx, base);
	// stw r30,3436(r31)
	REX_STORE_U32(r31.u32 + 3436, r30.u32);
	// b 0x826fba2c
	goto loc_826FBA2C;
loc_826FB9F0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fba1c
	if (ctx.cr6.eq) goto loc_826FBA1C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827037e8
	ctx.lr = 0x826FBA08;
	sub_827037E8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,3436(r31)
	REX_STORE_U32(r31.u32 + 3436, r30.u32);
	// bne cr6,0x826fba24
	if (!ctx.cr6.eq) goto loc_826FBA24;
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// b 0x826fba28
	goto loc_826FBA28;
loc_826FBA1C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826fba2c
	if (ctx.cr6.eq) goto loc_826FBA2C;
loc_826FBA24:
	// lwz r11,3720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3720);
loc_826FBA28:
	// stw r11,3740(r31)
	REX_STORE_U32(r31.u32 + 3740, ctx.r11.u32);
loc_826FBA2C:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fba64
	if (!ctx.cr6.gt) goto loc_826FBA64;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826fba64
	if (ctx.cr6.eq) goto loc_826FBA64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826fba64
	if (ctx.cr6.eq) goto loc_826FBA64;
	// lwz r11,21908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21908);
	// lwz r10,21900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21900);
	// stw r11,21904(r31)
	REX_STORE_U32(r31.u32 + 21904, ctx.r11.u32);
	// stw r10,21908(r31)
	REX_STORE_U32(r31.u32 + 21908, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826FBA64:
	// lwz r11,21900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21900);
	// stw r11,21904(r31)
	REX_STORE_U32(r31.u32 + 21904, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8271E028) {
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
	ctx.lr = 0x8271E030;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271E050;
	sub_826A2E60(ctx, base);
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// ori r27,r10,4096
	r27.u64 = ctx.r10.u64 | 4096;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823eff50
	ctx.lr = 0x8271E074;
	sub_823EFF50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8271e090
	if (!ctx.cr6.eq) goto loc_8271E090;
loc_8271E084:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8271E090:
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271E0A8;
	sub_826A2E60(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823eff50
	ctx.lr = 0x8271E0D4;
	sub_823EFF50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271e084
	if (ctx.cr6.eq) goto loc_8271E084;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x826a2e60
	ctx.lr = 0x8271E0F0;
	sub_826A2E60(ctx, base);
	// srawi r25,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r25.s64 = r29.s32 >> 1;
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271e108
	if (ctx.cr6.eq) goto loc_8271E108;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_8271E108:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823eff50
	ctx.lr = 0x8271E124;
	sub_823EFF50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271e084
	if (ctx.cr6.eq) goto loc_8271E084;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x826a2e60
	ctx.lr = 0x8271E140;
	sub_826A2E60(ctx, base);
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271e154
	if (ctx.cr6.eq) goto loc_8271E154;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_8271E154:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,592(r31)
	REX_STORE_U32(r31.u32 + 592, r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r26,588(r31)
	REX_STORE_U32(r31.u32 + 588, r26.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,636(r31)
	REX_STORE_U32(r31.u32 + 636, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827235C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827235C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,296(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r10,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8272364c
	if (!ctx.cr6.eq) goto loc_8272364C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8272360c
	if (!ctx.cr6.eq) goto loc_8272360C;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82723614
	if (ctx.cr6.eq) goto loc_82723614;
loc_8272360C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
loc_82723614:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82723630
	if (!ctx.cr6.eq) goto loc_82723630;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8272363c
	if (ctx.cr6.eq) goto loc_8272363C;
loc_82723630:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
loc_8272363C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82723670
	goto loc_82723670;
loc_8272364C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r30.s64 = temp.s64;
loc_82723670:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82723520
	ctx.lr = 0x82723690;
	sub_82723520(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x827236c8
	if (ctx.cr6.eq) goto loc_827236C8;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82770860
	ctx.lr = 0x827236BC;
	sub_82770860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_827236C8:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x827709f0
	ctx.lr = 0x827236D0;
	sub_827709F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8272BB90) {
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
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8272bcd8
	if (ctx.cr6.eq) goto loc_8272BCD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,15384(r3)
	REX_STORE_U32(ctx.r3.u32 + 15384, ctx.r7.u32);
	// stw r8,15388(r3)
	REX_STORE_U32(ctx.r3.u32 + 15388, ctx.r8.u32);
	// stw r9,15392(r3)
	REX_STORE_U32(ctx.r3.u32 + 15392, ctx.r9.u32);
	// stw r4,15372(r3)
	REX_STORE_U32(ctx.r3.u32 + 15372, ctx.r4.u32);
	// stw r5,15376(r3)
	REX_STORE_U32(ctx.r3.u32 + 15376, ctx.r5.u32);
	// lfd f13,-3744(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// stw r6,15380(r3)
	REX_STORE_U32(ctx.r3.u32 + 15380, ctx.r6.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bne cr6,0x8272bcac
	if (!ctx.cr6.eq) goto loc_8272BCAC;
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bne cr6,0x8272bcac
	if (!ctx.cr6.eq) goto loc_8272BCAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bne cr6,0x8272bc68
	if (!ctx.cr6.eq) goto loc_8272BC68;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x8272bc68
	if (!ctx.cr6.eq) goto loc_8272BC68;
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bne cr6,0x8272bc4c
	if (!ctx.cr6.eq) goto loc_8272BC4C;
	// bl 0x827260f8
	ctx.lr = 0x8272BC38;
	sub_827260F8(ctx, base);
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
loc_8272BC4C:
	// fmr f3,f7
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f7.f64;
	// bl 0x82726e00
	ctx.lr = 0x8272BC54;
	sub_82726E00(ctx, base);
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
loc_8272BC68:
	// fcmpu cr6,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bne cr6,0x8272bc90
	if (!ctx.cr6.eq) goto loc_8272BC90;
	// bl 0x82728868
	ctx.lr = 0x8272BC7C;
	sub_82728868(ctx, base);
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
loc_8272BC90:
	// fmr f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f7.f64;
	// bl 0x82729b88
	ctx.lr = 0x8272BC98;
	sub_82729B88(ctx, base);
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
loc_8272BCAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f3.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bl 0x8272b720
	ctx.lr = 0x8272BCC4;
	sub_8272B720(ctx, base);
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
loc_8272BCD8:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82737A00) {
	REX_FUNC_PROLOGUE();
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
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltisw128 v62,11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xB)));
	// li r6,48
	ctx.r6.s64 = 48;
	// vupkhsb128 v61,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// li r7,80
	ctx.r7.s64 = 80;
	// vupklsb128 v60,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// li r8,64
	ctx.r8.s64 = 64;
	// vspltisw128 v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r9,32240
	r31.s64 = ctx.r9.s64 + 32240;
	// vupklsb128 v56,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// lvx128 v55,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v54,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// lvx128 v53,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v52,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// lvx128 v51,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v50,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// vslw128 v12,v61,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcsxwfp128 v13,v56,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vupkhsb128 v49,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v9,v54,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vupkhsb128 v48,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// vcsxwfp128 v8,v52,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vupkhsb128 v47,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16))));
	// vcsxwfp128 v7,v50,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v0,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v1,v49,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// li r5,64
	ctx.r5.s64 = 64;
	// vcsxwfp128 v31,v48,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vaddsws v6,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v4,v47,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v47.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vupklsb128 v46,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vupklsb128 v45,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r30,96
	r30.s64 = 96;
	// vslw128 v11,v60,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v12,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v44,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s16)));
	// vsubsws v29,v6,v4
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v4.s32[0]);
	v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v4.s32[1]);
	v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v4.s32[2]);
	v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v4.s32[3]);
	v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v3,v46,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vaddsws v25,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcsxwfp128 v2,v45,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvx128 v41,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vaddfp128 v43,v13,v9
	simde_mm_store_ps(ctx.v43.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v10,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v30,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp128 v40,v8,v7
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vslw128 v5,v44,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v44.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vupklsb128 v39,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// li r11,112
	ctx.r11.s64 = 112;
	// vaddfp128 v38,v1,v31
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v31.f32)));
	// vupklsb128 v37,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vupkhsb128 v63,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16))));
	// lvx128 v11,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v36,8
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_set1_epi32(int(0x8)));
	// vaddsws v19,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vspltisw128 v35,14
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_set1_epi32(int(0xE)));
	// vcsxwfp128 v23,v39,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vspltisw128 v34,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_set1_epi32(int(0x2)));
	// vcsxwfp128 v24,v37,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vspltisw128 v33,4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_set1_epi32(int(0x4)));
	// li r5,128
	ctx.r5.s64 = 128;
	// vaddfp128 v32,v2,v3
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vupkhsb128 v62,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v22,v63,0
	simde_mm_store_ps(v22.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmulfp128 v6,v12,v43
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vmulfp128 v4,v12,v40
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmaddfp v27,v10,v9,v6
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v9,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v28,v11,v13,v6
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v26,v11,v8,v4
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v4,v10,v7,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v13,v9,v38
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vcsxwfp128 v21,v62,0
	simde_mm_store_ps(v21.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubsws v20,v30,v5
	temp.s64 = int64_t(v30.s32[0]) - int64_t(ctx.v5.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(ctx.v5.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(ctx.v5.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(ctx.v5.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v30,v9,v32
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v32.f32)));
	// lvx128 v7,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v18,v7,v31,v13
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v1,v8,v1,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// li r4,48
	ctx.r4.s64 = 48;
	// vaddfp128 v61,v23,v24
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(v23.f32), simde_mm_load_ps(v24.f32)));
	// vor v31,v25,v25
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vctsxs v25,v4,0
	simde_mm_store_si128((simde__m128i*)v25.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// li r11,144
	ctx.r11.s64 = 144;
	// vctsxs v26,v26,0
	simde_mm_store_si128((simde__m128i*)v26.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// li r5,160
	ctx.r5.s64 = 160;
	// vctsxs v28,v28,0
	simde_mm_store_si128((simde__m128i*)v28.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// lvx128 v6,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vctsxs v27,v27,0
	simde_mm_store_si128((simde__m128i*)v27.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// lvx128 v5,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v4,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// vaddfp128 v60,v21,v22
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(v21.f32), simde_mm_load_ps(v22.f32)));
	// vor128 v57,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmaddfp v17,v8,v2,v30
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v30.f32)));
	// vor128 v58,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmaddfp v16,v7,v3,v30
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(v30.f32)));
	// vor v30,v19,v19
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vctsxs v2,v18,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v18.f32)));
	// vctsxs v13,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v19,v6,v61
	simde_mm_store_ps(v19.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v18,v6,v60
	simde_mm_store_ps(v18.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vctsxs v3,v17,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vctsxs v1,v16,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vsubsws v17,v25,v2
	temp.s64 = int64_t(v25.s32[0]) - int64_t(ctx.v2.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[1]) - int64_t(ctx.v2.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[2]) - int64_t(ctx.v2.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[3]) - int64_t(ctx.v2.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v16,v26,v13
	temp.s64 = int64_t(v26.s32[0]) - int64_t(ctx.v13.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[1]) - int64_t(ctx.v13.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[2]) - int64_t(ctx.v13.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[3]) - int64_t(ctx.v13.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaddfp v24,v5,v24,v19
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(v19.f32)));
	// vaddsws v15,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmaddfp v23,v4,v23,v19
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v19.f32)));
	// vor v13,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vmaddfp v22,v5,v22,v18
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v22.f32)), simde_mm_load_ps(v18.f32)));
	// vsubsws v14,v28,v3
	temp.s64 = int64_t(v28.s32[0]) - int64_t(ctx.v3.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[1]) - int64_t(ctx.v3.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[2]) - int64_t(ctx.v3.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[3]) - int64_t(ctx.v3.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaddfp v21,v4,v21,v18
	simde_mm_store_ps(v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v21.f32)), simde_mm_load_ps(v18.f32)));
	// vsubsws v19,v27,v1
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v1.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v1.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v1.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v1.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v26,v28,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v25,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vctsxs v24,v24,0
	simde_mm_store_si128((simde__m128i*)v24.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v24.f32)));
	// vaddsws v27,v27,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vctsxs v23,v23,0
	simde_mm_store_si128((simde__m128i*)v23.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v23.f32)));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vor v3,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vaddsws v17,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v13,v13,v2
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v25,v15,v15
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vaddsws v18,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vctsxs v22,v22,0
	simde_mm_store_si128((simde__m128i*)v22.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v22.f32)));
	// vsubsws v3,v3,v1
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vctsxs v21,v21,0
	simde_mm_store_si128((simde__m128i*)v21.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v21.f32)));
	// vor v1,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vslw128 v15,v13,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vslw128 v16,v13,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v19,v1,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v18,v1,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v14,v2,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v17,v2,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// stvx128 v19,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v4,v20,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v18,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v18,v20,v24
	temp.s64 = int64_t(v20.s32[0]) - int64_t(v24.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[1]) - int64_t(v24.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[2]) - int64_t(v24.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[3]) - int64_t(v24.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v29,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v19,v29,v22
	temp.s64 = int64_t(v29.s32[0]) - int64_t(v22.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[1]) - int64_t(v22.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[2]) - int64_t(v22.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[3]) - int64_t(v22.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v29,v17,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v20,v17,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v15,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v3,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v15,v3,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v31,v31,v21
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v21.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v21.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v21.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v21.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v14,v15,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r4,-16
	ctx.r4.s64 = -16;
	// vaddsws v21,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddsws v17,v1,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v1,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vslw128 v20,v20,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v16,v29,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v13,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v15,v2,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v2,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v3,v1,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v29,v17,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v21,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v13,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v2,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v3,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsraw128 v1,v21,v36
	ctx.v1.s32[0] = v21.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v1.s32[1] = v21.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v1.s32[2] = v21.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v1.s32[3] = v21.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v29,v16,v36
	v29.s32[0] = v16.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	v29.s32[1] = v16.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	v29.s32[2] = v16.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	v29.s32[3] = v16.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v21,v17,v36
	v21.s32[0] = v17.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	v21.s32[1] = v17.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	v21.s32[2] = v17.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	v21.s32[3] = v17.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vaddsws v22,v30,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v13,v30,v23
	temp.s64 = int64_t(v30.s32[0]) - int64_t(v23.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(v23.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(v23.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(v23.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v30,v15,v36
	v30.s32[0] = v15.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	v30.s32[1] = v15.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	v30.s32[2] = v15.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	v30.s32[3] = v15.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vaddsws v23,v3,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v31,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v16,v3,v29
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v29.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v29.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v29.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v29.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v3,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v15,v31,v28
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v28.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v28.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v28.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v28.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v29,v19,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vaddsws v31,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v21,v19,v21
	temp.s64 = int64_t(v19.s32[0]) - int64_t(v21.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v19.s32[1]) - int64_t(v21.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v19.s32[2]) - int64_t(v21.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v19.s32[3]) - int64_t(v21.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v54,v20,v36
	ctx.v54.s32[0] = v20.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v54.s32[1] = v20.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v54.s32[2] = v20.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v54.s32[3] = v20.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v55,v23,v36
	ctx.v55.s32[0] = v23.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v55.s32[1] = v23.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v55.s32[2] = v23.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v55.s32[3] = v23.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v56,v31,v36
	ctx.v56.s32[0] = v31.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v56.s32[1] = v31.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v56.s32[2] = v31.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v56.s32[3] = v31.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v53,v29,v36
	ctx.v53.s32[0] = v29.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v53.s32[1] = v29.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v53.s32[2] = v29.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v53.s32[3] = v29.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vaddsws v14,v2,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrghw128 v49,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vaddsws v19,v18,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrglw128 v45,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vsubsws v25,v24,v25
	temp.s64 = int64_t(v24.s32[0]) - int64_t(v25.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[1]) - int64_t(v25.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[2]) - int64_t(v25.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[3]) - int64_t(v25.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v47,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vaddsws v28,v22,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrglw128 v43,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vsraw128 v46,v21,v36
	ctx.v46.s32[0] = v21.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v46.s32[1] = v21.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v46.s32[2] = v21.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v46.s32[3] = v21.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v48,v19,v36
	ctx.v48.s32[0] = v19.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v48.s32[1] = v19.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v48.s32[2] = v19.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v48.s32[3] = v19.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsubsws v24,v2,v1
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(ctx.v1.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(ctx.v1.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(ctx.v1.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(ctx.v1.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v38,v47,v49
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vsraw128 v52,v28,v36
	ctx.v52.s32[0] = v28.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v52.s32[1] = v28.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v52.s32[2] = v28.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v52.s32[3] = v28.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vmrglw128 v37,v47,v49
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vsubsws v23,v13,v27
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(v27.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(v27.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(v27.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(v27.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v60,v43,v45
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vsubsws v20,v22,v26
	temp.s64 = int64_t(v22.s32[0]) - int64_t(v26.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[1]) - int64_t(v26.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[2]) - int64_t(v26.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[3]) - int64_t(v26.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v51,v14,v36
	ctx.v51.s32[0] = v14.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v51.s32[1] = v14.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v51.s32[2] = v14.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v51.s32[3] = v14.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v50,v17,v36
	ctx.v50.s32[0] = v17.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v50.s32[1] = v17.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v50.s32[2] = v17.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v50.s32[3] = v17.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vmrglw128 v39,v52,v48
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vsraw128 v44,v16,v36
	ctx.v44.s32[0] = v16.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v44.s32[1] = v16.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v44.s32[2] = v16.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v44.s32[3] = v16.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vcsxwfp128 v2,v37,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vsraw128 v42,v15,v36
	ctx.v42.s32[0] = v15.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v42.s32[1] = v15.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v42.s32[2] = v15.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v42.s32[3] = v15.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vmrghw128 v48,v52,v48
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vsraw128 v40,v25,v36
	ctx.v40.s32[0] = v25.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v40.s32[1] = v25.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v40.s32[2] = v25.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v40.s32[3] = v25.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsubsws v21,v18,v30
	temp.s64 = int64_t(v18.s32[0]) - int64_t(v30.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[1]) - int64_t(v30.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[2]) - int64_t(v30.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[3]) - int64_t(v30.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v41,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vsraw128 v54,v20,v36
	ctx.v54.s32[0] = v20.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v54.s32[1] = v20.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v54.s32[2] = v20.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v54.s32[3] = v20.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vcsxwfp128 v20,v60,0
	simde_mm_store_ps(v20.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrghw128 v32,v42,v44
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vsraw128 v63,v24,v36
	ctx.v63.s32[0] = v24.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v63.s32[1] = v24.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v63.s32[2] = v24.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v63.s32[3] = v24.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vmrghw128 v62,v46,v40
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vsraw128 v61,v23,v36
	ctx.v61.s32[0] = v23.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v61.s32[1] = v23.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v61.s32[2] = v23.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v61.s32[3] = v23.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v56,v21,v36
	ctx.v56.s32[0] = v21.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v56.s32[1] = v21.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v56.s32[2] = v21.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v56.s32[3] = v21.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vmrglw128 v55,v39,v41
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vslw128 v19,v38,v36
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v36.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrglw128 v53,v32,v62
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v49,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmrglw128 v47,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrghw128 v38,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v31,v55,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v1,v53,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrglw128 v37,v42,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmrghw128 v53,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vaddsws v27,v19,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrglw128 v60,v46,v40
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v52,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrglw128 v55,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v51,v43,v45
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrglw128 v50,v48,v38
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmrglw128 v46,v37,v60
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vcsxwfp128 v29,v55,0
	simde_mm_store_ps(v29.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrglw128 v45,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v26,v51,0
	simde_mm_store_ps(v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v44,v39,v41
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v30,v50,0
	simde_mm_store_ps(v30.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrghw128 v41,v32,v62
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v24,v46,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v43,v37,v60
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vcsxwfp128 v28,v45,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v23,v44,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrghw128 v40,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vslw128 v16,v41,v36
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v41.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v36.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddfp v18,v2,v31
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v31.f32)));
	// vcsxwfp128 v19,v43,0
	simde_mm_store_ps(v19.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrghw128 v39,v48,v38
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v21,v42,0
	simde_mm_store_ps(v21.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vslw128 v22,v40,v36
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v36.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v3,v16,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v25,v39,v36
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v36.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddfp v17,v1,v29
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v29.f32)));
	// vaddfp v16,v30,v26
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v26.f32)));
	// vsubsws v4,v3,v22
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v22.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v22.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v22.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v22.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v3,v3,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp v14,v28,v24
	simde_mm_store_ps(v14.f32, simde_mm_add_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v24.f32)));
	// vsubsws v5,v27,v25
	temp.s64 = int64_t(v27.s32[0]) - int64_t(v25.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(v25.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(v25.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(v25.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddfp v15,v20,v23
	simde_mm_store_ps(v15.f32, simde_mm_add_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(v23.f32)));
	// vaddsws v25,v27,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmaddfp v18,v12,v18,v13
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v18.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v63,v19,v21
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v21.f32)));
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor128 v5,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vmaddfp v17,v12,v17,v13
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v17.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor v12,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor128 v4,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vmaddfp v22,v9,v16,v13
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v16.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v9,v14,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v14.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v16,v6,v15,v13
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v15.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v13,v6,v63,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v6,v11,v2,v18
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v18.f32)));
	// vmaddfp v2,v10,v31,v18
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(v18.f32)));
	// vmaddfp v11,v11,v1,v17
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v10,v10,v29,v17
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v1,v8,v30,v22
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v31,v7,v26,v22
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v8,v8,v28,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v7,v24,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v7,v5,v23,v16
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v16.f32)));
	// vcfpsxws128 v38,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v6,v5,v21,v13
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v21.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v32,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v37,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v63,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v62,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v2,v4,v20,v16
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v20.f32)), simde_mm_load_ps(v16.f32)));
	// vcfpsxws128 v60,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v58,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v4,v19,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v19.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v57,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v61,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v31.f32)));
	// vsraw128 v13,v38,v59
	ctx.v13.s32[0] = ctx.v38.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v38.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v38.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v38.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vcfpsxws128 v56,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vsraw128 v11,v32,v59
	ctx.v11.s32[0] = ctx.v32.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v32.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v32.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v32.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v10,v37,v59
	ctx.v10.s32[0] = ctx.v37.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v37.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v37.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v37.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v9,v63,v59
	ctx.v9.s32[0] = ctx.v63.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v63.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v63.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v63.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v8,v62,v59
	ctx.v8.s32[0] = ctx.v62.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v62.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v62.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v62.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vcfpsxws128 v55,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vsraw128 v7,v58,v59
	ctx.v7.s32[0] = ctx.v58.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v58.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v58.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v58.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsubsws v6,v13,v8
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcfpsxws128 v54,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vsraw128 v13,v61,v59
	ctx.v13.s32[0] = ctx.v61.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v61.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v61.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v61.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// li r11,96
	ctx.r11.s64 = 96;
	// vsraw128 v8,v60,v59
	ctx.v8.s32[0] = ctx.v60.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v60.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v60.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v60.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// li r5,112
	ctx.r5.s64 = 112;
	// vsubsws v15,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v7,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v14,v11,v13
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v13.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v13.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v13.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v13.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v13,v10,v8
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v4,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v8,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vor v11,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsraw128 v10,v56,v59
	ctx.v10.s32[0] = ctx.v56.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v56.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v56.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v56.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v13,v57,v59
	ctx.v13.s32[0] = ctx.v57.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v57.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v57.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v57.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vaddsws v30,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v11,v6,v11
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v29,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v12,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vsubsws v1,v27,v13
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v28,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v13,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vslw128 v24,v12,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v23,v12,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v10,v9,v8
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v26,v13,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v13,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v27,v11,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v21,v11,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v8,v23,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v22,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v20,v10,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v19,v10,v34
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v18,v21,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v17,v9,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v12,v19,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v9,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vslw128 v16,v8,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v15,v31,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v12,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v11,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v12,v9,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v9,v30,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v13,v55,v59
	ctx.v13.s32[0] = ctx.v55.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v55.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v55.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v55.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vaddsws v8,v10,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v12,v54,v59
	ctx.v12.s32[0] = ctx.v54.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v12.s32[1] = ctx.v54.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v12.s32[2] = ctx.v54.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v12.s32[3] = ctx.v54.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vaddsws v26,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v27,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v0,v25,v13
	temp.s64 = int64_t(v25.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v13,v3,v12
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v31,v24,v36
	v31.s32[0] = v24.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	v31.s32[1] = v24.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	v31.s32[2] = v24.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	v31.s32[3] = v24.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v30,v23,v36
	v30.s32[0] = v23.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	v30.s32[1] = v23.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	v30.s32[2] = v23.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	v30.s32[3] = v23.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vor v12,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsraw128 v8,v27,v36
	ctx.v8.s32[0] = v27.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v8.s32[1] = v27.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v8.s32[2] = v27.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v8.s32[3] = v27.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vsraw128 v3,v26,v36
	ctx.v3.s32[0] = v26.s32[0] >> (ctx.v36.u8[0] & 0x1F);
	ctx.v3.s32[1] = v26.s32[1] >> (ctx.v36.u8[4] & 0x1F);
	ctx.v3.s32[2] = v26.s32[2] >> (ctx.v36.u8[8] & 0x1F);
	ctx.v3.s32[3] = v26.s32[3] >> (ctx.v36.u8[12] & 0x1F);
	// vaddsws v22,v10,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v1,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v53,v22,v35
	ctx.v53.s32[0] = v22.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v53.s32[1] = v22.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v53.s32[2] = v22.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v53.s32[3] = v22.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v52,v21,v35
	ctx.v52.s32[0] = v21.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v52.s32[1] = v21.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v52.s32[2] = v21.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v52.s32[3] = v21.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v51,v19,v35
	ctx.v51.s32[0] = v19.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v51.s32[1] = v19.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v51.s32[2] = v19.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v51.s32[3] = v19.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v50,v20,v35
	ctx.v50.s32[0] = v20.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v50.s32[1] = v20.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v50.s32[2] = v20.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v50.s32[3] = v20.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v49,v17,v35
	ctx.v49.s32[0] = v17.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v49.s32[1] = v17.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v49.s32[2] = v17.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v49.s32[3] = v17.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v48,v18,v35
	ctx.v48.s32[0] = v18.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v48.s32[1] = v18.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v48.s32[2] = v18.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v48.s32[3] = v18.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vpkswss128 v47,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vaddsws v16,v13,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswss128 v46,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vsubsws v14,v13,v7
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v7.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v7.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v7.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v7.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v45,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v45.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vaddsws v15,v0,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v13,v6,v30
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(v30.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(v30.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(v30.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(v30.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v0,v0,v2
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v7,v1,v31
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(v31.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(v31.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(v31.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(v31.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v9,v3
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v3.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v3.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v3.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v3.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v3,v12,v8
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvx128 v46,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v2,v10,v4
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvx128 v45,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v1,v11,v5
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v44,v16,v35
	ctx.v44.s32[0] = v16.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v44.s32[1] = v16.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v44.s32[2] = v16.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v44.s32[3] = v16.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v43,v15,v35
	ctx.v43.s32[0] = v15.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v43.s32[1] = v15.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v43.s32[2] = v15.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v43.s32[3] = v15.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v42,v14,v35
	ctx.v42.s32[0] = v14.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v42.s32[1] = v14.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v42.s32[2] = v14.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v42.s32[3] = v14.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v41,v0,v35
	ctx.v41.s32[0] = ctx.v0.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v41.s32[1] = ctx.v0.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v41.s32[2] = ctx.v0.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v41.s32[3] = ctx.v0.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v40,v13,v35
	ctx.v40.s32[0] = ctx.v13.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v40.s32[1] = ctx.v13.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v40.s32[2] = ctx.v13.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v40.s32[3] = ctx.v13.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v39,v7,v35
	ctx.v39.s32[0] = ctx.v7.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v39.s32[1] = ctx.v7.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v39.s32[2] = ctx.v7.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v39.s32[3] = ctx.v7.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vpkswss128 v38,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vsraw128 v37,v6,v35
	ctx.v37.s32[0] = ctx.v6.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v37.s32[1] = ctx.v6.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v37.s32[2] = ctx.v6.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v37.s32[3] = ctx.v6.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v36,v3,v35
	ctx.v36.s32[0] = ctx.v3.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v3.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v3.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v3.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vpkswss128 v34,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v34.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// vsraw128 v33,v2,v35
	ctx.v33.s32[0] = ctx.v2.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v33.s32[1] = ctx.v2.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v33.s32[2] = ctx.v2.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v33.s32[3] = ctx.v2.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vsraw128 v32,v1,v35
	ctx.v32.s32[0] = ctx.v1.s32[0] >> (ctx.v35.u8[0] & 0x1F);
	ctx.v32.s32[1] = ctx.v1.s32[1] >> (ctx.v35.u8[4] & 0x1F);
	ctx.v32.s32[2] = ctx.v1.s32[2] >> (ctx.v35.u8[8] & 0x1F);
	ctx.v32.s32[3] = ctx.v1.s32[3] >> (ctx.v35.u8[12] & 0x1F);
	// vpkswss128 v63,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vpkswss128 v62,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v62.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v36.s32)));
	// stvx128 v38,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v61,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// stvx128 v34,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

