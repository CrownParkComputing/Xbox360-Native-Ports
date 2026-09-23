#include "hydrothunder_funcs.40.h"

DEFINE_REX_FUNC(sub_82121F50) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,13388(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 13388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82121f84
	if (!ctx.cr0.eq) goto loc_82121F84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,13388(r10)
	REX_STORE_U32(ctx.r10.u32 + 13388, ctx.r11.u32);
	// bl 0x82121fa0
	ctx.lr = 0x82121F78;
	sub_82121FA0(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,11848
	ctx.r3.s64 = ctx.r11.s64 + 11848;
	// bl 0x8269d008
	ctx.lr = 0x82121F84;
	sub_8269D008(ctx, base);
loc_82121F84:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82127788) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82129138
	ctx.lr = 0x821277A8;
	sub_82129138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821277c4
	if (ctx.cr0.eq) goto loc_821277C4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82129ee0
	ctx.lr = 0x821277BC;
	sub_82129EE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821277cc
	if (!ctx.cr0.eq) goto loc_821277CC;
loc_821277C4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_821277CC:
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

DEFINE_REX_FUNC(sub_8212B570) {
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
	ctx.lr = 0x8212B578;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,29788
	ctx.r10.u64 = ctx.r10.u64 | 29788;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8212b5e0
	if (ctx.cr6.lt) goto loc_8212B5E0;
	// lwz r6,44(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// addi r31,r7,12
	r31.s64 = ctx.r7.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8215e198
	ctx.lr = 0x8212B5B4;
	sub_8215E198(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// bl 0x8269ce98
	ctx.lr = 0x8212B5BC;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212B5CC;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212B5D4;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8212B5E0;
	sub_822F6020(ctx, base);
loc_8212B5E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b60c
	if (!ctx.cr6.eq) goto loc_8212B60C;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8212b644
	goto loc_8212B644;
loc_8212B60C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212b630
	if (ctx.cr0.eq) goto loc_8212B630;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212b648
	if (!ctx.cr6.eq) goto loc_8212B648;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x8212b648
	goto loc_8212B648;
loc_8212B630:
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212b648
	if (!ctx.cr6.eq) goto loc_8212B648;
loc_8212B644:
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_8212B648:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8212b748
	if (!ctx.cr0.eq) goto loc_8212B748;
	// li r27,0
	r27.s64 = 0;
loc_8212B664:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212b6c8
	if (!ctx.cr6.eq) goto loc_8212B6C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8212b6d8
	if (ctx.cr0.eq) goto loc_8212B6D8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b6a0
	if (!ctx.cr6.eq) goto loc_8212B6A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8212ac38
	ctx.lr = 0x8212B6A0;
	sub_8212AC38(ctx, base);
loc_8212B6A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212aca0
	ctx.lr = 0x8212B6C4;
	sub_8212ACA0(ctx, base);
	// b 0x8212b738
	goto loc_8212B738;
loc_8212B6C8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8212b6fc
	if (!ctx.cr0.eq) goto loc_8212B6FC;
loc_8212B6D8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r28,56(r10)
	REX_STORE_U8(ctx.r10.u32 + 56, r28.u8);
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8212b738
	goto loc_8212B738;
loc_8212B6FC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b714
	if (!ctx.cr6.eq) goto loc_8212B714;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8212aca0
	ctx.lr = 0x8212B714;
	sub_8212ACA0(ctx, base);
loc_8212B714:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212ac38
	ctx.lr = 0x8212B738;
	sub_8212AC38(ctx, base);
loc_8212B738:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b664
	if (ctx.cr0.eq) goto loc_8212B664;
loc_8212B748:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213AAC0) {
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
	ctx.lr = 0x8213AAC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-18384
	ctx.r11.s64 = ctx.r11.s64 + -18384;
	// addi r10,r10,-18364
	ctx.r10.s64 = ctx.r10.s64 + -18364;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8213ab58
	if (ctx.cr6.eq) goto loc_8213AB58;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8212aaa0
	ctx.lr = 0x8213AB00;
	sub_8212AAA0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8269ce98
	ctx.lr = 0x8213AB08;
	sub_8269CE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ab40
	if (ctx.cr6.eq) goto loc_8213AB40;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8213ab38
	if (ctx.cr6.eq) goto loc_8213AB38;
loc_8213AB24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213add0
	ctx.lr = 0x8213AB2C;
	sub_8213ADD0(ctx, base);
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8213ab24
	if (!ctx.cr6.eq) goto loc_8213AB24;
loc_8213AB38:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8213AB40;
	sub_8269CE98(ctx, base);
loc_8213AB40:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x8213AB58;
	sub_8269CE98(ctx, base);
loc_8213AB58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-18352
	ctx.r11.s64 = ctx.r11.s64 + -18352;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// beq 0x8213ab74
	if (ctx.cr0.eq) goto loc_8213AB74;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213AB74;
	sub_8269CE98(ctx, base);
loc_8213AB74:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82141DB0) {
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
	ctx.lr = 0x82141DB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82141e70
	if (!ctx.cr6.gt) goto loc_82141E70;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r10,-25252
	r28.s64 = ctx.r10.s64 + -25252;
	// addi r27,r11,-25320
	r27.s64 = ctx.r11.s64 + -25320;
loc_82141DE8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82141dfc
	if (ctx.cr6.lt) goto loc_82141DFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141e0c
	if (ctx.cr6.lt) goto loc_82141E0C;
loc_82141DFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82141E0C;
	sub_821231D0(ctx, base);
loc_82141E0C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// beq cr6,0x82141e38
	if (ctx.cr6.eq) goto loc_82141E38;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,92
	r30.s64 = r30.s64 + 92;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141de8
	if (ctx.cr6.lt) goto loc_82141DE8;
	// b 0x82141e70
	goto loc_82141E70;
loc_82141E38:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82141E44:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82141e64
	if (!ctx.cr0.eq) goto loc_82141E64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82141e44
	if (!ctx.cr6.eq) goto loc_82141E44;
loc_82141E64:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82141e74
	if (ctx.cr0.eq) goto loc_82141E74;
loc_82141E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82141E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821488B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821488dc
	if (ctx.cr0.eq) goto loc_821488DC;
	// bl 0x8269ce98
	ctx.lr = 0x821488DC;
	sub_8269CE98(ctx, base);
loc_821488DC:
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

DEFINE_REX_FUNC(sub_8214A588) {
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
	ctx.lr = 0x8214A590;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A5B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8214a978
	if (ctx.cr0.eq) goto loc_8214A978;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A5CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// bl 0x82125d00
	ctx.lr = 0x8214A5D8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214a978
	if (!ctx.cr0.eq) goto loc_8214A978;
	// li r26,0
	r26.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r26,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214A5F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214a980
	if (ctx.cr0.eq) goto loc_8214A980;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r10,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r10,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// lwz r28,56(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 56);
	// b 0x8214a6f8
	goto loc_8214A6F8;
loc_8214A62C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8214a670
	goto loc_8214A670;
loc_8214A654:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// bge cr6,0x8214a668
	if (!ctx.cr6.lt) goto loc_8214A668;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8214a670
	goto loc_8214A670;
loc_8214A668:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214A670:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8214a654
	if (ctx.cr0.eq) goto loc_8214A654;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214a694
	if (ctx.cr6.eq) goto loc_8214A694;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8214a6e8
	if (!ctx.cr6.lt) goto loc_8214A6E8;
loc_8214A694:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8214A69C;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8214a7d0
	if (ctx.cr0.eq) goto loc_8214A7D0;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addic. r11,r6,12
	ctx.xer.ca = ctx.r6.u32 > 4294967283;
	ctx.r11.s64 = ctx.r6.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stb r26,20(r6)
	REX_STORE_U8(ctx.r6.u32 + 20, r26.u8);
	// stb r26,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, r26.u8);
	// beq 0x8214a6d4
	if (ctx.cr0.eq) goto loc_8214A6D4;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8214A6D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214af28
	ctx.lr = 0x8214A6E4;
	sub_8214AF28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8214A6E8:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8214A6F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8214a62c
	if (!ctx.cr6.eq) goto loc_8214A62C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-13760
	ctx.r4.s64 = ctx.r10.s64 + -13760;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f0,-7264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bctrl 
	ctx.lr = 0x8214A784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r4,r11,-13712
	ctx.r4.s64 = ctx.r11.s64 + -13712;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A7A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r10,-13692
	ctx.r4.s64 = ctx.r10.s64 + -13692;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A7C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// b 0x8214a7f0
	goto loc_8214A7F0;
loc_8214A7D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8214A7E8;
	sub_82120018(ctx, base);
loc_8214A7E8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8214A7F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a7e8
	if (!ctx.cr6.eq) goto loc_8214A7E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-13672
	ctx.r4.s64 = ctx.r10.s64 + -13672;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8214a868
	if (ctx.cr6.eq) goto loc_8214A868;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r10,-13648
	r29.s64 = ctx.r10.s64 + -13648;
loc_8214A830:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82133198
	ctx.lr = 0x8214A858;
	sub_82133198(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8214a830
	if (!ctx.cr6.eq) goto loc_8214A830;
loc_8214A868:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-13628
	ctx.r4.s64 = ctx.r10.s64 + -13628;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,28(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A88C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-13596
	ctx.r4.s64 = ctx.r11.s64 + -13596;
	// lwz r5,32(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-13564
	ctx.r4.s64 = ctx.r11.s64 + -13564;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214a91c
	if (ctx.cr6.eq) goto loc_8214A91C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-13540
	r28.s64 = ctx.r11.s64 + -13540;
loc_8214A8E4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214A90C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214a8e4
	if (!ctx.cr6.eq) goto loc_8214A8E4;
loc_8214A91C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8214a958
	if (!ctx.cr0.eq) goto loc_8214A958;
loc_8214A930:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82133210
	ctx.lr = 0x8214A93C;
	sub_82133210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8214A948;
	sub_8269CE98(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214a930
	if (ctx.cr0.eq) goto loc_8214A930;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8214A958:
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r26,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269ce98
	ctx.lr = 0x8214A978;
	sub_8269CE98(ctx, base);
loc_8214A978:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
loc_8214A980:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8214A998;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82169A08) {
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
	ctx.lr = 0x82169A10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 33);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82169a84
	if (!ctx.cr0.eq) goto loc_82169A84;
	// li r28,0
	r28.s64 = 0;
loc_82169A30:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82169a08
	ctx.lr = 0x82169A3C;
	sub_82169A08(ctx, base);
	// lbz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 28);
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// beq 0x82169a58
	if (ctx.cr0.eq) goto loc_82169A58;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x82169A58;
	sub_8269D1B8(ctx, base);
loc_82169A58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// bl 0x8269ce98
	ctx.lr = 0x82169A74;
	sub_8269CE98(ctx, base);
	// lbz r11,33(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 33);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82169a30
	if (ctx.cr0.eq) goto loc_82169A30;
loc_82169A84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8216D650) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,640
	ctx.r3.s64 = 640;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216D684;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216D690;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82170228) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca8
	ctx.lr = 0x82170230;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
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
	ctx.lr = 0x82170278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8217033c
	if (ctx.cr0.lt) goto loc_8217033C;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2e60
	ctx.lr = 0x82170290;
	sub_826A2E60(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269cd20
	ctx.lr = 0x821702A0;
	sub_8269CD20(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cd20
	ctx.lr = 0x821702B0;
	sub_8269CD20(ctx, base);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// li r5,63
	ctx.r5.s64 = 63;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8269cd20
	ctx.lr = 0x821702C8;
	sub_8269CD20(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r8,404(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r26,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r26.u32);
	// stw r25,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r25.u32);
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
loc_821702F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821702f0
	if (!ctx.cr6.eq) goto loc_821702F0;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82170330
	if (ctx.cr6.lt) goto loc_82170330;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,26024
	ctx.r3.s64 = ctx.r10.s64 + 26024;
	// li r5,232
	ctx.r5.s64 = 232;
	// bl 0x821231d0
	ctx.lr = 0x82170330;
	sub_821231D0(ctx, base);
loc_82170330:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r24,792
	ctx.r3.s64 = r24.s64 + 792;
	// bl 0x821700b0
	ctx.lr = 0x8217033C;
	sub_821700B0(ctx, base);
loc_8217033C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82178B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82178b84
	goto loc_82178B84;
loc_82178B7C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
loc_82178B84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178b7c
	if (!ctx.cr6.eq) goto loc_82178B7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120d70
	ctx.lr = 0x82178B94;
	sub_82120D70(ctx, base);
	// b 0x82178bf4
	goto loc_82178BF4;
loc_82178B98:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217a1d8
	ctx.lr = 0x82178BA4;
	sub_8217A1D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120700
	ctx.lr = 0x82178BB0;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82178BC0;
	sub_82120AC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8217a160
	ctx.lr = 0x82178BCC;
	sub_8217A160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178ad8
	ctx.lr = 0x82178BD8;
	sub_82178AD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82178BEC;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82178c0c
	if (ctx.cr6.eq) goto loc_82178C0C;
loc_82178BF4:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120780
	ctx.lr = 0x82178C00;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82178b98
	if (!ctx.cr0.eq) goto loc_82178B98;
	// b 0x82178c10
	goto loc_82178C10;
loc_82178C0C:
	// li r31,0
	r31.s64 = 0;
loc_82178C10:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82178C20;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8217CEF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8217d048
	if (ctx.cr6.lt) goto loc_8217D048;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8217d03c
	if (!ctx.cr6.lt) goto loc_8217D03C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r31,r9,15136
	r31.s64 = ctx.r9.s64 + 15136;
loc_8217CF20:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8217d048
	if (ctx.cr0.eq) goto loc_8217D048;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x8217d010
	if (ctx.cr6.eq) goto loc_8217D010;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x8217d004
	if (ctx.cr6.eq) goto loc_8217D004;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x8217cfec
	if (ctx.cr6.eq) goto loc_8217CFEC;
	// cmpwi cr6,r9,239
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 239, ctx.xer);
	// beq cr6,0x8217cf7c
	if (ctx.cr6.eq) goto loc_8217CF7C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8217cf74
	if (!ctx.cr6.eq) goto loc_8217CF74;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8217cf68
	if (!ctx.cr6.eq) goto loc_8217CF68;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8217CF68:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8217CF6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8217d034
	goto loc_8217D034;
loc_8217CF74:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8217d030
	goto loc_8217D030;
loc_8217CF7C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8217cf74
	if (!ctx.cr6.eq) goto loc_8217CF74;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8217d034
	if (ctx.cr0.eq) goto loc_8217D034;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8217d034
	if (ctx.cr0.eq) goto loc_8217D034;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,187
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 187, ctx.xer);
	// bne cr6,0x8217cfb4
	if (!ctx.cr6.eq) goto loc_8217CFB4;
	// clrlwi r30,r8,24
	r30.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r30,191
	ctx.cr6.compare<uint32_t>(r30.u32, 191, ctx.xer);
	// beq cr6,0x8217cfdc
	if (ctx.cr6.eq) goto loc_8217CFDC;
loc_8217CFB4:
	// cmplwi cr6,r9,191
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 191, ctx.xer);
	// bne cr6,0x8217cfe4
	if (!ctx.cr6.eq) goto loc_8217CFE4;
	// clrlwi r30,r8,24
	r30.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r30,190
	ctx.cr6.compare<uint32_t>(r30.u32, 190, ctx.xer);
	// beq cr6,0x8217cfdc
	if (ctx.cr6.eq) goto loc_8217CFDC;
	// cmplwi cr6,r9,191
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 191, ctx.xer);
	// bne cr6,0x8217cfe4
	if (!ctx.cr6.eq) goto loc_8217CFE4;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,191
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 191, ctx.xer);
	// bne cr6,0x8217cfe4
	if (!ctx.cr6.eq) goto loc_8217CFE4;
loc_8217CFDC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8217d034
	goto loc_8217D034;
loc_8217CFE4:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8217cf6c
	goto loc_8217CF6C;
loc_8217CFEC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
loc_8217CFF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne cr6,0x8217d034
	if (!ctx.cr6.eq) goto loc_8217D034;
	// b 0x8217d030
	goto loc_8217D030;
loc_8217D004:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// b 0x8217cff4
	goto loc_8217CFF4;
loc_8217D010:
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r10.s32 / ctx.r6.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
loc_8217D030:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8217D034:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8217cf20
	if (ctx.cr6.lt) goto loc_8217CF20;
loc_8217D03C:
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8217D048:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218B308) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8218B310;
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,92(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// add r23,r11,r3
	r23.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218b41c
	if (!ctx.cr6.gt) goto loc_8218B41C;
loc_8218B354:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmadds f2,f10,f12,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x8218aa80
	ctx.lr = 0x8218B384;
	sub_8218AA80(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// rlwinm r24,r3,6,0,25
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B3A4;
	sub_8218CA70(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r31
	r25.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B3D8;
	sub_8218CA70(ctx, base);
	// lfd f13,0(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r25.u32 + 0);
	// lfd f0,136(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 136);
	// fsubs f12,f29,f1
	ctx.f12.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt cr6,0x8218b354
	if (ctx.cr6.lt) goto loc_8218B354;
loc_8218B41C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821928D0) {
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
	ctx.lr = 0x821928D8;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,2012(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 2012);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,1248
	r27.s64 = ctx.r11.s64 + 1248;
	// beq cr6,0x8219291c
	if (ctx.cr6.eq) goto loc_8219291C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,296(r27)
	ctx.r5.u64 = REX_LOAD_U8(r27.u32 + 296);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219291C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219291C:
	// lbz r11,296(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 296);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82192ad4
	if (ctx.cr0.eq) goto loc_82192AD4;
	// lwz r4,2016(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2016);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82192958
	if (ctx.cr6.eq) goto loc_82192958;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,288(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 288);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82192958:
	// lwz r4,2020(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2020);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82192988
	if (ctx.cr6.eq) goto loc_82192988;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r27,256
	ctx.r5.s64 = r27.s64 + 256;
	// lwz r6,288(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 288);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82192988:
	// lwa r11,292(r27)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r27.u32 + 292));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r4,2024(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2024);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x821929c8
	if (ctx.cr6.eq) goto loc_821929C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821929C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821929C8:
	// lwz r4,2028(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2028);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82192a00
	if (ctx.cr6.eq) goto loc_82192A00;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / f31.f64));
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82192A00:
	// lwz r11,2032(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82192ad4
	if (ctx.cr6.lt) goto loc_82192AD4;
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82192ad4
	if (!ctx.cr6.gt) goto loc_82192AD4;
	// addi r26,r27,268
	r26.s64 = r27.s64 + 268;
	// li r29,255
	r29.s64 = 255;
	// lis r30,-32106
	r30.s64 = -2104098816;
loc_82192A28:
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,2032(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2032);
	// lwzu r5,4(r26)
	ea = 4 + r26.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192A48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,2032(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2032);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,2032(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2032);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,2032(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2032);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82192AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82192a28
	if (ctx.cr6.lt) goto loc_82192A28;
loc_82192AD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A0E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_821A0E94:
	// lfs f12,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,256
	ctx.r8.s64 = ctx.r9.s64 + 256;
	// lfs f13,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0e94
	if (!ctx.cr6.eq) goto loc_821A0E94;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6C58) {
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
	// bl 0x821a7360
	ctx.lr = 0x821A6C70;
	sub_821A7360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a6c80
	if (!ctx.cr0.eq) goto loc_821A6C80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a6cc4
	goto loc_821A6CC4;
loc_821A6C80:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-18676
	ctx.r4.s64 = ctx.r11.s64 + -18676;
	// bl 0x8215f670
	ctx.lr = 0x821A6C90;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-18664
	ctx.r4.s64 = ctx.r11.s64 + -18664;
	// bl 0x8215f670
	ctx.lr = 0x821A6C9C;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x8215f670
	ctx.lr = 0x821A6CA8;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a6d78
	ctx.lr = 0x821A6CB4;
	sub_821A6D78(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8212aaa0
	ctx.lr = 0x821A6CC0;
	sub_8212AAA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A6CC4:
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

DEFINE_REX_FUNC(sub_821A9338) {
	REX_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A95D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9698) {
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
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822f6280
	ctx.lr = 0x821A96AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a96bc
	if (ctx.cr0.eq) goto loc_821A96BC;
	// bl 0x821a96d0
	ctx.lr = 0x821A96B8;
	sub_821A96D0(ctx, base);
	// b 0x821a96c0
	goto loc_821A96C0;
loc_821A96BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A96C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB1A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15288
	ctx.r3.s64 = ctx.r11.s64 + -15288;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB288) {
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
	ctx.lr = 0x821AB290;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// bl 0x82160340
	ctx.lr = 0x821AB2AC;
	sub_82160340(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,6072(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x821AB2BC;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x8215f338
	ctx.lr = 0x821AB2C8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821AB2CC;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AB2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82126238
	ctx.lr = 0x821AB2F4;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82160388
	ctx.lr = 0x821AB304;
	sub_82160388(ctx, base);
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
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x821AB320;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x821ab34c
	if (ctx.cr0.eq) goto loc_821AB34C;
loc_821AB328:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82120ac0
	ctx.lr = 0x821AB338;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821AB340;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AB344:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
loc_821AB34C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-24432
	r28.s64 = ctx.r11.s64 + -24432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x821AB360;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ab328
	if (ctx.cr6.eq) goto loc_821AB328;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x821AB374;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ab404
	if (ctx.cr0.eq) goto loc_821AB404;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,11692
	ctx.r6.s64 = ctx.r11.s64 + 11692;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r9,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// std r8,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// stb r31,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, r31.u8);
	// b 0x821ab408
	goto loc_821AB408;
loc_821AB404:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821AB408:
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215ef60
	ctx.lr = 0x821AB414;
	sub_8215EF60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-29916
	ctx.r4.s64 = ctx.r11.s64 + -29916;
	// bl 0x8215f338
	ctx.lr = 0x821AB420;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ab434
	if (!ctx.cr6.eq) goto loc_821AB434;
	// lbz r30,8(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821ab438
	goto loc_821AB438;
loc_821AB434:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821AB438:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x821AB444;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 96);
	// bl 0x821da7d8
	ctx.lr = 0x821AB454;
	sub_821DA7D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ab47c
	if (!ctx.cr0.eq) goto loc_821AB47C;
loc_821AB45C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82120ac0
	ctx.lr = 0x821AB46C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821AB474;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821ab344
	goto loc_821AB344;
loc_821AB47C:
	// li r31,1
	r31.s64 = 1;
	// b 0x821ab45c
	goto loc_821AB45C;
}

DEFINE_REX_FUNC(sub_821B9340) {
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
	ctx.lr = 0x821B9348;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// li r9,60
	ctx.r9.s64 = 60;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// li r10,192
	ctx.r10.s64 = 192;
	// li r8,45
	ctx.r8.s64 = 45;
	// stb r9,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// li r7,66
	ctx.r7.s64 = 66;
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// li r11,80
	ctx.r11.s64 = 80;
	// stb r8,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stb r7,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// li r8,90
	ctx.r8.s64 = 90;
	// li r30,255
	r30.s64 = 255;
	// stb r9,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r8,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// li r29,1
	r29.s64 = 1;
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lfs f0,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// lfs f13,228(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lfs f12,700(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, r30.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r30,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, r30.u8);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stb r30,15(r31)
	REX_STORE_U8(r31.u32 + 15, r30.u8);
	// addi r4,r11,-20016
	ctx.r4.s64 = ctx.r11.s64 + -20016;
	// stb r30,14(r31)
	REX_STORE_U8(r31.u32 + 14, r30.u8);
	// stb r30,13(r31)
	REX_STORE_U8(r31.u32 + 13, r30.u8);
	// stb r30,20(r31)
	REX_STORE_U8(r31.u32 + 20, r30.u8);
	// stb r30,19(r31)
	REX_STORE_U8(r31.u32 + 19, r30.u8);
	// stb r30,18(r31)
	REX_STORE_U8(r31.u32 + 18, r30.u8);
	// stb r30,17(r31)
	REX_STORE_U8(r31.u32 + 17, r30.u8);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r29,28(r31)
	REX_STORE_U8(r31.u32 + 28, r29.u8);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82120600
	ctx.lr = 0x821B9400;
	sub_82120600(ctx, base);
	// stb r29,68(r31)
	REX_STORE_U8(r31.u32 + 68, r29.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// addi r4,r11,-20000
	ctx.r4.s64 = ctx.r11.s64 + -20000;
	// bl 0x82120600
	ctx.lr = 0x821B9414;
	sub_82120600(ctx, base);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,103(r31)
	REX_STORE_U8(r31.u32 + 103, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,102(r31)
	REX_STORE_U8(r31.u32 + 102, r30.u8);
	// stb r30,101(r31)
	REX_STORE_U8(r31.u32 + 101, r30.u8);
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stb r29,104(r31)
	REX_STORE_U8(r31.u32 + 104, r29.u8);
	// stb r28,116(r31)
	REX_STORE_U8(r31.u32 + 116, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821C06C8) {
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
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x821C06F8;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0728
	ctx.lr = 0x821C0704;
	sub_821C0728(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821C3658) {
	REX_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x821914c8
	sub_821914C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C3AD8) {
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
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c3b1c
	if (ctx.cr6.eq) goto loc_821C3B1C;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821C3B1C:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821c3cd8
	ctx.lr = 0x821C3B28;
	sub_821C3CD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3b40
	if (ctx.cr0.eq) goto loc_821C3B40;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821c3d50
	ctx.lr = 0x821C3B3C;
	sub_821C3D50(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_821C3B40:
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

DEFINE_REX_FUNC(sub_821C7DE8) {
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
	// beq 0x821c7e1c
	if (ctx.cr0.eq) goto loc_821C7E1C;
	// addi r3,r3,464
	ctx.r3.s64 = ctx.r3.s64 + 464;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c7e6c
	if (ctx.cr6.eq) goto loc_821C7E6C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x821e4728
	ctx.lr = 0x821C7E18;
	sub_821E4728(ctx, base);
	// b 0x821c7e6c
	goto loc_821C7E6C;
loc_821C7E1C:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
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
	// bl 0x821e3148
	ctx.lr = 0x821C7E6C;
	sub_821E3148(ctx, base);
loc_821C7E6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD258) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821CD284;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821CD28C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cd29c
	if (ctx.cr0.eq) goto loc_821CD29C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821CD29C;
	sub_8269CE98(ctx, base);
loc_821CD29C:
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

DEFINE_REX_FUNC(sub_821CFBB0) {
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821CFBDC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821CFBEC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821CFBF4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cfc04
	if (ctx.cr0.eq) goto loc_821CFC04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821CFC04;
	sub_8269CE98(ctx, base);
loc_821CFC04:
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

DEFINE_REX_FUNC(sub_821D3C30) {
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
	// bl 0x826a1c90
	ctx.lr = 0x821D3C38;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2ca0
	ctx.lr = 0x821D3C40;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D3C58:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r19,r11,r19
	r19.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// bdnz 0x821d3c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D3C58;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r21,r4,12
	r21.s64 = ctx.r4.s64 + 12;
	// li r18,3
	r18.s64 = 3;
	// lfd f30,208(r10)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 208);
	// lfd f29,200(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 200);
	// lfd f28,192(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 192);
	// lfd f27,184(r10)
	f27.u64 = REX_LOAD_U64(ctx.r10.u32 + 184);
	// lfd f26,136(r10)
	f26.u64 = REX_LOAD_U64(ctx.r10.u32 + 136);
loc_821D3C8C:
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r20,r10,r11
	r20.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r25,r31,r10
	r25.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// divwu r11,r19,r20
	ctx.r11.u64 = uint32_t(r20.u32 ? r19.u32 / r20.u32 : 0);
	// twllei r20,0
	if (r20.s32 == 0 || r20.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mullw r23,r11,r25
	r23.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// blt cr6,0x821d3d84
	if (ctx.cr6.lt) goto loc_821D3D84;
	// rlwinm r27,r25,31,1,31
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r22,4
	r30.s64 = r22.s64 + 4;
	// addi r26,r31,-2
	r26.s64 = r31.s64 + -2;
loc_821D3CC8:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821d3d4c
	if (!ctx.cr6.lt) goto loc_821D3D4C;
	// add r29,r26,r4
	r29.u64 = r26.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// bgt cr6,0x821d3d4c
	if (ctx.cr6.gt) goto loc_821D3D4C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + r22.u64;
loc_821D3CEC:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bgt cr6,0x821d3d38
	if (ctx.cr6.gt) goto loc_821D3D38;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_821D3D04:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + r25.u64;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r23.u32, ctx.xer);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x821d3d04
	if (!ctx.cr6.gt) goto loc_821D3D04;
loc_821D3D38:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// ble cr6,0x821d3cec
	if (!ctx.cr6.gt) goto loc_821D3CEC;
loc_821D3D4C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// blt cr6,0x821d3d70
	if (ctx.cr6.lt) goto loc_821D3D70;
loc_821D3D58:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821d3d70
	if (!ctx.cr6.gt) goto loc_821D3D70;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x821d3d58
	if (!ctx.cr6.lt) goto loc_821D3D58;
loc_821D3D70:
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// ble cr6,0x821d3cc8
	if (!ctx.cr6.gt) goto loc_821D3CC8;
loc_821D3D84:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bge cr6,0x821d3ed8
	if (!ctx.cr6.lt) goto loc_821D3ED8;
loc_821D3D90:
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r28,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? r28.u32 / r31.u32 : 0);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fdiv f31,f27,f0
	f31.f64 = f27.f64 / ctx.f0.f64;
	// fmul f1,f31,f28
	ctx.f1.f64 = f31.f64 * f28.f64;
	// bl 0x826a14e0
	ctx.lr = 0x821D3DB8;
	sub_826A14E0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmul f0,f0,f0
	ctx.f0.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f31,f0,f29
	f31.f64 = ctx.f0.f64 * f29.f64;
	// bl 0x826a14e0
	ctx.lr = 0x821D3DCC;
	sub_826A14E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// fmr f13,f26
	ctx.f13.f64 = f26.f64;
	// blt cr6,0x821d3ecc
	if (ctx.cr6.lt) goto loc_821D3ECC;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// fadd f10,f31,f30
	ctx.f10.f64 = f31.f64 + f30.f64;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r22,4
	ctx.r3.s64 = r22.s64 + 4;
	// add r29,r11,r22
	r29.u64 = ctx.r11.u64 + r22.u64;
	// addi r24,r31,-2
	r24.s64 = r31.s64 + -2;
loc_821D3DFC:
	// add r27,r24,r4
	r27.u64 = r24.u64 + ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, ctx.xer);
	// bgt cr6,0x821d3ea4
	if (ctx.cr6.gt) goto loc_821D3EA4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_821D3E14:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// bgt cr6,0x821d3e90
	if (ctx.cr6.gt) goto loc_821D3E90;
	// frsp f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_821D3E34:
	// lfs f9,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r23.u32, ctx.xer);
	// fmsubs f8,f11,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f8.f64)));
	// fmadds f9,f11,f9,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f6.f64)));
	// fsubs f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x821d3e34
	if (!ctx.cr6.gt) goto loc_821D3E34;
loc_821D3E90:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r27.u32, ctx.xer);
	// ble cr6,0x821d3e14
	if (!ctx.cr6.gt) goto loc_821D3E14;
loc_821D3EA4:
	// fmul f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// fmul f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 * ctx.f0.f64;
	// add r3,r26,r3
	ctx.r3.u64 = r26.u64 + ctx.r3.u64;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// fmsub f12,f0,f31,f12
	ctx.f12.f64 = std::fma(ctx.f0.f64, f31.f64, -ctx.f12.f64);
	// fmadd f13,f10,f13,f11
	ctx.f13.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// ble cr6,0x821d3dfc
	if (!ctx.cr6.gt) goto loc_821D3DFC;
loc_821D3ECC:
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x821d3d90
	if (ctx.cr6.lt) goto loc_821D3D90;
loc_821D3ED8:
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// addi r21,r21,-4
	r21.s64 = r21.s64 + -4;
	// bne 0x821d3c8c
	if (!ctx.cr0.eq) goto loc_821D3C8C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2cec
	ctx.lr = 0x821D3EF4;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_821E9D10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x821bf110
	ctx.lr = 0x821E9D30;
	sub_821BF110(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120600
	ctx.lr = 0x821E9D48;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821E9D58;
	sub_82180E18(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821E9D6C;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_821EC0E0) {
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
	ctx.lr = 0x821EC0E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821ec238
	if (!ctx.cr6.gt) goto loc_821EC238;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// addi r9,r6,-8
	ctx.r9.s64 = ctx.r6.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821EC118:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821ec118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EC118;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821ec898
	ctx.lr = 0x821EC130;
	sub_821EC898(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x821ec238
	if (!ctx.cr6.gt) goto loc_821EC238;
	// addi r31,r25,48
	r31.s64 = r25.s64 + 48;
	// addi r28,r24,64
	r28.s64 = r24.s64 + 64;
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_821EC148:
	// lwzu r27,4(r26)
	ea = 4 + r26.u32;
	r27.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x823fbd18
	ctx.lr = 0x821EC160;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mulli r11,r27,48
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(48));
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r8,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r8.u64);
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f4,f11,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmsubs f6,f11,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmadds f5,f11,f7,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f3,f0,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f3.f64)));
	// fmadds f12,f9,f12,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f4.f64)));
	// fnmsubs f6,f9,f10,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fmadds f5,f9,f8,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f5.f64)));
	// fmadds f11,f11,f8,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f3.f64)));
	// fnmsubs f0,f0,f8,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f6,f13,f8,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f6.f64)));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fnmsubs f13,f13,f10,f5
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f5.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f0,f9,f7,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f7.f64, -ctx.f11.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 12);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 20);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// bl 0x821ec898
	ctx.lr = 0x821EC224;
	sub_821EC898(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x821ec148
	if (!ctx.cr0.eq) goto loc_821EC148;
loc_821EC238:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821FACA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8215f0f0
	sub_8215F0F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FAE38) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,25664
	ctx.r11.s64 = ctx.r11.s64 + 25664;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821fae84
	if (ctx.cr6.eq) goto loc_821FAE84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25244
	ctx.r3.s64 = ctx.r10.s64 + 25244;
	// li r5,113
	ctx.r5.s64 = 113;
	// bl 0x821231d0
	ctx.lr = 0x821FAE84;
	sub_821231D0(ctx, base);
loc_821FAE84:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,25640
	ctx.r11.s64 = ctx.r11.s64 + 25640;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821faea0
	if (ctx.cr0.eq) goto loc_821FAEA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821FAEA0;
	sub_8269CE98(ctx, base);
loc_821FAEA0:
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

DEFINE_REX_FUNC(sub_821FE2F8) {
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
	ctx.lr = 0x821FE300;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x821fe344
	if (!ctx.cr6.gt) goto loc_821FE344;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26164
	ctx.r4.s64 = ctx.r11.s64 + 26164;
	// addi r3,r10,26568
	ctx.r3.s64 = ctx.r10.s64 + 26568;
	// li r5,462
	ctx.r5.s64 = 462;
	// bl 0x821231d0
	ctx.lr = 0x821FE344;
	sub_821231D0(ctx, base);
loc_821FE344:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE35C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// beq 0x821fe374
	if (ctx.cr0.eq) goto loc_821FE374;
	// lfs f31,1032(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1032);
	f31.f64 = double(temp.f32);
	// b 0x821fe378
	goto loc_821FE378;
loc_821FE374:
	// lfs f31,1036(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1036);
	f31.f64 = double(temp.f32);
loc_821FE378:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fe388
	if (ctx.cr6.eq) goto loc_821FE388;
	// lfs f30,1376(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1376);
	f30.f64 = double(temp.f32);
	// b 0x821fe38c
	goto loc_821FE38C;
loc_821FE388:
	// lfs f30,912(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 912);
	f30.f64 = double(temp.f32);
loc_821FE38C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x821fe39c
	if (ctx.cr6.lt) goto loc_821FE39C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821FE39C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x821FE3A8;
	sub_8212D668(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bne cr6,0x821fe3c0
	if (!ctx.cr6.eq) goto loc_821FE3C0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f30,1392(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1392);
	f30.f64 = double(temp.f32);
	// lfs f0,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_821FE3C0:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,26668
	ctx.r4.s64 = ctx.r11.s64 + 26668;
	// lwz r3,6076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8215fb50
	ctx.lr = 0x821FE3E8;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fe42c
	if (ctx.cr0.eq) goto loc_821FE42C;
	// lwz r3,6076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,26680
	ctx.r4.s64 = ctx.r11.s64 + 26680;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x821FE414;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fe42c
	if (ctx.cr0.eq) goto loc_821FE42C;
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821FE42C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821fe4a0
	if (!ctx.cr0.gt) goto loc_821FE4A0;
loc_821FE44C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,464(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f4,444(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 444);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,440(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8216ad88
	ctx.lr = 0x821FE480;
	sub_8216AD88(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821fe44c
	if (ctx.cr6.lt) goto loc_821FE44C;
loc_821FE4A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8220A5B0) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x822f6280
	ctx.lr = 0x8220A5C8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220a5ec
	if (ctx.cr0.eq) goto loc_8220A5EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219bf68
	ctx.lr = 0x8220A5D8;
	sub_8219BF68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,32128
	ctx.r11.s64 = ctx.r11.s64 + 32128;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220a5f0
	goto loc_8220A5F0;
loc_8220A5EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220A5F0:
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

DEFINE_REX_FUNC(sub_8220C370) {
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
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x822f6280
	ctx.lr = 0x8220C388;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220c3ac
	if (ctx.cr0.eq) goto loc_8220C3AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268f38
	ctx.lr = 0x8220C398;
	sub_82268F38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-32336
	ctx.r11.s64 = ctx.r11.s64 + -32336;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220c3b0
	goto loc_8220C3B0;
loc_8220C3AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C3B0:
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

DEFINE_REX_FUNC(sub_8220E2D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14204
	ctx.r3.s64 = ctx.r11.s64 + -14204;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220EB08) {
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
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x822f6280
	ctx.lr = 0x8220EB1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220eb2c
	if (ctx.cr0.eq) goto loc_8220EB2C;
	// bl 0x8220eb40
	ctx.lr = 0x8220EB28;
	sub_8220EB40(ctx, base);
	// b 0x8220eb30
	goto loc_8220EB30;
loc_8220EB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220EB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210730) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822e9a68
	ctx.lr = 0x82210750;
	sub_822E9A68(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x82210764;
	sub_8216B740(ctx, base);
	// lbz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 280);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8221085c
	if (ctx.cr0.eq) goto loc_8221085C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,-26772
	ctx.r9.s64 = ctx.r9.s64 + -26772;
loc_82210780:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822107a4
	if (ctx.cr0.eq) goto loc_822107A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82210780
	if (ctx.cr6.eq) goto loc_82210780;
loc_822107A4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822107d4
	if (!ctx.cr0.eq) goto loc_822107D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29404
	ctx.r4.s64 = ctx.r11.s64 + -29404;
	// bl 0x82120600
	ctx.lr = 0x822107BC;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822107C8;
	sub_821DD040(ctx, base);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x8221082c
	goto loc_8221082C;
loc_822107D4:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,-26764
	ctx.r10.s64 = ctx.r10.s64 + -26764;
loc_822107DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82210800
	if (ctx.cr0.eq) goto loc_82210800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822107dc
	if (ctx.cr6.eq) goto loc_822107DC;
loc_82210800:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221085c
	if (!ctx.cr0.eq) goto loc_8221085C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29364
	ctx.r4.s64 = ctx.r11.s64 + -29364;
	// bl 0x82120600
	ctx.lr = 0x82210818;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82210824;
	sub_821DD040(ctx, base);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_8221082C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x82120ac0
	ctx.lr = 0x82210848;
	sub_82120AC0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8221085c
	if (ctx.cr6.eq) goto loc_8221085C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-29396
	ctx.r3.s64 = ctx.r11.s64 + -29396;
	// bl 0x8226afb8
	ctx.lr = 0x8221085C;
	sub_8226AFB8(ctx, base);
loc_8221085C:
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

DEFINE_REX_FUNC(sub_8221DC68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8221DC70;
	// stwu r1,-3984(r1)
	ea = -3984 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x8221dcc4
	if (!ctx.cr6.gt) goto loc_8221DCC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221dcc4
	if (!ctx.cr6.eq) goto loc_8221DCC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x8221DCC0;
	sub_821B2D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8221DCC4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DCDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ddac
	if (!ctx.cr0.eq) goto loc_8221DDAC;
	// li r5,3848
	ctx.r5.s64 = 3848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a2e60
	ctx.lr = 0x8221DCF4;
	sub_826A2E60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8269c988
	ctx.lr = 0x8221DCFC;
	sub_8269C988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8221dd2c
	if (!ctx.cr0.lt) goto loc_8221DD2C;
	// lis r11,-32643
	ctx.r11.s64 = -2139291648;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221dd2c
	if (ctx.cr6.eq) goto loc_8221DD2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,15528
	ctx.r4.s64 = ctx.r11.s64 + 15528;
	// addi r3,r10,15576
	ctx.r3.s64 = ctx.r10.s64 + 15576;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821231d0
	ctx.lr = 0x8221DD2C;
	sub_821231D0(ctx, base);
loc_8221DD2C:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ble cr6,0x8221dd80
	if (!ctx.cr6.gt) goto loc_8221DD80;
	// bctrl 
	ctx.lr = 0x8221DD50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ddac
	if (ctx.cr0.eq) goto loc_8221DDAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ddac
	if (!ctx.cr0.eq) goto loc_8221DDAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269c9b8
	ctx.lr = 0x8221DD7C;
	sub_8269C9B8(ctx, base);
	// b 0x8221ddac
	goto loc_8221DDAC;
loc_8221DD80:
	// bctrl 
	ctx.lr = 0x8221DD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ddac
	if (ctx.cr0.eq) goto loc_8221DDAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ddac
	if (!ctx.cr0.eq) goto loc_8221DDAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ed268
	ctx.lr = 0x8221DDAC;
	sub_823ED268(ctx, base);
loc_8221DDAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,3984
	ctx.r1.s64 = ctx.r1.s64 + 3984;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82228D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82228D30;
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82228da8
	if (!ctx.cr6.eq) goto loc_82228DA8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// bl 0x82120600
	ctx.lr = 0x82228D70;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82228D7C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r30.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82228eac
	goto loc_82228EAC;
loc_82228DA8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6320);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82228e10
	if (!ctx.cr0.eq) goto loc_82228E10;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-23896
	ctx.r4.s64 = ctx.r11.s64 + -23896;
	// bl 0x82120600
	ctx.lr = 0x82228DD8;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82228DE4;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, r30.u32);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82228eac
	goto loc_82228EAC;
loc_82228E10:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82228e60
	if (!ctx.cr6.eq) goto loc_82228E60;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23876
	ctx.r4.s64 = ctx.r11.s64 + -23876;
	// bl 0x82120600
	ctx.lr = 0x82228E28;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82228E34;
	sub_821DD040(ctx, base);
	// stw r30,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82228eac
	goto loc_82228EAC;
loc_82228E60:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82228eb8
	if (!ctx.cr6.eq) goto loc_82228EB8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23856
	ctx.r4.s64 = ctx.r11.s64 + -23856;
	// bl 0x82120600
	ctx.lr = 0x82228E78;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82228E84;
	sub_821DD040(ctx, base);
	// stw r30,784(r1)
	REX_STORE_U32(ctx.r1.u32 + 784, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82228EAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82228EB8;
	sub_82120AC0(ctx, base);
loc_82228EB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82231D40) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82231D48;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r26,255
	r26.s64 = 255;
	// lfs f30,172(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	f30.f64 = double(temp.f32);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lfs f29,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	f29.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r25,r11,1104
	r25.s64 = ctx.r11.s64 + 1104;
	// beq 0x82231e28
	if (ctx.cr0.eq) goto loc_82231E28;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82231DA8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82231da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231DA8;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x82231DC4;
	sub_821884B0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r10,176
	ctx.r7.s64 = ctx.r10.s64 + 176;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82231df4
	if (!ctx.cr6.eq) goto loc_82231DF4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82231DF4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82231e00
	if (!ctx.cr0.eq) goto loc_82231E00;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82231E00:
	// stb r26,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r26.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r26,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r26.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r26,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r26.u8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82138580
	ctx.lr = 0x82231E28;
	sub_82138580(ctx, base);
loc_82231E28:
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r26.u8);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r26,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r26.u8);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 & r26.u64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x822315b8
	ctx.lr = 0x82231E50;
	sub_822315B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82231eb4
	if (ctx.cr0.eq) goto loc_82231EB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,176
	r29.s64 = ctx.r11.s64 + 176;
	// bl 0x822315b8
	ctx.lr = 0x82231E68;
	sub_822315B8(ctx, base);
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r10,112
	ctx.r6.s64 = ctx.r10.s64 + 112;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82136f38
	ctx.lr = 0x82231E88;
	sub_82136F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,176
	r29.s64 = ctx.r11.s64 + 176;
	// bl 0x822315b8
	ctx.lr = 0x82231E98;
	sub_822315B8(ctx, base);
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// addi r6,r3,128
	ctx.r6.s64 = ctx.r3.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82136f38
	ctx.lr = 0x82231EB4;
	sub_82136F38(ctx, base);
loc_82231EB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82231668
	ctx.lr = 0x82231EBC;
	sub_82231668(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82231f20
	if (ctx.cr0.eq) goto loc_82231F20;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,176
	r29.s64 = ctx.r11.s64 + 176;
	// bl 0x82231668
	ctx.lr = 0x82231ED4;
	sub_82231668(ctx, base);
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r10,112
	ctx.r6.s64 = ctx.r10.s64 + 112;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82136f38
	ctx.lr = 0x82231EF4;
	sub_82136F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,176
	r29.s64 = ctx.r11.s64 + 176;
	// bl 0x82231668
	ctx.lr = 0x82231F04;
	sub_82231668(ctx, base);
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// addi r6,r3,128
	ctx.r6.s64 = ctx.r3.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82136f38
	ctx.lr = 0x82231F20;
	sub_82136F38(ctx, base);
loc_82231F20:
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82231f44
	if (!ctx.cr0.eq) goto loc_82231F44;
	// lbz r11,165(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82231f44
	if (!ctx.cr0.eq) goto loc_82231F44;
	// lbz r11,166(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82231ff0
	if (ctx.cr0.eq) goto loc_82231FF0;
loc_82231F44:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82231F58:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82231f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231F58;
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x82231F88;
	sub_821884B0(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82231fb8
	if (!ctx.cr6.eq) goto loc_82231FB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231FB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82231fc4
	if (!ctx.cr0.eq) goto loc_82231FC4;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82231FC4:
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r26,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r26.u8);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82138580
	ctx.lr = 0x82231FF0;
	sub_82138580(ctx, base);
loc_82231FF0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82247000) {
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
	ctx.lr = 0x82247008;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x82247020;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-15064
	ctx.r10.s64 = ctx.r10.s64 + -15064;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x82247048;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82247078
	if (ctx.cr0.eq) goto loc_82247078;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15076
	ctx.r4.s64 = ctx.r11.s64 + -15076;
	// bl 0x82120600
	ctx.lr = 0x82247060;
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
	ctx.lr = 0x82247074;
	sub_82196BA8(ctx, base);
	// b 0x8224707c
	goto loc_8224707C;
loc_82247078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224707C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8224708C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822470a4
	if (ctx.cr0.eq) goto loc_822470A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822470A4;
	sub_82120AC0(ctx, base);
loc_822470A4:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822470AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822470cc
	if (ctx.cr0.eq) goto loc_822470CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822470C4;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822470d0
	goto loc_822470D0;
loc_822470CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822470D0:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822470DC;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822470E4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8224715c
	if (ctx.cr0.eq) goto loc_8224715C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8224710C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82247120;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224714c
	if (ctx.cr0.eq) goto loc_8224714C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,29064
	ctx.r10.s64 = ctx.r10.s64 + 29064;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82247150
	goto loc_82247150;
loc_8224714C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247150:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82247160
	goto loc_82247160;
loc_8224715C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82247160:
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
	ctx.lr = 0x82247178;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82252288) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82252290;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252330
	if (ctx.cr6.eq) goto loc_82252330;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x822522bc
	if (ctx.cr0.lt) goto loc_822522BC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822522d4
	if (ctx.cr6.lt) goto loc_822522D4;
loc_822522BC:
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
	ctx.lr = 0x822522D4;
	sub_821231D0(ctx, base);
loc_822522D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82252330
	if (ctx.cr6.eq) goto loc_82252330;
loc_822522E8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82252330
	if (!ctx.cr6.lt) goto loc_82252330;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225230C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq 0x82252324
	if (ctx.cr0.eq) goto loc_82252324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82200688
	ctx.lr = 0x82252324;
	sub_82200688(ctx, base);
loc_82252324:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822522e8
	if (!ctx.cr6.eq) goto loc_822522E8;
loc_82252330:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82255320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82255328;
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82255360
	if (!ctx.cr6.gt) goto loc_82255360;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82255360
	if (!ctx.cr6.eq) goto loc_82255360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x82255360;
	sub_821B2D80(ctx, base);
loc_82255360:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x822555dc
	if (ctx.cr6.gt) goto loc_822555DC;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16384
	ctx.r12.s64 = ctx.r12.s64 + 16384;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// nop 
	// addi r12,r12,21400
	ctx.r12.s64 = ctx.r12.s64 + 21400;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822555F4;
	case 1:
		goto loc_82255398;
	case 2:
		goto loc_822553F4;
	case 3:
		goto loc_82255410;
	case 4:
		goto loc_8225544C;
	case 5:
		goto loc_8225547C;
	case 6:
		goto loc_82255498;
	case 7:
		goto loc_822554B4;
	case 8:
		goto loc_822554FC;
	case 9:
		goto loc_82255528;
	case 10:
		goto loc_82255574;
	case 11:
		goto loc_82255590;
	case 12:
		goto loc_82255598;
	case 13:
		goto loc_822555BC;
	case 14:
		goto loc_822555C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82255398:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822553c0
	if (!ctx.cr6.eq) goto loc_822553C0;
loc_822553A0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822553BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822553dc
	goto loc_822553DC;
loc_822553C0:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822553dc
	if (!ctx.cr6.eq) goto loc_822553DC;
	// stw r30,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, r30.u32);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
loc_822553D0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
loc_822553D8:
	// bl 0x8216bc98
	ctx.lr = 0x822553DC;
	sub_8216BC98(ctx, base);
loc_822553DC:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// bge 0x822555f4
	if (!ctx.cr0.lt) goto loc_822555F4;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// b 0x822555f4
	goto loc_822555F4;
loc_822553F4:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x822553a0
	if (ctx.cr6.eq) goto loc_822553A0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822553dc
	if (!ctx.cr6.eq) goto loc_822553DC;
	// stw r30,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, r30.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// b 0x822553d0
	goto loc_822553D0;
loc_82255410:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82255444
	if (!ctx.cr6.eq) goto loc_82255444;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225541C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r11.u8);
	// b 0x822553dc
	goto loc_822553DC;
loc_82255444:
	// stb r30,133(r31)
	REX_STORE_U8(r31.u32 + 133, r30.u8);
	// b 0x822553dc
	goto loc_822553DC;
loc_8225544C:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8225545c
	if (!ctx.cr6.eq) goto loc_8225545C;
loc_82255454:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8225541c
	goto loc_8225541C;
loc_8225545C:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822553dc
	if (!ctx.cr6.eq) goto loc_822553DC;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8225546C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r30,133(r31)
	REX_STORE_U8(r31.u32 + 133, r30.u8);
	// addi r3,r11,-26416
	ctx.r3.s64 = ctx.r11.s64 + -26416;
	// b 0x822553d8
	goto loc_822553D8;
loc_8225547C:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82255454
	if (ctx.cr6.eq) goto loc_82255454;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822553dc
	if (!ctx.cr6.eq) goto loc_822553DC;
	// stw r30,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r30.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// b 0x8225546c
	goto loc_8225546C;
loc_82255498:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82255454
	if (ctx.cr6.eq) goto loc_82255454;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822553dc
	if (!ctx.cr6.eq) goto loc_822553DC;
	// stw r30,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, r30.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// b 0x8225546c
	goto loc_8225546C;
loc_822554B4:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822554c8
	if (!ctx.cr6.eq) goto loc_822554C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822554d8
	goto loc_822554D8;
loc_822554C8:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822555f4
	if (!ctx.cr6.eq) goto loc_822555F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822554D8:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r11.u8);
	// lwz r3,6268(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6268);
loc_822554E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822554F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822555f4
	goto loc_822555F4;
loc_822554FC:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82255520
	if (!ctx.cr6.eq) goto loc_82255520;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// b 0x822554e8
	goto loc_822554E8;
loc_82255520:
	// stb r30,133(r31)
	REX_STORE_U8(r31.u32 + 133, r30.u8);
	// b 0x822555f4
	goto loc_822555F4;
loc_82255528:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822555f4
	if (!ctx.cr6.eq) goto loc_822555F4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r29,128(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r31,6208(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822555f4
	goto loc_822555F4;
loc_82255574:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225558C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822555f4
	goto loc_822555F4;
loc_82255590:
	// stb r30,132(r31)
	REX_STORE_U8(r31.u32 + 132, r30.u8);
	// b 0x822555f4
	goto loc_822555F4;
loc_82255598:
	// stb r30,133(r31)
	REX_STORE_U8(r31.u32 + 133, r30.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,944(r1)
	REX_STORE_U32(ctx.r1.u32 + 944, r30.u32);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8216bc98
	ctx.lr = 0x822555B0;
	sub_8216BC98(ctx, base);
loc_822555B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256408
	ctx.lr = 0x822555B8;
	sub_82256408(ctx, base);
	// b 0x822555f4
	goto loc_822555F4;
loc_822555BC:
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822555f4
	if (!ctx.cr6.eq) goto loc_822555F4;
	// b 0x822555b0
	goto loc_822555B0;
loc_822555C8:
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822555f4
	if (!ctx.cr6.eq) goto loc_822555F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256558
	ctx.lr = 0x822555D8;
	sub_82256558(ctx, base);
	// b 0x822555f4
	goto loc_822555F4;
loc_822555DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// addi r3,r10,-11048
	ctx.r3.s64 = ctx.r10.s64 + -11048;
	// li r5,912
	ctx.r5.s64 = 912;
	// bl 0x821231d0
	ctx.lr = 0x822555F4;
	sub_821231D0(ctx, base);
loc_822555F4:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8226AFB8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226AFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226affc
	if (!ctx.cr0.eq) goto loc_8226AFFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbe20
	ctx.lr = 0x8226AFFC;
	sub_822FBE20(ctx, base);
loc_8226AFFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226ED28) {
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
	ctx.lr = 0x8226ED30;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,31476
	ctx.r3.s64 = ctx.r11.s64 + 31476;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8216bc98
	ctx.lr = 0x8226ED68;
	sub_8216BC98(ctx, base);
	// stb r29,60(r31)
	REX_STORE_U8(r31.u32 + 60, r29.u8);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
	// li r29,-1
	r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82120b20
	ctx.lr = 0x8226ED88;
	sub_82120B20(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r25,108(r31)
	REX_STORE_U32(r31.u32 + 108, r25.u32);
	// addi r25,r31,96
	r25.s64 = r31.s64 + 96;
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r24,96(r31)
	REX_STORE_U32(r31.u32 + 96, r24.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226ede4
	if (!ctx.cr6.gt) goto loc_8226EDE4;
	// addi r26,r31,136
	r26.s64 = r31.s64 + 136;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8226EDC0:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8223db98
	ctx.lr = 0x8226EDD0;
	sub_8223DB98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226edc0
	if (ctx.cr6.lt) goto loc_8226EDC0;
loc_8226EDE4:
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8226EDFC;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,100
	ctx.r5.s64 = r31.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8226EE10;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r11,-29816
	ctx.r4.s64 = ctx.r11.s64 + -29816;
	// bl 0x82178cb0
	ctx.lr = 0x8226EE24;
	sub_82178CB0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stb r30,157(r31)
	REX_STORE_U8(r31.u32 + 157, r30.u8);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8226ee44
	if (ctx.cr6.lt) goto loc_8226EE44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ef50
	ctx.lr = 0x8226EE40;
	sub_8226EF50(ctx, base);
	// b 0x8226ee4c
	goto loc_8226EE4C;
loc_8226EE44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_8226EE4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8221c1e8
	ctx.lr = 0x8226EE54;
	sub_8221C1E8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82274B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82274B98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274bd4
	if (!ctx.cr6.eq) goto loc_82274BD4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// b 0x82274c94
	goto loc_82274C94;
loc_82274BD4:
	// lfs f0,72(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r4,64
	r29.s64 = ctx.r4.s64 + 64;
	// lfs f12,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,68(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f9,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f8,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82274c94
	if (!ctx.cr6.gt) goto loc_82274C94;
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82274c90
	if (!ctx.cr6.gt) goto loc_82274C90;
loc_82274C54:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x82250250
	ctx.lr = 0x82274C60;
	sub_82250250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82250408
	ctx.lr = 0x82274C6C;
	sub_82250408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82274c8c
	if (!ctx.cr0.eq) goto loc_82274C8C;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82274c54
	if (ctx.cr6.lt) goto loc_82274C54;
	// b 0x82274c90
	goto loc_82274C90;
loc_82274C8C:
	// stw r6,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r6.u32);
loc_82274C90:
	// stw r6,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r6.u32);
loc_82274C94:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274cb4
	if (!ctx.cr6.eq) goto loc_82274CB4;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8227E620) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227e658
	if (!ctx.cr6.eq) goto loc_8227E658;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// addi r3,r10,-24
	ctx.r3.s64 = ctx.r10.s64 + -24;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x821231d0
	ctx.lr = 0x8227E658;
	sub_821231D0(ctx, base);
loc_8227E658:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// lfs f13,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ld r8,320(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 320);
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8227e6b0
	if (!ctx.cr6.lt) goto loc_8227E6B0;
loc_8227E6A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227e6e0
	goto loc_8227E6E0;
loc_8227E6B0:
	// lwz r10,472(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r10,436(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 436);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8227e6a8
	if (ctx.cr6.eq) goto loc_8227E6A8;
	// lfs f13,624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8227e6e0
	if (!ctx.cr6.gt) goto loc_8227E6E0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227E6E0:
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

DEFINE_REX_FUNC(sub_822856C8) {
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
	ctx.lr = 0x822856D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285754
	if (ctx.cr0.eq) goto loc_82285754;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r30,148(r3)
	REX_STORE_U8(ctx.r3.u32 + 148, r30.u8);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// ble cr6,0x82285754
	if (!ctx.cr6.gt) goto loc_82285754;
	// addi r29,r3,156
	r29.s64 = ctx.r3.s64 + 156;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_8228570C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82285718;
	sub_8228CA78(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82286278
	ctx.lr = 0x82285724;
	sub_82286278(ctx, base);
	// lwz r4,588(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 588);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82285744
	if (ctx.cr6.eq) goto loc_82285744;
	// lwz r3,6180(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82285744:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228570c
	if (ctx.cr6.lt) goto loc_8228570C;
loc_82285754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82288F68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-1456
	r31.s64 = ctx.r11.s64 + -1456;
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82288fd4
	if (ctx.cr6.eq) goto loc_82288FD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eea60
	ctx.lr = 0x82288F9C;
	sub_823EEA60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823ed360
	ctx.lr = 0x82288FA4;
	sub_823ED360(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r11.u32);
	// beq 0x82288fd4
	if (ctx.cr0.eq) goto loc_82288FD4;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,4376
	ctx.r10.s64 = ctx.r10.s64 + 4376;
	// addi r10,r10,-388
	ctx.r10.s64 = ctx.r10.s64 + -388;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82288FC8:
	// stw r11,388(r10)
	REX_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// stwu r11,392(r10)
	ea = 392 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82288fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82288FC8;
loc_82288FD4:
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

DEFINE_REX_FUNC(sub_8228B258) {
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
	ctx.lr = 0x8228B260;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r17,0
	r17.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// addi r4,r10,25860
	ctx.r4.s64 = ctx.r10.s64 + 25860;
	// mr r18,r17
	r18.u64 = r17.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B2A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228b2c0
	if (!ctx.cr0.eq) goto loc_8228B2C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B2C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228B2C0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,6248(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b2f4
	if (!ctx.cr6.eq) goto loc_8228B2F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// bl 0x821ea0e0
	ctx.lr = 0x8228B2E4;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b2f4
	if (ctx.cr0.eq) goto loc_8228B2F4;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x822fbe20
	ctx.lr = 0x8228B2F4;
	sub_822FBE20(ctx, base);
loc_8228B2F4:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r3,6316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r19,1
	r19.s64 = 1;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r30,r11,16528
	r30.s64 = ctx.r11.s64 + 16528;
	// beq 0x8228b534
	if (ctx.cr0.eq) goto loc_8228B534;
	// lwz r3,6076(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6076);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,3328
	ctx.r4.s64 = ctx.r11.s64 + 3328;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215fa30
	ctx.lr = 0x8228B344;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x8228B350;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b37c
	if (ctx.cr0.eq) goto loc_8228B37C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r19,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r19.u32);
	// stw r17,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r17.u32);
	// addi r11,r11,23684
	ctx.r11.s64 = ctx.r11.s64 + 23684;
	// stw r17,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r17.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r17,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r17.u32);
	// std r17,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r17.u64);
	// b 0x8228b380
	goto loc_8228B380;
loc_8228B37C:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8228B380:
	// stw r3,92(r22)
	REX_STORE_U32(r22.u32 + 92, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82179e08
	ctx.lr = 0x8228B38C;
	sub_82179E08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r20,r11,3060
	r20.s64 = ctx.r11.s64 + 3060;
	// bne 0x8228b3bc
	if (!ctx.cr0.eq) goto loc_8228B3BC;
	// lwz r3,92(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 92);
	// bl 0x821357c8
	ctx.lr = 0x8228B3A4;
	sub_821357C8(ctx, base);
	// stw r17,92(r22)
	REX_STORE_U32(r22.u32 + 92, r17.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r11,3344
	ctx.r3.s64 = ctx.r11.s64 + 3344;
	// li r5,1032
	ctx.r5.s64 = 1032;
	// bl 0x821231d0
	ctx.lr = 0x8228B3BC;
	sub_821231D0(ctx, base);
loc_8228B3BC:
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r10,17904
	ctx.r4.s64 = ctx.r10.s64 + 17904;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228ab68
	ctx.lr = 0x8228B3D4;
	sub_8228AB68(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r10,1624
	r26.s64 = ctx.r10.s64 + 1624;
	// addi r21,r9,16504
	r21.s64 = ctx.r9.s64 + 16504;
	// addi r24,r8,16492
	r24.s64 = ctx.r8.s64 + 16492;
	// beq 0x8228b428
	if (ctx.cr0.eq) goto loc_8228B428;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r31,r11,32
	r31.s64 = ctx.r11.s64 + 32;
	// bl 0x8215f670
	ctx.lr = 0x8228B404;
	sub_8215F670(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B40C;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8228b420
	if (ctx.cr6.lt) goto loc_8228B420;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8228b424
	goto loc_8228B424;
loc_8228B420:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8228B424:
	// bl 0x8215fbf8
	ctx.lr = 0x8228B428;
	sub_8215FBF8(ctx, base);
loc_8228B428:
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r10,17404
	ctx.r4.s64 = ctx.r10.s64 + 17404;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228ab68
	ctx.lr = 0x8228B440;
	sub_8228AB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b468
	if (ctx.cr0.eq) goto loc_8228B468;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B454;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B45C;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// b 0x8228b524
	goto loc_8228B524;
loc_8228B468:
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r10,17436
	ctx.r4.s64 = ctx.r10.s64 + 17436;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228ab68
	ctx.lr = 0x8228B480;
	sub_8228AB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b4a8
	if (ctx.cr0.eq) goto loc_8228B4A8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B494;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B49C;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// b 0x8228b524
	goto loc_8228B524;
loc_8228B4A8:
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r10,17460
	ctx.r4.s64 = ctx.r10.s64 + 17460;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228ab68
	ctx.lr = 0x8228B4C0;
	sub_8228AB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b4e8
	if (ctx.cr0.eq) goto loc_8228B4E8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B4D4;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B4DC;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// b 0x8228b524
	goto loc_8228B524;
loc_8228B4E8:
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r10,17492
	ctx.r4.s64 = ctx.r10.s64 + 17492;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228ab68
	ctx.lr = 0x8228B500;
	sub_8228AB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b528
	if (ctx.cr0.eq) goto loc_8228B528;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B514;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B51C;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
loc_8228B524:
	// bl 0x8215fbf8
	ctx.lr = 0x8228B528;
	sub_8215FBF8(ctx, base);
loc_8228B528:
	// lwz r3,92(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 92);
	// bl 0x82179f70
	ctx.lr = 0x8228B530;
	sub_82179F70(ctx, base);
	// b 0x8228b718
	goto loc_8228B718;
loc_8228B534:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r24,r11,16492
	r24.s64 = ctx.r11.s64 + 16492;
	// addi r26,r10,1624
	r26.s64 = ctx.r10.s64 + 1624;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228B550;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r21,r11,16504
	r21.s64 = ctx.r11.s64 + 16504;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228B560;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8228B564;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120d70
	ctx.lr = 0x8228B570;
	sub_82120D70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8228B580;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8228B590;
	sub_82120AC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821ef7e0
	ctx.lr = 0x8228B59C;
	sub_821EF7E0(ctx, base);
	// lwz r3,6316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B5B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// bne 0x8228b66c
	if (!ctx.cr0.eq) goto loc_8228B66C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8228B5CC;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B5E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x8215f670
	ctx.lr = 0x8228B5F4;
	sub_8215F670(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8228b608
	if (!ctx.cr6.lt) goto loc_8228B608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8228B608:
	// bl 0x8215fbf8
	ctx.lr = 0x8228B60C;
	sub_8215FBF8(ctx, base);
	// lbz r11,109(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228b62c
	if (ctx.cr0.eq) goto loc_8228B62C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,30380
	ctx.r4.s64 = ctx.r11.s64 + 30380;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120c08
	ctx.lr = 0x8228B62C;
	sub_82120C08(ctx, base);
loc_8228B62C:
	// lwz r3,6312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6312);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6312);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B65C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8228B66C;
	sub_82120AC0(ctx, base);
loc_8228B66C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r3,92(r22)
	REX_STORE_U32(r22.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,3060
	r20.s64 = ctx.r11.s64 + 3060;
	// bne 0x8228b6b0
	if (!ctx.cr0.eq) goto loc_8228B6B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// li r5,1082
	ctx.r5.s64 = 1082;
	// bl 0x821231d0
	ctx.lr = 0x8228B6B0;
	sub_821231D0(ctx, base);
loc_8228B6B0:
	// lwz r3,92(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 92);
	// bl 0x82179f70
	ctx.lr = 0x8228B6B8;
	sub_82179F70(ctx, base);
	// lwz r3,6316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b6e8
	if (!ctx.cr0.eq) goto loc_8228B6E8;
	// lwz r3,6312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228B6E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8228B6F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8228B708;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8228B718;
	sub_82120AC0(ctx, base);
loc_8228B718:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r23,r22,64
	r23.s64 = r22.s64 + 64;
	// bl 0x8215f338
	ctx.lr = 0x8228B728;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228B730;
	sub_8215F338(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215fba8
	ctx.lr = 0x8228B738;
	sub_8215FBA8(ctx, base);
	// lwz r3,6316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// beq 0x8228b7cc
	if (ctx.cr0.eq) goto loc_8228B7CC;
	// lwz r3,6076(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6076);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r30,6284(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6076(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6076);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,6284(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B7B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B7C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8228b7e0
	goto loc_8228B7E0;
loc_8228B7CC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B7E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228B7E0:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,-13316
	r25.s64 = ctx.r11.s64 + -13316;
	// bne 0x8228b8f4
	if (!ctx.cr0.eq) goto loc_8228B8F4;
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r28,r17
	r28.u64 = r17.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8228b89c
	if (!ctx.cr0.gt) goto loc_8228B89C;
loc_8228B83C:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8228B864;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b87c
	if (ctx.cr0.eq) goto loc_8228B87C;
	// lwz r11,460(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 460);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
loc_8228B87C:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8228b83c
	if (ctx.cr6.lt) goto loc_8228B83C;
loc_8228B89C:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8228B8A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8228b8d4
	if (ctx.cr0.eq) goto loc_8228B8D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,3372
	ctx.r4.s64 = ctx.r11.s64 + 3372;
	// bl 0x82120600
	ctx.lr = 0x8228B8BC;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r18,r19
	r18.u64 = r19.u64;
	// bl 0x8228d180
	ctx.lr = 0x8228B8D0;
	sub_8228D180(ctx, base);
	// b 0x8228b8d8
	goto loc_8228B8D8;
loc_8228B8D4:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8228B8D8:
	// clrlwi. r11,r18,31
	ctx.r11.u64 = r18.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,100(r22)
	REX_STORE_U32(r22.u32 + 100, ctx.r3.u32);
	// beq 0x8228b8f4
	if (ctx.cr0.eq) goto loc_8228B8F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8228B8F4;
	sub_82120AC0(ctx, base);
loc_8228B8F4:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8228b990
	if (!ctx.cr0.gt) goto loc_8228B990;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,-10144
	r27.s64 = ctx.r11.s64 + -10144;
loc_8228B920:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8228B948;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b960
	if (!ctx.cr0.eq) goto loc_8228B960;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,1133
	ctx.r5.s64 = 1133;
	// bl 0x821231d0
	ctx.lr = 0x8228B960;
	sub_821231D0(ctx, base);
loc_8228B960:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,460(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 460);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8228B988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8228b920
	if (ctx.cr6.lt) goto loc_8228B920;
loc_8228B990:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228B99C;
	sub_8215F338(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228B9A4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8228B9A8;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82273988
	ctx.lr = 0x8228B9BC;
	sub_82273988(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B9D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228B9E0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-17776
	ctx.r4.s64 = ctx.r11.s64 + -17776;
	// bl 0x8215f670
	ctx.lr = 0x8228B9EC;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8228B9F0;
	sub_8215F0F0(ctx, base);
	// lwz r11,136(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 136);
	// addi r30,r22,132
	r30.s64 = r22.s64 + 132;
	// lwz r31,132(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 132);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228ba30
	if (ctx.cr6.eq) goto loc_8228BA30;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_8228BA08:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 136);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8228ba08
	if (!ctx.cr6.eq) goto loc_8228BA08;
loc_8228BA30:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8228ba60
	if (ctx.cr6.eq) goto loc_8228BA60;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8228BA58;
	sub_8269CC20(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8228BA60:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// stw r17,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, r17.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8228ba78
	if (ctx.cr6.lt) goto loc_8228BA78;
	// lwz r5,0(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 0);
	// b 0x8228ba7c
	goto loc_8228BA7C;
loc_8228BA78:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_8228BA7C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8228BA80:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228ba80
	if (!ctx.cr6.eq) goto loc_8228BA80;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8228BAAC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,17116
	ctx.r3.s64 = ctx.r11.s64 + 17116;
	// bl 0x8216bc98
	ctx.lr = 0x8228BABC;
	sub_8216BC98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228badc
	if (ctx.cr6.eq) goto loc_8228BADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228BADC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,112(r22)
	REX_STORE_U32(r22.u32 + 112, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 124, temp.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_822C5960) {
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
	ctx.lr = 0x822C5968;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x822c59b8
	if (!ctx.cr6.eq) goto loc_822C59B8;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c59b8
	if (ctx.cr0.eq) goto loc_822C59B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c59b8
	if (ctx.cr6.eq) goto loc_822C59B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822C59B8:
	// andi. r11,r25,4112
	ctx.r11.u64 = r25.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c59cc
	if (ctx.cr0.eq) goto loc_822C59CC;
	// lwz r31,12(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x822c59d0
	goto loc_822C59D0;
loc_822C59CC:
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822C59D0:
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822c5a0c
	if (ctx.cr6.eq) goto loc_822C5A0C;
	// bl 0x82793a84
	ctx.lr = 0x822C59E4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822c59f4
	if (!ctx.cr6.eq) goto loc_822C59F4;
	// lwz r11,2064(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2064);
	// b 0x822c59f8
	goto loc_822C59F8;
loc_822C59F4:
	// lwz r11,2068(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2068);
loc_822C59F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d5c28
	ctx.lr = 0x822C5A0C;
	sub_822D5C28(ctx, base);
loc_822C5A0C:
	// li r11,256
	ctx.r11.s64 = 256;
loc_822C5A10:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r27
	ea = r27.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r27
	ea = r27.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822c5a10
	if (!ctx.cr0.eq) goto loc_822C5A10;
	// lwsync 
	// andi. r11,r25,18
	ctx.r11.u64 = r25.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c5b70
	if (!ctx.cr0.eq) goto loc_822C5B70;
	// bl 0x82793a84
	ctx.lr = 0x822C5A40;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822c5a50
	if (!ctx.cr6.eq) goto loc_822C5A50;
	// lwz r11,2064(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2064);
	// b 0x822c5a54
	goto loc_822C5A54;
loc_822C5A50:
	// lwz r11,2068(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2068);
loc_822C5A54:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r24,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r24,3
	ctx.r10.u64 = r24.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r30,r26
	r29.u64 = r30.u64 + r26.u64;
	// bl 0x823eea88
	ctx.lr = 0x822C5A74;
	sub_823EEA88(ctx, base);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// addi r8,r31,12000
	ctx.r8.s64 = r31.s64 + 12000;
loc_822C5A84:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822c5a98
	if (!ctx.cr6.lt) goto loc_822C5A98;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822C5A98:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c5aa8
	if (!ctx.cr6.gt) goto loc_822C5AA8;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_822C5AA8:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_822C5AB0:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822c5ad4
	if (!ctx.cr6.eq) goto loc_822C5AD4;
	// stdcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822c5ab0
	if (!ctx.cr0.eq) goto loc_822C5AB0;
	// b 0x822c5adc
	goto loc_822C5ADC;
loc_822C5AD4:
	// stdcx. r7,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822C5ADC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpld cr6,r7,r11
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x822c5a84
	if (!ctx.cr6.eq) goto loc_822C5A84;
	// b 0x822c5b70
	goto loc_822C5B70;
loc_822C5AEC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c5b04
	if (!ctx.cr6.gt) goto loc_822C5B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C5B04;
	sub_822D5B28(ctx, base);
loc_822C5B04:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r29,4095
	ctx.r11.s64 = r29.s64 + 4095;
	// ori r9,r9,2607
	ctx.r9.u64 = ctx.r9.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	r30.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822C5B70:
	// rlwinm. r6,r25,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x822c5b84
	if (!ctx.cr0.eq) goto loc_822C5B84;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5c50
	if (ctx.cr0.eq) goto loc_822C5C50;
loc_822C5B84:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5c30
	if (!ctx.cr0.eq) goto loc_822C5C30;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x822c5ba8
	if (ctx.cr6.eq) goto loc_822C5BA8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822c5ba8
	if (ctx.cr6.eq) goto loc_822C5BA8;
	// rlwinm r11,r23,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r27,24
	ctx.r7.s64 = r27.s64 + 24;
	// b 0x822c5bb0
	goto loc_822C5BB0;
loc_822C5BA8:
	// rlwinm r11,r22,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r27,20
	ctx.r7.s64 = r27.s64 + 20;
loc_822C5BB0:
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r10,127
	ctx.r11.s64 = ctx.r10.s64 + 127;
	// rlwinm. r4,r5,16,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// beq 0x822c5bdc
	if (ctx.cr0.eq) goto loc_822C5BDC;
	// rlwinm r11,r11,4,13,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
loc_822C5BDC:
	// rlwinm. r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822c5be8
	if (ctx.cr0.eq) goto loc_822C5BE8;
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
loc_822C5BE8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c5bf4
	if (!ctx.cr6.gt) goto loc_822C5BF4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822C5BF4:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822c5c00
	if (!ctx.cr6.lt) goto loc_822C5C00;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822C5C00:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// blt cr6,0x822c5c10
	if (ctx.cr6.lt) goto loc_822C5C10;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_822C5C10:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x822c5c24
	if (ctx.cr6.lt) goto loc_822C5C24;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_822C5C24:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_822C5C30:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c5c50
	if (ctx.cr6.eq) goto loc_822C5C50;
	// rlwinm r11,r24,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r24,3
	ctx.r10.u64 = r24.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r24,r11,-16384
	r24.s64 = ctx.r11.s64 + -1073741824;
loc_822C5C50:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822E1810) {
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
	ctx.lr = 0x822E1818;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e19e4
	if (ctx.cr6.eq) goto loc_822E19E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e19e4
	if (ctx.cr6.eq) goto loc_822E19E4;
	// ld r11,10880(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 10880);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822e19e4
	if (ctx.cr6.eq) goto loc_822E19E4;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bgt cr6,0x822e18f4
	if (ctx.cr6.gt) goto loc_822E18F4;
	// beq cr6,0x822e19ac
	if (ctx.cr6.eq) goto loc_822E19AC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x822e18e0
	if (ctx.cr6.lt) goto loc_822E18E0;
	// beq cr6,0x822e18e0
	if (ctx.cr6.eq) goto loc_822E18E0;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x822e18b4
	if (ctx.cr6.eq) goto loc_822E18B4;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// beq cr6,0x822e1880
	if (ctx.cr6.eq) goto loc_822E1880;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bne cr6,0x822e19e4
	if (!ctx.cr6.eq) goto loc_822E19E4;
	// stw r4,23568(r31)
	REX_STORE_U32(r31.u32 + 23568, ctx.r4.u32);
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E1880:
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,140(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 140);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,140(r9)
	REX_STORE_U32(ctx.r9.u32 + 140, ctx.r11.u32);
	// bne cr6,0x822e19e4
	if (!ctx.cr6.eq) goto loc_822E19E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,21840(r31)
	REX_STORE_U32(r31.u32 + 21840, ctx.r10.u32);
	// stw r11,21832(r31)
	REX_STORE_U32(r31.u32 + 21832, ctx.r11.u32);
	// stw r11,21836(r31)
	REX_STORE_U32(r31.u32 + 21836, ctx.r11.u32);
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E18B4:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,140(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,140(r10)
	REX_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// bne cr6,0x822e19e4
	if (!ctx.cr6.eq) goto loc_822E19E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21840(r31)
	REX_STORE_U32(r31.u32 + 21840, ctx.r11.u32);
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E18E0:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21840(r31)
	REX_STORE_U32(r31.u32 + 21840, ctx.r11.u32);
	// stw r11,140(r10)
	REX_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E18F4:
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// beq cr6,0x822e19ac
	if (ctx.cr6.eq) goto loc_822E19AC;
	// cmplwi cr6,r3,226
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 226, ctx.xer);
	// beq cr6,0x822e19ac
	if (ctx.cr6.eq) goto loc_822E19AC;
	// cmplwi cr6,r3,227
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 227, ctx.xer);
	// beq cr6,0x822e19a0
	if (ctx.cr6.eq) goto loc_822E19A0;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x822e19e4
	if (!ctx.cr6.eq) goto loc_822E19E4;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1958
	if (ctx.cr0.eq) goto loc_822E1958;
	// lwz r11,21788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21788);
	// lfs f13,21804(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 21804);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826b3a58
	ctx.lr = 0x822E1958;
	sub_826B3A58(ctx, base);
loc_822E1958:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r29,17
	r29.s64 = 17;
	// addi r11,r11,-21624
	ctx.r11.s64 = ctx.r11.s64 + -21624;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
loc_822E1968:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// lwz r10,140(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 140);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1990
	if (ctx.cr0.eq) goto loc_822E1990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r27,-4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x822e1110
	ctx.lr = 0x822E1988;
	sub_822E1110(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b3a58
	ctx.lr = 0x822E1990;
	sub_826B3A58(ctx, base);
loc_822E1990:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x822e1968
	if (!ctx.cr0.eq) goto loc_822E1968;
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E19A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e00b8
	ctx.lr = 0x822E19A8;
	sub_822E00B8(ctx, base);
	// b 0x822e19e4
	goto loc_822E19E4;
loc_822E19AC:
	// lwz r11,21744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e19e4
	if (ctx.cr6.eq) goto loc_822E19E4;
	// bl 0x823eea88
	ctx.lr = 0x822E19BC;
	sub_823EEA88(ctx, base);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822e19e4
	if (!ctx.cr6.eq) goto loc_822E19E4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822e19e0
	if (!ctx.cr6.gt) goto loc_822E19E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822E19E0;
	sub_822D5B28(ctx, base);
loc_822E19E0:
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822E19E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822ED3C0) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,117(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 117);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822ed494
	if (ctx.cr6.eq) goto loc_822ED494;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed440
	if (ctx.cr6.eq) goto loc_822ED440;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,14812
	ctx.r4.s64 = ctx.r11.s64 + 14812;
	// bl 0x82120600
	ctx.lr = 0x822ED404;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822ED410;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ED438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x822ed488
	goto loc_822ED488;
loc_822ED440:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14820
	ctx.r4.s64 = ctx.r11.s64 + 14820;
	// bl 0x82120600
	ctx.lr = 0x822ED450;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822ED45C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ED484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_822ED488:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822ED494;
	sub_82120AC0(ctx, base);
loc_822ED494:
	// lbz r11,117(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 117);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r11.u8);
	// beq 0x822ed4b8
	if (ctx.cr0.eq) goto loc_822ED4B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178c38
	ctx.lr = 0x822ED4B8;
	sub_82178C38(ctx, base);
loc_822ED4B8:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

DEFINE_REX_FUNC(sub_822F3C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	REX_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822f3b00
	ctx.lr = 0x822F3C40;
	sub_822F3B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F5F98) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822f6000
	if (ctx.cr6.eq) goto loc_822F6000;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f5fd0
	if (ctx.cr0.eq) goto loc_822F5FD0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x822F5FD0;
	sub_8269D770(ctx, base);
loc_822F5FD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f5ff8
	if (ctx.cr0.eq) goto loc_822F5FF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f5e58
	ctx.lr = 0x822F5FF4;
	sub_822F5E58(ctx, base);
	// b 0x822f6000
	goto loc_822F6000;
loc_822F5FF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822F6000:
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

DEFINE_REX_FUNC(sub_822F70D0) {
	REX_FUNC_PROLOGUE();
	// b 0x822ff278
	sub_822FF278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F7188) {
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
	ctx.lr = 0x822F7190;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x822F71B8;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3736(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfd f31,3728(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fadd f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 + f31.f64;
	// bl 0x826a1830
	ctx.lr = 0x822F71D8;
	sub_826A1830(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r11,r11,3528
	ctx.r11.s64 = ctx.r11.s64 + 3528;
	// lfs f13,3724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3724);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822f7204
	if (ctx.cr6.lt) goto loc_822F7204;
	// lfs f13,-440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822f7208
	if (!ctx.cr6.gt) goto loc_822F7208;
loc_822F7204:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_822F7208:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,672
	ctx.r6.s64 = ctx.r10.s64 + 672;
	// addi r9,r11,-384
	ctx.r9.s64 = ctx.r11.s64 + -384;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f8,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f8.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822f727c
	if (!ctx.cr6.gt) goto loc_822F727C;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
loc_822F724C:
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x822f7274
	if (ctx.cr6.lt) goto loc_822F7274;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822f724c
	if (ctx.cr6.lt) goto loc_822F724C;
	// b 0x822f727c
	goto loc_822F727C;
loc_822F7274:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822F727C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x822f729c
	if (!ctx.cr6.eq) goto loc_822F729C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822f72b8
	goto loc_822F72B8;
loc_822F729C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// li r27,1
	r27.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f10,3720(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3720);
	ctx.f10.f64 = double(temp.f32);
	// stwx r27,r31,r28
	REX_STORE_U32(r31.u32 + r28.u32, r27.u32);
loc_822F72B8:
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,-444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -444);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,1
	r30.s64 = 1;
	// stwx r30,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r30.u32);
	// lfsx f0,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f72f0
	if (!ctx.cr6.lt) goto loc_822F72F0;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_822F72F0:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x822f7304
	if (ctx.cr6.lt) goto loc_822F7304;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// b 0x822f730c
	goto loc_822F730C;
loc_822F7304:
	// fadds f12,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_822F730C:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// fsub f13,f31,f9
	ctx.f13.f64 = f31.f64 - ctx.f9.f64;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r10,r29,r30
	ctx.r10.u64 = r30.u64 - r29.u64;
	// fsub f12,f31,f0
	ctx.f12.f64 = f31.f64 - ctx.f0.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfsx f12,r9,r29
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + r29.u32, temp.u32);
	// stfsx f0,r6,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + r29.u32, temp.u32);
	// lwzx r9,r4,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fmadd f0,f0,f10,f31
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f10.f64, f31.f64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_822F7378:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x822f73d0
	if (ctx.cr6.eq) goto loc_822F73D0;
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f73a0
	if (ctx.cr6.eq) goto loc_822F73A0;
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmadds f12,f12,f9,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f10.f64)));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x822f73c0
	goto loc_822F73C0;
loc_822F73A0:
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// beq cr6,0x822f73cc
	if (ctx.cr6.eq) goto loc_822F73CC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f73cc
	if (ctx.cr6.eq) goto loc_822F73CC;
	// fsubs f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
loc_822F73C0:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x822f73d0
	goto loc_822F73D0;
loc_822F73CC:
	// stfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_822F73D0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x822f7378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F7378;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8230B9A8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,5024
	ctx.r10.s64 = ctx.r10.s64 + 5024;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8230C608) {
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
	ctx.lr = 0x8230C610;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230c62c
	if (!ctx.cr6.eq) goto loc_8230C62C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8230c7f8
	goto loc_8230C7F8;
loc_8230C62C:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8230C63C;
	sub_823EF5F0(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bl 0x823314a0
	ctx.lr = 0x8230C64C;
	sub_823314A0(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// li r27,0
	r27.s64 = 0;
	// stw r27,260(r31)
	REX_STORE_U32(r31.u32 + 260, r27.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c6b4
	if (ctx.cr6.eq) goto loc_8230C6B4;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c6b4
	if (ctx.cr6.eq) goto loc_8230C6B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f818
	ctx.lr = 0x8230C67C;
	sub_8233F818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230c7f8
	if (!ctx.cr0.eq) goto loc_8230C7F8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230c6b4
	if (!ctx.cr6.gt) goto loc_8230C6B4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230C698:
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bdnz 0x8230c698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230C698;
loc_8230C6B4:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r28,r30,48
	r28.s64 = r30.s64 + 48;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8230c6cc
	goto loc_8230C6CC;
loc_8230C6C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8230C6CC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8230c6c4
	if (!ctx.cr6.eq) goto loc_8230C6C4;
	// stw r10,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// addi r26,r30,44
	r26.s64 = r30.s64 + 44;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stw r27,272(r31)
	REX_STORE_U32(r31.u32 + 272, r27.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8230C6EC:
	// subfic r10,r26,0
	ctx.xer.ca = r26.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r26.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8230c730
	if (ctx.cr6.eq) goto loc_8230C730;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8230c710
	if (!ctx.cr6.eq) goto loc_8230C710;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8230C710:
	// lbz r10,17(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8230c728
	if (ctx.cr0.eq) goto loc_8230C728;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r10.u32);
loc_8230C728:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230c6ec
	goto loc_8230C6EC;
loc_8230C730:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230c744
	if (ctx.cr0.eq) goto loc_8230C744;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// b 0x8230c754
	goto loc_8230C754;
loc_8230C744:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230C754:
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// li r29,-1
	r29.s64 = -1;
	// stw r27,276(r31)
	REX_STORE_U32(r31.u32 + 276, r27.u32);
	// addi r6,r31,280
	ctx.r6.s64 = r31.s64 + 280;
	// stw r27,280(r31)
	REX_STORE_U32(r31.u32 + 280, r27.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c78c
	if (ctx.cr6.eq) goto loc_8230C78C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233fbe8
	ctx.lr = 0x8230C784;
	sub_8233FBE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230c7f8
	if (!ctx.cr0.eq) goto loc_8230C7F8;
loc_8230C78C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8230C790:
	// subfic r11,r26,0
	ctx.xer.ca = r26.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r26.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230c7f4
	if (ctx.cr6.eq) goto loc_8230C7F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// bne cr6,0x8230c7b4
	if (!ctx.cr6.eq) goto loc_8230C7B4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8230C7B4:
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c7ec
	if (ctx.cr6.eq) goto loc_8230C7EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233fbe8
	ctx.lr = 0x8230C7D4;
	sub_8233FBE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230c7f8
	if (!ctx.cr0.eq) goto loc_8230C7F8;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_8230C7EC:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8230c790
	goto loc_8230C790;
loc_8230C7F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230C7F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823178E8) {
	REX_FUNC_PROLOGUE();
	// lis r3,29550
	ctx.r3.s64 = 1936588800;
	// ori r3,r3,25459
	ctx.r3.u64 = ctx.r3.u64 | 25459;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823181A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823181d8
	if (ctx.cr6.eq) goto loc_823181D8;
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
loc_823181BC:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823181d8
	if (ctx.cr6.eq) goto loc_823181D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823181bc
	if (ctx.cr6.lt) goto loc_823181BC;
loc_823181D8:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231A4C8) {
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
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,-10760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231a564
	if (!ctx.cr6.eq) goto loc_8231A564;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,2649
	ctx.r6.s64 = 2649;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231A510;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231a55c
	if (ctx.cr0.eq) goto loc_8231A55C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,5936
	ctx.r8.s64 = ctx.r11.s64 + 5936;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,6556
	ctx.r10.s64 = ctx.r10.s64 + 6556;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r9,r9,6544
	ctx.r9.s64 = ctx.r9.s64 + 6544;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8231a560
	goto loc_8231A560;
loc_8231A55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A560:
	// stw r3,-10760(r31)
	REX_STORE_U32(r31.u32 + -10760, ctx.r3.u32);
loc_8231A564:
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

DEFINE_REX_FUNC(sub_82320690) {
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
	ctx.lr = 0x82320698;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822fc2e0
	ctx.lr = 0x823206B4;
	sub_822FC2E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f1,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822fc2e0
	ctx.lr = 0x823206C4;
	sub_822FC2E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823206D8;
	sub_823EF5F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82320714
	if (ctx.cr0.eq) goto loc_82320714;
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82320714
	if (ctx.cr0.eq) goto loc_82320714;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320708
	if (ctx.cr6.eq) goto loc_82320708;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8232070c
	goto loc_8232070C;
loc_82320708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232070C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82330398
	ctx.lr = 0x82320714;
	sub_82330398(ctx, base);
loc_82320714:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320844
	if (ctx.cr6.eq) goto loc_82320844;
	// li r31,0
	r31.s64 = 0;
loc_82320728:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320790
	if (!ctx.cr6.eq) goto loc_82320790;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_82320790:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8233eea0
	ctx.lr = 0x823207B4;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823207d4
	if (ctx.cr0.eq) goto loc_823207D4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823207d4
	if (ctx.cr6.eq) goto loc_823207D4;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x823207d4
	if (ctx.cr6.eq) goto loc_823207D4;
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// bne cr6,0x823208f4
	if (!ctx.cr6.eq) goto loc_823208F4;
loc_823207D4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8232082c
	goto loc_8232082C;
loc_823207E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x823207f4
	if (!ctx.cr6.eq) goto loc_823207F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823207F4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8233eea0
	ctx.lr = 0x82320800;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82320820
	if (ctx.cr0.eq) goto loc_82320820;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82320820
	if (ctx.cr6.eq) goto loc_82320820;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x82320820
	if (ctx.cr6.eq) goto loc_82320820;
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// bne cr6,0x823208f4
	if (!ctx.cr6.eq) goto loc_823208F4;
loc_82320820:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_8232082C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823207e4
	if (!ctx.cr6.eq) goto loc_823207E4;
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// cmpwi cr6,r31,304
	ctx.cr6.compare<int32_t>(r31.s32, 304, ctx.xer);
	// blt cr6,0x82320728
	if (ctx.cr6.lt) goto loc_82320728;
	// b 0x823208f0
	goto loc_823208F0;
loc_82320844:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8233eee8
	ctx.lr = 0x82320854;
	sub_8233EEE8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// ori r11,r11,240
	ctx.r11.u64 = ctx.r11.u64 | 240;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8233eea0
	ctx.lr = 0x82320878;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82320890
	if (ctx.cr0.eq) goto loc_82320890;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82320890
	if (ctx.cr6.eq) goto loc_82320890;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// bne cr6,0x823208f4
	if (!ctx.cr6.eq) goto loc_823208F4;
loc_82320890:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823208e8
	goto loc_823208E8;
loc_823208A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x823208b0
	if (!ctx.cr6.eq) goto loc_823208B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823208B0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8233eea0
	ctx.lr = 0x823208BC;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823208dc
	if (ctx.cr0.eq) goto loc_823208DC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823208dc
	if (ctx.cr6.eq) goto loc_823208DC;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x823208dc
	if (ctx.cr6.eq) goto loc_823208DC;
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// bne cr6,0x823208f4
	if (!ctx.cr6.eq) goto loc_823208F4;
loc_823208DC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_823208E8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823208a0
	if (!ctx.cr6.eq) goto loc_823208A0;
loc_823208F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823208F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82334748) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82334758
	if (!ctx.cr6.eq) goto loc_82334758;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82334758:
	// lwz r11,4368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233476c
	if (!ctx.cr6.eq) goto loc_8233476C;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_8233476C:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82336D78) {
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
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336dac
	if (ctx.cr6.eq) goto loc_82336DAC;
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x82336fd4
	goto loc_82336FD4;
loc_82336DAC:
	// stw r4,22056(r31)
	REX_STORE_U32(r31.u32 + 22056, ctx.r4.u32);
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82336fcc
	if (ctx.cr6.gt) goto loc_82336FCC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82336de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336DE4;
	// bdzf 4*cr6+eq,0x82336df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336DF0;
	// bdzf 4*cr6+eq,0x82336e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336E30;
	// bdzf 4*cr6+eq,0x82336e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336E6C;
	// bdzf 4*cr6+eq,0x82336e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336E74;
	// bdzf 4*cr6+eq,0x82336e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82336E7C;
	// bne cr6,0x82336f38
	if (!ctx.cr6.eq) goto loc_82336F38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336fd4
	goto loc_82336FD4;
loc_82336DE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// b 0x82336fcc
	goto loc_82336FCC;
loc_82336DF0:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfs f1,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336E1C;
	sub_823361F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82336fc0
	goto loc_82336FC0;
loc_82336E30:
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336E60;
	sub_823361F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82336f8c
	goto loc_82336F8C;
loc_82336E6C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82336f3c
	goto loc_82336F3C;
loc_82336E74:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82336f3c
	goto loc_82336F3C;
loc_82336E7C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336EAC;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336EC4;
	sub_823361F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f29,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336EE4;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823361f8
	ctx.lr = 0x82336EFC;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336F14;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336F2C;
	sub_823361F8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// b 0x82336fbc
	goto loc_82336FBC;
loc_82336F38:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82336F3C:
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336F68;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336F80;
	sub_823361F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
loc_82336F8C:
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823361f8
	ctx.lr = 0x82336F9C;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x82336FB4;
	sub_823361F8(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82336FBC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82336FC0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823361f8
	ctx.lr = 0x82336FCC;
	sub_823361F8(ctx, base);
loc_82336FCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335e48
	ctx.lr = 0x82336FD4;
	sub_82335E48(ctx, base);
loc_82336FD4:
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

DEFINE_REX_FUNC(sub_8234CFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d004
	if (!ctx.cr6.eq) goto loc_8234D004;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D004:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234d01c
	if (!ctx.cr6.eq) goto loc_8234D01C;
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_8234D01C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234d048
	if (ctx.cr6.lt) goto loc_8234D048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8234d048
	if (ctx.cr6.gt) goto loc_8234D048;
	// stfs f1,412(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234D048:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234E340) {
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
	ctx.lr = 0x8234E348;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,76
	r31.s64 = ctx.r3.s64 + 76;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e374
	if (!ctx.cr6.eq) goto loc_8234E374;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234E374:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 84);
	// beq cr6,0x8234e390
	if (ctx.cr6.eq) goto loc_8234E390;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r10.u32);
	// b 0x8234e3e4
	goto loc_8234E3E4;
loc_8234E390:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// stw r11,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234e3e4
	if (ctx.cr6.eq) goto loc_8234E3E4;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82350620
	ctx.lr = 0x8234E3B8;
	sub_82350620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e3c8
	if (ctx.cr6.eq) goto loc_8234E3C8;
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8234E3C8:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e3e4
	if (ctx.cr6.eq) goto loc_8234E3E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234dcf8
	ctx.lr = 0x8234E3E4;
	sub_8234DCF8(ctx, base);
loc_8234E3E4:
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
loc_8234E3E8:
	// lbz r10,97(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234e404
	if (!ctx.cr6.eq) goto loc_8234E404;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e3e8
	if (!ctx.cr6.eq) goto loc_8234E3E8;
	// b 0x8234e408
	goto loc_8234E408;
loc_8234E404:
	// li r27,1
	r27.s64 = 1;
loc_8234E408:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e474
	if (!ctx.cr6.gt) goto loc_8234E474;
	// clrlwi r28,r27,24
	r28.u64 = r27.u32 & 0xFF;
loc_8234E41C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8234e440
	if (!ctx.cr6.eq) goto loc_8234E440;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8234E440:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// bne cr6,0x8234e45c
	if (!ctx.cr6.eq) goto loc_8234E45C;
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_8234E45C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r8,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e41c
	if (ctx.cr6.lt) goto loc_8234E41C;
loc_8234E474:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82355F58) {
	REX_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82356060) {
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
	// bl 0x82359be8
	ctx.lr = 0x82356078;
	sub_82359BE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// addi r10,r11,10016
	ctx.r10.s64 = ctx.r11.s64 + 10016;
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82356094;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r3,-2
	ctx.r3.s64 = -2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,9992
	ctx.r6.s64 = ctx.r9.s64 + 9992;
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// ori r5,r7,256
	ctx.r5.u64 = ctx.r7.u64 | 256;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// addi r4,r8,24408
	ctx.r4.s64 = ctx.r8.s64 + 24408;
	// stw r6,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r6.u32);
	// li r10,368
	ctx.r10.s64 = 368;
	// stw r5,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r5.u32);
	// stw r4,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82359030) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82359038;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,60(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823590A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// bgt cr6,0x82359250
	if (ctx.cr6.gt) goto loc_82359250;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28456
	ctx.r12.s64 = ctx.r12.s64 + -28456;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_82359168;
	case 1:
		goto loc_82359108;
	case 2:
		goto loc_82359120;
	case 3:
		goto loc_82359138;
	case 4:
		goto loc_82359150;
	case 5:
		goto loc_82359150;
	case 6:
		goto loc_82359168;
	case 7:
		goto loc_82359168;
	case 8:
		goto loc_82359168;
	case 9:
		goto loc_82359168;
	case 10:
		goto loc_82359168;
	case 11:
		goto loc_82359168;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82359108:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r10,r11,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_82359120:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r10,r11,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_82359138:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r10,r11,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_82359150:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r10,r11,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_82359168:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28288
	ctx.r12.s64 = ctx.r12.s64 + -28288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_82359244;
	case 1:
		goto loc_82359250;
	case 2:
		goto loc_82359250;
	case 3:
		goto loc_82359250;
	case 4:
		goto loc_82359250;
	case 5:
		goto loc_82359250;
	case 6:
		goto loc_823591B0;
	case 7:
		goto loc_823591BC;
	case 8:
		goto loc_823591C8;
	case 9:
		goto loc_823591D4;
	case 10:
		goto loc_823591D4;
	case 11:
		goto loc_823591D4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823591B0:
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_823591BC:
	// li r11,36
	ctx.r11.s64 = 36;
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_823591C8:
	// li r11,16
	ctx.r11.s64 = 16;
	// mullw r27,r11,r8
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_823591D4:
	// li r27,1
	r27.s64 = 1;
loc_823591D8:
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f9,80(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fdivs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// fctidz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r26,124(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82359694
	if (ctx.cr6.eq) goto loc_82359694;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r28,108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r23,14
	r23.s64 = 14;
	// li r24,28
	r24.s64 = 28;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// b 0x82359268
	goto loc_82359268;
loc_82359244:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mullw r27,r22,r8
	r27.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// b 0x823591d8
	goto loc_823591D8;
loc_82359250:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_82359260:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82359268:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r26,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82359284
	if (!ctx.cr6.gt) goto loc_82359284;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82359284:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// bgt cr6,0x823594a8
	if (ctx.cr6.gt) goto loc_823594A8;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27992
	ctx.r12.s64 = ctx.r12.s64 + -27992;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_8235930C;
	case 1:
		goto loc_823592D8;
	case 2:
		goto loc_823592E0;
	case 3:
		goto loc_823592E8;
	case 4:
		goto loc_823592F0;
	case 5:
		goto loc_823592F0;
	case 6:
		goto loc_8235930C;
	case 7:
		goto loc_8235930C;
	case 8:
		goto loc_8235930C;
	case 9:
		goto loc_8235930C;
	case 10:
		goto loc_8235930C;
	case 11:
		goto loc_8235930C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823592D8:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823592f4
	goto loc_823592F4;
loc_823592E0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823592f4
	goto loc_823592F4;
loc_823592E8:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823592f4
	goto loc_823592F4;
loc_823592F0:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823592F4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r5,r9,61,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x82359398
	goto loc_82359398;
loc_8235930C:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27868
	ctx.r12.s64 = ctx.r12.s64 + -27868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_82359394;
	case 1:
		goto loc_8235939C;
	case 2:
		goto loc_8235939C;
	case 3:
		goto loc_8235939C;
	case 4:
		goto loc_8235939C;
	case 5:
		goto loc_8235939C;
	case 6:
		goto loc_82359354;
	case 7:
		goto loc_82359364;
	case 8:
		goto loc_8235937C;
	case 9:
		goto loc_8235938C;
	case 10:
		goto loc_8235938C;
	case 11:
		goto loc_8235938C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82359354:
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// divwu r10,r11,r23
	ctx.r10.u64 = uint32_t(r23.u32 ? ctx.r11.u32 / r23.u32 : 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82359398
	goto loc_82359398;
loc_82359364:
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82359398
	goto loc_82359398;
loc_8235937C:
	// addi r11,r10,27
	ctx.r11.s64 = ctx.r10.s64 + 27;
	// divwu r10,r11,r24
	ctx.r10.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82359398
	goto loc_82359398;
loc_8235938C:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x8235939c
	goto loc_8235939C;
loc_82359394:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82359398:
	// mullw r28,r11,r8
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_8235939C:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27724
	ctx.r12.s64 = ctx.r12.s64 + -27724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_82359418;
	case 1:
		goto loc_823593E4;
	case 2:
		goto loc_823593EC;
	case 3:
		goto loc_823593F4;
	case 4:
		goto loc_823593FC;
	case 5:
		goto loc_823593FC;
	case 6:
		goto loc_82359418;
	case 7:
		goto loc_82359418;
	case 8:
		goto loc_82359418;
	case 9:
		goto loc_82359418;
	case 10:
		goto loc_82359418;
	case 11:
		goto loc_82359418;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823593E4:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82359400
	goto loc_82359400;
loc_823593EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82359400
	goto loc_82359400;
loc_823593F4:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82359400
	goto loc_82359400;
loc_823593FC:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82359400:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r6,r9,61,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// b 0x823594a4
	goto loc_823594A4;
loc_82359418:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27600
	ctx.r12.s64 = ctx.r12.s64 + -27600;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_823594A0;
	case 1:
		goto loc_823594A8;
	case 2:
		goto loc_823594A8;
	case 3:
		goto loc_823594A8;
	case 4:
		goto loc_823594A8;
	case 5:
		goto loc_823594A8;
	case 6:
		goto loc_82359460;
	case 7:
		goto loc_82359470;
	case 8:
		goto loc_82359488;
	case 9:
		goto loc_82359498;
	case 10:
		goto loc_82359498;
	case 11:
		goto loc_82359498;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82359460:
	// addi r11,r7,13
	ctx.r11.s64 = ctx.r7.s64 + 13;
	// divwu r10,r11,r23
	ctx.r10.u64 = uint32_t(r23.u32 ? ctx.r11.u32 / r23.u32 : 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823594a4
	goto loc_823594A4;
loc_82359470:
	// addi r11,r7,63
	ctx.r11.s64 = ctx.r7.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823594a4
	goto loc_823594A4;
loc_82359488:
	// addi r11,r7,27
	ctx.r11.s64 = ctx.r7.s64 + 27;
	// divwu r10,r11,r24
	ctx.r10.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x823594a4
	goto loc_823594A4;
loc_82359498:
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// b 0x823594a8
	goto loc_823594A8;
loc_823594A0:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823594A4:
	// mullw r29,r11,r8
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_823594A8:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r31,r30,76
	r31.s64 = r30.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823594fc
	if (ctx.cr6.eq) goto loc_823594FC;
	// stw r30,184(r25)
	REX_STORE_U32(r25.u32 + 184, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,76(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823594E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r11.u32);
	// b 0x8235951c
	goto loc_8235951C;
loc_823594FC:
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 76);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82358ae0
	ctx.lr = 0x82359514;
	sub_82358AE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
loc_8235951C:
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823595b4
	if (ctx.cr6.eq) goto loc_823595B4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823595b4
	if (ctx.cr6.eq) goto loc_823595B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r7,r11,r27
	ctx.r7.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x823b0200
	ctx.lr = 0x82359598;
	sub_823B0200(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r4,r6,r27
	ctx.r4.u64 = uint32_t(r27.u32 ? ctx.r6.u32 / r27.u32 : 0);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823595B4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823595fc
	if (ctx.cr6.eq) goto loc_823595FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823595fc
	if (ctx.cr6.eq) goto loc_823595FC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r7,r11,r27
	ctx.r7.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x823b0200
	ctx.lr = 0x823595F8;
	sub_823B0200(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823595FC:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82359624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359698
	if (!ctx.cr6.eq) goto loc_82359698;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bne cr6,0x82359654
	if (!ctx.cr6.eq) goto loc_82359654;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82359674
	if (ctx.cr6.lt) goto loc_82359674;
loc_82359654:
	// lbz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235968c
	if (ctx.cr6.eq) goto loc_8235968C;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bge 0x82359674
	if (!ctx.cr0.lt) goto loc_82359674;
	// stw r22,40(r30)
	REX_STORE_U32(r30.u32 + 40, r22.u32);
loc_82359674:
	// subf. r26,r9,r26
	r26.u64 = r26.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x82359260
	if (!ctx.cr0.eq) goto loc_82359260;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8235968C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r30)
	REX_STORE_U8(r30.u32 + 36, ctx.r11.u8);
loc_82359694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82359698:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82393150) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82393160
	if (!ctx.cr6.eq) goto loc_82393160;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393160:
	// b 0x82392ee0
	sub_82392EE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82393C78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393c94
	if (ctx.cr6.eq) goto loc_82393C94;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// b 0x82340e38
	sub_82340E38(ctx, base);
	return;
loc_82393C94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823945F0) {
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
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r30,r31,15672
	r30.s64 = r31.s64 + 15672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239461C;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,-32199
	ctx.r4.s64 = -2110193664;
	// addi r11,r11,20152
	ctx.r11.s64 = ctx.r11.s64 + 20152;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r11,15672(r31)
	REX_STORE_U32(r31.u32 + 15672, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r11,r4,17880
	ctx.r11.s64 = ctx.r4.s64 + 17880;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r10,r5,16192
	ctx.r10.s64 = ctx.r5.s64 + 16192;
	// addi r9,r6,16256
	ctx.r9.s64 = ctx.r6.s64 + 16256;
	// addi r11,r7,16280
	ctx.r11.s64 = ctx.r7.s64 + 16280;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r8,16520
	ctx.r10.s64 = ctx.r8.s64 + 16520;
	// li r11,1280
	ctx.r11.s64 = 1280;
	// stw r9,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r9.u32);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8239BD28) {
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
	// bl 0x82343820
	ctx.lr = 0x8239BD40;
	sub_82343820(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,20632
	ctx.r9.s64 = ctx.r11.s64 + 20632;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r8,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r8.u8);
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

DEFINE_REX_FUNC(sub_8239D840) {
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
	ctx.lr = 0x8239D848;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// addi r30,r11,20848
	r30.s64 = ctx.r11.s64 + 20848;
	// beq cr6,0x8239d908
	if (ctx.cr6.eq) goto loc_8239D908;
	// li r28,0
	r28.s64 = 0;
loc_8239D86C:
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// beq cr6,0x8239d8b8
	if (ctx.cr6.eq) goto loc_8239D8B8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239D8B4;
	sub_82330D00(ctx, base);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_8239D8B8:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d8e0
	if (ctx.cr6.eq) goto loc_8239D8E0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239D8DC;
	sub_82330D00(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
loc_8239D8E0:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239D8FC;
	sub_82330D00(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x8239d86c
	if (!ctx.cr6.eq) goto loc_8239D86C;
loc_8239D908:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,186
	ctx.r6.s64 = 186;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239D924;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823A2248) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,21556
	ctx.r6.s64 = ctx.r9.s64 + 21556;
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,211
	ctx.r7.s64 = 211;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e48
	ctx.lr = 0x823A2290;
	sub_82330E48(ctx, base);
	// addic r4,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r10,44
	ctx.r10.s64 = 44;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_823A55F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x823a5608
	if (ctx.cr6.eq) goto loc_823A5608;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823A5608:
	// lhz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a561c
	if (ctx.cr6.eq) goto loc_823A561C;
loc_823A5614:
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
loc_823A561C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823a5614
	if (!ctx.cr6.eq) goto loc_823A5614;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823a56b0
	if (!ctx.cr6.gt) goto loc_823A56B0;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
loc_823A5640:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823a56a0
	if (!ctx.cr6.gt) goto loc_823A56A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A5650:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823a5684
	if (!ctx.cr6.eq) goto loc_823A5684;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// stw r7,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v62,v63,20
	temp.u32 = ctx.v63.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[0] = vTemp.u32[0];
	// stvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x823a568c
	goto loc_823A568C;
loc_823A5684:
	// lhzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
loc_823A568C:
	// bne cr6,0x823a5614
	if (!ctx.cr6.eq) goto loc_823A5614;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823a5650
	if (ctx.cr6.lt) goto loc_823A5650;
loc_823A56A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823a5640
	if (ctx.cr6.lt) goto loc_823A5640;
loc_823A56B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AD8B0) {
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
	ctx.lr = 0x823AD8B8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// li r27,0
	r27.s64 = 0;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r27.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x823d1830
	ctx.lr = 0x823AD8E0;
	sub_823D1830(ctx, base);
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823AD8F0;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,22144
	ctx.r4.s64 = ctx.r9.s64 + 22144;
	// bl 0x82331480
	ctx.lr = 0x823AD900;
	sub_82331480(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r31,88
	ctx.r7.s64 = r31.s64 + 88;
	// stw r27,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// ori r28,r8,256
	r28.u64 = ctx.r8.u64 | 256;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r6,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82336400
	ctx.lr = 0x823AD934;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ada68
	if (!ctx.cr6.eq) goto loc_823ADA68;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad95c
	if (!ctx.cr6.eq) goto loc_823AD95C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad970
	if (ctx.cr6.eq) goto loc_823AD970;
loc_823AD95C:
	// addi r5,r31,772
	ctx.r5.s64 = r31.s64 + 772;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82336570
	ctx.lr = 0x823AD968;
	sub_82336570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ada68
	if (!ctx.cr6.eq) goto loc_823ADA68;
loc_823AD970:
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823AD980;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,22124
	ctx.r4.s64 = ctx.r11.s64 + 22124;
	// bl 0x82331480
	ctx.lr = 0x823AD990;
	sub_82331480(ctx, base);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r9,-32206
	ctx.r9.s64 = -2110652416;
	// stw r29,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r29.u32);
	// addi r10,r10,1568
	ctx.r10.s64 = ctx.r10.s64 + 1568;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r9,r9,1568
	ctx.r9.s64 = ctx.r9.s64 + 1568;
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r11,r31,400
	ctx.r11.s64 = r31.s64 + 400;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r8,r8,-824
	ctx.r8.s64 = ctx.r8.s64 + -824;
	// addi r7,r7,-752
	ctx.r7.s64 = ctx.r7.s64 + -752;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r30,r31,396
	r30.s64 = r31.s64 + 396;
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,140(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 140);
	// lwz r9,208(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 208);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// bl 0x82336400
	ctx.lr = 0x823ADA04;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ada68
	if (!ctx.cr6.eq) goto loc_823ADA68;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823afbf0
	ctx.lr = 0x823ADA1C;
	sub_823AFBF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x823496b8
	ctx.lr = 0x823ADA28;
	sub_823496B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ada68
	if (!ctx.cr6.eq) goto loc_823ADA68;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,260(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ADA54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ada68
	if (!ctx.cr6.eq) goto loc_823ADA68;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_823ADA68:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823C1638) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823c164c
	if (!ctx.cr6.eq) goto loc_823C164C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C164C:
	// lwz r9,264(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r8,18604(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 18604);
	// lwz r10,18600(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 18600);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r3,1(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stw r6,18600(r9)
	REX_STORE_U32(ctx.r9.u32 + 18600, ctx.r6.u32);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 | ctx.r10.u64;
	// slw r10,r3,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r8,264(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// clrlwi r7,r10,8
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFFFF;
	// lwz r6,18600(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 18600);
	// lwz r10,18604(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 18604);
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// subfic r5,r4,24
	ctx.xer.ca = ctx.r4.u32 <= 24;
	ctx.r5.u64 = static_cast<uint64_t>(24) - ctx.r4.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,18604(r8)
	REX_STORE_U32(ctx.r8.u32 + 18604, ctx.r4.u32);
	// srw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C7CD0) {
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
	ctx.lr = 0x823C7CD8;
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r26,18512(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 18512);
	// bl 0x823c72e0
	ctx.lr = 0x823C7CFC;
	sub_823C72E0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r25,r26,6,0,25
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
loc_823C7D08:
	// srawi r7,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r7.s64 = r24.s32 >> 2;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c7540
	ctx.lr = 0x823C7D20;
	sub_823C7540(ctx, base);
	// addi r30,r1,1104
	r30.s64 = ctx.r1.s64 + 1104;
	// li r31,3
	r31.s64 = 3;
loc_823C7D28:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lwz r7,260(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x823c7d3c
	if (ctx.cr6.gt) goto loc_823C7D3C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_823C7D3C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1fd0
	ctx.lr = 0x823C7D50;
	sub_823C1FD0(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r9,260(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x823c7d28
	if (!ctx.cr0.eq) goto loc_823C7D28;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(r24.s32, 12, ctx.xer);
	// blt cr6,0x823c7d08
	if (ctx.cr6.lt) goto loc_823C7D08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823C9890) {
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
	ctx.lr = 0x823C9898;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcf60
	ctx.lr = 0x823C98B4;
	sub_823DCF60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c98c8
	if (!ctx.cr6.eq) goto loc_823C98C8;
loc_823C98BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823C98C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9954
	if (ctx.cr6.eq) goto loc_823C9954;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c98ec
	if (!ctx.cr6.lt) goto loc_823C98EC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x823c9904
	goto loc_823C9904;
loc_823C98EC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c98fc
	if (!ctx.cr6.eq) goto loc_823C98FC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823C98FC:
	// bl 0x8269d6a8
	ctx.lr = 0x823C9900;
	sub_8269D6A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823C9904:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// bne cr6,0x823c9928
	if (!ctx.cr6.eq) goto loc_823C9928;
loc_823C9910:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823C9928:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823C993C;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c98bc
	if (ctx.cr6.eq) goto loc_823C98BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stbx r25,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r25.u8);
	// b 0x823c9958
	goto loc_823C9958;
loc_823C9954:
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
loc_823C9958:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcf60
	ctx.lr = 0x823C9970;
	sub_823DCF60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c98bc
	if (ctx.cr6.eq) goto loc_823C98BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9a98
	if (ctx.cr6.eq) goto loc_823C9A98;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823c999c
	if (!ctx.cr6.gt) goto loc_823C999C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x823c99a4
	goto loc_823C99A4;
loc_823C999C:
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d6a8
	ctx.lr = 0x823C99A4;
	sub_8269D6A8(ctx, base);
loc_823C99A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// beq cr6,0x823c9910
	if (ctx.cr6.eq) goto loc_823C9910;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823c9a9c
	if (!ctx.cr6.gt) goto loc_823C9A9C;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_823C99C4:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r5,r31,r11
	ctx.r5.u64 = r31.u64 + ctx.r11.u64;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcf60
	ctx.lr = 0x823C99DC;
	sub_823DCF60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c98bc
	if (ctx.cr6.eq) goto loc_823C98BC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9a74
	if (ctx.cr6.eq) goto loc_823C9A74;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c9a0c
	if (!ctx.cr6.lt) goto loc_823C9A0C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x823c9a20
	goto loc_823C9A20;
loc_823C9A0C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c9a1c
	if (!ctx.cr6.eq) goto loc_823C9A1C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823C9A1C:
	// bl 0x8269d6a8
	ctx.lr = 0x823C9A20;
	sub_8269D6A8(ctx, base);
loc_823C9A20:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823c9910
	if (ctx.cr6.eq) goto loc_823C9910;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823C9A54;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c98bc
	if (ctx.cr6.eq) goto loc_823C98BC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r25,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r25.u8);
	// b 0x823c9a78
	goto loc_823C9A78;
loc_823C9A74:
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r25.u32);
loc_823C9A78:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c99c4
	if (ctx.cr6.lt) goto loc_823C99C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823C9A98:
	// stw r25,12(r30)
	REX_STORE_U32(r30.u32 + 12, r25.u32);
loc_823C9A9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823D35A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfs f0,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f11,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f11,-68(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f8,-56(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f7,-52(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f6,-48(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f5,-44(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f4,-40(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f3,-36(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f2,-32(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f1,-28(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f31,-24(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f30,-20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// beq cr6,0x823d36d8
	if (ctx.cr6.eq) goto loc_823D36D8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// lvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D3678:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v6,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v4,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v5,v0,v10,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v6,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v4,v0,v8,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v13,v8,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v3,v13,v10,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v6,v12,v9,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v12,v12,v7,v4
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v11,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v11,v9,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// stvx128 v6,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x823d3678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3678;
loc_823D36D8:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E1520) {
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
	ctx.lr = 0x823E1528;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,96(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r25,28(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 28);
	// bl 0x823e19d8
	ctx.lr = 0x823E1550;
	sub_823E19D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e16e4
	if (!ctx.cr6.eq) goto loc_823E16E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823e2c70
	ctx.lr = 0x823E1568;
	sub_823E2C70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E1574;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e1588
	if (ctx.cr6.eq) goto loc_823E1588;
	// li r3,-135
	ctx.r3.s64 = -135;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E1588:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x823e2da8
	ctx.lr = 0x823E1594;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e15e8
	if (ctx.cr6.eq) goto loc_823E15E8;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r24,r11,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r24,r25
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x823e15f4
	if (ctx.cr6.eq) goto loc_823E15F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E15CC;
	sub_823E2DA8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E15DC;
	sub_823E2DA8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823e15fc
	if (!ctx.cr6.eq) goto loc_823E15FC;
loc_823E15E8:
	// li r3,-136
	ctx.r3.s64 = -136;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E15F4:
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_823E15FC:
	// ld r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r8,24(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 24);
	// std r8,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r8.u64);
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// lwzx r6,r9,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// stw r6,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e1918
	ctx.lr = 0x823E1638;
	sub_823E1918(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e1650
	if (!ctx.cr6.eq) goto loc_823E1650;
loc_823E1644:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E1650:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e16a0
	if (!ctx.cr6.gt) goto loc_823E16A0;
loc_823E1660:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e1918
	ctx.lr = 0x823E1674;
	sub_823E1918(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stwx r3,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823e1644
	if (ctx.cr6.eq) goto loc_823E1644;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e1660
	if (ctx.cr6.lt) goto loc_823E1660;
loc_823E16A0:
	// lwzx r11,r24,r25
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r25.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r9,r10,-2264
	ctx.r9.s64 = ctx.r10.s64 + -2264;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// addi r7,r11,135
	ctx.r7.s64 = ctx.r11.s64 + 135;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	// lwzx r5,r5,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E16E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E16E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823EA290) {
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
	ctx.lr = 0x823EA298;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r30.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r9,r30,-7
	ctx.r9.s64 = r30.s64 + -7;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r5
	r27.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
loc_823EA2DC:
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fnmsubs f8,f10,f11,f9
	ctx.f8.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfsu f8,-16(r9)
	ea = -16 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f3.f64)));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fnmsubs f9,f1,f0,f10
	ctx.f9.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f10.f64)));
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f6,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// fmsubs f4,f7,f0,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f5.f64)));
	// stfs f4,12(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823ea2dc
	if (!ctx.cr6.lt) goto loc_823EA2DC;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r27,-4
	ctx.r9.s64 = r27.s64 + -4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_823EA378:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f10,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f3,f8,f4,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, -ctx.f5.f64)));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmsubs f5,f10,f6,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfsu f5,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823ea378
	if (!ctx.cr6.lt) goto loc_823EA378;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r25,r28,r29
	r25.u64 = r28.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823ea030
	ctx.lr = 0x823EA410;
	sub_823EA030(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ea150
	ctx.lr = 0x823EA41C;
	sub_823EA150(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r8,r27,-4
	ctx.r8.s64 = r27.s64 + -4;
	// addi r11,r29,12
	ctx.r11.s64 = r29.s64 + 12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823EA434:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// lfs f13,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f10,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f12.f64)));
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fnmadds f3,f4,f5,f6
	ctx.f3.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f6.f64)));
	// stfs f3,4(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f1,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f2,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f13.f64)));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fnmadds f5,f10,f6,f7
	ctx.f5.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfs f5,8(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmsubs f13,f4,f3,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, -ctx.f0.f64)));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fnmadds f7,f12,f11,f8
	ctx.f7.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f7,12(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmsubs f1,f6,f5,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f5.f64, -ctx.f2.f64)));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfsu f0,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// fnmadds f9,f13,f12,f10
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfsu f9,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823ea434
	if (ctx.cr6.lt) goto loc_823EA434;
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// add r11,r26,r29
	ctx.r11.u64 = r26.u64 + r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823EA53C:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,-8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,-4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r7,r9,-8
	ctx.r7.s64 = ctx.r9.s64 + -8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823ea53c
	if (ctx.cr6.lt) goto loc_823EA53C;
	// addi r10,r27,-16
	ctx.r10.s64 = r27.s64 + -16;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823EA5A0:
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,-16(r11)
	ea = -16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f13,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bgt cr6,0x823ea5a0
	if (ctx.cr6.gt) goto loc_823EA5A0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824009E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824009E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r29,r28
	r29.u64 = r28.u64;
	// bne cr6,0x82400a0c
	if (!ctx.cr6.eq) goto loc_82400A0C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x82400a40
	goto loc_82400A40;
loc_82400A0C:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8269d1a8
	ctx.lr = 0x82400A1C;
	sub_8269D1A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82400a34
	if (ctx.cr0.lt) goto loc_82400A34;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bgt cr6,0x82400a34
	if (ctx.cr6.gt) goto loc_82400A34;
	// bne cr6,0x82400a40
	if (!ctx.cr6.eq) goto loc_82400A40;
	// b 0x82400a3c
	goto loc_82400A3C;
loc_82400A34:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,122
	r29.u64 = r29.u64 | 122;
loc_82400A3C:
	// stbx r28,r31,r30
	REX_STORE_U8(r31.u32 + r30.u32, r28.u8);
loc_82400A40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824050B0) {
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
	ctx.lr = 0x824050B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824051d8
	if (!ctx.cr6.eq) goto loc_824051D8;
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824051d8
	if (!ctx.cr6.eq) goto loc_824051D8;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824051d8
	if (!ctx.cr6.eq) goto loc_824051D8;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x82405104;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824051d8
	if (ctx.cr0.eq) goto loc_824051D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240513c
	if (ctx.cr6.eq) goto loc_8240513C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240513c
	if (ctx.cr6.eq) goto loc_8240513C;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
loc_8240513C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824051c4
	if (!ctx.cr6.gt) goto loc_824051C4;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_82405154:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824051b4
	if (ctx.cr6.eq) goto loc_824051B4;
loc_82405160:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
	ctx.lr = 0x82405180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x824051A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82405160
	if (ctx.cr6.lt) goto loc_82405160;
loc_824051B4:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82405154
	if (ctx.cr6.lt) goto loc_82405154;
loc_824051C4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x824051D0;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824051e0
	goto loc_824051E0;
loc_824051D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824051E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8240E210) {
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
	ctx.lr = 0x8240E218;
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
	// beq cr6,0x8240e250
	if (ctx.cr6.eq) goto loc_8240E250;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240E24C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240E250:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240e26c
	if (ctx.cr6.eq) goto loc_8240E26C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240E268;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240E26C:
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
	// bne 0x8240e2d8
	if (!ctx.cr0.eq) goto loc_8240E2D8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240e2e0
	goto loc_8240E2E0;
loc_8240E2D8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240E2E0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e2f8
	if (ctx.cr6.eq) goto loc_8240E2F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240E2F8;
	sub_82409A88(ctx, base);
loc_8240E2F8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240e5cc
	if (!ctx.cr6.gt) goto loc_8240E5CC;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,20328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20328);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
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
	// lfs f7,19656(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 19656);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,20204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,19032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19032);
	ctx.f6.f64 = double(temp.f32);
loc_8240E36C:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
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
	// beq cr6,0x8240e51c
	if (ctx.cr6.eq) goto loc_8240E51C;
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
loc_8240E51C:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240e52c
	if (ctx.cr6.lt) goto loc_8240E52C;
	// li r11,127
	ctx.r11.s64 = 127;
loc_8240E52C:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x8240e544
	if (!ctx.cr6.gt) goto loc_8240E544;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x8240e548
	if (ctx.cr6.lt) goto loc_8240E548;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x8240e548
	goto loc_8240E548;
loc_8240E544:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_8240E548:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240e558
	if (ctx.cr6.lt) goto loc_8240E558;
	// li r11,127
	ctx.r11.s64 = 127;
loc_8240E558:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x8240e570
	if (!ctx.cr6.gt) goto loc_8240E570;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x8240e574
	if (ctx.cr6.lt) goto loc_8240E574;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x8240e574
	goto loc_8240E574;
loc_8240E570:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_8240E574:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240e584
	if (ctx.cr6.lt) goto loc_8240E584;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240E584:
	// cmpwi cr6,r11,-255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -255, ctx.xer);
	// ble cr6,0x8240e59c
	if (!ctx.cr6.gt) goto loc_8240E59C;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x8240e5a0
	if (ctx.cr6.lt) goto loc_8240E5A0;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x8240e5a0
	goto loc_8240E5A0;
loc_8240E59C:
	// li r4,-255
	ctx.r4.s64 = -255;
loc_8240E5A0:
	// rlwimi r6,r4,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwimi r5,r11,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stwux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240e36c
	if (ctx.cr6.lt) goto loc_8240E36C;
loc_8240E5CC:
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

DEFINE_REX_FUNC(sub_82424B08) {
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
	ctx.lr = 0x82424B10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82424b30
	if (!ctx.cr6.eq) goto loc_82424B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82424ce8
	goto loc_82424CE8;
loc_82424B30:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82424c94
	if (ctx.cr6.eq) goto loc_82424C94;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82424c7c
	if (ctx.cr6.eq) goto loc_82424C7C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82424c40
	if (ctx.cr6.eq) goto loc_82424C40;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82424b84
	if (ctx.cr6.eq) goto loc_82424B84;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x82424b7c
	if (ctx.cr6.eq) goto loc_82424B7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23188
	ctx.r6.s64 = ctx.r11.s64 + -23188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82423e58
	ctx.lr = 0x82424B78;
	sub_82423E58(ctx, base);
	// b 0x82424ce4
	goto loc_82424CE4;
loc_82424B7C:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x82424c84
	goto loc_82424C84;
loc_82424B84:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r30,r9,r8
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82424c08
	if (ctx.cr6.gt) goto loc_82424C08;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-23552
	ctx.r12.s64 = ctx.r12.s64 + -23552;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// nop 
	// addi r12,r12,19400
	ctx.r12.s64 = ctx.r12.s64 + 19400;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82424BC8;
	case 1:
		goto loc_82424C08;
	case 2:
		goto loc_82424BD0;
	case 3:
		goto loc_82424BD8;
	case 4:
		goto loc_82424BE4;
	case 5:
		goto loc_82424BEC;
	case 6:
		goto loc_82424BD0;
	case 7:
		goto loc_82424BD8;
	case 8:
		goto loc_82424BE4;
	case 9:
		goto loc_82424BEC;
	case 10:
		goto loc_82424C08;
	case 11:
		goto loc_82424BF4;
	case 12:
		goto loc_82424BFC;
	case 13:
		goto loc_82424C04;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82424BC8:
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x82424c08
	goto loc_82424C08;
loc_82424BD0:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82424c08
	goto loc_82424C08;
loc_82424BD8:
	// lis r10,512
	ctx.r10.s64 = 33554432;
loc_82424BDC:
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82424c08
	goto loc_82424C08;
loc_82424BE4:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x82424bdc
	goto loc_82424BDC;
loc_82424BEC:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// b 0x82424bdc
	goto loc_82424BDC;
loc_82424BF4:
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// b 0x82424c08
	goto loc_82424C08;
loc_82424BFC:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x82424c08
	goto loc_82424C08;
loc_82424C04:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_82424C08:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82424c1c
	if (ctx.cr0.eq) goto loc_82424C1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
loc_82424C1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82424ce4
	if (ctx.cr6.eq) goto loc_82424CE4;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82424ce4
	if (ctx.cr0.eq) goto loc_82424CE4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82424C34:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82424c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424C34;
	// b 0x82424ce4
	goto loc_82424CE4;
loc_82424C40:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82424ce4
	if (!ctx.cr6.gt) goto loc_82424CE4;
loc_82424C50:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82424b08
	ctx.lr = 0x82424C64;
	sub_82424B08(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82424c50
	if (ctx.cr6.lt) goto loc_82424C50;
	// b 0x82424ce4
	goto loc_82424CE4;
loc_82424C7C:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82424C84:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82424b08
	ctx.lr = 0x82424C8C;
	sub_82424B08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82424ce4
	goto loc_82424CE4;
loc_82424C94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82424cc4
	if (!ctx.cr6.eq) goto loc_82424CC4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82424b08
	ctx.lr = 0x82424CB4;
	sub_82424B08(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82424c94
	if (!ctx.cr6.eq) goto loc_82424C94;
loc_82424CC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82424ce4
	if (ctx.cr6.eq) goto loc_82424CE4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82424b08
	ctx.lr = 0x82424CE0;
	sub_82424B08(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82424CE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82424CE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8243FF80) {
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
	ctx.lr = 0x8243FF88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82440430
	ctx.lr = 0x8243FF98;
	sub_82440430(ctx, base);
	// lwz r28,1468(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 1468);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,1472(r29)
	REX_STORE_U32(r29.u32 + 1472, r28.u32);
	// ble 0x8243ffdc
	if (!ctx.cr0.gt) goto loc_8243FFDC;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8243FFAC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8243ffd4
	if (ctx.cr6.eq) goto loc_8243FFD4;
	// mr r31,r28
	r31.u64 = r28.u64;
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
loc_8243FFBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243faf8
	ctx.lr = 0x8243FFCC;
	sub_8243FAF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8243ffbc
	if (!ctx.cr0.eq) goto loc_8243FFBC;
loc_8243FFD4:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x8243ffac
	if (!ctx.cr0.eq) goto loc_8243FFAC;
loc_8243FFDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82441B88) {
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
	ctx.lr = 0x82441B90;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x82441B98;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82441f04
	if (ctx.cr6.eq) goto loc_82441F04;
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82441c5c
	if (ctx.cr6.gt) goto loc_82441C5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,1588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,-23680(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82441be8
	if (!ctx.cr6.gt) goto loc_82441BE8;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f0,3728(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f28,f0,f13
	f28.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x82441bec
	goto loc_82441BEC;
loc_82441BE8:
	// lfd f28,3728(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82441BEC:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824bf4d0
	ctx.lr = 0x82441BF8;
	sub_824BF4D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,1592(r28)
	REX_STORE_U32(r28.u32 + 1592, ctx.r3.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// lfd f29,32424(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lfd f30,-15208(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -15208);
	// lfd f31,-15216(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -15216);
loc_82441C18:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x82441C34;
	sub_8269F778(ctx, base);
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f1.f64, f30.f64, f29.f64);
	// lwz r11,1592(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1592);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(r31.s32, 256, ctx.xer);
	// blt cr6,0x82441c18
	if (ctx.cr6.lt) goto loc_82441C18;
	// b 0x82441f04
	goto loc_82441F04;
loc_82441C5C:
	// lbz r11,1558(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1558);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82441c90
	if (ctx.cr0.eq) goto loc_82441C90;
	// lbz r11,1616(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1616);
	// lbz r10,1617(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1617);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82441c7c
	if (!ctx.cr6.gt) goto loc_82441C7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82441C7C:
	// lbz r10,1618(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1618);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82441c94
	if (!ctx.cr6.gt) goto loc_82441C94;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82441c94
	goto loc_82441C94;
loc_82441C90:
	// lbz r11,1619(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1619);
loc_82441C94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// bgt cr6,0x82441ca4
	if (ctx.cr6.gt) goto loc_82441CA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82441CA4:
	// lwz r10,1376(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1376);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82441cbc
	if (ctx.cr0.eq) goto loc_82441CBC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82441cbc
	if (!ctx.cr6.lt) goto loc_82441CBC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82441CBC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82441cc8
	if (!ctx.cr6.gt) goto loc_82441CC8;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82441CC8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,1588(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// lfd f12,-23680(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + -23680);
	// subfic r25,r29,8
	ctx.xer.ca = r29.u32 <= 8;
	r25.u64 = static_cast<uint64_t>(8) - r29.u64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stw r11,1580(r28)
	REX_STORE_U32(r28.u32 + 1580, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// slw r24,r8,r25
	r24.u64 = r25.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r25.u8 & 0x3F));
	// addi r11,r11,3728
	ctx.r11.s64 = ctx.r11.s64 + 3728;
	// lfd f31,0(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ble cr6,0x82441d14
	if (!ctx.cr6.gt) goto loc_82441D14;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdiv f30,f31,f0
	f30.f64 = f31.f64 / ctx.f0.f64;
	// b 0x82441d18
	goto loc_82441D18;
loc_82441D14:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_82441D18:
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824bf4d0
	ctx.lr = 0x82441D24;
	sub_824BF4D0(ctx, base);
	// lwz r11,1376(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1376);
	// stw r3,1604(r28)
	REX_STORE_U32(r28.u32 + 1604, ctx.r3.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// andi. r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 & 1152;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82441e58
	if (ctx.cr0.eq) goto loc_82441E58;
	// ble cr6,0x82441d68
	if (!ctx.cr6.gt) goto loc_82441D68;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82441D48:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824bf4d0
	ctx.lr = 0x82441D54;
	sub_824BF4D0(ctx, base);
	// lwz r11,1604(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1604);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82441d48
	if (!ctx.cr0.eq) goto loc_82441D48;
loc_82441D68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fdiv f29,f31,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64 / f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r26,r24,8,0,23
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFFFFFF00;
	// li r31,0
	r31.s64 = 0;
	// std r26,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r26.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f30,-15224(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -15224);
	// li r30,0
	r30.s64 = 0;
	// lfd f31,32424(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// fcfid f28,f0
	f28.f64 = double(ctx.f0.s64);
	// li r27,255
	r27.s64 = 255;
loc_82441D98:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + f31.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * f30.f64;
	// bl 0x8269f778
	ctx.lr = 0x82441DB8;
	sub_8269F778(ctx, base);
	// fmul f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * f28.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82441e10
	if (ctx.cr6.gt) goto loc_82441E10;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// sraw r9,r27,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r27.s32 < 0) & (((r27.s32 >> temp.u32) << temp.u32) != r27.s32);
	ctx.r9.s64 = r27.s32 >> temp.u32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82441DEC:
	// and r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & r31.u64;
	// lwz r8,1604(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 1604);
	// srw r7,r31,r25
	ctx.r7.u64 = r25.u8 & 0x20 ? 0 : (r31.u32 >> (r25.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// bdnz 0x82441dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441DEC;
loc_82441E10:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x82441d98
	if (ctx.cr6.lt) goto loc_82441D98;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bge cr6,0x82441f04
	if (!ctx.cr6.lt) goto loc_82441F04;
	// sraw r11,r27,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r27.s32 < 0) & (((r27.s32 >> temp.u32) << temp.u32) != r27.s32);
	ctx.r11.s64 = r27.s32 >> temp.u32;
loc_82441E28:
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & r31.u64;
	// lwz r9,1604(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 1604);
	// srw r8,r31,r25
	ctx.r8.u64 = r25.u8 & 0x20 ? 0 : (r31.u32 >> (r25.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// sthx r7,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// blt cr6,0x82441e28
	if (ctx.cr6.lt) goto loc_82441E28;
	// b 0x82441f04
	goto loc_82441F04;
loc_82441E58:
	// li r27,0
	r27.s64 = 0;
	// ble cr6,0x82441f04
	if (!ctx.cr6.gt) goto loc_82441F04;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r26,r11,-28824
	r26.s64 = ctx.r11.s64 + -28824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f29,-15232(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -15232);
	// li r30,0
	r30.s64 = 0;
	// lfd f28,-15240(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + -15240);
	// lfd f31,32424(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
loc_82441E88:
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824bf4d0
	ctx.lr = 0x82441E94;
	sub_824BF4D0(ctx, base);
	// lwz r11,1604(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1604);
	// li r31,0
	r31.s64 = 0;
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r26.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// rlwinm r29,r11,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_82441EAC:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f29
	ctx.f1.f64 = ctx.f0.f64 * f29.f64;
	// bl 0x8269f778
	ctx.lr = 0x82441EC8;
	sub_8269F778(ctx, base);
	// fmadd f0,f1,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f1.f64, f28.f64, f31.f64);
	// lwz r11,1604(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1604);
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(r31.s32, 512, ctx.xer);
	// blt cr6,0x82441eac
	if (ctx.cr6.lt) goto loc_82441EAC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// blt cr6,0x82441e88
	if (ctx.cr6.lt) goto loc_82441E88;
loc_82441F04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x82441F10;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8245A4F0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,16548
	ctx.r4.s64 = ctx.r10.s64 + 16548;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A514;
	sub_824555B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245DFC0) {
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
	ctx.lr = 0x8245DFC8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r25,12(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r24,16(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x8245E000;
	sub_82477448(ctx, base);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x8245E010;
	sub_82477448(ctx, base);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x8245E020;
	sub_82477448(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// beq cr6,0x8245e0a8
	if (ctx.cr6.eq) goto loc_8245E0A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_8245E038:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8245e0a8
	if (!ctx.cr6.eq) goto loc_8245E0A8;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8245e098
	if (ctx.cr6.eq) goto loc_8245E098;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8245e098
	if (ctx.cr6.eq) goto loc_8245E098;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8245E064:
	// lwzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm. r3,r3,0,7,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8245e094
	if (!ctx.cr0.eq) goto loc_8245E094;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// blt cr6,0x8245e064
	if (ctx.cr6.lt) goto loc_8245E064;
	// b 0x8245e098
	goto loc_8245E098;
loc_8245E094:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8245E098:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8245e038
	if (ctx.cr6.lt) goto loc_8245E038;
loc_8245E0A8:
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x8245db60
	ctx.lr = 0x8245E0E4;
	sub_8245DB60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82467BD8) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x82467BE0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82467e40
	if (ctx.cr0.eq) goto loc_82467E40;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu. r21,r11,r28
	r21.u64 = uint32_t(r28.u32 ? ctx.r11.u32 / r28.u32 : 0);
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82467e14
	if (ctx.cr0.eq) goto loc_82467E14;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// rlwinm r22,r28,2,0,29
	r22.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r21
	r23.u64 = r21.u64;
loc_82467C14:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r31,84(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82467dfc
	if (ctx.cr6.eq) goto loc_82467DFC;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwzx r27,r10,r11
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// beq cr6,0x82467ccc
	if (ctx.cr6.eq) goto loc_82467CCC;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_82467C58:
	// add r11,r25,r9
	ctx.r11.u64 = r25.u64 + ctx.r9.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,136(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82467c88
	if (ctx.cr6.eq) goto loc_82467C88;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467C88:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82467c98
	if (ctx.cr6.eq) goto loc_82467C98;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467C98:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82467cb0
	if (!ctx.cr6.gt) goto loc_82467CB0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x82467cb0
	if (!ctx.cr6.lt) goto loc_82467CB0;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467CB0:
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82467cc4
	if (ctx.cr6.eq) goto loc_82467CC4;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467CC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82467c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82467C58;
loc_82467CCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82467e00
	if (ctx.cr6.eq) goto loc_82467E00;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82467dfc
	if (!ctx.cr6.eq) goto loc_82467DFC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82467d28
	if (ctx.cr6.eq) goto loc_82467D28;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_82467CF4:
	// add r10,r25,r11
	ctx.r10.u64 = r25.u64 + ctx.r11.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82467d20
	if (ctx.cr6.eq) goto loc_82467D20;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467D20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82467cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82467CF4;
loc_82467D28:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82467e00
	if (ctx.cr6.eq) goto loc_82467E00;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,12(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 12);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82467dfc
	if (!ctx.cr6.eq) goto loc_82467DFC;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82467dfc
	if (ctx.cr6.gt) goto loc_82467DFC;
	// lwz r31,4(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82467d94
	if (ctx.cr6.eq) goto loc_82467D94;
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_82467D78:
	// lwzx r20,r11,r9
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r20,r8
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82467d94
	if (ctx.cr6.eq) goto loc_82467D94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x82467d78
	if (ctx.cr6.lt) goto loc_82467D78;
loc_82467D94:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82467dfc
	if (ctx.cr6.eq) goto loc_82467DFC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82467e00
	if (!ctx.cr6.gt) goto loc_82467E00;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x82467db8
	if (!ctx.cr6.eq) goto loc_82467DB8;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// ble cr6,0x82467dbc
	if (!ctx.cr6.gt) goto loc_82467DBC;
loc_82467DB8:
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467DBC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82467e00
	if (ctx.cr6.eq) goto loc_82467E00;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82467DD0:
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82467dec
	if (ctx.cr6.eq) goto loc_82467DEC;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467DEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82467dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82467DD0;
	// b 0x82467e00
	goto loc_82467E00;
loc_82467DFC:
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_82467E00:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r24,r22,r24
	r24.u64 = r22.u64 + r24.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82467c14
	if (!ctx.cr0.eq) goto loc_82467C14;
loc_82467E14:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82467e40
	if (ctx.cr6.eq) goto loc_82467E40;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82467E24:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82467e48
	if (!ctx.cr6.eq) goto loc_82467E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// blt cr6,0x82467e24
	if (ctx.cr6.lt) goto loc_82467E24;
loc_82467E40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82467E44:
	// b 0x826a1ce8
	return;
loc_82467E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82467e44
	goto loc_82467E44;
}

DEFINE_REX_FUNC(sub_824772E8) {
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
	ctx.lr = 0x824772F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477320
	if (ctx.cr6.eq) goto loc_82477320;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247735c
	if (!ctx.cr6.eq) goto loc_8247735C;
loc_82477320:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82477338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824690b8
	ctx.lr = 0x8247734C;
	sub_824690B8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82477374
	if (!ctx.cr6.eq) goto loc_82477374;
loc_8247735C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489b48
	ctx.lr = 0x82477370;
	sub_82489B48(ctx, base);
	// b 0x824773c8
	goto loc_824773C8;
loc_82477374:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247738C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r5,r10,30444
	ctx.r5.s64 = ctx.r10.s64 + 30444;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82404168
	ctx.lr = 0x824773BC;
	sub_82404168(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_824773C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82479A28) {
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
	ctx.lr = 0x82479A30;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwzx r25,r11,r5
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82479d3c
	if (ctx.cr6.eq) goto loc_82479D3C;
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 64);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82479a74
	if (ctx.cr6.eq) goto loc_82479A74;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfd f0,40(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r25.u32 + 40);
	// b 0x82479d48
	goto loc_82479D48;
loc_82479A74:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82479d3c
	if (!ctx.cr6.eq) goto loc_82479D3C;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82479d3c
	if (ctx.cr0.eq) goto loc_82479D3C;
	// lwz r10,72(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82479ae0
	if (ctx.cr6.eq) goto loc_82479AE0;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_82479AC4:
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x82479ae0
	if (ctx.cr6.eq) goto loc_82479AE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82479ac4
	if (ctx.cr6.lt) goto loc_82479AC4;
loc_82479AE0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82479d3c
	if (ctx.cr6.eq) goto loc_82479D3C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r7,4096
	ctx.r7.s64 = 268435456;
	// rlwinm r8,r8,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479b2c
	if (!ctx.cr6.eq) goto loc_82479B2C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82479a28
	ctx.lr = 0x82479B20;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82479d4c
	if (!ctx.cr0.lt) goto loc_82479D4C;
	// b 0x82479d3c
	goto loc_82479D3C;
loc_82479B2C:
	// lis r7,4112
	ctx.r7.s64 = 269484032;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479b70
	if (!ctx.cr6.eq) goto loc_82479B70;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82479a28
	ctx.lr = 0x82479B5C;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479d3c
	if (ctx.cr0.lt) goto loc_82479D3C;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82479d48
	goto loc_82479D48;
loc_82479B70:
	// lis r7,8256
	ctx.r7.s64 = 541065216;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479c58
	if (!ctx.cr6.eq) goto loc_82479C58;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r28,r9,r10
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x82479bd4
	if (!ctx.cr6.eq) goto loc_82479BD4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82479a28
	ctx.lr = 0x82479BB8;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479d3c
	if (ctx.cr0.lt) goto loc_82479D3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,8312(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_82479BCC:
	// fmul f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// b 0x82479d48
	goto loc_82479D48;
loc_82479BD4:
	// li r30,-1
	r30.s64 = -1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82479a28
	ctx.lr = 0x82479BE4;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479c18
	if (ctx.cr0.lt) goto loc_82479C18;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82479a28
	ctx.lr = 0x82479C00;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479c18
	if (ctx.cr0.lt) goto loc_82479C18;
loc_82479C08:
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// b 0x82479d48
	goto loc_82479D48;
loc_82479C18:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82479a28
	ctx.lr = 0x82479C30;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479d3c
	if (ctx.cr0.lt) goto loc_82479D3C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82479a28
	ctx.lr = 0x82479C4C;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479d3c
	if (ctx.cr0.lt) goto loc_82479D3C;
	// b 0x82479c08
	goto loc_82479C08;
loc_82479C58:
	// lis r7,8272
	ctx.r7.s64 = 542113792;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479d3c
	if (!ctx.cr6.eq) goto loc_82479D3C;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// beq cr6,0x82479d3c
	if (ctx.cr6.eq) goto loc_82479D3C;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,-1
	r30.s64 = -1;
	// lwzx r11,r29,r5
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82479ce8
	if (ctx.cr0.eq) goto loc_82479CE8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82479ce8
	if (!ctx.cr6.eq) goto loc_82479CE8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82479a28
	ctx.lr = 0x82479CCC;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82479ce8
	if (ctx.cr0.lt) goto loc_82479CE8;
loc_82479CD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// b 0x82479bcc
	goto loc_82479BCC;
loc_82479CE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82479d3c
	if (ctx.cr0.eq) goto loc_82479D3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82479d3c
	if (!ctx.cr6.eq) goto loc_82479D3C;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82479a28
	ctx.lr = 0x82479D34;
	sub_82479A28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82479cd4
	if (!ctx.cr0.lt) goto loc_82479CD4;
loc_82479D3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82479D48:
	// stfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
loc_82479D4C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82479d70
	if (ctx.cr6.eq) goto loc_82479D70;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82479d70
	if (ctx.cr6.eq) goto loc_82479D70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82479d94
	goto loc_82479D94;
loc_82479D70:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r25)
	REX_STORE_U32(r25.u32 + 64, ctx.r11.u32);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// stfd f0,40(r25)
	REX_STORE_U64(r25.u32 + 40, ctx.f0.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfd f0,0(r23)
	REX_STORE_U64(r23.u32 + 0, ctx.f0.u64);
loc_82479D94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8249C6F0) {
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
	ctx.lr = 0x8249C6F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8249c754
	if (ctx.cr6.eq) goto loc_8249C754;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8249c754
	if (!ctx.cr6.eq) goto loc_8249C754;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249b4f0
	ctx.lr = 0x8249C750;
	sub_8249B4F0(ctx, base);
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8249C754:
	// addi r25,r29,40
	r25.s64 = r29.s64 + 40;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8249c7c0
	if (ctx.cr6.eq) goto loc_8249C7C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8249c7b0
	if (ctx.cr6.eq) goto loc_8249C7B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8249c7b0
	if (!ctx.cr6.eq) goto loc_8249C7B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82495798
	ctx.lr = 0x8249C780;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249c7b0
	if (ctx.cr0.eq) goto loc_8249C7B0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8249c79c
	if (ctx.cr6.eq) goto loc_8249C79C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8249c9e8
	if (!ctx.cr6.eq) goto loc_8249C9E8;
loc_8249C79C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824956c8
	ctx.lr = 0x8249C7A8;
	sub_824956C8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8249c848
	goto loc_8249C848;
loc_8249C7B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3037
	ctx.r5.s64 = 3037;
	// addi r6,r11,-10268
	ctx.r6.s64 = ctx.r11.s64 + -10268;
	// b 0x8249c9dc
	goto loc_8249C9DC;
loc_8249C7C0:
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8249c7e0
	if (ctx.cr6.eq) goto loc_8249C7E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8249c9e8
	if (!ctx.cr6.eq) goto loc_8249C9E8;
	// lwz r31,16(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r25,r27,48
	r25.s64 = r27.s64 + 48;
loc_8249C7E0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249C7F4;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne 0x8249c81c
	if (!ctx.cr0.eq) goto loc_8249C81C;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82498c30
	ctx.lr = 0x8249C818;
	sub_82498C30(ctx, base);
	// b 0x8249c9e8
	goto loc_8249C9E8;
loc_8249C81C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824956c8
	ctx.lr = 0x8249C824;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249c844
	if (!ctx.cr0.eq) goto loc_8249C844;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824956c8
	ctx.lr = 0x8249C838;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// beq 0x8249c848
	if (ctx.cr0.eq) goto loc_8249C848;
loc_8249C844:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8249C848:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82493da0
	ctx.lr = 0x8249C854;
	sub_82493DA0(ctx, base);
	// or r26,r3,r9
	r26.u64 = ctx.r3.u64 | ctx.r9.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x8249C860;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c88c
	if (ctx.cr0.eq) goto loc_8249C88C;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x8249C884;
	sub_824474C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8249c890
	goto loc_8249C890;
loc_8249C88C:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8249C890:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8249c9e8
	if (ctx.cr6.eq) goto loc_8249C9E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8249c8c0
	if (ctx.cr6.eq) goto loc_8249C8C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249C8B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c9e8
	if (ctx.cr0.eq) goto loc_8249C9E8;
loc_8249C8C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8249c8e8
	if (ctx.cr6.eq) goto loc_8249C8E8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249C8DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c9e8
	if (ctx.cr0.eq) goto loc_8249C9E8;
loc_8249C8E8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8249c94c
	if (ctx.cr6.eq) goto loc_8249C94C;
	// lwz r31,32(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 32);
	// b 0x8249c944
	goto loc_8249C944;
loc_8249C8F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249c940
	if (ctx.cr6.eq) goto loc_8249C940;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8249c940
	if (!ctx.cr6.eq) goto loc_8249C940;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82495798
	ctx.lr = 0x8249C91C;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249c978
	if (ctx.cr0.eq) goto loc_8249C978;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8249c940
	if (!ctx.cr6.eq) goto loc_8249C940;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824956c8
	ctx.lr = 0x8249C93C;
	sub_824956C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8249C940:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8249C944:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8249c8f8
	if (!ctx.cr6.eq) goto loc_8249C8F8;
loc_8249C94C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8249c964
	if (ctx.cr6.eq) goto loc_8249C964;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824955e0
	ctx.lr = 0x8249C964;
	sub_824955E0(ctx, base);
loc_8249C964:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8249c9f0
	if (ctx.cr6.eq) goto loc_8249C9F0;
	// lwz r31,32(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x8249c9b4
	goto loc_8249C9B4;
loc_8249C978:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3017
	ctx.r5.s64 = 3017;
	// addi r6,r11,-10320
	ctx.r6.s64 = ctx.r11.s64 + -10320;
	// b 0x8249c9dc
	goto loc_8249C9DC;
loc_8249C988:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249c9b0
	if (ctx.cr6.eq) goto loc_8249C9B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8249c9b0
	if (!ctx.cr6.eq) goto loc_8249C9B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82495868
	ctx.lr = 0x8249C9AC;
	sub_82495868(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_8249C9B0:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8249C9B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8249c988
	if (!ctx.cr6.eq) goto loc_8249C988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x82495868
	ctx.lr = 0x8249C9C8;
	sub_82495868(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8249c9f0
	if (ctx.cr6.eq) goto loc_8249C9F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3014
	ctx.r5.s64 = 3014;
	// addi r6,r11,-10380
	ctx.r6.s64 = ctx.r11.s64 + -10380;
loc_8249C9DC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C9E8;
	sub_82494D48(ctx, base);
loc_8249C9E8:
	// mr r28,r23
	r28.u64 = r23.u64;
	// b 0x8249c9fc
	goto loc_8249C9FC;
loc_8249C9F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824974b0
	ctx.lr = 0x8249C9FC;
	sub_824974B0(ctx, base);
loc_8249C9FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824B6108) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824B6110;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r3,508
	ctx.r3.s64 = ctx.r3.s64 + 508;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824B612C;
	sub_826A2E60(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r30,540(r31)
	REX_STORE_U32(r31.u32 + 540, r30.u32);
	// stw r30,544(r31)
	REX_STORE_U32(r31.u32 + 544, r30.u32);
	// stw r30,548(r31)
	REX_STORE_U32(r31.u32 + 548, r30.u32);
	// stw r30,552(r31)
	REX_STORE_U32(r31.u32 + 552, r30.u32);
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x823f0350
	ctx.lr = 0x824B614C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x823f0350
	ctx.lr = 0x824B6158;
	sub_823F0350(ctx, base);
	// stw r30,560(r31)
	REX_STORE_U32(r31.u32 + 560, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824700f0
	ctx.lr = 0x824B616C;
	sub_824700F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824B90C0) {
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
	// bl 0x824b5fd0
	ctx.lr = 0x824B90E0;
	sub_824B5FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b90f4
	if (ctx.cr0.eq) goto loc_824B90F4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824B90F4;
	sub_823F0350(ctx, base);
loc_824B90F4:
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

DEFINE_REX_FUNC(sub_824BAA78) {
	REX_FUNC_PROLOGUE();
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x824baa8c
	if (!ctx.cr6.gt) goto loc_824BAA8C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824BAA8C:
	// stw r11,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// b 0x824700f0
	sub_824700F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BC1A0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,202(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bgt cr6,0x824bc1f8
	if (ctx.cr6.gt) goto loc_824BC1F8;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4511
	ctx.r5.s64 = 4511;
	// addi r6,r10,30360
	ctx.r6.s64 = ctx.r10.s64 + 30360;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824BC1EC;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x824bc318
	goto loc_824BC318;
loc_824BC1F8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824bc21c
	if (ctx.cr6.eq) goto loc_824BC21C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bc1a0
	ctx.lr = 0x824BC210;
	sub_824BC1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
loc_824BC21C:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824bc314
	if (ctx.cr6.eq) goto loc_824BC314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x824BC234;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,-20480
	ctx.r4.s64 = -1342177280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BC25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BC284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BC2B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BC2D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BC2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824BC304;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bc318
	if (ctx.cr0.lt) goto loc_824BC318;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
loc_824BC314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BC318:
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

DEFINE_REX_FUNC(sub_824C3400) {
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
	// lbz r11,1548(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1548);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// beq 0x824c3440
	if (ctx.cr0.eq) goto loc_824C3440;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x824c3450
	if (!ctx.cr6.eq) goto loc_824C3450;
	// li r30,0
	r30.s64 = 0;
	// b 0x824c3450
	goto loc_824C3450;
loc_824C3440:
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_824C3450:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442258
	ctx.lr = 0x824C3460;
	sub_82442258(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824c34ac
	if (ctx.cr6.eq) goto loc_824C34AC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r8,1536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x824c34b0
	goto loc_824C34B0;
loc_824C34AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C34B0:
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

DEFINE_REX_FUNC(sub_824C6AA0) {
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
	ctx.lr = 0x824C6AA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824c6aec
	if (ctx.cr6.eq) goto loc_824C6AEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// addi r6,r11,8196
	ctx.r6.s64 = ctx.r11.s64 + 8196;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82494d48
	ctx.lr = 0x824C6ADC;
	sub_82494D48(ctx, base);
loc_824C6ADC:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_824C6AE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_824C6AEC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824C6AF4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c6b18
	if (ctx.cr0.eq) goto loc_824C6B18;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-11724
	ctx.r6.s64 = ctx.r11.s64 + -11724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824C6B10;
	sub_82444918(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824c6b1c
	goto loc_824C6B1C;
loc_824C6B18:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_824C6B1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824c6adc
	if (ctx.cr6.eq) goto loc_824C6ADC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82444750
	ctx.lr = 0x824C6B2C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c6b40
	if (ctx.cr0.eq) goto loc_824C6B40;
	// bl 0x824473b0
	ctx.lr = 0x824C6B38;
	sub_824473B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824c6b44
	goto loc_824C6B44;
loc_824C6B40:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_824C6B44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824c6adc
	if (ctx.cr6.eq) goto loc_824C6ADC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824c6838
	ctx.lr = 0x824C6B68;
	sub_824C6838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824c6adc
	if (ctx.cr0.lt) goto loc_824C6ADC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x824c6ae0
	goto loc_824C6AE0;
}

DEFINE_REX_FUNC(sub_824CADF0) {
	REX_FUNC_PROLOGUE();
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CB0D0) {
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
	ctx.lr = 0x824CB0D8;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r28,0
	r28.s64 = 0;
	// lwz r24,0(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824cb230
	if (!ctx.cr6.gt) goto loc_824CB230;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
loc_824CB0F0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
loc_824CB100:
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824cb114
	if (!ctx.cr6.eq) goto loc_824CB114;
	// lwz r11,-4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -4);
	// b 0x824cb118
	goto loc_824CB118;
loc_824CB114:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_824CB118:
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lwzu r11,4(r27)
	ea = 4 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,7
	ctx.r7.s64 = ctx.r7.s64 + 7;
	// srawi r6,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 4;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r8,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r8.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq 0x824cb1ec
	if (ctx.cr0.eq) goto loc_824CB1EC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_824CB19C:
	// lbzu r10,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r31,1(r5)
	ea = 1 + ctx.r5.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824cb19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CB19C;
loc_824CB1EC:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// blt cr6,0x824cb100
	if (ctx.cr6.lt) goto loc_824CB100;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824cb0f0
	if (ctx.cr6.lt) goto loc_824CB0F0;
loc_824CB230:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824D48B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x824d49e8
	if (ctx.cr6.eq) goto loc_824D49E8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d4964
	if (ctx.cr6.eq) goto loc_824D4964;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x824d48e0
	if (ctx.cr6.eq) goto loc_824D48E0;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824D48E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824d4958
	if (!ctx.cr6.eq) goto loc_824D4958;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d494c
	if (ctx.cr6.eq) goto loc_824D494C;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d494c
	if (ctx.cr6.eq) goto loc_824D494C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d494c
	if (ctx.cr6.eq) goto loc_824D494C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x824d4958
	if (!ctx.cr6.eq) goto loc_824D4958;
loc_824D494C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// blr 
	return;
loc_824D4958:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17640
	ctx.r3.s64 = ctx.r11.s64 + 17640;
	// blr 
	return;
loc_824D4964:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824d49dc
	if (!ctx.cr6.eq) goto loc_824D49DC;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d49d0
	if (ctx.cr6.eq) goto loc_824D49D0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d49d0
	if (ctx.cr6.eq) goto loc_824D49D0;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824d49d0
	if (ctx.cr6.eq) goto loc_824D49D0;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x824d49dc
	if (!ctx.cr6.eq) goto loc_824D49DC;
loc_824D49D0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// blr 
	return;
loc_824D49DC:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17360
	ctx.r3.s64 = ctx.r11.s64 + 17360;
	// blr 
	return;
loc_824D49E8:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DAAE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824dab14
	if (!ctx.cr6.gt) goto loc_824DAB14;
	// bl 0x824d8358
	ctx.lr = 0x824DAB14;
	sub_824D8358(ctx, base);
loc_824DAB14:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824DAB34:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824dab34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824DAB34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824DCB70) {
	REX_FUNC_PROLOGUE();
	// b 0x824dbde0
	sub_824DBDE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DCBA8) {
	REX_FUNC_PROLOGUE();
	// b 0x824dc0e8
	sub_824DC0E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD0C8) {
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
	// bl 0x824dca38
	ctx.lr = 0x824DD0E8;
	sub_824DCA38(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824dd0fc
	if (ctx.cr6.eq) goto loc_824DD0FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x824dd104
	goto loc_824DD104;
loc_824DD0FC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_824DD104:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824dca38
	ctx.lr = 0x824DD10C;
	sub_824DCA38(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x824db0e0
	ctx.lr = 0x824DD120;
	sub_824DB0E0(ctx, base);
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

DEFINE_REX_FUNC(sub_824DED20) {
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
	ctx.lr = 0x824DED28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824ded50
	if (ctx.cr0.eq) goto loc_824DED50;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2932
	ctx.r3.u64 = ctx.r3.u64 | 2932;
	// b 0x824dedf4
	goto loc_824DEDF4;
loc_824DED50:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mulli r30,r11,20
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824DED64;
	sub_823F02B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824ded78
	if (!ctx.cr0.eq) goto loc_824DED78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824dedf4
	goto loc_824DEDF4;
loc_824DED78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824dede8
	if (!ctx.cr6.gt) goto loc_824DEDE8;
	// addi r6,r31,72
	ctx.r6.s64 = r31.s64 + 72;
	// addi r5,r31,328
	ctx.r5.s64 = r31.s64 + 328;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_824DED94:
	// lbzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r27,0
	r27.s64 = 0;
	// rotlwi r8,r3,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,146
	ctx.r8.s64 = ctx.r8.s64 + 146;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r27,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r27.u16);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824DEDC0:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824dedc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824DEDC0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824ded94
	if (ctx.cr6.lt) goto loc_824DED94;
loc_824DEDE8:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
loc_824DEDF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824E46F0) {
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
	ctx.lr = 0x824E46F8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// andis. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 327680;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e4724
	if (ctx.cr0.eq) goto loc_824E4724;
	// bl 0x82555698
	ctx.lr = 0x824E4724;
	sub_82555698(ctx, base);
loc_824E4724:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,7,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4738
	if (ctx.cr0.eq) goto loc_824E4738;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255a0b0
	ctx.lr = 0x824E4738;
	sub_8255A0B0(ctx, base);
loc_824E4738:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825798f0
	ctx.lr = 0x824E4740;
	sub_825798F0(ctx, base);
	// addi r30,r31,972
	r30.s64 = r31.s64 + 972;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E474C;
	sub_824E4528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254e228
	ctx.lr = 0x824E4754;
	sub_8254E228(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E475C;
	sub_824E4528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82544328
	ctx.lr = 0x824E4764;
	sub_82544328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E476C;
	sub_824E4528(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4794
	if (ctx.cr6.eq) goto loc_824E4794;
	// stw r27,680(r31)
	REX_STORE_U32(r31.u32 + 680, r27.u32);
	// stw r27,684(r31)
	REX_STORE_U32(r31.u32 + 684, r27.u32);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
	// stw r27,700(r31)
	REX_STORE_U32(r31.u32 + 700, r27.u32);
	// stw r27,704(r31)
	REX_STORE_U32(r31.u32 + 704, r27.u32);
	// stw r27,708(r31)
	REX_STORE_U32(r31.u32 + 708, r27.u32);
loc_824E4794:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82529af0
	ctx.lr = 0x824E479C;
	sub_82529AF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E47A4;
	sub_824E4528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82527d68
	ctx.lr = 0x824E47AC;
	sub_82527D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E47B4;
	sub_824E4528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82520be0
	ctx.lr = 0x824E47BC;
	sub_82520BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E47C4;
	sub_824E4528(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e47d8
	if (ctx.cr6.eq) goto loc_824E47D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d988
	ctx.lr = 0x824E47D8;
	sub_8251D988(ctx, base);
loc_824E47D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e47ec
	if (ctx.cr0.eq) goto loc_824E47EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250f208
	ctx.lr = 0x824E47EC;
	sub_8250F208(ctx, base);
loc_824E47EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82509d88
	ctx.lr = 0x824E47F4;
	sub_82509D88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4804
	if (ctx.cr0.eq) goto loc_824E4804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82508d80
	ctx.lr = 0x824E4804;
	sub_82508D80(ctx, base);
loc_824E4804:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// beq 0x824e4838
	if (ctx.cr0.eq) goto loc_824E4838;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4830
	if (ctx.cr6.eq) goto loc_824E4830;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_824E4830:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7f18
	ctx.lr = 0x824E4838;
	sub_824F7F18(ctx, base);
loc_824E4838:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e4850
	if (ctx.cr0.eq) goto loc_824E4850;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824e4854
	if (ctx.cr0.eq) goto loc_824E4854;
loc_824E4850:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824E4854:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4864
	if (ctx.cr0.eq) goto loc_824E4864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825036f0
	ctx.lr = 0x824E4864;
	sub_825036F0(ctx, base);
loc_824E4864:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825031d8
	ctx.lr = 0x824E486C;
	sub_825031D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825004a0
	ctx.lr = 0x824E4874;
	sub_825004A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4528
	ctx.lr = 0x824E487C;
	sub_824E4528(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e48a0
	if (ctx.cr6.eq) goto loc_824E48A0;
	// stw r27,680(r31)
	REX_STORE_U32(r31.u32 + 680, r27.u32);
	// stw r27,684(r31)
	REX_STORE_U32(r31.u32 + 684, r27.u32);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
	// stw r27,700(r31)
	REX_STORE_U32(r31.u32 + 700, r27.u32);
	// stw r27,704(r31)
	REX_STORE_U32(r31.u32 + 704, r27.u32);
	// stw r27,708(r31)
	REX_STORE_U32(r31.u32 + 708, r27.u32);
loc_824E48A0:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fb7b8
	ctx.lr = 0x824E48B8;
	sub_824FB7B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e4a28
	if (!ctx.cr0.eq) goto loc_824E4A28;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4910
	if (ctx.cr0.eq) goto loc_824E4910;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x824e4900
	if (ctx.cr6.eq) goto loc_824E4900;
	// bctrl 
	ctx.lr = 0x824E48F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824ff748
	ctx.lr = 0x824E48FC;
	sub_824FF748(ctx, base);
	// b 0x824e4908
	goto loc_824E4908;
loc_824E4900:
	// bctrl 
	ctx.lr = 0x824E4904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824ff750
	ctx.lr = 0x824E4908;
	sub_824FF750(ctx, base);
loc_824E4908:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824e4a28
	if (!ctx.cr6.eq) goto loc_824E4A28;
loc_824E4910:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 792);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r10,10,15,21
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// beq 0x824e4928
	if (ctx.cr0.eq) goto loc_824E4928;
	// oris r29,r29,4
	r29.u64 = r29.u64 | 262144;
loc_824E4928:
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E4940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E4958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-29904
	ctx.r7.s64 = ctx.r11.s64 + -29904;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x821aae70
	ctx.lr = 0x824E4974;
	sub_821AAE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824e4a28
	if (!ctx.cr0.lt) goto loc_824E4A28;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4994
	if (ctx.cr6.eq) goto loc_824E4994;
	// lwz r10,776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824e4a28
	if (!ctx.cr6.gt) goto loc_824E4A28;
loc_824E4994:
	// lwz r4,784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 784);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-16844
	r30.s64 = ctx.r11.s64 + -16844;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824e49cc
	if (ctx.cr6.eq) goto loc_824E49CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2f48
	ctx.lr = 0x824E49B0;
	sub_826A2F48(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 784);
	// bl 0x823f0350
	ctx.lr = 0x824E49BC;
	sub_823F0350(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// stw r27,784(r31)
	REX_STORE_U32(r31.u32 + 784, r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
loc_824E49CC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-29904
	ctx.r6.s64 = ctx.r11.s64 + -29904;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4010
	ctx.lr = 0x824E49E8;
	sub_824E4010(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824e4a28
	if (!ctx.cr0.lt) goto loc_824E4A28;
	// lwz r4,784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824e4a10
	if (ctx.cr6.eq) goto loc_824E4A10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2f48
	ctx.lr = 0x824E4A04;
	sub_826A2F48(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
loc_824E4A10:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4a30
	if (ctx.cr0.eq) goto loc_824E4A30;
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x824E4A28;
	sub_824E4270(ctx, base);
loc_824E4A28:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_824E4A30:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E4A44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// beq cr6,0x824e4a70
	if (ctx.cr6.eq) goto loc_824E4A70;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e4a70
	if (ctx.cr6.eq) goto loc_824E4A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E4A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
loc_824E4A70:
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x824E4A7C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825004A0) {
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
	ctx.lr = 0x825004A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r21,0
	r21.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r20,1
	r20.s64 = 1;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r23,r21
	r23.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// beq 0x82500674
	if (ctx.cr0.eq) goto loc_82500674;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500674
	if (!ctx.cr0.eq) goto loc_82500674;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82500674
	if (ctx.cr0.eq) goto loc_82500674;
loc_825004E4:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500658
	if (!ctx.cr0.eq) goto loc_82500658;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82500658
	if (ctx.cr0.eq) goto loc_82500658;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x8250053c
	if (ctx.cr6.eq) goto loc_8250053C;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x8250053c
	if (ctx.cr6.eq) goto loc_8250053C;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x8250053c
	if (ctx.cr6.eq) goto loc_8250053C;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x8250053c
	if (ctx.cr6.eq) goto loc_8250053C;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x8250053c
	if (ctx.cr6.eq) goto loc_8250053C;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x82500540
	if (!ctx.cr6.eq) goto loc_82500540;
loc_8250053C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82500540:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500658
	if (ctx.cr0.eq) goto loc_82500658;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82500558;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82500658
	if (!ctx.cr0.eq) goto loc_82500658;
	// rlwinm r5,r10,30,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x82500580
	if (ctx.cr6.eq) goto loc_82500580;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x82500658
	if (!ctx.cr6.eq) goto loc_82500658;
loc_82500580:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_82500584:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825005a4
	if (ctx.cr6.eq) goto loc_825005A4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825005a8
	if (!ctx.cr6.eq) goto loc_825005A8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82500584
	goto loc_82500584;
loc_825005A4:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_825005A8:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r4,r9,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// beq 0x825005c8
	if (ctx.cr0.eq) goto loc_825005C8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_825005C8:
	// rlwinm r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x825005e0
	if (!ctx.cr6.eq) goto loc_825005E0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_825005E0:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825005ec
	if (!ctx.cr0.eq) goto loc_825005EC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_825005EC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82500614
	if (ctx.cr6.eq) goto loc_82500614;
	// not r10,r31
	ctx.r10.u64 = ~r31.u64;
	// rlwimi r10,r31,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82500614:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500658
	if (ctx.cr0.eq) goto loc_82500658;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r10,r10,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500658
	if (ctx.cr0.eq) goto loc_82500658;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825b87f8
	ctx.lr = 0x82500648;
	sub_825B87F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_82500658:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500674
	if (!ctx.cr0.eq) goto loc_82500674;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825004e4
	if (!ctx.cr6.eq) goto loc_825004E4;
loc_82500674:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r25,r21
	r25.u64 = r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501038
	if (!ctx.cr0.eq) goto loc_82501038;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501038
	if (ctx.cr0.eq) goto loc_82501038;
loc_82500690:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// bne 0x825006c0
	if (!ctx.cr0.eq) goto loc_825006C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825006c0
	if (ctx.cr0.eq) goto loc_825006C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16128, ctx.xer);
	// beq cr6,0x8250070c
	if (ctx.cr6.eq) goto loc_8250070C;
loc_825006C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x825006DC;
	sub_825BB860(ctx, base);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r8,r30,1
	ctx.r8.u64 = r30.u64 | 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
loc_8250070C:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500840
	if (ctx.cr0.eq) goto loc_82500840;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500734
	if (ctx.cr6.eq) goto loc_82500734;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne cr6,0x82500738
	if (!ctx.cr6.eq) goto loc_82500738;
loc_82500734:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82500738:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500840
	if (!ctx.cr0.eq) goto loc_82500840;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500894
	if (!ctx.cr0.eq) goto loc_82500894;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x825007c0
	goto loc_825007C0;
loc_82500760:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14976
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14976, ctx.xer);
	// bne cr6,0x825007b0
	if (!ctx.cr6.eq) goto loc_825007B0;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825007b0
	if (ctx.cr0.eq) goto loc_825007B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8250078C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x825007b0
	if (!ctx.cr6.eq) goto loc_825007B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825007d0
	if (ctx.cr6.eq) goto loc_825007D0;
loc_825007B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500894
	if (!ctx.cr0.eq) goto loc_82500894;
loc_825007C0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82500760
	if (!ctx.cr0.eq) goto loc_82500760;
	// b 0x82500894
	goto loc_82500894;
loc_825007D0:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825007e4
	if (!ctx.cr6.eq) goto loc_825007E4;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x825007e8
	goto loc_825007E8;
loc_825007E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_825007E8:
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501100
	if (!ctx.cr0.eq) goto loc_82501100;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500894
	if (!ctx.cr0.eq) goto loc_82500894;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82500894
	if (ctx.cr0.eq) goto loc_82500894;
loc_8250080C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82500824
	if (ctx.cr0.eq) goto loc_82500824;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,0,14,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r9.u64 & 0x40000);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82500824:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500894
	if (!ctx.cr0.eq) goto loc_82500894;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250080c
	if (!ctx.cr6.eq) goto loc_8250080C;
	// b 0x82500894
	goto loc_82500894;
loc_82500840:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
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
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82500888
	if (ctx.cr6.eq) goto loc_82500888;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500888
	if (!ctx.cr0.eq) goto loc_82500888;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500894
	if (ctx.cr0.eq) goto loc_82500894;
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500894
	if (ctx.cr6.eq) goto loc_82500894;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500894
	if (ctx.cr0.eq) goto loc_82500894;
loc_82500888:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82500894:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r27,r21
	r27.u64 = r21.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500e8c
	if (!ctx.cr0.eq) goto loc_82500E8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r29,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r29.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82500e8c
	if (ctx.cr0.eq) goto loc_82500E8C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x825008f0
	if (ctx.cr6.eq) goto loc_825008F0;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// beq cr6,0x825008f0
	if (ctx.cr6.eq) goto loc_825008F0;
	// cmplwi cr6,r10,89
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 89, ctx.xer);
	// beq cr6,0x825008f0
	if (ctx.cr6.eq) goto loc_825008F0;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x825008f0
	if (ctx.cr6.eq) goto loc_825008F0;
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// beq cr6,0x825008f0
	if (ctx.cr6.eq) goto loc_825008F0;
	// cmplwi cr6,r10,85
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x825008f4
	if (!ctx.cr6.eq) goto loc_825008F4;
loc_825008F0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825008F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500d00
	if (ctx.cr0.eq) goto loc_82500D00;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82500914;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-16
	ctx.r11.s64 = r29.s64 + -16;
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500e8c
	if (!ctx.cr0.eq) goto loc_82500E8C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7510
	ctx.lr = 0x82500934;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82500948
	if (!ctx.cr6.eq) goto loc_82500948;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,76(r26)
	REX_STORE_U32(r26.u32 + 76, ctx.r11.u32);
loc_82500948:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500988
	if (!ctx.cr0.eq) goto loc_82500988;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500964;
	sub_825000A0(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x82500e8c
	if (!ctx.cr6.eq) goto loc_82500E8C;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82500e74
	goto loc_82500E74;
loc_82500988:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824ffa20
	ctx.lr = 0x82500998;
	sub_824FFA20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500a10
	if (ctx.cr0.eq) goto loc_82500A10;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x825009B4;
	sub_825C2288(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82500e8c
	if (ctx.cr6.eq) goto loc_82500E8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// bne cr6,0x825009d8
	if (!ctx.cr6.eq) goto loc_825009D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82500e48
	goto loc_82500E48;
loc_825009D8:
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500e8c
	if (!ctx.cr0.eq) goto loc_82500E8C;
	// lwz r5,96(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825009fc
	if (ctx.cr6.eq) goto loc_825009FC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x825009FC;
	sub_8250B4D8(ctx, base);
loc_825009FC:
	// stw r31,96(r26)
	REX_STORE_U32(r26.u32 + 96, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82500e8c
	goto loc_82500E8C;
loc_82500A10:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x82500a3c
	if (ctx.cr6.lt) goto loc_82500A3C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// ble cr6,0x82500a40
	if (!ctx.cr6.gt) goto loc_82500A40;
loc_82500A3C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82500A40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne 0x82500bf4
	if (!ctx.cr0.eq) goto loc_82500BF4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500A54;
	sub_825000A0(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500e8c
	if (ctx.cr0.eq) goto loc_82500E8C;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500aa4
	if (ctx.cr0.eq) goto loc_82500AA4;
	// b 0x82500a88
	goto loc_82500A88;
loc_82500A7C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500a94
	if (ctx.cr0.eq) goto loc_82500A94;
loc_82500A88:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82500a7c
	if (!ctx.cr6.eq) goto loc_82500A7C;
loc_82500A94:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500a88
	if (!ctx.cr0.eq) goto loc_82500A88;
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
loc_82500AA4:
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82500e8c
	if (!ctx.cr6.eq) goto loc_82500E8C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r30,r20
	r30.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500b44
	if (!ctx.cr0.eq) goto loc_82500B44;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500b40
	if (ctx.cr0.eq) goto loc_82500B40;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x82500ADC;
	sub_825C2288(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// bne cr6,0x82500b08
	if (!ctx.cr6.eq) goto loc_82500B08;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x82500B00;
	sub_825C2288(ctx, base);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// b 0x82500b44
	goto loc_82500B44;
loc_82500B08:
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500b44
	if (!ctx.cr0.eq) goto loc_82500B44;
	// lwz r5,96(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82500b2c
	if (ctx.cr6.eq) goto loc_82500B2C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82500B2C;
	sub_8250B4D8(ctx, base);
loc_82500B2C:
	// stw r31,96(r26)
	REX_STORE_U32(r26.u32 + 96, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82500b44
	goto loc_82500B44;
loc_82500B40:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82500B44:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500e8c
	if (ctx.cr0.eq) goto loc_82500E8C;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500b64
	if (ctx.cr0.eq) goto loc_82500B64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// b 0x82500b6c
	goto loc_82500B6C;
loc_82500B64:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_82500B6C:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// beq cr6,0x82500e8c
	if (ctx.cr6.eq) goto loc_82500E8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x82500B90;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm r10,r10,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82500BC4;
	sub_824F71B8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r31,r3,r10
	r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// beq cr6,0x82500be0
	if (ctx.cr6.eq) goto loc_82500BE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82500BE0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500BE8;
	sub_825000A0(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82500e8c
	goto loc_82500E8C;
loc_82500BF4:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250a8a0
	ctx.lr = 0x82500C0C;
	sub_8250A8A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82500c38
	if (!ctx.cr6.eq) goto loc_82500C38;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82500c38
	if (!ctx.cr6.eq) goto loc_82500C38;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500C30;
	sub_825000A0(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// b 0x82500cf8
	goto loc_82500CF8;
loc_82500C38:
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82500c54
	if (ctx.cr6.eq) goto loc_82500C54;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82500148
	ctx.lr = 0x82500C4C;
	sub_82500148(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82500C54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500cf4
	if (ctx.cr6.eq) goto loc_82500CF4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82500148
	ctx.lr = 0x82500C68;
	sub_82500148(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,28(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x82500C90;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82500cc4
	if (!ctx.cr6.eq) goto loc_82500CC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500cb8
	if (ctx.cr6.eq) goto loc_82500CB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82500CB8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500CC0;
	sub_825000A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82500CC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwimi r11,r20,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82500CE4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// ori r10,r31,1
	ctx.r10.u64 = r31.u64 | 1;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82500e8c
	goto loc_82500E8C;
loc_82500CF4:
	// ori r11,r31,1
	ctx.r11.u64 = r31.u64 | 1;
loc_82500CF8:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82500e8c
	goto loc_82500E8C;
loc_82500D00:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x82500e8c
	if (!ctx.cr6.eq) goto loc_82500E8C;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500e5c
	if (ctx.cr0.eq) goto loc_82500E5C;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500d50
	if (ctx.cr0.eq) goto loc_82500D50;
	// b 0x82500d34
	goto loc_82500D34;
loc_82500D28:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82500d40
	if (ctx.cr0.eq) goto loc_82500D40;
loc_82500D34:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82500d28
	if (!ctx.cr6.eq) goto loc_82500D28;
loc_82500D40:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500d34
	if (!ctx.cr0.eq) goto loc_82500D34;
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
loc_82500D50:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500d70
	if (ctx.cr6.eq) goto loc_82500D70;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne cr6,0x82500d74
	if (!ctx.cr6.eq) goto loc_82500D74;
loc_82500D70:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82500D74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82500e5c
	if (ctx.cr0.eq) goto loc_82500E5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82500e44
	if (ctx.cr6.eq) goto loc_82500E44;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x82500DA4;
	sub_825BB860(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
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
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82500DEC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500e44
	if (ctx.cr6.eq) goto loc_82500E44;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82500e0c
	goto loc_82500E0C;
loc_82500E04:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82500E0C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82500e04
	if (!ctx.cr6.eq) goto loc_82500E04;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82500dec
	if (!ctx.cr6.eq) goto loc_82500DEC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82500dec
	goto loc_82500DEC;
loc_82500E44:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82500E48:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x82500E58;
	sub_825C2288(ctx, base);
	// b 0x82500e8c
	goto loc_82500E8C;
loc_82500E5C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82500e8c
	if (!ctx.cr0.eq) goto loc_82500E8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500e8c
	if (ctx.cr6.eq) goto loc_82500E8C;
loc_82500E74:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500E8C;
	sub_825000A0(ctx, base);
loc_82500E8C:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r29,r26,12
	r29.s64 = r26.s64 + 12;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_82500E98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82500eb8
	if (ctx.cr6.eq) goto loc_82500EB8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// beq cr6,0x82500eb0
	if (ctx.cr6.eq) goto loc_82500EB0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82500EB0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82500e98
	goto loc_82500E98;
loc_82500EB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82500fec
	if (ctx.cr6.eq) goto loc_82500FEC;
	// rlwinm r31,r26,0,0,30
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82500fec
	if (ctx.cr6.eq) goto loc_82500FEC;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82500f08
	if (ctx.cr0.eq) goto loc_82500F08;
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
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82500fec
	if (!ctx.cr0.eq) goto loc_82500FEC;
loc_82500F08:
	// rlwinm. r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq 0x82500f98
	if (ctx.cr0.eq) goto loc_82500F98;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x82500F1C;
	sub_824FFCC0(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82500F48:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82500f84
	if (ctx.cr6.eq) goto loc_82500F84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82500f70
	if (!ctx.cr6.eq) goto loc_82500F70;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c67e8
	ctx.lr = 0x82500F70;
	sub_825C67E8(ctx, base);
loc_82500F70:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82500f48
	if (!ctx.cr6.eq) goto loc_82500F48;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x82500f48
	goto loc_82500F48;
loc_82500F84:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82500F94;
	sub_825C69A0(ctx, base);
	// mr r22,r20
	r22.u64 = r20.u64;
loc_82500F98:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,89
	ctx.r6.s64 = 89;
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x82500FB4;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82500FD0;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x82500FE4;
	sub_825000A0(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82500FEC:
	// lbz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 48);
	// clrlwi r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r23,r11,r10
	r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x825010cc
	if (ctx.cr6.eq) goto loc_825010CC;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82501030
	if (!ctx.cr6.eq) goto loc_82501030;
loc_82501024:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r25,r26
	r25.u64 = r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82501030:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825010f0
	if (ctx.cr0.eq) goto loc_825010F0;
loc_82501038:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250115c
	if (ctx.cr0.eq) goto loc_8250115C;
	// lwz r30,4(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250115c
	if (!ctx.cr0.eq) goto loc_8250115C;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8250115c
	if (ctx.cr0.eq) goto loc_8250115C;
loc_82501054:
	// lbz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501144
	if (ctx.cr0.eq) goto loc_82501144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x8250106C;
	sub_825000A0(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250115c
	if (!ctx.cr0.eq) goto loc_8250115C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250115c
	if (ctx.cr6.eq) goto loc_8250115C;
loc_82501084:
	// lbz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501110
	if (ctx.cr0.eq) goto loc_82501110;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ff7a0
	ctx.lr = 0x8250109C;
	sub_824FF7A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501110
	if (ctx.cr0.eq) goto loc_82501110;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250110c
	if (!ctx.cr0.eq) goto loc_8250110C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250115c
	if (!ctx.cr0.eq) goto loc_8250115C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82501084
	if (!ctx.cr6.eq) goto loc_82501084;
	// b 0x82501110
	goto loc_82501110;
loc_825010CC:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82501024
	if (ctx.cr6.eq) goto loc_82501024;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82501038
	if (!ctx.cr6.eq) goto loc_82501038;
loc_825010F0:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82500690
	if (!ctx.cr6.eq) goto loc_82500690;
	// b 0x82501038
	goto loc_82501038;
loc_82501100:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250110C;
	sub_824E4368(ctx, base);
loc_8250110C:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82501110:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250115c
	if (ctx.cr6.eq) goto loc_8250115C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825000a0
	ctx.lr = 0x82501124;
	sub_825000A0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250113c
	if (ctx.cr0.eq) goto loc_8250113C;
	// mr r30,r21
	r30.u64 = r21.u64;
	// b 0x82501144
	goto loc_82501144;
loc_8250113C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_82501144:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250115c
	if (!ctx.cr0.eq) goto loc_8250115C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82501054
	if (!ctx.cr6.eq) goto loc_82501054;
loc_8250115C:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825012f0
	if (!ctx.cr0.eq) goto loc_825012F0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825012f0
	if (ctx.cr0.eq) goto loc_825012F0;
loc_82501174:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825012d4
	if (!ctx.cr0.eq) goto loc_825012D4;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x825012d4
	if (ctx.cr0.eq) goto loc_825012D4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x825011a8
	if (ctx.cr6.eq) goto loc_825011A8;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bne cr6,0x825012d4
	if (!ctx.cr6.eq) goto loc_825012D4;
loc_825011A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825011C0;
	sub_824F71B8(ctx, base);
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r28,-16
	ctx.r10.s64 = r28.s64 + -16;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r10,0,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// bne 0x825012d4
	if (!ctx.cr0.eq) goto loc_825012D4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825012d4
	if (ctx.cr6.eq) goto loc_825012D4;
loc_825011E8:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825012bc
	if (!ctx.cr0.eq) goto loc_825012BC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250121c
	if (ctx.cr0.eq) goto loc_8250121C;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82501234
	goto loc_82501234;
loc_8250121C:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82501234:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825012a0
	if (ctx.cr6.eq) goto loc_825012A0;
loc_8250123C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82501294
	if (ctx.cr6.eq) goto loc_82501294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffb10
	ctx.lr = 0x8250124C;
	sub_824FFB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501298
	if (!ctx.cr0.eq) goto loc_82501298;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250126c
	if (!ctx.cr0.eq) goto loc_8250126C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250123c
	if (!ctx.cr6.eq) goto loc_8250123C;
loc_8250126C:
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825012a0
	if (ctx.cr6.eq) goto loc_825012A0;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825012a0
	if (!ctx.cr0.eq) goto loc_825012A0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x8250123c
	if (!ctx.cr0.eq) goto loc_8250123C;
	// b 0x825012a0
	goto loc_825012A0;
loc_82501294:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82501298:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825012bc
	if (!ctx.cr6.eq) goto loc_825012BC;
loc_825012A0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825012c4
	if (!ctx.cr0.eq) goto loc_825012C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825011e8
	if (!ctx.cr6.eq) goto loc_825011E8;
	// b 0x825012c4
	goto loc_825012C4;
loc_825012BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825012d4
	if (!ctx.cr6.eq) goto loc_825012D4;
loc_825012C4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2510
	ctx.lr = 0x825012D0;
	sub_825C2510(ctx, base);
	// b 0x82501174
	goto loc_82501174;
loc_825012D4:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825012f0
	if (!ctx.cr0.eq) goto loc_825012F0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82501174
	if (!ctx.cr6.eq) goto loc_82501174;
loc_825012F0:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// clrlwi. r10,r22,24
	ctx.r10.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r11.u32);
	// beq 0x8250130c
	if (ctx.cr0.eq) goto loc_8250130C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8250130C;
	sub_8257DFD8(ctx, base);
loc_8250130C:
	// lwz r11,48(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82501a64
	if (!ctx.cr6.eq) goto loc_82501A64;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501364
	if (!ctx.cr0.eq) goto loc_82501364;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501364
	if (ctx.cr0.eq) goto loc_82501364;
loc_82501334:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwimi r8,r20,29,1,2
	ctx.r8.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 29) & 0x60000000) | (ctx.r8.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501364
	if (!ctx.cr0.eq) goto loc_82501364;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82501334
	if (!ctx.cr6.eq) goto loc_82501334;
loc_82501364:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r29,r21
	r29.u64 = r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501500
	if (!ctx.cr0.eq) goto loc_82501500;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501500
	if (ctx.cr0.eq) goto loc_82501500;
loc_82501380:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825014e8
	if (ctx.cr0.eq) goto loc_825014E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82501390:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825013e0
	if (ctx.cr6.eq) goto loc_825013E0;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,40(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825013d0
	if (!ctx.cr0.eq) goto loc_825013D0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82501390
	goto loc_82501390;
loc_825013D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825002c0
	ctx.lr = 0x825013DC;
	sub_825002C0(ctx, base);
	// mr r29,r20
	r29.u64 = r20.u64;
loc_825013E0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501470
	if (ctx.cr0.eq) goto loc_82501470;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_825013F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250141c
	if (ctx.cr6.eq) goto loc_8250141C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,76(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82501418
	if (ctx.cr0.eq) goto loc_82501418;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x825013f4
	goto loc_825013F4;
loc_82501418:
	// li r10,2
	ctx.r10.s64 = 2;
loc_8250141C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82501470
	if (!ctx.cr6.gt) goto loc_82501470;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501470
	if (ctx.cr6.eq) goto loc_82501470;
loc_82501438:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82501470
	if (ctx.cr6.eq) goto loc_82501470;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501468
	if (!ctx.cr0.eq) goto loc_82501468;
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501468
	if (ctx.cr0.eq) goto loc_82501468;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825002c0
	ctx.lr = 0x82501464;
	sub_825002C0(ctx, base);
	// mr r29,r20
	r29.u64 = r20.u64;
loc_82501468:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82501438
	goto loc_82501438;
loc_82501470:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825014e8
	if (!ctx.cr0.eq) goto loc_825014E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825014e8
	if (ctx.cr0.eq) goto loc_825014E8;
loc_82501488:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,91
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 91, ctx.xer);
	// blt cr6,0x825014a4
	if (ctx.cr6.lt) goto loc_825014A4;
	// cmplwi cr6,r9,94
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 94, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// ble cr6,0x825014a8
	if (!ctx.cr6.gt) goto loc_825014A8;
loc_825014A4:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_825014A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825014b8
	if (ctx.cr0.eq) goto loc_825014B8;
	// cmplwi cr6,r9,93
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 93, ctx.xer);
	// bne cr6,0x825014d8
	if (!ctx.cr6.eq) goto loc_825014D8;
loc_825014B8:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825014e8
	if (!ctx.cr0.eq) goto loc_825014E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82501488
	if (!ctx.cr6.eq) goto loc_82501488;
	// b 0x825014e8
	goto loc_825014E8;
loc_825014D8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r29,r20
	r29.u64 = r20.u64;
	// rlwimi r11,r20,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_825014E8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501500
	if (!ctx.cr0.eq) goto loc_82501500;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82501380
	if (!ctx.cr6.eq) goto loc_82501380;
loc_82501500:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825015b4
	if (!ctx.cr0.eq) goto loc_825015B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x825015a8
	goto loc_825015A8;
loc_82501514:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501598
	if (ctx.cr0.eq) goto loc_82501598;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ffde0
	ctx.lr = 0x8250152C;
	sub_824FFDE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8250154c
	if (ctx.cr0.eq) goto loc_8250154C;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250154c
	if (!ctx.cr0.eq) goto loc_8250154C;
	// rlwimi r11,r20,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// mr r29,r20
	r29.u64 = r20.u64;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_8250154C:
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stb r20,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r20.u8);
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x825c6880
	ctx.lr = 0x8250156C;
	sub_825C6880(ctx, base);
	// b 0x82501588
	goto loc_82501588;
loc_82501570:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501588
	if (!ctx.cr0.eq) goto loc_82501588;
	// rlwimi r11,r20,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// mr r29,r20
	r29.u64 = r20.u64;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_82501588:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ff888
	ctx.lr = 0x82501590;
	sub_824FF888(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82501570
	if (!ctx.cr0.eq) goto loc_82501570;
loc_82501598:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825015b4
	if (!ctx.cr0.eq) goto loc_825015B4;
loc_825015A8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r31.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82501514
	if (!ctx.cr0.eq) goto loc_82501514;
loc_825015B4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501364
	if (!ctx.cr0.eq) goto loc_82501364;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a64
	if (!ctx.cr0.eq) goto loc_82501A64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501a64
	if (ctx.cr0.eq) goto loc_82501A64;
loc_825015D4:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a48
	if (!ctx.cr0.eq) goto loc_82501A48;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501a48
	if (ctx.cr0.eq) goto loc_82501A48;
loc_825015EC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11904
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11904, ctx.xer);
	// bne cr6,0x82501608
	if (!ctx.cr6.eq) goto loc_82501608;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501628
	if (ctx.cr6.eq) goto loc_82501628;
loc_82501608:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a48
	if (!ctx.cr0.eq) goto loc_82501A48;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825015ec
	if (!ctx.cr6.eq) goto loc_825015EC;
	// b 0x82501a48
	goto loc_82501A48;
loc_82501628:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r26,r25
	r26.u64 = r25.u64;
	// addi r30,r11,36
	r30.s64 = ctx.r11.s64 + 36;
	// b 0x825016e8
	goto loc_825016E8;
loc_82501638:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,-40
	r28.s64 = ctx.r11.s64 + -40;
loc_82501640:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8250169c
	if (!ctx.cr6.eq) goto loc_8250169C;
loc_82501648:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ffde0
	ctx.lr = 0x82501654;
	sub_824FFDE0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82501a48
	if (ctx.cr0.eq) goto loc_82501A48;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501674
	if (!ctx.cr0.eq) goto loc_82501674;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501648
	if (ctx.cr0.eq) goto loc_82501648;
	// b 0x82501678
	goto loc_82501678;
loc_82501674:
	// mr r26,r21
	r26.u64 = r21.u64;
loc_82501678:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82501a48
	if (ctx.cr6.eq) goto loc_82501A48;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501694
	if (ctx.cr0.eq) goto loc_82501694;
loc_8250168C:
	// mr r28,r21
	r28.u64 = r21.u64;
	// b 0x82501640
	goto loc_82501640;
loc_82501694:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// b 0x82501638
	goto loc_82501638;
loc_8250169C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x825016b8
	if (ctx.cr6.lt) goto loc_825016B8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// ble cr6,0x825016bc
	if (!ctx.cr6.gt) goto loc_825016BC;
loc_825016B8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_825016BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825016f8
	if (!ctx.cr0.eq) goto loc_825016F8;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x825016d8
	if (ctx.cr6.lt) goto loc_825016D8;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// ble cr6,0x825016dc
	if (!ctx.cr6.gt) goto loc_825016DC;
loc_825016D8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_825016DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501a48
	if (!ctx.cr0.eq) goto loc_82501A48;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_825016E8:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82501638
	if (ctx.cr0.eq) goto loc_82501638;
	// b 0x8250168c
	goto loc_8250168C;
loc_825016F8:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r11.u32);
	// bl 0x82552180
	ctx.lr = 0x82501710;
	sub_82552180(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r29,r21
	r29.u64 = r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825017fc
	if (!ctx.cr0.eq) goto loc_825017FC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825017fc
	if (ctx.cr0.eq) goto loc_825017FC;
loc_8250172C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825017dc
	if (ctx.cr0.eq) goto loc_825017DC;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x825017dc
	if (ctx.cr6.eq) goto loc_825017DC;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825017dc
	if (!ctx.cr0.eq) goto loc_825017DC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825017dc
	if (!ctx.cr0.eq) goto loc_825017DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825017dc
	if (ctx.cr0.eq) goto loc_825017DC;
loc_82501788:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,11904
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11904, ctx.xer);
	// beq cr6,0x825017b4
	if (ctx.cr6.eq) goto loc_825017B4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825017dc
	if (!ctx.cr0.eq) goto loc_825017DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82501788
	if (!ctx.cr6.eq) goto loc_82501788;
	// b 0x825017dc
	goto loc_825017DC;
loc_825017B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_825017B8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ffde0
	ctx.lr = 0x825017C0;
	sub_824FFDE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825017d0
	if (ctx.cr0.eq) goto loc_825017D0;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// bne cr6,0x825017b8
	if (!ctx.cr6.eq) goto loc_825017B8;
loc_825017D0:
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x825017dc
	if (ctx.cr6.eq) goto loc_825017DC;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_825017DC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825017f4
	if (!ctx.cr0.eq) goto loc_825017F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250172c
	if (!ctx.cr6.eq) goto loc_8250172C;
loc_825017F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82501a48
	if (!ctx.cr6.eq) goto loc_82501A48;
loc_825017FC:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r6,r30,-36
	ctx.r6.s64 = r30.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r26,28(r27)
	REX_STORE_U32(r27.u32 + 28, r26.u32);
	// beq cr6,0x825018cc
	if (ctx.cr6.eq) goto loc_825018CC;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_8250185C:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825018cc
	if (ctx.cr6.eq) goto loc_825018CC;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825018b8
	if (ctx.cr6.eq) goto loc_825018B8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x82501884;
	sub_8250B470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x8250188C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825018b8
	if (ctx.cr0.eq) goto loc_825018B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82501a6c
	if (!ctx.cr6.eq) goto loc_82501A6C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x825018B8;
	sub_825C2288(ctx, base);
loc_825018B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8250185c
	if (!ctx.cr6.eq) goto loc_8250185C;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8250185c
	goto loc_8250185C;
loc_825018CC:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a28
	if (!ctx.cr0.eq) goto loc_82501A28;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501a28
	if (ctx.cr0.eq) goto loc_82501A28;
loc_825018E4:
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(r26.u32, r28.u32, ctx.xer);
	// beq cr6,0x82501a0c
	if (ctx.cr6.eq) goto loc_82501A0C;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a0c
	if (!ctx.cr0.eq) goto loc_82501A0C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82501a0c
	if (ctx.cr0.eq) goto loc_82501A0C;
loc_82501904:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11904
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11904, ctx.xer);
	// beq cr6,0x82501934
	if (ctx.cr6.eq) goto loc_82501934;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a0c
	if (!ctx.cr0.eq) goto loc_82501A0C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82501904
	if (!ctx.cr6.eq) goto loc_82501904;
	// b 0x82501a0c
	goto loc_82501A0C;
loc_82501934:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501984
	if (!ctx.cr0.eq) goto loc_82501984;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82501964:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ffde0
	ctx.lr = 0x8250196C;
	sub_824FFDE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8250197c
	if (ctx.cr0.eq) goto loc_8250197C;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// bne cr6,0x82501964
	if (!ctx.cr6.eq) goto loc_82501964;
loc_8250197C:
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// bne cr6,0x82501a0c
	if (!ctx.cr6.eq) goto loc_82501A0C;
loc_82501984:
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_82501988:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825019f8
	if (ctx.cr6.eq) goto loc_825019F8;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825019e4
	if (ctx.cr6.eq) goto loc_825019E4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x825019B0;
	sub_8250B470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x825019B8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825019e4
	if (ctx.cr0.eq) goto loc_825019E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82501a74
	if (!ctx.cr6.eq) goto loc_82501A74;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x825019E4;
	sub_825C2288(ctx, base);
loc_825019E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82501988
	if (!ctx.cr6.eq) goto loc_82501988;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x82501988
	goto loc_82501988;
loc_825019F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x82501A0C;
	sub_825C2288(ctx, base);
loc_82501A0C:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a28
	if (!ctx.cr0.eq) goto loc_82501A28;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825018e4
	if (!ctx.cr6.eq) goto loc_825018E4;
loc_82501A28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82504918
	ctx.lr = 0x82501A38;
	sub_82504918(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82504918
	ctx.lr = 0x82501A48;
	sub_82504918(ctx, base);
loc_82501A48:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501a64
	if (!ctx.cr0.eq) goto loc_82501A64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825015d4
	if (!ctx.cr6.eq) goto loc_825015D4;
loc_82501A64:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
loc_82501A6C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82501A74;
	sub_824E4368(ctx, base);
loc_82501A74:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82501A7C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825D2600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D2608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d2644
	if (!ctx.cr6.eq) goto loc_825D2644;
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
	// li r7,1367
	ctx.r7.s64 = 1367;
	// bl 0x824ea978
	ctx.lr = 0x825D2644;
	sub_824EA978(ctx, base);
loc_825D2644:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2650;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d26b4
	if (!ctx.cr6.eq) goto loc_825D26B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2674
	if (ctx.cr6.eq) goto loc_825D2674;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2674;
	sub_824F0950(ctx, base);
loc_825D2674:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d26ac
	if (ctx.cr6.eq) goto loc_825D26AC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d26ac
	if (ctx.cr6.eq) goto loc_825D26AC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x825D26AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D26AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d270c
	goto loc_825D270C;
loc_825D26B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d26d0
	if (ctx.cr6.eq) goto loc_825D26D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D26D0;
	sub_824F0950(ctx, base);
loc_825D26D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2708
	if (ctx.cr6.eq) goto loc_825D2708;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2708
	if (ctx.cr6.eq) goto loc_825D2708;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x825D2708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D270C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-6760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D5958) {
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
	ctx.lr = 0x825D5960;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d59a0
	if (!ctx.cr6.eq) goto loc_825D59A0;
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
	// li r7,4098
	ctx.r7.s64 = 4098;
	// bl 0x824ea978
	ctx.lr = 0x825D59A0;
	sub_824EA978(ctx, base);
loc_825D59A0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6778
	ctx.lr = 0x825D59B0;
	sub_825A6778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d59f8
	if (ctx.cr6.eq) goto loc_825D59F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d59f8
	if (ctx.cr6.eq) goto loc_825D59F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D59CC;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// bctrl 
	ctx.lr = 0x825D59F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D59F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DB560) {
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
	// lwz r11,2140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825db590
	if (ctx.cr6.eq) goto loc_825DB590;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825DB590;
	sub_825B3528(ctx, base);
loc_825DB590:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825db5a8
	if (ctx.cr6.eq) goto loc_825DB5A8;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825DB5A8;
	sub_825B3528(ctx, base);
loc_825DB5A8:
	// lwz r3,2068(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825db5bc
	if (ctx.cr6.eq) goto loc_825DB5BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825DB5BC;
	sub_825E18C0(ctx, base);
loc_825DB5BC:
	// lwz r30,172(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825db5dc
	if (ctx.cr6.eq) goto loc_825DB5DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e74b0
	ctx.lr = 0x825DB5D0;
	sub_825E74B0(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825DB5DC;
	sub_825B3528(ctx, base);
loc_825DB5DC:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x825f7528
	ctx.lr = 0x825DB5E4;
	sub_825F7528(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b3528
	ctx.lr = 0x825DB5F4;
	sub_825B3528(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b3528
	ctx.lr = 0x825DB604;
	sub_825B3528(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b3528
	ctx.lr = 0x825DB614;
	sub_825B3528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825E3370) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E3378;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825e33d4
	if (ctx.cr6.lt) goto loc_825E33D4;
	// addi r29,r3,152
	r29.s64 = ctx.r3.s64 + 152;
loc_825E3394:
	// lbzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825e3414
	if (ctx.cr6.eq) goto loc_825E3414;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// lbz r11,158(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 158);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825e3414
	if (ctx.cr6.eq) goto loc_825E3414;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa490
	ctx.lr = 0x825E33BC;
	sub_825FA490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3414
	if (!ctx.cr0.eq) goto loc_825E3414;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e3394
	if (!ctx.cr6.gt) goto loc_825E3394;
loc_825E33D4:
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825e3414
	if (ctx.cr6.eq) goto loc_825E3414;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3414
	if (!ctx.cr0.eq) goto loc_825E3414;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e08c0
	ctx.lr = 0x825E33F4;
	sub_825E08C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3414
	if (!ctx.cr0.eq) goto loc_825E3414;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9d80
	ctx.lr = 0x825E3408;
	sub_825F9D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x825e3418
	if (ctx.cr0.eq) goto loc_825E3418;
loc_825E3414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E3418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E93D8) {
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
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e941c
	if (!ctx.cr0.eq) goto loc_825E941C;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825E9418;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_825E941C:
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

DEFINE_REX_FUNC(sub_825ED610) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ed628
	if (ctx.cr6.eq) goto loc_825ED628;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825ed62c
	if (!ctx.cr6.eq) goto loc_825ED62C;
loc_825ED628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825ED62C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EE558) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x825EE560;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r15,0
	r15.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r15.u8);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// mr r29,r15
	r29.u64 = r15.u64;
	// stw r4,16(r23)
	REX_STORE_U32(r23.u32 + 16, ctx.r4.u32);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825f7480
	ctx.lr = 0x825EE5AC;
	sub_825F7480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r31,r10,15448
	r31.s64 = ctx.r10.s64 + 15448;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r26,28(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825eed88
	if (ctx.cr6.eq) goto loc_825EED88;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f31,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r10,r10,-17760
	ctx.r10.s64 = ctx.r10.s64 + -17760;
	// addi r4,r4,16516
	ctx.r4.s64 = ctx.r4.s64 + 16516;
	// addi r3,r3,16492
	ctx.r3.s64 = ctx.r3.s64 + 16492;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r20,r11,9944
	r20.s64 = ctx.r11.s64 + 9944;
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r19,r9,16464
	r19.s64 = ctx.r9.s64 + 16464;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r18,r8,16428
	r18.s64 = ctx.r8.s64 + 16428;
	// addi r17,r7,16420
	r17.s64 = ctx.r7.s64 + 16420;
	// addi r16,r6,16392
	r16.s64 = ctx.r6.s64 + 16392;
	// addi r14,r5,16356
	r14.s64 = ctx.r5.s64 + 16356;
loc_825EE634:
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825eed78
	if (ctx.cr0.eq) goto loc_825EED78;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,228(r26)
	REX_STORE_U32(r26.u32 + 228, ctx.r11.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE65C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eed78
	if (!ctx.cr0.eq) goto loc_825EED78;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eed78
	if (!ctx.cr0.eq) goto loc_825EED78;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// beq 0x825ee734
	if (ctx.cr0.eq) goto loc_825EE734;
	// bl 0x825ed550
	ctx.lr = 0x825EE6A4;
	sub_825ED550(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee6c4
	if (ctx.cr0.eq) goto loc_825EE6C4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,882
	ctx.r7.s64 = 882;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EE6C4;
	sub_824EA978(ctx, base);
loc_825EE6C4:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ee6fc
	if (ctx.cr6.eq) goto loc_825EE6FC;
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee6fc
	if (!ctx.cr0.eq) goto loc_825EE6FC;
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825ee700
	if (!ctx.cr0.eq) goto loc_825EE700;
loc_825EE6FC:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_825EE700:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eed78
	if (ctx.cr0.eq) goto loc_825EED78;
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eed78
	if (!ctx.cr0.eq) goto loc_825EED78;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r9,80(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 80);
	// lwz r11,1524(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1524);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1524(r10)
	REX_STORE_U32(ctx.r10.u32 + 1524, ctx.r11.u32);
	// stw r11,56(r26)
	REX_STORE_U32(r26.u32 + 56, ctx.r11.u32);
	// stw r9,80(r26)
	REX_STORE_U32(r26.u32 + 80, ctx.r9.u32);
	// b 0x825eed78
	goto loc_825EED78;
loc_825EE734:
	// bl 0x8260a750
	ctx.lr = 0x825EE738;
	sub_8260A750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee760
	if (!ctx.cr0.eq) goto loc_825EE760;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a820
	ctx.lr = 0x825EE748;
	sub_8260A820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee760
	if (!ctx.cr0.eq) goto loc_825EE760;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a7e8
	ctx.lr = 0x825EE758;
	sub_8260A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee768
	if (ctx.cr0.eq) goto loc_825EE768;
loc_825EE760:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_825EE768:
	// stw r29,892(r26)
	REX_STORE_U32(r26.u32 + 892, r29.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r31,1456(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EE780;
	sub_825B33A0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x825ee7dc
	if (ctx.cr0.eq) goto loc_825EE7DC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r26.u32);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// stw r15,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r15.u32);
	// stw r15,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r15.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r15,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r15.u32);
	// stw r15,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r15.u32);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r29.u32);
	// stw r15,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r15.u32);
	// stw r15,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r15.u32);
	// stb r15,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r15.u8);
	// stw r15,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r15.u32);
	// stw r15,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r15.u32);
	// stw r15,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r15.u32);
	// stw r15,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r15.u32);
	// stw r15,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r15.u32);
	// b 0x825ee7e0
	goto loc_825EE7E0;
loc_825EE7DC:
	// mr r24,r15
	r24.u64 = r15.u64;
loc_825EE7E0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825ed550
	ctx.lr = 0x825EE7E8;
	sub_825ED550(ctx, base);
	// stb r3,56(r24)
	REX_STORE_U8(r24.u32 + 56, ctx.r3.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EE800;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825ee820
	if (ctx.cr0.eq) goto loc_825EE820;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EE81C;
	sub_825D7A48(ctx, base);
	// b 0x825ee824
	goto loc_825EE824;
loc_825EE820:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_825EE824:
	// stw r31,52(r24)
	REX_STORE_U32(r24.u32 + 52, r31.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EE83C;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825ee85c
	if (ctx.cr0.eq) goto loc_825EE85C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EE858;
	sub_825D7A48(ctx, base);
	// b 0x825ee860
	goto loc_825EE860;
loc_825EE85C:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_825EE860:
	// stw r31,48(r24)
	REX_STORE_U32(r24.u32 + 48, r31.u32);
	// li r25,1
	r25.s64 = 1;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825eeb94
	if (ctx.cr6.lt) goto loc_825EEB94;
	// addi r21,r26,236
	r21.s64 = r26.s64 + 236;
	// mr r22,r21
	r22.u64 = r21.u64;
loc_825EE87C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ee8a0
	if (!ctx.cr6.eq) goto loc_825EE8A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,905
	ctx.r7.s64 = 905;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EE8A0;
	sub_824EA978(ctx, base);
loc_825EE8A0:
	// lwz r27,0(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825ee944
	if (!ctx.cr0.eq) goto loc_825EE944;
	// lwz r11,948(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 948);
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825ee944
	if (!ctx.cr6.eq) goto loc_825EE944;
	// lwz r11,892(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 892);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x825ee8f0
	if (ctx.cr6.lt) goto loc_825EE8F0;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,914
	ctx.r7.s64 = 914;
	// bl 0x824ea978
	ctx.lr = 0x825EE8F0;
	sub_824EA978(ctx, base);
loc_825EE8F0:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r4,892(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 892);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ee914
	if (!ctx.cr6.lt) goto loc_825EE914;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825ee918
	goto loc_825EE918;
loc_825EE914:
	// bl 0x825f7718
	ctx.lr = 0x825EE918;
	sub_825F7718(ctx, base);
loc_825EE918:
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x825ee954
	if (ctx.cr6.eq) goto loc_825EE954;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,916
	ctx.r7.s64 = 916;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EE940;
	sub_824EA978(ctx, base);
	// b 0x825ee954
	goto loc_825EE954;
loc_825EE944:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825ee390
	ctx.lr = 0x825EE950;
	sub_825EE390(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_825EE954:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,1456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825b33a0
	ctx.lr = 0x825EE96C;
	sub_825B33A0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r15,8(r31)
	REX_STORE_U32(r31.u32 + 8, r15.u32);
	// bl 0x8260a860
	ctx.lr = 0x825EE99C;
	sub_8260A860(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE9B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eea10
	if (!ctx.cr0.eq) goto loc_825EEA10;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE9D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x825eea10
	if (ctx.cr6.gt) goto loc_825EEA10;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE9F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee9fc
	if (ctx.cr0.eq) goto loc_825EE9FC;
	// lwz r30,236(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 236);
loc_825EE9FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260a788
	ctx.lr = 0x825EEA04;
	sub_8260A788(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r3,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r3.u8);
	// b 0x825eea14
	goto loc_825EEA14;
loc_825EEA10:
	// stb r15,16(r31)
	REX_STORE_U8(r31.u32 + 16, r15.u8);
loc_825EEA14:
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEA20;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEA30;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EEA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eeb80
	if (ctx.cr0.eq) goto loc_825EEB80;
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eeb80
	if (ctx.cr0.eq) goto loc_825EEB80;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825eeb80
	if (!ctx.cr6.eq) goto loc_825EEB80;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bgt cr6,0x825eea8c
	if (ctx.cr6.gt) goto loc_825EEA8C;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,944
	ctx.r7.s64 = 944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEA8C;
	sub_824EA978(ctx, base);
loc_825EEA8C:
	// lwz r30,0(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 892);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x825eeab4
	if (ctx.cr6.lt) goto loc_825EEAB4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,947
	ctx.r7.s64 = 947;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEAB4;
	sub_824EA978(ctx, base);
loc_825EEAB4:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r4,892(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 892);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eead8
	if (!ctx.cr6.lt) goto loc_825EEAD8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eeadc
	goto loc_825EEADC;
loc_825EEAD8:
	// bl 0x825f7718
	ctx.lr = 0x825EEADC;
	sub_825F7718(ctx, base);
loc_825EEADC:
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x825eeb04
	if (ctx.cr6.eq) goto loc_825EEB04;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,949
	ctx.r7.s64 = 949;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEB04;
	sub_824EA978(ctx, base);
loc_825EEB04:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,1456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825b33a0
	ctx.lr = 0x825EEB1C;
	sub_825B33A0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8260a860
	ctx.lr = 0x825EEB54;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEB64;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEB74;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_825EEB80:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ee87c
	if (!ctx.cr6.gt) goto loc_825EE87C;
loc_825EEB94:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EEBA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eebbc
	if (ctx.cr0.eq) goto loc_825EEBBC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825f74e0
	ctx.lr = 0x825EEBBC;
	sub_825F74E0(ctx, base);
loc_825EEBBC:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825eec8c
	if (!ctx.cr6.eq) goto loc_825EEC8C;
	// addic. r28,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r28.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x825eed50
	if (ctx.cr0.lt) goto loc_825EED50;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_825EEBD4:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eebf0
	if (!ctx.cr6.lt) goto loc_825EEBF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825eebf8
	goto loc_825EEBF8;
loc_825EEBF0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EEBF8;
	sub_825F7718(ctx, base);
loc_825EEBF8:
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,40(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eec7c
	if (!ctx.cr0.eq) goto loc_825EEC7C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r25,1456(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EEC20;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8260a860
	ctx.lr = 0x825EEC54;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEC68;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEC78;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_825EEC7C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// bge 0x825eebd4
	if (!ctx.cr0.lt) goto loc_825EEBD4;
	// b 0x825eed50
	goto loc_825EED50;
loc_825EEC8C:
	// ble cr6,0x825eed50
	if (!ctx.cr6.gt) goto loc_825EED50;
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eecb8
	if (!ctx.cr6.lt) goto loc_825EECB8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eecbc
	goto loc_825EECBC;
loc_825EECB8:
	// bl 0x825f7718
	ctx.lr = 0x825EECBC;
	sub_825F7718(ctx, base);
loc_825EECBC:
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,40(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EECD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eed50
	if (!ctx.cr0.eq) goto loc_825EED50;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EECF4;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8260a860
	ctx.lr = 0x825EED28;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EED3C;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EED4C;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_825EED50:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EED5C;
	sub_825F7718(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_825EED78:
	// lwz r26,8(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ee634
	if (!ctx.cr6.eq) goto loc_825EE634;
loc_825EED88:
	// lwz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825eedb4
	if (ctx.cr6.eq) goto loc_825EEDB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,16320
	ctx.r5.s64 = ctx.r11.s64 + 16320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEDB4;
	sub_824EA978(ctx, base);
loc_825EEDB4:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825ef3d4
	if (ctx.cr0.eq) goto loc_825EF3D4;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EEDD4;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825eee0c
	if (ctx.cr0.eq) goto loc_825EEE0C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,-13328
	ctx.r6.s64 = ctx.r10.s64 + -13328;
	// addi r5,r9,-13376
	ctx.r5.s64 = ctx.r9.s64 + -13376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825e6ac8
	ctx.lr = 0x825EEE04;
	sub_825E6AC8(ctx, base);
	// mr r20,r31
	r20.u64 = r31.u64;
	// b 0x825eee10
	goto loc_825EEE10;
loc_825EEE0C:
	// mr r20,r15
	r20.u64 = r15.u64;
loc_825EEE10:
	// addic. r19,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r19.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// mr r21,r15
	r21.u64 = r15.u64;
	// mr r22,r15
	r22.u64 = r15.u64;
	// blt 0x825ef3b8
	if (ctx.cr0.lt) goto loc_825EF3B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r16,r19,2,0,29
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,3
	r24.s64 = 3;
	// addi r18,r11,16292
	r18.s64 = ctx.r11.s64 + 16292;
	// addi r17,r10,16256
	r17.s64 = ctx.r10.s64 + 16256;
	// b 0x825eee40
	goto loc_825EEE40;
loc_825EEE3C:
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825EEE40:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eee5c
	if (!ctx.cr6.lt) goto loc_825EEE5C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + r16.u64;
	// b 0x825eee64
	goto loc_825EEE64;
loc_825EEE5C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EEE64;
	sub_825F7718(ctx, base);
loc_825EEE64:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r26,40(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a750
	ctx.lr = 0x825EEE74;
	sub_8260A750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eef90
	if (ctx.cr0.eq) goto loc_825EEF90;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f79d0
	ctx.lr = 0x825EEE88;
	sub_825F79D0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x825eef84
	if (ctx.cr0.eq) goto loc_825EEF84;
	// lwz r11,892(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 892);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x825eeeb4
	if (ctx.cr6.lt) goto loc_825EEEB4;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1060
	ctx.r7.s64 = 1060;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEEB4;
	sub_824EA978(ctx, base);
loc_825EEEB4:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r4,892(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 892);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eeed8
	if (!ctx.cr6.lt) goto loc_825EEED8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eeedc
	goto loc_825EEEDC;
loc_825EEED8:
	// bl 0x825f7718
	ctx.lr = 0x825EEEDC;
	sub_825F7718(ctx, base);
loc_825EEEDC:
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x825eef04
	if (ctx.cr6.eq) goto loc_825EEF04;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1062
	ctx.r7.s64 = 1062;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EEF04;
	sub_824EA978(ctx, base);
loc_825EEF04:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EEF18;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x8260a860
	ctx.lr = 0x825EEF4C;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEF60;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EEF70;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// bl 0x825f7b50
	ctx.lr = 0x825EEF84;
	sub_825F7B50(ctx, base);
loc_825EEF84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7a90
	ctx.lr = 0x825EEF90;
	sub_825F7A90(ctx, base);
loc_825EEF90:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a7e8
	ctx.lr = 0x825EEF98;
	sub_8260A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef018
	if (ctx.cr0.eq) goto loc_825EF018;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825ef014
	if (ctx.cr6.eq) goto loc_825EF014;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EEFBC;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// lwz r4,40(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 40);
	// bl 0x8260a860
	ctx.lr = 0x825EEFEC;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF000;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF010;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825EF014:
	// mr r21,r30
	r21.u64 = r30.u64;
loc_825EF018:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a820
	ctx.lr = 0x825EF020;
	sub_8260A820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef0a0
	if (ctx.cr0.eq) goto loc_825EF0A0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825ef09c
	if (ctx.cr6.eq) goto loc_825EF09C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EF044;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// lwz r4,40(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 40);
	// bl 0x8260a860
	ctx.lr = 0x825EF074;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF088;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF098;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825EF09C:
	// mr r22,r30
	r22.u64 = r30.u64;
loc_825EF0A0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825ef1dc
	if (ctx.cr6.lt) goto loc_825EF1DC;
	// addi r25,r26,236
	r25.s64 = r26.s64 + 236;
loc_825EF0B4:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x8260a750
	ctx.lr = 0x825EF0BC;
	sub_8260A750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef1c8
	if (ctx.cr0.eq) goto loc_825EF1C8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x825f79d0
	ctx.lr = 0x825EF0D0;
	sub_825F79D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x825ef1c8
	if (ctx.cr0.eq) goto loc_825EF1C8;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// beq cr6,0x825ef1c8
	if (ctx.cr6.eq) goto loc_825EF1C8;
	// lwz r11,892(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 892);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825ef108
	if (ctx.cr6.lt) goto loc_825EF108;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1116
	ctx.r7.s64 = 1116;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EF108;
	sub_824EA978(ctx, base);
loc_825EF108:
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r4,892(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 892);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef12c
	if (!ctx.cr6.lt) goto loc_825EF12C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825ef130
	goto loc_825EF130;
loc_825EF12C:
	// bl 0x825f7718
	ctx.lr = 0x825EF130;
	sub_825F7718(ctx, base);
loc_825EF130:
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x825ef158
	if (ctx.cr6.eq) goto loc_825EF158;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1118
	ctx.r7.s64 = 1118;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EF158;
	sub_824EA978(ctx, base);
loc_825EF158:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r14,1456(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EF16C;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r14,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r14.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x8260a860
	ctx.lr = 0x825EF1A0;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF1B4;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF1C4;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825EF1C8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ef0b4
	if (!ctx.cr6.gt) goto loc_825EF0B4;
loc_825EF1DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EF1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef26c
	if (ctx.cr0.eq) goto loc_825EF26C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825ef26c
	if (ctx.cr6.eq) goto loc_825EF26C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EF214;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// lwz r4,40(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 40);
	// bl 0x8260a860
	ctx.lr = 0x825EF244;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF258;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF268;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825EF26C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EF280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef2fc
	if (ctx.cr0.eq) goto loc_825EF2FC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825ef2fc
	if (ctx.cr6.eq) goto loc_825EF2FC;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EF2A4;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// lwz r4,40(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 40);
	// bl 0x8260a860
	ctx.lr = 0x825EF2D4;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF2E8;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r3,52(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF2F8;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825EF2FC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260a788
	ctx.lr = 0x825EF304;
	sub_8260A788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef3ac
	if (ctx.cr0.eq) goto loc_825EF3AC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825f73d8
	ctx.lr = 0x825EF314;
	sub_825F73D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ef3ac
	if (!ctx.cr0.eq) goto loc_825EF3AC;
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x825ef3a4
	goto loc_825EF3A4;
loc_825EF32C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r27,1456(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EF340;
	sub_825B33A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x8260a860
	ctx.lr = 0x825EF370;
	sub_8260A860(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r15,20(r31)
	REX_STORE_U8(r31.u32 + 20, r15.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF384;
	sub_825F7718(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EF394;
	sub_825F7718(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825EF3A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ef32c
	if (!ctx.cr6.eq) goto loc_825EF32C;
loc_825EF3AC:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r16,r16,-4
	r16.s64 = r16.s64 + -4;
	// bge 0x825eee3c
	if (!ctx.cr0.lt) goto loc_825EEE3C;
loc_825EF3B8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825ef3d4
	if (ctx.cr6.eq) goto loc_825EF3D4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7c38
	ctx.lr = 0x825EF3C8;
	sub_825F7C38(ctx, base);
	// addi r4,r20,-4
	ctx.r4.s64 = r20.s64 + -4;
	// lwz r3,-4(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825EF3D4;
	sub_825B3528(ctx, base);
loc_825EF3D4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8264CEF0) {
	REX_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827940d4
	__imp__NetDll_select(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264D1F0;
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
	// bl 0x8264ca58
	ctx.lr = 0x8264D218;
	sub_8264CA58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d2e4
	if (ctx.cr0.lt) goto loc_8264D2E4;
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
	// bl 0x8264cae0
	ctx.lr = 0x8264D240;
	sub_8264CAE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d2e4
	if (ctx.cr0.lt) goto loc_8264D2E4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82794034
	ctx.lr = 0x8264D258;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d2e4
	if (ctx.cr0.lt) goto loc_8264D2E4;
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
	// bl 0x8264cbb8
	ctx.lr = 0x8264D2A4;
	sub_8264CBB8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d2e4
	if (ctx.cr0.lt) goto loc_8264D2E4;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D2B8;
	sub_8264D058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D2C4;
	sub_8264D058(ctx, base);
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
	// bl 0x82793744
	ctx.lr = 0x8264D2DC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8264d304
	if (!ctx.cr0.lt) goto loc_8264D304;
loc_8264D2E4:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d2f4
	if (ctx.cr6.eq) goto loc_8264D2F4;
	// bl 0x82794024
	ctx.lr = 0x8264D2F4;
	__imp__XamFree(ctx, base);
loc_8264D2F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0188
	ctx.lr = 0x8264D2FC;
	sub_823F0188(ctx, base);
	// li r30,1627
	r30.s64 = 1627;
	// b 0x8264d30c
	goto loc_8264D30C;
loc_8264D304:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82794024
	ctx.lr = 0x8264D30C;
	__imp__XamFree(ctx, base);
loc_8264D30C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82650DB0) {
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
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x8265de10
	ctx.lr = 0x82650DC4;
	sub_8265DE10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82650de4
	if (ctx.cr0.eq) goto loc_82650DE4;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82650de8
	goto loc_82650DE8;
loc_82650DE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82650DE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826544B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826544C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,248
	r30.s64 = ctx.r3.s64 + 248;
	// b 0x82654530
	goto loc_82654530;
loc_826544D4:
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r11,r31,-92
	ctx.r11.s64 = r31.s64 + -92;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265452c
	if (!ctx.cr0.eq) goto loc_8265452C;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265452c
	if (!ctx.cr6.eq) goto loc_8265452C;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826544F8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826544f8
	if (!ctx.cr6.eq) goto loc_826544F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82653a98
	ctx.lr = 0x82654524;
	sub_82653A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82654548
	if (ctx.cr0.lt) goto loc_82654548;
loc_8265452C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82654530:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82654544
	if (ctx.cr6.eq) goto loc_82654544;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne 0x826544d4
	if (!ctx.cr0.eq) goto loc_826544D4;
loc_82654544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82654548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82659520) {
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
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82659550
	if (!ctx.cr0.eq) goto loc_82659550;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82659644
	goto loc_82659644;
loc_82659550:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82659568
	if (ctx.cr6.eq) goto loc_82659568;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82659644
	goto loc_82659644;
loc_82659568:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265960c
	if (!ctx.cr6.eq) goto loc_8265960C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654278
	ctx.lr = 0x8265958C;
	sub_82654278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659644
	if (ctx.cr0.lt) goto loc_82659644;
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d750
	ctx.lr = 0x826595AC;
	sub_8265D750(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r10,404(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 404);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// bl 0x82650370
	ctx.lr = 0x826595C8;
	sub_82650370(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826595F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659640
	if (!ctx.cr6.eq) goto loc_82659640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659168
	ctx.lr = 0x82659608;
	sub_82659168(ctx, base);
	// b 0x82659638
	goto loc_82659638;
loc_8265960C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82659630
	if (ctx.cr6.eq) goto loc_82659630;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654278
	ctx.lr = 0x82659628;
	sub_82654278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659644
	if (ctx.cr0.lt) goto loc_82659644;
loc_82659630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657c38
	ctx.lr = 0x82659638;
	sub_82657C38(ctx, base);
loc_82659638:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659644
	if (ctx.cr0.lt) goto loc_82659644;
loc_82659640:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82659644:
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

DEFINE_REX_FUNC(sub_8265E948) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8265E960:
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
	// bne 0x8265e960
	if (!ctx.cr0.eq) goto loc_8265E960;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8265e99c
	if (!ctx.cr6.eq) goto loc_8265E99C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e520
	ctx.lr = 0x8265E990;
	sub_8265E520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8265E99C;
	sub_8265D850(ctx, base);
loc_8265E99C:
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

DEFINE_REX_FUNC(sub_82660910) {
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
	ctx.lr = 0x82660918;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82660940
	if (ctx.cr6.eq) goto loc_82660940;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82660934:
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// bdnz 0x82660934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82660934;
loc_82660940:
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82660958
	if (!ctx.cr6.gt) goto loc_82660958;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82660994
	goto loc_82660994;
loc_82660958:
	// addi r29,r27,124
	r29.s64 = r27.s64 + 124;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8266098c
	if (ctx.cr6.eq) goto loc_8266098C;
	// addi r31,r4,-4
	r31.s64 = ctx.r4.s64 + -4;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_8266096C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x8266097C;
	sub_826A1E70(ctx, base);
	// lwzu r11,8(r31)
	ea = 8 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bne 0x8266096c
	if (!ctx.cr0.eq) goto loc_8266096C;
loc_8266098C:
	// stw r28,44(r27)
	REX_STORE_U32(r27.u32 + 44, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82660994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82663F50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82663F58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,132
	r29.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663F74;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661398
	ctx.lr = 0x82663F80;
	sub_82661398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663f90
	if (ctx.cr0.eq) goto loc_82663F90;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82663f9c
	if (!ctx.cr6.eq) goto loc_82663F9C;
loc_82663F90:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x82663fa4
	goto loc_82663FA4;
loc_82663F9C:
	// stw r30,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// li r31,0
	r31.s64 = 0;
loc_82663FA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663FAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82667A00) {
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
	ctx.lr = 0x82667A08;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,132
	r21.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x82667A30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82667a48
	if (!ctx.cr6.gt) goto loc_82667A48;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4102
	r30.u64 = r30.u64 | 4102;
	// b 0x82667d9c
	goto loc_82667D9C;
loc_82667A48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82667a68
	if (ctx.cr6.eq) goto loc_82667A68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,257
	ctx.r3.s64 = 257;
	// bl 0x82663958
	ctx.lr = 0x82667A60;
	sub_82663958(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82667e30
	if (ctx.cr0.eq) goto loc_82667E30;
loc_82667A68:
	// lwz r30,172(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 172);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82667abc
	if (ctx.cr0.eq) goto loc_82667ABC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82667abc
	if (!ctx.cr6.eq) goto loc_82667ABC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264c7f0
	ctx.lr = 0x82667A88;
	sub_8264C7F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82673220
	ctx.lr = 0x82667AB4;
	sub_82673220(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82667d9c
	goto loc_82667D9C;
loc_82667ABC:
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82667af4
	if (ctx.cr6.eq) goto loc_82667AF4;
loc_82667AC8:
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
	// bne 0x82667ac8
	if (!ctx.cr0.eq) goto loc_82667AC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667af4
	if (!ctx.cr6.eq) goto loc_82667AF4;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82667AF4;
	sub_8265D850(ctx, base);
loc_82667AF4:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82667b2c
	if (ctx.cr6.eq) goto loc_82667B2C;
loc_82667B00:
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
	// bne 0x82667b00
	if (!ctx.cr0.eq) goto loc_82667B00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667b2c
	if (!ctx.cr6.eq) goto loc_82667B2C;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82667B2C;
	sub_8265D850(ctx, base);
loc_82667B2C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82667b6c
	if (ctx.cr6.eq) goto loc_82667B6C;
loc_82667B34:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667b34
	if (!ctx.cr0.eq) goto loc_82667B34;
loc_82667B50:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667b50
	if (!ctx.cr0.eq) goto loc_82667B50;
loc_82667B6C:
	// stw r25,212(r31)
	REX_STORE_U32(r31.u32 + 212, r25.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// stw r25,216(r31)
	REX_STORE_U32(r31.u32 + 216, r25.u32);
	// bge cr6,0x82667d98
	if (!ctx.cr6.lt) goto loc_82667D98;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r22,r31,240
	r22.s64 = r31.s64 + 240;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x82667d98
	if (ctx.cr6.eq) goto loc_82667D98;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82667d98
	if (ctx.cr0.eq) goto loc_82667D98;
	// li r24,-1
	r24.s64 = -1;
loc_82667B9C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r31,r23,-4
	r31.s64 = r23.s64 + -4;
	// lwz r10,232(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 232);
	// subf r9,r11,r22
	ctx.r9.u64 = r22.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x82667d90
	if (!ctx.cr6.eq) goto loc_82667D90;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82667d90
	if (!ctx.cr0.eq) goto loc_82667D90;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82667d90
	if (ctx.cr6.eq) goto loc_82667D90;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82667bec
	if (ctx.cr0.eq) goto loc_82667BEC;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x82667d90
	goto loc_82667D90;
loc_82667BEC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82667c64
	if (!ctx.cr6.eq) goto loc_82667C64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82675ee0
	ctx.lr = 0x82667C00;
	sub_82675EE0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82667e30
	if (ctx.cr0.eq) goto loc_82667E30;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82667c64
	if (ctx.cr6.eq) goto loc_82667C64;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r10,r25,12
	ctx.r10.s64 = r25.s64 + 12;
	// lwz r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r8,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r8.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r11.u32);
loc_82667C44:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667c44
	if (!ctx.cr0.eq) goto loc_82667C44;
	// stw r25,16(r26)
	REX_STORE_U32(r26.u32 + 16, r25.u32);
loc_82667C64:
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r5,r26,36
	ctx.r5.s64 = r26.s64 + 36;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826711d8
	ctx.lr = 0x82667C7C;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x82667C98;
	sub_826715F0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667d10
	if (ctx.cr6.eq) goto loc_82667D10;
	// li r29,0
	r29.s64 = 0;
loc_82667CB0:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82667cfc
	if (ctx.cr0.eq) goto loc_82667CFC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82667cf8
	if (!ctx.cr6.eq) goto loc_82667CF8;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82667cf8
	if (!ctx.cr0.eq) goto loc_82667CF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x82667CF0;
	sub_826715F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82667d9c
	if (!ctx.cr0.eq) goto loc_82667D9C;
loc_82667CF8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82667CFC:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82667cb0
	if (ctx.cr6.lt) goto loc_82667CB0;
loc_82667D10:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667d6c
	if (ctx.cr6.eq) goto loc_82667D6C;
	// li r29,0
	r29.s64 = 0;
loc_82667D24:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82667d58
	if (!ctx.cr0.eq) goto loc_82667D58;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x82667D50;
	sub_826715F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82667d9c
	if (!ctx.cr0.eq) goto loc_82667D9C;
loc_82667D58:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82667d24
	if (ctx.cr6.lt) goto loc_82667D24;
loc_82667D6C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667d90
	if (ctx.cr6.eq) goto loc_82667D90;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x82667D88;
	sub_82671270(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82667d9c
	if (!ctx.cr0.eq) goto loc_82667D9C;
loc_82667D90:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82667b9c
	if (!ctx.cr6.eq) goto loc_82667B9C;
loc_82667D98:
	// li r30,0
	r30.s64 = 0;
loc_82667D9C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x827938b4
	ctx.lr = 0x82667DA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82667ddc
	if (ctx.cr6.eq) goto loc_82667DDC;
loc_82667DAC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667dac
	if (!ctx.cr0.eq) goto loc_82667DAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667ddc
	if (!ctx.cr6.eq) goto loc_82667DDC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82667DDC;
	sub_8265D850(ctx, base);
loc_82667DDC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82667e24
	if (ctx.cr6.eq) goto loc_82667E24;
	// addi r11,r26,4
	ctx.r11.s64 = r26.s64 + 4;
loc_82667DE8:
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
	// bne 0x82667de8
	if (!ctx.cr0.eq) goto loc_82667DE8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82667e24
	if (!ctx.cr6.eq) goto loc_82667E24;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82667E24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_82667E30:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82667d9c
	goto loc_82667D9C;
}

DEFINE_REX_FUNC(sub_82682888) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826828b0
	if (!ctx.cr6.lt) goto loc_826828B0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x826828b0
	if (!ctx.cr6.gt) goto loc_826828B0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x826828b4
	goto loc_826828B4;
loc_826828B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826828B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826828cc
	if (ctx.cr6.eq) goto loc_826828CC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_826828CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826843C0) {
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
	// bl 0x823ef900
	ctx.lr = 0x826843D8;
	sub_823EF900(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82684414
	if (ctx.cr6.eq) goto loc_82684414;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268440c
	if (!ctx.cr6.gt) goto loc_8268440C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82684410
	goto loc_82684410;
loc_8268440C:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82684410:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82684414:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268442c
	if (!ctx.cr6.eq) goto loc_8268442C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268443c
	goto loc_8268443C;
loc_8268442C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// divwu r3,r11,r10
	ctx.r3.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8268443C:
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

DEFINE_REX_FUNC(sub_82687208) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bge cr6,0x82687218
	if (!ctx.cr6.lt) goto loc_82687218;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82687218:
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687238
	if (ctx.cr0.eq) goto loc_82687238;
	// addi r11,r5,-7
	ctx.r11.s64 = ctx.r5.s64 + -7;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82687238:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82688888) {
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
	ctx.lr = 0x82688890;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ori r30,r11,1
	r30.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x826888c8
	if (!ctx.cr6.eq) goto loc_826888C8;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_826888C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82687ad0
	ctx.lr = 0x826888DC;
	sub_82687AD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82687190
	ctx.lr = 0x826888E8;
	sub_82687190(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// beq 0x826888fc
	if (ctx.cr0.eq) goto loc_826888FC;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_826888FC:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,1220
	ctx.cr6.compare<uint32_t>(r27.u32, 1220, ctx.xer);
	// ble cr6,0x82688914
	if (!ctx.cr6.gt) goto loc_82688914;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x826889c4
	goto loc_826889C4;
loc_82688914:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8265d838
	ctx.lr = 0x8268891C;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82688930
	if (!ctx.cr0.eq) goto loc_82688930;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826889c4
	goto loc_826889C4;
loc_82688930:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r26,0
	r26.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// std r26,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r26.u64);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82687c10
	ctx.lr = 0x8268895C;
	sub_82687C10(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82688600
	ctx.lr = 0x82688978;
	sub_82688600(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82687100
	ctx.lr = 0x82688990;
	sub_82687100(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826889a4
	if (ctx.cr6.eq) goto loc_826889A4;
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
loc_826889A4:
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// bl 0x82685af0
	ctx.lr = 0x826889B8;
	sub_82685AF0(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_826889C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82691CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82691CE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691dd4
	if (ctx.cr6.eq) goto loc_82691DD4;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82691d70
	if (!ctx.cr6.gt) goto loc_82691D70;
	// addi r31,r3,124
	r31.s64 = ctx.r3.s64 + 124;
loc_82691D10:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268eb40
	ctx.lr = 0x82691D24;
	sub_8268EB40(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691d40
	if (ctx.cr6.eq) goto loc_82691D40;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823f0350
	ctx.lr = 0x82691D3C;
	sub_823F0350(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_82691D40:
	// lwz r3,-36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691d5c
	if (ctx.cr6.eq) goto loc_82691D5C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f0350
	ctx.lr = 0x82691D58;
	sub_823F0350(ctx, base);
	// stw r29,-36(r31)
	REX_STORE_U32(r31.u32 + -36, r29.u32);
loc_82691D5C:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82691d10
	if (ctx.cr6.lt) goto loc_82691D10;
loc_82691D70:
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691d8c
	if (ctx.cr6.eq) goto loc_82691D8C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f0350
	ctx.lr = 0x82691D88;
	sub_823F0350(ctx, base);
	// stw r29,96(r30)
	REX_STORE_U32(r30.u32 + 96, r29.u32);
loc_82691D8C:
	// lwz r3,132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691da8
	if (ctx.cr6.eq) goto loc_82691DA8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823f0350
	ctx.lr = 0x82691DA4;
	sub_823F0350(ctx, base);
	// stw r29,132(r30)
	REX_STORE_U32(r30.u32 + 132, r29.u32);
loc_82691DA8:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82691dc4
	if (ctx.cr6.eq) goto loc_82691DC4;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823f0350
	ctx.lr = 0x82691DC0;
	sub_823F0350(ctx, base);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_82691DC4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x823f0350
	ctx.lr = 0x82691DD4;
	sub_823F0350(ctx, base);
loc_82691DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82698AE8) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x82698AF0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca4
	ctx.lr = 0x82698AF8;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lfs f27,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f27.f64 = double(temp.f32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82698b60
	if (!ctx.cr6.gt) goto loc_82698B60;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lfs f13,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8948(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8948);
	ctx.f0.f64 = double(temp.f32);
loc_82698B44:
	// lfsx f12,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82698b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82698B44;
loc_82698B60:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826950c8
	ctx.lr = 0x82698B6C;
	sub_826950C8(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ble cr6,0x82698bfc
	if (!ctx.cr6.gt) goto loc_82698BFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82698BA0:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82698bbc
	if (!ctx.cr6.lt) goto loc_82698BBC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82698BBC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82698ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82698BA0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82698bfc
	if (ctx.cr6.lt) goto loc_82698BFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfsx f13,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bge cr6,0x82698c10
	if (!ctx.cr6.lt) goto loc_82698C10;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f0,f27
	f31.f64 = double(float(ctx.f0.f64 * f27.f64));
	// b 0x82698c10
	goto loc_82698C10;
loc_82698BFC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82698C10:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f29,-5364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5364);
	f29.f64 = double(temp.f32);
	// ble cr6,0x82698c34
	if (!ctx.cr6.gt) goto loc_82698C34;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82698C28:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// bdnz 0x82698c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82698C28;
loc_82698C34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,9620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f13,8944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,5912(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5912);
	f30.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f2,f28,f0
	ctx.f2.f64 = double(float(f28.f64 - ctx.f0.f64));
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, f30.f64);
	// bge cr6,0x82698c70
	if (!ctx.cr6.lt) goto loc_82698C70;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
loc_82698C70:
	// fadds f3,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f28,-8924(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8924);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, f28.f64);
	// ble cr6,0x82698c88
	if (!ctx.cr6.gt) goto loc_82698C88;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
loc_82698C88:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// bl 0x82699888
	ctx.lr = 0x82698CA8;
	sub_82699888(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f13,16236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16236);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, f30.f64);
	// bge cr6,0x82698cd4
	if (!ctx.cr6.lt) goto loc_82698CD4;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
loc_82698CD4:
	// fadds f3,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, f28.f64);
	// ble cr6,0x82698ce4
	if (!ctx.cr6.gt) goto loc_82698CE4;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
loc_82698CE4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// bl 0x82699888
	ctx.lr = 0x82698D04;
	sub_82699888(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f29,0(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fdivs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 / f29.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf0
	ctx.lr = 0x82698D30;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(__savevmx_86) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AA39C) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x826AA3BC;
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

DEFINE_REX_FUNC(sub_826AB0E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826ab110
	if (!ctx.cr6.eq) goto loc_826AB110;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826ab12c
	if (!ctx.cr6.eq) goto loc_826AB12C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826AB110:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826ab12c
	if (!ctx.cr6.eq) goto loc_826AB12C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826ab12c
	if (!ctx.cr6.eq) goto loc_826AB12C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_826AB12C:
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x826ab144
	if (!ctx.cr6.eq) goto loc_826AB144;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826AB144:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x826ab164
	if (!ctx.cr6.eq) goto loc_826AB164;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ab15c
	if (!ctx.cr0.eq) goto loc_826AB15C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ab164
	if (ctx.cr6.eq) goto loc_826AB164;
loc_826AB15C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_826AB164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF550) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x826af4f0
	sub_826AF4F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826AF8A8) {
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
	ctx.lr = 0x826AF8B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r28,48
	r28.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826af8f4
	if (!ctx.cr6.eq) goto loc_826AF8F4;
	// bl 0x826a33d0
	ctx.lr = 0x826AF8E0;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AF8EC;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826afca4
	goto loc_826AFCA4;
loc_826AF8F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826af914
	if (!ctx.cr6.eq) goto loc_826AF914;
	// bl 0x826a33d0
	ctx.lr = 0x826AF900;
	sub_826A33D0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_826AF904:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AF90C;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826afca4
	goto loc_826AFCA4;
loc_826AF914:
	// li r26,0
	r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826af934
	if (ctx.cr6.gt) goto loc_826AF934;
	// bl 0x826a33d0
	ctx.lr = 0x826AF92C;
	sub_826A33D0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x826af904
	goto loc_826AF904;
loc_826AF934:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2047, ctx.xer);
	// bne cr6,0x826af9d8
	if (!ctx.cr6.eq) goto loc_826AF9D8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x826af954
	if (!ctx.cr6.eq) goto loc_826AF954;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x826af958
	goto loc_826AF958;
loc_826AF954:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_826AF958:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826af7b8
	ctx.lr = 0x826AF96C;
	sub_826AF7B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826af97c
	if (ctx.cr0.eq) goto loc_826AF97C;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x826afca4
	goto loc_826AFCA4;
loc_826AF97C:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x826af990
	if (!ctx.cr6.eq) goto loc_826AF990;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826AF990:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x826a4a30
	ctx.lr = 0x826AF9B4;
	sub_826A4A30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826afca0
	if (ctx.cr0.eq) goto loc_826AFCA0;
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x826afca0
	goto loc_826AFCA0;
loc_826AF9D8:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x826af9f0
	if (ctx.cr6.eq) goto loc_826AF9F0;
	// stb r27,0(r31)
	REX_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826AF9F0:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r29.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// addi r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 39;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x826afa5c
	if (!ctx.cr6.eq) goto loc_826AFA5C;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x826afa54
	if (!ctx.cr6.eq) goto loc_826AFA54;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x826afa68
	goto loc_826AFA68;
loc_826AFA54:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x826afa68
	goto loc_826AFA68;
loc_826AFA5C:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826AFA68:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x826afa80
	if (!ctx.cr6.eq) goto loc_826AFA80;
	// stb r26,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r26.u8);
	// b 0x826afa98
	goto loc_826AFA98;
loc_826AFA80:
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
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_826AFA98:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x826afb7c
	if (!ctx.cr6.gt) goto loc_826AFB7C;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_826AFAB0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826afb08
	if (!ctx.cr6.gt) goto loc_826AFB08;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x826afaec
	if (!ctx.cr6.gt) goto loc_826AFAEC;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_826AFAEC:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bge 0x826afab0
	if (!ctx.cr0.lt) goto loc_826AFAB0;
loc_826AFB08:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x826afb7c
	if (ctx.cr0.lt) goto loc_826AFB7C;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x826afb7c
	if (!ctx.cr6.gt) goto loc_826AFB7C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_826AFB34:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x826afb4c
	if (ctx.cr6.eq) goto loc_826AFB4C;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x826afb58
	if (!ctx.cr6.eq) goto loc_826AFB58;
loc_826AFB4C:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x826afb34
	goto loc_826AFB34;
loc_826AFB58:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826afb70
	if (ctx.cr6.eq) goto loc_826AFB70;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x826afb74
	if (!ctx.cr6.eq) goto loc_826AFB74;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x826afb78
	goto loc_826AFB78;
loc_826AFB70:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_826AFB74:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826AFB78:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_826AFB7C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826afba4
	if (!ctx.cr6.gt) goto loc_826AFBA4;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x826afba0
	if (ctx.cr0.eq) goto loc_826AFBA0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_826AFB98:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826afb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826AFB98;
loc_826AFBA0:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_826AFBA4:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826afbb4
	if (!ctx.cr0.eq) goto loc_826AFBB4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_826AFBB4:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x826afbec
	if (ctx.cr6.lt) goto loc_826AFBEC;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x826afbf4
	goto loc_826AFBF4;
loc_826AFBEC:
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_826AFBF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x826afc34
	if (ctx.cr6.lt) goto loc_826AFC34;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1000));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826afc3c
	if (!ctx.cr6.eq) goto loc_826AFC3C;
loc_826AFC34:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x826afc60
	if (ctx.cr6.lt) goto loc_826AFC60;
loc_826AFC3C:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826AFC60:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826afc70
	if (!ctx.cr6.eq) goto loc_826AFC70;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x826afc94
	if (ctx.cr6.lt) goto loc_826AFC94;
loc_826AFC70:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826AFC94:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_826AFCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AFCA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D6F08) {
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
	ctx.lr = 0x826D6F10;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r24,0
	r24.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r28,r4,-24
	r28.s64 = ctx.r4.s64 + -24;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r24.u16);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D6F50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// cmplwi cr6,r28,20
	ctx.cr6.compare<uint32_t>(r28.u32, 20, ctx.xer);
	// bge cr6,0x826d6f78
	if (!ctx.cr6.lt) goto loc_826D6F78;
loc_826D6F64:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_826D6F78:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D6F90;
	sub_826D4080(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D6FB4;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,20
	r29.s64 = 20;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r23,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r23.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lhz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x826d7038
	if (!ctx.cr6.eq) goto loc_826D7038;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// addic. r30,r10,-20
	ctx.xer.ca = ctx.r10.u32 > 19;
	r30.s64 = ctx.r10.s64 + -20;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d742c
	if (ctx.cr0.eq) goto loc_826D742C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D7014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_826D7038:
	// mulli r30,r23,28
	r30.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(28));
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D7050;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826D706C;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// beq cr6,0x826d73d8
	if (ctx.cr6.eq) goto loc_826D73D8;
	// mr r30,r24
	r30.u64 = r24.u64;
	// li r21,1
	r21.s64 = 1;
	// li r22,2
	r22.s64 = 2;
loc_826D7090:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D70B4;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826d70d8
	if (!ctx.cr6.eq) goto loc_826D70D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r21,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r21.u32);
	// b 0x826d70f0
	goto loc_826D70F0;
loc_826D70D8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x826d70ec
	if (!ctx.cr6.eq) goto loc_826D70EC;
	// stwx r22,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r22.u32);
	// b 0x826d70f0
	goto loc_826D70F0;
loc_826D70EC:
	// stwx r24,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r24.u32);
loc_826D70F0:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7108;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d71f4
	if (ctx.cr6.eq) goto loc_826D71F4;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D714C;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x826a2e60
	ctx.lr = 0x826D7174;
	sub_826A2E60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D71A8;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d71f4
	if (ctx.cr6.eq) goto loc_826D71F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lhz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d71f4
	if (!ctx.cr6.gt) goto loc_826D71F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D71E0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826d71e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D71E0;
loc_826D71F4:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7218;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,12(r9)
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d7304
	if (ctx.cr6.eq) goto loc_826D7304;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D725C;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x826a2e60
	ctx.lr = 0x826D7284;
	sub_826A2E60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D72B8;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d7304
	if (ctx.cr6.eq) goto loc_826D7304;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lhz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d7304
	if (!ctx.cr6.gt) goto loc_826D7304;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D72F0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826d72f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D72F0;
loc_826D7304:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7328;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,20(r9)
	REX_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d73c8
	if (ctx.cr6.eq) goto loc_826D73C8;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D7368;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x826a2e60
	ctx.lr = 0x826D738C;
	sub_826A2E60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d6f64
	if (ctx.cr6.gt) goto loc_826D6F64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D73BC;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
loc_826D73C8:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// blt cr6,0x826d7090
	if (ctx.cr6.lt) goto loc_826D7090;
loc_826D73D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lhz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r28
	ctx.r6.u64 = r28.u64 - ctx.r7.u64;
	// subf. r30,r29,r6
	r30.u64 = ctx.r6.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d742c
	if (ctx.cr0.eq) goto loc_826D742C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D7410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d742c
	if (ctx.cr6.lt) goto loc_826D742C;
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
loc_826D742C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826F95B8) {
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
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca8
	ctx.lr = 0x826F95C0;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// slw r26,r10,r5
	r26.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// addi r27,r11,14704
	r27.s64 = ctx.r11.s64 + 14704;
	// bge cr6,0x826f9618
	if (!ctx.cr6.lt) goto loc_826F9618;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,13984
	ctx.r8.s64 = ctx.r11.s64 + 13984;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,13920
	ctx.r6.s64 = ctx.r10.s64 + 13920;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3804(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	f31.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x826f9664
	goto loc_826F9664;
loc_826F9618:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// lfd f13,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r27.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,3728(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fdiv f30,f0,f12
	f30.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fmul f1,f30,f13
	ctx.f1.f64 = f30.f64 * ctx.f13.f64;
	// bl 0x826a15c0
	ctx.lr = 0x826F9640;
	sub_826A15C0(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfd f0,-21800(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -21800);
	// fmul f1,f30,f0
	ctx.f1.f64 = f30.f64 * ctx.f0.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826F9654;
	sub_826A14E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,8312(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8312);
	// fmul f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
loc_826F9664:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x826f9678
	if (!ctx.cr6.eq) goto loc_826F9678;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_826F9678:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,48
	ctx.r7.s64 = 48;
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// li r11,64
	ctx.r11.s64 = 64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// vspltw128 v2,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// rlwinm r29,r26,1,0,30
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r27,r7
	ea = (r27.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v29,v63,0
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v31,r27,r11
	ea = (r27.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lvx128 v0,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v30,v61,0
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v28,r27,r9
	ea = (r27.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v1,v2,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvx128 v63,r27,r8
	ea = (r27.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_826F96E8:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bgt cr6,0x826f9700
	if (ctx.cr6.gt) goto loc_826F9700;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x826f98f4
	if (!ctx.cr6.eq) goto loc_826F98F4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// ble cr6,0x826f9898
	if (!ctx.cr6.gt) goto loc_826F9898;
loc_826F9700:
	// vmaddfp v9,v2,v29,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// vmaddfp v5,v1,v30,v31
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(v31.f32)));
	// vor v4,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vor v3,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// vmaddfp v2,v9,v28,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi128 v59,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v12,v31,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vxor128 v11,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v1,v2,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// ble cr6,0x826f9784
	if (!ctx.cr6.gt) goto loc_826F9784;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_826F974C:
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v57,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v58,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// vaddfp128 v56,v58,v57
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmaddfp v10,v12,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v13,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vmaddfp v13,v11,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x826f974c
	if (ctx.cr6.lt) goto loc_826F974C;
loc_826F9784:
	// li r28,4
	r28.s64 = 4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x826f9890
	if (!ctx.cr6.gt) goto loc_826F9890;
loc_826F9790:
	// vmaddfp v4,v1,v9,v4
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// add r10,r28,r5
	ctx.r10.u64 = r28.u64 + ctx.r5.u64;
	// vmaddfp v3,v2,v5,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// vmaddfp v9,v2,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v1,v3,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vsldoi128 v55,v3,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v11,v4,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// vxor128 v10,v55,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bgt cr6,0x826f9844
	if (ctx.cr6.gt) goto loc_826F9844;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r30,r5,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_826F97C4:
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r24,r11,r4
	r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lvx128 v54,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lvx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v53,v54
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v51,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v50,v53,v54
	simde_mm_store_ps(ctx.v50.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v12,v52,v51
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// vaddfp128 v49,v52,v51
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// vmaddfp v8,v11,v13,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v7,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v11,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v6,v12,78
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xB1));
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v10,v7,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v10,v6,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x826f97c4
	if (!ctx.cr6.gt) goto loc_826F97C4;
loc_826F9844:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826f9884
	if (ctx.cr6.gt) goto loc_826F9884;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v48,v47
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v46,v48,v47
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmaddfp v12,v11,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v13,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v10,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_826F9884:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826f9790
	if (ctx.cr6.lt) goto loc_826F9790;
loc_826F9890:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x826f96e8
	goto loc_826F96E8;
loc_826F9898:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x826f999c
	if (!ctx.cr6.gt) goto loc_826F999C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826f999c
	if (!ctx.cr6.gt) goto loc_826F999C;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826F98BC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfsu f7,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826f98bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F98BC;
	// b 0x826f999c
	goto loc_826F999C;
loc_826F98F4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x826f999c
	if (!ctx.cr6.gt) goto loc_826F999C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826f999c
	if (!ctx.cr6.gt) goto loc_826F999C;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lvx128 v11,r27,r5
	ea = (r27.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,-16
	ctx.r6.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_826F9938:
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lvlx128 v44,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v43,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v0,v45,v44
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// lvlx128 v42,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v41,v45,v44
	simde_mm_store_ps(ctx.v41.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vsubfp128 v40,v43,v42
	simde_mm_store_ps(ctx.v40.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vaddfp128 v13,v43,v42
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vpermwi128 v10,v0,177
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x4E));
	// vpermwi128 v9,v41,238
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x11));
	// vpermwi128 v8,v41,17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xEE));
	// vpermwi128 v7,v13,177
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x4E));
	// vpermwi128 v5,v40,17
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xEE));
	// vmaddfp v0,v0,v12,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v6,v40,238
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x11));
	// vmaddfp v10,v9,v11,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v13,v12,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v9,v6,v11,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v10,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x826f9938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F9938;
loc_826F999C:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// ble cr6,0x826f9aa4
	if (!ctx.cr6.gt) goto loc_826F9AA4;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// addi r3,r26,1
	ctx.r3.s64 = r26.s64 + 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x826f9aa4
	if (!ctx.cr6.gt) goto loc_826F9AA4;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
loc_826F99D0:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f9a40
	if (!ctx.cr6.lt) goto loc_826F9A40;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r28,r6,1
	r28.s64 = ctx.r6.s64 + 1;
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f8,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f7,r6,r31
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r7,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + r31.u32, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// stfsx f10,r6,r31
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
loc_826F9A40:
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bgt cr6,0x826f9a8c
	if (ctx.cr6.gt) goto loc_826F9A8C;
loc_826F9A78:
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f9a78
	if (!ctx.cr6.gt) goto loc_826F9A78;
loc_826F9A8C:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r26.s32, ctx.xer);
	// blt cr6,0x826f99d0
	if (ctx.cr6.lt) goto loc_826F99D0;
loc_826F9AA4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x826f9b60
	if (!ctx.cr6.eq) goto loc_826F9B60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x826f9b1c
	if (ctx.cr6.lt) goto loc_826F9B1C;
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_826F9AE0:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
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
	// blt cr6,0x826f9ae0
	if (ctx.cr6.lt) goto loc_826F9AE0;
loc_826F9B1C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x826f9b60
	if (!ctx.cr6.lt) goto loc_826F9B60;
	// extsw r9,r26
	ctx.r9.s64 = r26.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// subf r8,r10,r29
	ctx.r8.u64 = r29.u64 - ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_826F9B50:
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
	// bdnz 0x826f9b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F9B50;
loc_826F9B60:
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

DEFINE_REX_FUNC(sub_82746084) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82746088) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,15592(r3)
	REX_STORE_U32(ctx.r3.u32 + 15592, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15596(r10)
	REX_STORE_U32(ctx.r10.u32 + 15596, ctx.r9.u32);
	// stw r11,15568(r10)
	REX_STORE_U32(ctx.r10.u32 + 15568, ctx.r11.u32);
	// stw r11,456(r10)
	REX_STORE_U32(ctx.r10.u32 + 456, ctx.r11.u32);
	// stw r11,3476(r10)
	REX_STORE_U32(ctx.r10.u32 + 3476, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82747410) {
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
	ctx.lr = 0x82747418;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,-4289
	ctx.r12.s64 = -281083904;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// ori r12,r12,63743
	ctx.r12.u64 = ctx.r12.u64 | 63743;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// mr r23,r30
	r23.u64 = r30.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r8,248(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82747c10
	if (ctx.cr6.lt) goto loc_82747C10;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x82747c10
	if (ctx.cr6.gt) goto loc_82747C10;
	// stb r30,11(r4)
	REX_STORE_U8(ctx.r4.u32 + 11, r30.u8);
	// stb r30,13(r4)
	REX_STORE_U8(ctx.r4.u32 + 13, r30.u8);
	// stb r30,8(r4)
	REX_STORE_U8(ctx.r4.u32 + 8, r30.u8);
	// stb r30,9(r4)
	REX_STORE_U8(ctx.r4.u32 + 9, r30.u8);
	// stb r30,10(r4)
	REX_STORE_U8(ctx.r4.u32 + 10, r30.u8);
	// stb r30,12(r4)
	REX_STORE_U8(ctx.r4.u32 + 12, r30.u8);
	// lwz r11,14836(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827474c8
	if (!ctx.cr6.eq) goto loc_827474C8;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	// bge 0x827474bc
	if (!ctx.cr0.lt) goto loc_827474BC;
	// bl 0x82725e38
	ctx.lr = 0x827474BC;
	sub_82725E38(ctx, base);
loc_827474BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r31,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_827474C8:
	// lwz r11,344(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82747508
	if (!ctx.cr6.eq) goto loc_82747508;
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
	// bge 0x827474fc
	if (!ctx.cr0.lt) goto loc_827474FC;
	// bl 0x82725e38
	ctx.lr = 0x827474FC;
	sub_82725E38(ctx, base);
loc_827474FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82747508:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r24,1
	r24.s64 = 1;
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82747530
	if (!ctx.cr6.eq) goto loc_82747530;
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82747614
	goto loc_82747614;
loc_82747530:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82747550
	if (!ctx.cr6.eq) goto loc_82747550;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,352(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 352);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,2400(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 2400);
	// bl 0x82768068
	ctx.lr = 0x82747550;
	sub_82768068(ctx, base);
loc_82747550:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82747614
	if (!ctx.cr6.eq) goto loc_82747614;
	// lwz r10,352(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82747580
	if (ctx.cr6.eq) goto loc_82747580;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x82747610
	goto loc_82747610;
loc_82747580:
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
	// bge 0x827475a8
	if (!ctx.cr0.lt) goto loc_827475A8;
	// bl 0x82725e38
	ctx.lr = 0x827475A8;
	sub_82725E38(ctx, base);
loc_827475A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x827475c4
	if (!ctx.cr6.eq) goto loc_827475C4;
	// lwz r11,14812(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14812);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82747614
	goto loc_82747614;
loc_827475C4:
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
	// bge 0x827475ec
	if (!ctx.cr0.lt) goto loc_827475EC;
	// bl 0x82725e38
	ctx.lr = 0x827475EC;
	sub_82725E38(ctx, base);
loc_827475EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82747608
	if (!ctx.cr6.eq) goto loc_82747608;
	// lwz r11,14816(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14816);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82747614
	goto loc_82747614;
loc_82747608:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r24,6,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
loc_82747610:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82747614:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274769c
	if (ctx.cr6.eq) goto loc_8274769C;
	// sth r30,14(r28)
	REX_STORE_U16(r28.u32 + 14, r30.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r30,16(r28)
	REX_STORE_U16(r28.u32 + 16, r30.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r30,18(r28)
	REX_STORE_U16(r28.u32 + 18, r30.u16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747640;
	sub_8275DD78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747650;
	sub_8275DD78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747660;
	sub_8275DD78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747670;
	sub_8275DD78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747680;
	sub_8275DD78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747690;
	sub_8275DD78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_8274769C:
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8274773c
	if (!ctx.cr6.eq) goto loc_8274773C;
	// oris r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r10,280(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827476ec
	if (ctx.cr6.eq) goto loc_827476EC;
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827476ec
	if (ctx.cr6.eq) goto loc_827476EC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8275f538
	ctx.lr = 0x827476E4;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82747c14
	if (!ctx.cr6.eq) goto loc_82747C14;
loc_827476EC:
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82747b90
	if (ctx.cr6.eq) goto loc_82747B90;
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
	// bge 0x82747728
	if (!ctx.cr0.lt) goto loc_82747728;
	// bl 0x82725e38
	ctx.lr = 0x82747728;
	sub_82725E38(ctx, base);
loc_82747728:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82747b90
	goto loc_82747B90;
loc_8274773C:
	// rlwinm r10,r10,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x827477a8
	if (!ctx.cr6.eq) goto loc_827477A8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r4,2400(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 2400);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82768068
	ctx.lr = 0x8274775C;
	sub_82768068(ctx, base);
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8274779c
	if (!ctx.cr6.eq) goto loc_8274779C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274779c
	if (!ctx.cr6.eq) goto loc_8274779C;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827477a8
	if (!ctx.cr6.eq) goto loc_827477A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82747b90
	goto loc_82747B90;
loc_8274779C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827477A8:
	// lwz r11,328(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 328);
	// lwz r25,392(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827477c4
	if (ctx.cr6.eq) goto loc_827477C4;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827477c8
	if (ctx.cr6.eq) goto loc_827477C8;
loc_827477C4:
	// mr r24,r30
	r24.u64 = r30.u64;
loc_827477C8:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274780c
	if (ctx.cr6.eq) goto loc_8274780C;
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
	// bge 0x827477fc
	if (!ctx.cr0.lt) goto loc_827477FC;
	// bl 0x82725e38
	ctx.lr = 0x827477FC;
	sub_82725E38(ctx, base);
loc_827477FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8274780C:
	// lwz r10,2164(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2164);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ori r26,r9,32768
	r26.u64 = ctx.r9.u64 | 32768;
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r8,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r6,r11,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + r29.u32);
	// extsh r30,r3
	r30.s64 = ctx.r3.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82747908
	if (ctx.cr6.lt) goto loc_82747908;
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
	// bge cr6,0x82747900
	if (!ctx.cr6.lt) goto loc_82747900;
loc_82747868:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82747894
	if (ctx.cr6.lt) goto loc_82747894;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82747884;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82747868
	if (ctx.cr6.eq) goto loc_82747868;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82747940
	goto loc_82747940;
loc_82747894:
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
loc_82747900:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82747940
	goto loc_82747940;
loc_82747908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82747910;
	sub_82725F80(ctx, base);
loc_82747910:
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
	ctx.lr = 0x82747928;
	sub_82725F80(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82747910
	if (ctx.cr6.lt) goto loc_82747910;
loc_82747940:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r23,r30
	r23.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82747c10
	if (!ctx.cr6.eq) goto loc_82747C10;
	// lwz r11,280(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82747974
	if (ctx.cr6.eq) goto loc_82747974;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8275f538
	ctx.lr = 0x8274796C;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8274779c
	if (!ctx.cr6.eq) goto loc_8274779C;
loc_82747974:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827479f4
	if (ctx.cr6.eq) goto loc_827479F4;
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
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x827479b0
	if (!ctx.cr0.lt) goto loc_827479B0;
	// bl 0x82725e38
	ctx.lr = 0x827479B0;
	sub_82725E38(ctx, base);
loc_827479B0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827479e8
	if (ctx.cr6.eq) goto loc_827479E8;
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
	// bge 0x827479e4
	if (!ctx.cr0.lt) goto loc_827479E4;
	// bl 0x82725e38
	ctx.lr = 0x827479E4;
	sub_82725E38(ctx, base);
loc_827479E4:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
loc_827479E8:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_827479F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82747b90
	if (ctx.cr6.eq) goto loc_82747B90;
	// lwz r10,2540(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2540);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82747af0
	if (ctx.cr6.lt) goto loc_82747AF0;
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
	// bge cr6,0x82747ae8
	if (!ctx.cr6.lt) goto loc_82747AE8;
loc_82747A50:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82747a7c
	if (ctx.cr6.lt) goto loc_82747A7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82747A6C;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82747a50
	if (ctx.cr6.eq) goto loc_82747A50;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82747b28
	goto loc_82747B28;
loc_82747A7C:
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
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
loc_82747AE8:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82747b28
	goto loc_82747B28;
loc_82747AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82747AF8;
	sub_82725F80(ctx, base);
loc_82747AF8:
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
	ctx.lr = 0x82747B10;
	sub_82725F80(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82747af8
	if (ctx.cr6.lt) goto loc_82747AF8;
loc_82747B28:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82747c10
	if (!ctx.cr6.eq) goto loc_82747C10;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// subfc r8,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// addi r11,r9,-30504
	ctx.r11.s64 = ctx.r9.s64 + -30504;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwzx r7,r5,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwimi r8,r7,24,5,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7000000) | (ctx.r8.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r5,r6,20,10,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r4,r5,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
loc_82747B90:
	// clrlwi r5,r23,31
	ctx.r5.u64 = r23.u32 & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747BA0;
	sub_8275DD78(ctx, base);
	// srawi r31,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r31.s64 = r23.s32 >> 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747BB4;
	sub_8275DD78(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747BC8;
	sub_8275DD78(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747BDC;
	sub_8275DD78(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747BF0;
	sub_8275DD78(ctx, base);
	// srawi r11,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r11.s64 = r31.s32 >> 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82747C04;
	sub_8275DD78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82747C10:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82747C14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8277C7B0) {
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
	ctx.lr = 0x8277C7B8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c98
	ctx.lr = 0x8277C7C0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lfd f31,-22776(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -22776);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	f27.f64 = ctx.f10.f64 * f31.f64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// fsub f26,f11,f27
	f26.f64 = ctx.f11.f64 - f27.f64;
	// lfd f0,-9920(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + -9920);
	// fmul f9,f30,f0
	ctx.f9.f64 = f30.f64 * ctx.f0.f64;
	// srawi r18,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r18.s64 = r22.s32 >> 1;
	// srawi r19,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r19.s64 = ctx.r4.s32 >> 1;
	// fsub f8,f26,f27
	ctx.f8.f64 = f26.f64 - f27.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r14,132(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r15,132(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bge cr6,0x8277c87c
	if (!ctx.cr6.lt) goto loc_8277C87C;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
loc_8277C87C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bge cr6,0x8277c888
	if (!ctx.cr6.lt) goto loc_8277C888;
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
loc_8277C888:
	// lwz r25,452(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8277c92c
	if (!ctx.cr6.gt) goto loc_8277C92C;
	// addi r27,r14,1
	r27.s64 = r14.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r25
	r29.u64 = r25.u64;
	// subf r28,r15,r22
	r28.u64 = r22.u64 - r15.u64;
	// subf r26,r25,r23
	r26.u64 = r23.u64 - r25.u64;
loc_8277C8AC:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277c8bc
	if (!ctx.cr6.lt) goto loc_8277C8BC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8277C8BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8277c8d4
	if (!ctx.cr6.gt) goto loc_8277C8D4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r26,r29
	ctx.r4.u64 = r26.u64 + r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C8D4;
	sub_826A1E70(ctx, base);
loc_8277C8D4:
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(r22.s32, r28.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// blt cr6,0x8277c8e4
	if (ctx.cr6.lt) goto loc_8277C8E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8277C8E4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8277c910
	if (!ctx.cr6.gt) goto loc_8277C910;
	// add r11,r31,r15
	ctx.r11.u64 = r31.u64 + r15.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C910;
	sub_826A1E70(ctx, base);
loc_8277C910:
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// add r29,r29,r22
	r29.u64 = r29.u64 + r22.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8277c8ac
	if (ctx.cr6.lt) goto loc_8277C8AC;
loc_8277C92C:
	// lwz r17,460(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8277ca08
	if (!ctx.cr6.gt) goto loc_8277CA08;
	// mr r28,r15
	r28.u64 = r15.u64;
	// subf r27,r15,r14
	r27.u64 = r14.u64 - r15.u64;
loc_8277C944:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x8277c95c
	if (ctx.cr6.lt) goto loc_8277C95C;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_8277C95C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277c994
	if (!ctx.cr6.gt) goto loc_8277C994;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r18
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C980;
	sub_826A1E70(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r20
	ctx.r4.u64 = r31.u64 + r20.u64;
	// add r3,r31,r9
	ctx.r3.u64 = r31.u64 + ctx.r9.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C994;
	sub_826A1E70(ctx, base);
loc_8277C994:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subf r30,r11,r18
	r30.u64 = r18.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x8277c9a8
	if (ctx.cr6.lt) goto loc_8277C9A8;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_8277C9A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277c9f4
	if (!ctx.cr6.gt) goto loc_8277C9F4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mullw r10,r6,r18
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r18.s32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r31,r9
	ctx.r4.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C9E0;
	sub_826A1E70(ctx, base);
	// lwz r3,468(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277C9F4;
	sub_826A1E70(ctx, base);
loc_8277C9F4:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8277c944
	if (ctx.cr6.lt) goto loc_8277C944;
loc_8277CA08:
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r23,r25
	ctx.r9.u64 = r25.u64 - r23.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r23,r24
	ctx.r6.u64 = r24.u64 - r23.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r16,r18,1
	r16.s64 = r18.s64 + 1;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// and r28,r3,r11
	r28.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lfd f28,32424(r10)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// subf r21,r28,r22
	r21.u64 = r22.u64 - r28.u64;
	// lfd f25,-22784(r11)
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -22784);
loc_8277CA4C:
	// cmpw cr6,r15,r22
	ctx.cr6.compare<int32_t>(r15.s32, r22.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// blt cr6,0x8277ca5c
	if (ctx.cr6.lt) goto loc_8277CA5C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8277CA5C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277cc0c
	if (!ctx.cr6.lt) goto loc_8277CC0C;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 - f26.f64;
	// fadd f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 + f27.f64;
	// fmul f29,f11,f31
	f29.f64 = ctx.f11.f64 * f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = f29.f64 / f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277CA88;
	sub_8269D370(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f30.f64, -f29.f64);
	// subfic r11,r22,1
	ctx.xer.ca = r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - r22.u64;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r9.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f30.f64, -f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f31.f64, f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f31.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r30,124(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f4.u64);
	// lwz r29,124(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + r23.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + r23.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// blt cr6,0x8277cae4
	if (ctx.cr6.lt) goto loc_8277CAE4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8277CAE4:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r6,r28,r23
	ctx.r6.u64 = r28.u64 + r23.u64;
	// subf r10,r29,r22
	ctx.r10.u64 = r22.u64 - r29.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r9,r30,r22
	ctx.r9.u64 = r22.u64 - r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - r28.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277CB28;
	sub_8277BD48(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8277cc00
	if (!ctx.cr6.eq) goto loc_8277CC00;
	// srawi r31,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r31.s64 = r28.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r30,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r30.s64 = r30.s32 >> 1;
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// subfic r11,r18,1
	ctx.xer.ca = r18.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - r18.u64;
	// subf r27,r31,r18
	r27.u64 = r18.u64 - r31.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r25,r11,r31
	r25.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r26,r10,r31
	r26.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r25,r11
	ctx.r5.u64 = r25.u64 + ctx.r11.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + ctx.r11.u64;
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(r27.s32, r19.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// blt cr6,0x8277cb84
	if (ctx.cr6.lt) goto loc_8277CB84;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8277CB84:
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r10,r30,r18
	ctx.r10.u64 = r18.u64 - r30.u64;
	// subf r9,r29,r18
	ctx.r9.u64 = r18.u64 - r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r23,r31,r10
	r23.u64 = ctx.r10.u64 - r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// subf r24,r31,r9
	r24.u64 = ctx.r9.u64 - r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277CBB4;
	sub_8277BD48(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r26,r20
	ctx.r4.u64 = r26.u64 + r20.u64;
	// add r3,r31,r8
	ctx.r3.u64 = r31.u64 + ctx.r8.u64;
	// add r5,r25,r20
	ctx.r5.u64 = r25.u64 + r20.u64;
	// add r6,r31,r20
	ctx.r6.u64 = r31.u64 + r20.u64;
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(r27.s32, r19.s32, ctx.xer);
	// blt cr6,0x8277cbdc
	if (ctx.cr6.lt) goto loc_8277CBDC;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8277CBDC:
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277CBFC;
	sub_8277BD48(ctx, base);
	// lwz r23,404(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_8277CC00:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// b 0x8277ca4c
	goto loc_8277CA4C;
loc_8277CC0C:
	// subfic r28,r15,1
	ctx.xer.ca = r15.u32 <= 1;
	r28.u64 = static_cast<uint64_t>(1) - r15.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bgt cr6,0x8277cc1c
	if (ctx.cr6.gt) goto loc_8277CC1C;
	// li r28,1
	r28.s64 = 1;
loc_8277CC1C:
	// lwz r15,404(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r28,r22
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r22.s32);
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// add r24,r11,r15
	r24.u64 = ctx.r11.u64 + r15.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// neg r19,r14
	r19.s64 = static_cast<int64_t>(-r14.u64);
	// lwz r14,396(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r21,r28,r14
	r21.u64 = r14.u64 - r28.u64;
	// lfd f24,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f24.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8277CC40:
	// cmpw cr6,r19,r14
	ctx.cr6.compare<int32_t>(r19.s32, r14.s32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// blt cr6,0x8277cc50
	if (ctx.cr6.lt) goto loc_8277CC50;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8277CC50:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277ce64
	if (!ctx.cr6.lt) goto loc_8277CE64;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 + f26.f64;
	// fsub f11,f27,f12
	ctx.f11.f64 = f27.f64 - ctx.f12.f64;
	// fmul f29,f11,f31
	f29.f64 = ctx.f11.f64 * f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = f29.f64 / f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277CC7C;
	sub_8269D370(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(r22.s32, r21.s32, ctx.xer);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f30.f64, -f29.f64);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f30.f64, -f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f31.f64, f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f31.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r29,r31
	r29.s64 = static_cast<int64_t>(-r31.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r27,r30
	r27.s64 = static_cast<int64_t>(-r30.u64);
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r22.s32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r22.s32);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + r15.u64;
	// add r4,r10,r15
	ctx.r4.u64 = ctx.r10.u64 + r15.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// blt cr6,0x8277cce0
	if (ctx.cr6.lt) goto loc_8277CCE0;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8277CCE0:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r7,r27,r22
	ctx.r7.u64 = r27.u64 + r22.u64;
	// subf r6,r28,r30
	ctx.r6.u64 = r30.u64 - r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r29,r22
	ctx.r11.u64 = r29.u64 + r22.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r10,r28,r31
	ctx.r10.u64 = r31.u64 - r28.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r24,r9
	ctx.r7.u64 = r24.u64 + ctx.r9.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// add r3,r24,r3
	ctx.r3.u64 = r24.u64 + ctx.r3.u64;
	// bl 0x8277bd48
	ctx.lr = 0x8277CD20;
	sub_8277BD48(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8277ce50
	if (!ctx.cr6.eq) goto loc_8277CE50;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subfic r10,r18,1
	ctx.xer.ca = r18.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - r18.u64;
	// srawi r8,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r8.s64 = r31.s32 >> 1;
	// srawi r7,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r7.s64 = r30.s32 >> 1;
	// mullw r11,r11,r18
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// li r26,0
	r26.s64 = 0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8277ce50
	if (!ctx.cr6.gt) goto loc_8277CE50;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r25,r29,r27
	r25.u64 = r27.u64 - r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r5,r29,r28
	ctx.r5.u64 = r29.u64 + r28.u64;
	// subf r29,r31,r30
	r29.u64 = r30.u64 - r31.u64;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r27,r31,r28
	r27.u64 = r28.u64 - r31.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// subf r31,r20,r6
	r31.u64 = ctx.r6.u64 - r20.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r4,r20,r7
	ctx.r4.u64 = ctx.r7.u64 - r20.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r30,r17,r7
	r30.u64 = ctx.r7.u64 - r17.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + r20.u64;
	// subf r3,r17,r20
	ctx.r3.u64 = r20.u64 - r17.u64;
	// subf r7,r17,r6
	ctx.r7.u64 = ctx.r6.u64 - r17.u64;
loc_8277CDB0:
	// add r6,r27,r10
	ctx.r6.u64 = r27.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r14.s32, ctx.xer);
	// bge cr6,0x8277ce50
	if (!ctx.cr6.lt) goto loc_8277CE50;
	// add r6,r29,r10
	ctx.r6.u64 = r29.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r22.s32, ctx.xer);
	// bge cr6,0x8277cde0
	if (!ctx.cr6.lt) goto loc_8277CDE0;
	// add. r6,r25,r5
	ctx.r6.u64 = r25.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x8277cde0
	if (ctx.cr0.lt) goto loc_8277CDE0;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x8277ce2c
	goto loc_8277CE2C;
loc_8277CDE0:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x8277ce1c
	if (!ctx.cr6.lt) goto loc_8277CE1C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8277ce1c
	if (ctx.cr6.lt) goto loc_8277CE1C;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f24.f64);
	// blt cr6,0x8277ce08
	if (ctx.cr6.lt) goto loc_8277CE08;
	// lbzx r6,r4,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x8277ce2c
	goto loc_8277CE2C;
loc_8277CE08:
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x8277ce2c
	goto loc_8277CE2C;
loc_8277CE1C:
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
loc_8277CE2C:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + r16.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(r26.s32, r22.s32, ctx.xer);
	// blt cr6,0x8277cdb0
	if (ctx.cr6.lt) goto loc_8277CDB0;
loc_8277CE50:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r23,r23,r22
	r23.u64 = r23.u64 + r22.u64;
	// add r24,r24,r22
	r24.u64 = r24.u64 + r22.u64;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// b 0x8277cc40
	goto loc_8277CC40;
loc_8277CE64:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce4
	ctx.lr = 0x8277CE70;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B2C28) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x827B2C30;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v46,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	r28.s64 = 1104;
	// lvsl v2,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v58,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v55,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v60,v58,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	r27.s64 = 48;
	// vperm128 v1,v61,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v59,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,96
	r26.s64 = 96;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,144
	r25.s64 = 144;
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v54,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v52,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v53,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v2,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v29,v52,v49,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v48,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v27,r6,r28
	ea = (ctx.r6.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v11,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v29,v62,v46,v3
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r8,240
	ctx.r8.s64 = 240;
	// vslh v27,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,288
	ctx.r7.s64 = 288;
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v3,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v31,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r6,336
	ctx.r6.s64 = 336;
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v23,v0,v29
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v20,v28,v7
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v18,v27,v6
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v16,v24,v4
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v15,v19,v3
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v0,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v9,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v8,v17,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v14,v25,v23
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v7,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v6,v15,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v6,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r29,r25
	ea = (r29.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r29,r6
	ea = (r29.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827C8AC0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v11,-1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x827c8be4
	if (!ctx.cr6.eq) goto loc_827C8BE4;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v57,v58,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827c8d14
	if (!ctx.cr6.gt) goto loc_827C8D14;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827C8B54:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v8,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v3,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v27,v55,v56,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vadduhm v26,v4,v7
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubshs v25,v0,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrghb v11,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v5,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vadduhm v23,v31,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v22,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v23,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v20,v11,v22
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v19,v21,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v20,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v8,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v63,v17
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827c8b54
	if (ctx.cr6.lt) goto loc_827C8B54;
	// b 0x827c8d14
	goto loc_827C8D14;
loc_827C8BE4:
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v52,v50,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v48,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827c8d14
	if (!ctx.cr6.gt) goto loc_827C8D14;
	// li r8,0
	ctx.r8.s64 = 0;
loc_827C8C34:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vslh v29,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vadduhm v26,v7,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v47,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v7,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v23,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v20,v29,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v21,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v3,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vslh v18,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrglb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v22,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v14,v24,v25
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v7,v26,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v16,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v31,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v19,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v26,v7,v14
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v25,v9,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v27,v0,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v24,v0,v21
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v22,v8,v31
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v26,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v25,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v18,v22,v24
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v7,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v31,v19,v18
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v7,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v45,v63,v17
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// stvx128 v17,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v45,v16
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// blt cr6,0x827c8c34
	if (ctx.cr6.lt) goto loc_827C8C34;
loc_827C8D14:
	// vand128 v13,v63,v30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

