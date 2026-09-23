#include "hydrothunder_funcs.5.h"

DEFINE_REX_FUNC(sub_82120600) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82120628;
	sub_82120AC0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8212062C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82120654;
	sub_82120C08(ctx, base);
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

DEFINE_REX_FUNC(sub_82129460) {
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
	ctx.lr = 0x82129468;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212948C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82125bc8
	ctx.lr = 0x821294A0;
	sub_82125BC8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82163050
	ctx.lr = 0x821294CC;
	sub_82163050(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82129558
	if (!ctx.cr6.eq) goto loc_82129558;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821294E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82129504
	if (ctx.cr6.eq) goto loc_82129504;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_821294F8:
	// bl 0x8269d1b8
	ctx.lr = 0x821294FC;
	sub_8269D1B8(ctx, base);
loc_821294FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212965c
	goto loc_8212965C;
loc_82129504:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82129548
	if (!ctx.cr0.eq) goto loc_82129548;
loc_82129538:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8269d1b8
	ctx.lr = 0x82129540;
	sub_8269D1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8212965c
	goto loc_8212965C;
loc_82129548:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// b 0x82129538
	goto loc_82129538;
loc_82129558:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82129538
	if (ctx.cr6.eq) goto loc_82129538;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8269d1b8
	ctx.lr = 0x82129568;
	sub_8269D1B8(ctx, base);
	// lbz r11,128(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821295dc
	if (ctx.cr0.eq) goto loc_821295DC;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125bc8
	ctx.lr = 0x82129580;
	sub_82125BC8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129670
	ctx.lr = 0x82129590;
	sub_82129670(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821295d4
	if (ctx.cr0.eq) goto loc_821295D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821295C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821295d4
	if (ctx.cr0.eq) goto loc_821295D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82129654
	goto loc_82129654;
loc_821295D4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821295DC;
	sub_8269D1B8(ctx, base);
loc_821295DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821295F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821294fc
	if (ctx.cr0.eq) goto loc_821294FC;
	// lbz r11,128(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82129658
	if (ctx.cr0.eq) goto loc_82129658;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82125bc8
	ctx.lr = 0x82129610;
	sub_82125BC8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82129664
	if (ctx.cr0.eq) goto loc_82129664;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821298c8
	ctx.lr = 0x82129648;
	sub_821298C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// beq 0x821294f8
	if (ctx.cr0.eq) goto loc_821294F8;
loc_82129654:
	// bl 0x8269d1b8
	ctx.lr = 0x82129658;
	sub_8269D1B8(ctx, base);
loc_82129658:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8212965C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
loc_82129664:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x821294f8
	goto loc_821294F8;
}

DEFINE_REX_FUNC(sub_82139EE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82139EE8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82126238
	ctx.lr = 0x82139EF8;
	sub_82126238(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-19164
	ctx.r4.s64 = ctx.r11.s64 + -19164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8213a1b0
	ctx.lr = 0x82139F0C;
	sub_8213A1B0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821233a0
	ctx.lr = 0x82139F14;
	sub_821233A0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120d70
	ctx.lr = 0x82139F20;
	sub_82120D70(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82139f40
	if (ctx.cr6.gt) goto loc_82139F40;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82120dc8
	ctx.lr = 0x82139F3C;
	sub_82120DC8(ctx, base);
	// b 0x82139f4c
	goto loc_82139F4C;
loc_82139F40:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// bl 0x8212a778
	ctx.lr = 0x82139F4C;
	sub_8212A778(ctx, base);
loc_82139F4C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-19144
	ctx.r4.s64 = ctx.r11.s64 + -19144;
	// bl 0x82121928
	ctx.lr = 0x82139F5C;
	sub_82121928(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82139fc0
	if (!ctx.cr0.eq) goto loc_82139FC0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82139F88:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82139F94;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82139FA4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82139FB4;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82139FB8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1d0c
	return;
loc_82139FC0:
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r31,1
	r31.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213a060
	if (!ctx.cr6.eq) goto loc_8213A060;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// bl 0x82160340
	ctx.lr = 0x8213A018;
	sub_82160340(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82160388
	ctx.lr = 0x8213A028;
	sub_82160388(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213a048
	if (ctx.cr0.eq) goto loc_8213A048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fab8
	ctx.lr = 0x8213A038;
	sub_8215FAB8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8213a048
	if (!ctx.cr6.eq) goto loc_8213A048;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8213A048:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82120ac0
	ctx.lr = 0x8213A058;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8213A060;
	sub_8215F0F0(ctx, base);
loc_8213A060:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213a144
	if (ctx.cr0.eq) goto loc_8213A144;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8213a07c
	if (!ctx.cr6.lt) goto loc_8213A07C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_8213A07C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8213a090
	if (!ctx.cr6.lt) goto loc_8213A090;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8213A090:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823eda18
	ctx.lr = 0x8213A098;
	sub_823EDA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq 0x82139f88
	if (ctx.cr0.eq) goto loc_82139F88;
	// stb r30,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r30.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r30,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x82120ac0
	ctx.lr = 0x8213A0CC;
	sub_82120AC0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82177570
	ctx.lr = 0x8213A0DC;
	sub_82177570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bne 0x8213a138
	if (!ctx.cr0.eq) goto loc_8213A138;
	// bl 0x82120ac0
	ctx.lr = 0x8213A0F4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8213A0FC;
	sub_8215F0F0(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8213A100:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8213A110;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8213A120;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8213A130;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82139fb8
	goto loc_82139FB8;
loc_8213A138:
	// bl 0x82120ac0
	ctx.lr = 0x8213A13C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8213A144;
	sub_8215F0F0(ctx, base);
loc_8213A144:
	// li r31,1
	r31.s64 = 1;
	// b 0x8213a100
	goto loc_8213A100;
}

DEFINE_REX_FUNC(sub_8214BC60) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r9,36(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 36);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214bcb0
	if (!ctx.cr6.eq) goto loc_8214BCB0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214bcb0
	if (ctx.cr6.eq) goto loc_8214BCB0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BCB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BCB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

DEFINE_REX_FUNC(sub_8214EB10) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x8214EB34;
	sub_8212EAE0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eb78
	if (ctx.cr6.eq) goto loc_8214EB78;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EB78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eba0
	if (ctx.cr6.eq) goto loc_8214EBA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EBA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ebc0
	if (ctx.cr6.eq) goto loc_8214EBC0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EBC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214EBC8;
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

DEFINE_REX_FUNC(sub_82154CA0) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-9348
	ctx.r11.s64 = ctx.r11.s64 + -9348;
	// addi r10,r10,-9404
	ctx.r10.s64 = ctx.r10.s64 + -9404;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x82154cd8
	if (ctx.cr0.eq) goto loc_82154CD8;
	// bl 0x8269ce98
	ctx.lr = 0x82154CD8;
	sub_8269CE98(ctx, base);
loc_82154CD8:
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

DEFINE_REX_FUNC(sub_82156970) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82156D98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821578F0) {
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
	// lwz r3,704(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157914
	if (ctx.cr6.eq) goto loc_82157914;
	// bl 0x8269d1b8
	ctx.lr = 0x82157914;
	sub_8269D1B8(ctx, base);
loc_82157914:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82157938
	if (ctx.cr6.eq) goto loc_82157938;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82157938:
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

DEFINE_REX_FUNC(sub_8215AAB8) {
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
	ctx.lr = 0x8215AADC;
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
	ctx.lr = 0x8215AAF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6224(r10)
	REX_STORE_U32(ctx.r10.u32 + 6224, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8215C448) {
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
	ctx.lr = 0x8215C450;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822f66b0
	ctx.lr = 0x8215C464;
	sub_822F66B0(ctx, base);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r27,6232(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 6232);
	// lwz r31,13392(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 13392);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne cr6,0x8215c4b8
	if (!ctx.cr6.eq) goto loc_8215C4B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822f66b0
	ctx.lr = 0x8215C48C;
	sub_822F66B0(ctx, base);
	// lwz r11,13392(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215c4ac
	if (!ctx.cr6.eq) goto loc_8215C4AC;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-10928(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10928);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-10928(r10)
	REX_STORE_U32(ctx.r10.u32 + -10928, ctx.r11.u32);
	// stw r11,13392(r30)
	REX_STORE_U32(r30.u32 + 13392, ctx.r11.u32);
loc_8215C4AC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822f6700
	ctx.lr = 0x8215C4B4;
	sub_822F6700(ctx, base);
	// lwz r31,13392(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 13392);
loc_8215C4B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8215c4d8
	if (!ctx.cr6.lt) goto loc_8215C4D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8215c4dc
	goto loc_8215C4DC;
loc_8215C4D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215C4DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215c518
	if (!ctx.cr6.eq) goto loc_8215C518;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215c518
	if (ctx.cr0.eq) goto loc_8215C518;
	// bl 0x822f6940
	ctx.lr = 0x8215C4F4;
	sub_822F6940(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8215c510
	if (!ctx.cr6.lt) goto loc_8215C510;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8215c51c
	goto loc_8215C51C;
loc_8215C510:
	// li r31,0
	r31.s64 = 0;
	// b 0x8215c51c
	goto loc_8215C51C;
loc_8215C518:
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8215C51C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8215c568
	if (!ctx.cr6.eq) goto loc_8215C568;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8215c534
	if (ctx.cr6.eq) goto loc_8215C534;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x8215c568
	goto loc_8215C568;
loc_8215C534:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215c580
	ctx.lr = 0x8215C540;
	sub_8215C580(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8215c550
	if (!ctx.cr6.eq) goto loc_8215C550;
	// bl 0x8269f008
	ctx.lr = 0x8215C54C;
	sub_8269F008(ctx, base);
	// b 0x8215c568
	goto loc_8215C568;
loc_8215C550:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,6232(r28)
	REX_STORE_U32(r28.u32 + 6232, r31.u32);
	// bl 0x8215cbf0
	ctx.lr = 0x8215C560;
	sub_8215CBF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f6ac8
	ctx.lr = 0x8215C568;
	sub_822F6AC8(ctx, base);
loc_8215C568:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822f6700
	ctx.lr = 0x8215C570;
	sub_822F6700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821678F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82167934
	if (!ctx.cr6.gt) goto loc_82167934;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82167934
	if (!ctx.cr6.eq) goto loc_82167934;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82167950
	goto loc_82167950;
loc_82167934:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
	// addi r3,r10,24568
	ctx.r3.s64 = ctx.r10.s64 + 24568;
	// li r5,249
	ctx.r5.s64 = 249;
	// bl 0x821231d0
	ctx.lr = 0x8216794C;
	sub_821231D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82167950:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216798c
	if (ctx.cr0.eq) goto loc_8216798C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8216798C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216D138) {
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
	ctx.lr = 0x8216D140;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// addi r28,r3,112
	r28.s64 = ctx.r3.s64 + 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216D16C;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216D178;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// addi r27,r31,124
	r27.s64 = r31.s64 + 124;
	// addi r26,r31,125
	r26.s64 = r31.s64 + 125;
	// stb r30,124(r31)
	REX_STORE_U8(r31.u32 + 124, r30.u8);
	// addi r25,r31,126
	r25.s64 = r31.s64 + 126;
	// stb r30,125(r31)
	REX_STORE_U8(r31.u32 + 125, r30.u8);
	// addi r24,r31,128
	r24.s64 = r31.s64 + 128;
	// stb r30,126(r31)
	REX_STORE_U8(r31.u32 + 126, r30.u8);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r31,132
	r22.s64 = r31.s64 + 132;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// li r23,15
	r23.s64 = 15;
loc_8216D1B8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8216d570
	ctx.lr = 0x8216D1C0;
	sub_8216D570(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r22,r22,24
	r22.s64 = r22.s64 + 24;
	// bge 0x8216d1b8
	if (!ctx.cr0.lt) goto loc_8216D1B8;
	// addi r20,r31,540
	r20.s64 = r31.s64 + 540;
	// li r23,1
	r23.s64 = 1;
	// mr r22,r20
	r22.u64 = r20.u64;
loc_8216D1D8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8216d5e0
	ctx.lr = 0x8216D1E0;
	sub_8216D5E0(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r22,r22,24
	r22.s64 = r22.s64 + 24;
	// bge 0x8216d1d8
	if (!ctx.cr0.lt) goto loc_8216D1D8;
	// addi r22,r31,588
	r22.s64 = r31.s64 + 588;
	// li r23,7
	r23.s64 = 7;
loc_8216D1F4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8216d650
	ctx.lr = 0x8216D1FC;
	sub_8216D650(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r22,r22,12
	r22.s64 = r22.s64 + 12;
	// bge 0x8216d1f4
	if (!ctx.cr0.lt) goto loc_8216D1F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,684(r31)
	REX_STORE_U32(r31.u32 + 684, r30.u32);
	// addi r23,r31,692
	r23.s64 = r31.s64 + 692;
	// stw r11,688(r31)
	REX_STORE_U32(r31.u32 + 688, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8216fb28
	ctx.lr = 0x8216D220;
	sub_8216FB28(ctx, base);
	// stb r21,704(r31)
	REX_STORE_U8(r31.u32 + 704, r21.u8);
	// stb r30,705(r31)
	REX_STORE_U8(r31.u32 + 705, r30.u8);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// lwz r3,6124(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D24C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6124(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6124);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,25380
	ctx.r4.s64 = ctx.r11.s64 + 25380;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D26C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6124(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6124);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r11,25396
	ctx.r4.s64 = ctx.r11.s64 + 25396;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D28C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6124(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6124);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f2,232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r4,r10,25408
	ctx.r4.s64 = ctx.r10.s64 + 25408;
	// lfs f3,-7264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7264);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D2BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,580(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfs f13,556(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,228(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r10,25424
	ctx.r4.s64 = ctx.r10.s64 + 25424;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8216D304;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d314
	if (ctx.cr0.eq) goto loc_8216D314;
	// bl 0x821d2c70
	ctx.lr = 0x8216D310;
	sub_821D2C70(ctx, base);
	// b 0x8216d318
	goto loc_8216D318;
loc_8216D314:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8216D318:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x8216d35c
	if (!ctx.cr6.lt) goto loc_8216D35C;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,10240
	ctx.r3.s64 = 10240;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D334;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// bl 0x826a1e70
	ctx.lr = 0x8216D348;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D350;
	sub_8269D1B8(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_8216D35C:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// li r28,10000
	r28.s64 = 10000;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x8216d3a0
	if (!ctx.cr6.lt) goto loc_8216D3A0;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,43392
	ctx.r3.u64 = ctx.r3.u64 | 43392;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D37C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// bl 0x826a1e70
	ctx.lr = 0x8216D390;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D398;
	sub_8269D1B8(ctx, base);
	// stw r30,0(r20)
	REX_STORE_U32(r20.u32 + 0, r30.u32);
	// stw r28,8(r20)
	REX_STORE_U32(r20.u32 + 8, r28.u32);
loc_8216D3A0:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r30,r31,552
	r30.s64 = r31.s64 + 552;
	// li r29,30000
	r29.s64 = 30000;
	// cmpwi cr6,r11,30000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30000, ctx.xer);
	// bge cr6,0x8216d3e8
	if (!ctx.cr6.lt) goto loc_8216D3E8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D3C4;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x8216D3D8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D3E0;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_8216D3E8:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r30,r31,564
	r30.s64 = r31.s64 + 564;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x8216d42c
	if (!ctx.cr6.lt) goto loc_8216D42C;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,43392
	ctx.r3.u64 = ctx.r3.u64 | 43392;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D408;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// bl 0x826a1e70
	ctx.lr = 0x8216D41C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D424;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
loc_8216D42C:
	// lwz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r30,r31,576
	r30.s64 = r31.s64 + 576;
	// cmpwi cr6,r11,30000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30000, ctx.xer);
	// bge cr6,0x8216d470
	if (!ctx.cr6.lt) goto loc_8216D470;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D44C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x8216D460;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D468;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_8216D470:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x8216d4b4
	if (!ctx.cr6.lt) goto loc_8216D4B4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x8269d1d0
	ctx.lr = 0x8216D48C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a1e70
	ctx.lr = 0x8216D4A0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D4A8;
	sub_8269D1B8(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
loc_8216D4B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216e100
	ctx.lr = 0x8216D4BC;
	sub_8216E100(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,516
	ctx.r3.s64 = r31.s64 + 516;
	// bl 0x826a2e60
	ctx.lr = 0x8216D4CC;
	sub_826A2E60(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D4E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,-12064
	ctx.r4.s64 = ctx.r10.s64 + -12064;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8218DE70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f10,15048(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
loc_8218DEAC:
	// lwz r10,100(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lwz r5,104(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8218dfd4
	if (!ctx.cr6.eq) goto loc_8218DFD4;
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
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
	// ble cr6,0x8218df94
	if (!ctx.cr6.gt) goto loc_8218DF94;
	// lfs f9,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8218df10
	if (!ctx.cr6.lt) goto loc_8218DF10;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f0.f64)));
	// b 0x8218df1c
	goto loc_8218DF1C;
loc_8218DF10:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fnmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f0.f64)));
loc_8218DF1C:
	// lfs f9,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f13,f11,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
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
	// b 0x8218dfd0
	goto loc_8218DFD0;
loc_8218DF94:
	// lfs f12,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f12,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
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
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,296(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_8218DFD0:
	// stfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8218DFD4:
	// lwz r10,96(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8218deac
	if (ctx.cr6.lt) goto loc_8218DEAC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219ACD8) {
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
	ctx.lr = 0x8219ACE0;
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
	// bne cr6,0x8219ad28
	if (!ctx.cr6.eq) goto loc_8219AD28;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8219AD10:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8219AD14:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8219AD20:
	// bl 0x8219b160
	ctx.lr = 0x8219AD24;
	sub_8219B160(ctx, base);
	// b 0x8219ae84
	goto loc_8219AE84;
loc_8219AD28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219ad54
	if (!ctx.cr6.eq) goto loc_8219AD54;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AD44;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219ae68
	if (!ctx.cr0.lt) goto loc_8219AE68;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8219ad10
	goto loc_8219AD10;
loc_8219AD54:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219ad84
	if (!ctx.cr6.eq) goto loc_8219AD84;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219AD6C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219ae68
	if (!ctx.cr0.lt) goto loc_8219AE68;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8219ad14
	goto loc_8219AD14;
loc_8219AD84:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AD94;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219adf4
	if (!ctx.cr0.lt) goto loc_8219ADF4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219b6a8
	ctx.lr = 0x8219ADA8;
	sub_8219B6A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219ADB8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219adf4
	if (!ctx.cr0.lt) goto loc_8219ADF4;
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
	// lbz r11,73(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219ade8
	if (ctx.cr0.eq) goto loc_8219ADE8;
loc_8219ADE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8219ad20
	goto loc_8219AD20;
loc_8219ADE8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8219ADEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8219ad20
	goto loc_8219AD20;
loc_8219ADF4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AE00;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219ae68
	if (!ctx.cr0.lt) goto loc_8219AE68;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82150a10
	ctx.lr = 0x8219AE14;
	sub_82150A10(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219ae3c
	if (ctx.cr6.eq) goto loc_8219AE3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219AE34;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219ae68
	if (!ctx.cr0.lt) goto loc_8219AE68;
loc_8219AE3C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,73(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219ae60
	if (ctx.cr0.eq) goto loc_8219AE60;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8219ade0
	goto loc_8219ADE0;
loc_8219AE60:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8219adec
	goto loc_8219ADEC;
loc_8219AE68:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219b048
	ctx.lr = 0x8219AE78;
	sub_8219B048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8219AE84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A4800) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3af8
	sub_821A3AF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5C88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821A5CB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a5cb4
	if (!ctx.cr6.eq) goto loc_821A5CB4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x821A5CD8;
	sub_82120C08(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

DEFINE_REX_FUNC(sub_821A77B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7A10) {
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
	ctx.lr = 0x821A7A18;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,68(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r25,r11,-2544
	r25.s64 = ctx.r11.s64 + -2544;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,156(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 156);
	// addis r30,r25,4
	r30.s64 = r25.s64 + 262144;
	// addi r24,r10,-25252
	r24.s64 = ctx.r10.s64 + -25252;
	// addi r23,r11,-25320
	r23.s64 = ctx.r11.s64 + -25320;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x821a7a5c
	if (ctx.cr6.gt) goto loc_821A7A5C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A7A5C;
	sub_821231D0(ctx, base);
loc_821A7A5C:
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,156(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a7aac
	if (!ctx.cr6.gt) goto loc_821A7AAC;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
loc_821A7A7C:
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// sthu r9,2(r30)
	ea = 2 + r30.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	r30.u32 = ea;
	// lwzu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r30)
	ea = 2 + r30.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	r30.u32 = ea;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lwz r9,156(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 156);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a7a7c
	if (ctx.cr6.lt) goto loc_821A7A7C;
loc_821A7AAC:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,136(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x821A7AD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7AF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r28,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, r28.u8);
	// stb r28,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, r28.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r28,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, r28.u8);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173638
	ctx.lr = 0x821A7B30;
	sub_82173638(ctx, base);
	// lwz r27,68(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r28,6092(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,132(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a7b54
	if (ctx.cr6.gt) goto loc_821A7B54;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A7B54;
	sub_821231D0(ctx, base);
loc_821A7B54:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r26,16
	r26.s64 = 16;
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r9,2
	ctx.r9.s64 = 2;
	// addis r8,r25,4
	ctx.r8.s64 = r25.s64 + 262144;
	// lwz r10,128(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,156(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 156);
	// lwz r6,132(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7B90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7BA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173638
	ctx.lr = 0x821A7BBC;
	sub_82173638(ctx, base);
	// lwz r29,68(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r28,6092(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a7be0
	if (ctx.cr6.gt) goto loc_821A7BE0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A7BE0;
	sub_821231D0(ctx, base);
loc_821A7BE0:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addis r8,r25,4
	ctx.r8.s64 = r25.s64 + 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,128(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 128);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r7,156(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 156);
	// lwz r6,132(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821B6FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B7000) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15072
	ctx.r3.s64 = ctx.r11.s64 + -15072;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B7878) {
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
	ctx.lr = 0x821B7880;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x821b70f0
	ctx.lr = 0x821B7898;
	sub_821B70F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r27,172(r31)
	REX_STORE_U32(r31.u32 + 172, r27.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-20424
	ctx.r10.s64 = ctx.r10.s64 + -20424;
	// addi r9,r9,-20376
	ctx.r9.s64 = ctx.r9.s64 + -20376;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,1048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// addi r11,r10,22008
	ctx.r11.s64 = ctx.r10.s64 + 22008;
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r30,r31,164
	r30.s64 = r31.s64 + 164;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r26,r31,168
	r26.s64 = r31.s64 + 168;
	// bl 0x822f6280
	ctx.lr = 0x821B78E8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b7918
	if (ctx.cr0.eq) goto loc_821B7918;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20760
	ctx.r4.s64 = ctx.r11.s64 + -20760;
	// bl 0x82120600
	ctx.lr = 0x821B7900;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821a0530
	ctx.lr = 0x821B7914;
	sub_821A0530(ctx, base);
	// b 0x821b791c
	goto loc_821B791C;
loc_821B7918:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B791C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B7930;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B793C;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B7944;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,-13900
	r25.s64 = ctx.r11.s64 + -13900;
	// beq 0x821b796c
	if (ctx.cr0.eq) goto loc_821B796C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b7970
	goto loc_821B7970;
loc_821B796C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B7970:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r27,33(r30)
	REX_STORE_U8(r30.u32 + 33, r27.u8);
	// beq 0x821b7994
	if (ctx.cr0.eq) goto loc_821B7994;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B7994;
	sub_82120AC0(ctx, base);
loc_821B7994:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B79AC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b79dc
	if (ctx.cr0.eq) goto loc_821B79DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-20744
	ctx.r4.s64 = ctx.r11.s64 + -20744;
	// bl 0x82120600
	ctx.lr = 0x821B79C4;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x821a0530
	ctx.lr = 0x821B79D8;
	sub_821A0530(ctx, base);
	// b 0x821b79e0
	goto loc_821B79E0;
loc_821B79DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B79E0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B79F0;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B79FC;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B7A04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7a24
	if (ctx.cr0.eq) goto loc_821B7A24;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b7a28
	goto loc_821B7A28;
loc_821B7A24:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B7A28:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r27,33(r30)
	REX_STORE_U8(r30.u32 + 33, r27.u8);
	// beq 0x821b7a48
	if (ctx.cr0.eq) goto loc_821B7A48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821B7A48;
	sub_82120AC0(ctx, base);
loc_821B7A48:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B7A50;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7a68
	if (ctx.cr0.eq) goto loc_821B7A68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B7A60;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b7a6c
	goto loc_821B7A6C;
loc_821B7A68:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B7A6C:
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B7A7C;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B7A84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7a9c
	if (ctx.cr0.eq) goto loc_821B7A9C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821B7A94;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b7aa0
	goto loc_821B7AA0;
loc_821B7A9C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B7AA0:
	// stw r4,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B7AAC;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B7AB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7ae0
	if (ctx.cr0.eq) goto loc_821B7AE0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,32408
	ctx.r11.s64 = ctx.r11.s64 + 32408;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821B7AD8;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b7ae4
	goto loc_821B7AE4;
loc_821B7AE0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B7AE4:
	// stw r4,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B7AF0;
	sub_821D3988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,152(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x822f6280
	ctx.lr = 0x821B7B0C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7b30
	if (ctx.cr0.eq) goto loc_821B7B30;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821b7b34
	goto loc_821B7B34;
loc_821B7B30:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B7B34:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,156(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B7B54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b7b78
	if (ctx.cr0.eq) goto loc_821B7B78;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821b7b7c
	goto loc_821B7B7C;
loc_821B7B78:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B7B7C:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x821a1ff8
	ctx.lr = 0x821B7B8C;
	sub_821A1FF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x821e00d0
	ctx.lr = 0x821B7B98;
	sub_821E00D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821CEA68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14660
	ctx.r3.s64 = ctx.r11.s64 + -14660;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CECE0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CED14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x821ced3c
	if (!ctx.cr6.gt) goto loc_821CED3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ced3c
	if (!ctx.cr6.eq) goto loc_821CED3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x821CED3C;
	sub_821B2D80(ctx, base);
loc_821CED3C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,6208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CED5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821D5508) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5988) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,132(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,10496
	ctx.r11.s64 = ctx.r11.s64 + 10496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821d59d4
	if (ctx.cr6.eq) goto loc_821D59D4;
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
	ctx.lr = 0x821D59D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D59D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120ac0
	ctx.lr = 0x821D59E4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821D59EC;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d59fc
	if (ctx.cr0.eq) goto loc_821D59FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D59FC;
	sub_8269CE98(ctx, base);
loc_821D59FC:
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

DEFINE_REX_FUNC(sub_821D9890) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D9898;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x821d9924
	if (!ctx.cr6.lt) goto loc_821D9924;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821d98cc
	if (ctx.cr6.eq) goto loc_821D98CC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x821D98C4;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821d98d0
	goto loc_821D98D0;
loc_821D98CC:
	// li r30,0
	r30.s64 = 0;
loc_821D98D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821d9900
	if (!ctx.cr6.gt) goto loc_821D9900;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D98E4:
	// add. r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d98f8
	if (ctx.cr0.eq) goto loc_821D98F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_821D98F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821d98e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D98E4;
loc_821D9900:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d9914
	if (ctx.cr0.eq) goto loc_821D9914;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821D9914;
	sub_8269D1B8(ctx, base);
loc_821D9914:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
loc_821D9924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DCC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm. r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821dcc8c
	if (!ctx.cr0.gt) goto loc_821DCC8C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821DCC50:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r6,84(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// stw r7,100(r8)
	REX_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821dcc50
	if (ctx.cr6.lt) goto loc_821DCC50;
loc_821DCC8C:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm. r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821dcce4
	if (!ctx.cr0.gt) goto loc_821DCCE4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821DCCAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r7,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,28(r8)
	REX_STORE_U8(ctx.r8.u32 + 28, ctx.r7.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821dccac
	if (ctx.cr6.lt) goto loc_821DCCAC;
loc_821DCCE4:
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r10,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E30B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E30E0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821e30e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E30E0;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3104
	if (ctx.cr6.eq) goto loc_821E3104;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821884b0
	ctx.lr = 0x821E3104;
	sub_821884B0(ctx, base);
loc_821E3104:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3118
	if (ctx.cr6.eq) goto loc_821E3118;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// b 0x821e3120
	goto loc_821E3120;
loc_821E3118:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
loc_821E3120:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x82191578
	ctx.lr = 0x821E312C;
	sub_82191578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e34c8
	ctx.lr = 0x821E3134;
	sub_821E34C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E7D40) {
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
	ctx.lr = 0x821E7D48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e7ea0
	if (ctx.cr6.eq) goto loc_821E7EA0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e7d8c
	if (ctx.cr6.eq) goto loc_821E7D8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,15068
	ctx.r4.s64 = ctx.r11.s64 + 15068;
	// addi r3,r10,15120
	ctx.r3.s64 = ctx.r10.s64 + 15120;
	// li r5,184
	ctx.r5.s64 = 184;
	// bl 0x821231d0
	ctx.lr = 0x821E7D8C;
	sub_821231D0(ctx, base);
loc_821E7D8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,52(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r6,r10,-2544
	ctx.r6.s64 = ctx.r10.s64 + -2544;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821ec0e0
	ctx.lr = 0x821E7DAC;
	sub_821EC0E0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821e7e10
	if (!ctx.cr6.gt) goto loc_821E7E10;
	// li r30,0
	r30.s64 = 0;
loc_821E7DB8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x823fbf60
	ctx.lr = 0x821E7DD4;
	sub_823FBF60(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_821E7DF8:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821e7df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E7DF8;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x821e7db8
	if (!ctx.cr0.eq) goto loc_821E7DB8;
loc_821E7E10:
	// ld r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 64);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// addi r10,r28,64
	ctx.r10.s64 = r28.s64 + 64;
	// ld r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 72);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// ld r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 80);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// ld r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 88);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x826a1e70
	ctx.lr = 0x821E7E9C;
	sub_826A1E70(ctx, base);
	// b 0x821e7f10
	goto loc_821E7F10;
loc_821E7EA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e7f08
	if (!ctx.cr6.gt) goto loc_821E7F08;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821E7EBC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821ec898
	ctx.lr = 0x821E7ED4;
	sub_821EC898(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82126320
	ctx.lr = 0x821E7EEC;
	sub_82126320(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7ebc
	if (ctx.cr6.lt) goto loc_821E7EBC;
loc_821E7F08:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82126320
	ctx.lr = 0x821E7F10;
	sub_82126320(ctx, base);
loc_821E7F10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821F8E40) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,76(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821f8ea0
	if (ctx.cr6.eq) goto loc_821F8EA0;
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8ea0
	if (ctx.cr0.eq) goto loc_821F8EA0;
	// lbz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f8ea0
	if (!ctx.cr0.eq) goto loc_821F8EA0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821f8f18
	goto loc_821F8F18;
loc_821F8EA0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,6204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r7,r31,44
	ctx.r7.s64 = r31.s64 + 44;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f8efc
	if (!ctx.cr6.eq) goto loc_821F8EFC;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821f8f18
	goto loc_821F8F18;
loc_821F8EFC:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821f8f0c
	if (!ctx.cr6.eq) goto loc_821F8F0C;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821f8f18
	goto loc_821F8F18;
loc_821F8F0C:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x821f8f24
	if (!ctx.cr6.eq) goto loc_821F8F24;
	// li r4,2
	ctx.r4.s64 = 2;
loc_821F8F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f8fb0
	ctx.lr = 0x821F8F20;
	sub_821F8FB0(ctx, base);
	// b 0x821f8f2c
	goto loc_821F8F2C;
loc_821F8F24:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_821F8F2C:
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

DEFINE_REX_FUNC(sub_821FFC08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822001A0) {
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
	ctx.lr = 0x822001A8;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822001f0
	if (ctx.cr6.eq) goto loc_822001F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822001f0
	if (ctx.cr6.eq) goto loc_822001F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,27960
	ctx.r3.s64 = ctx.r10.s64 + 27960;
	// li r5,575
	ctx.r5.s64 = 575;
	// bl 0x821231d0
	ctx.lr = 0x822001F0;
	sub_821231D0(ctx, base);
loc_822001F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f31.f64 = double(temp.f32);
	// ble cr6,0x822002dc
	if (!ctx.cr6.gt) goto loc_822002DC;
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// lfs f29,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f29.f64 = double(temp.f32);
loc_82200220:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// lwzx r31,r11,r29
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// beq cr6,0x8220023c
	if (ctx.cr6.eq) goto loc_8220023C;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x822002c8
	if (!ctx.cr6.eq) goto loc_822002C8;
loc_8220023C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250498
	ctx.lr = 0x82200248;
	sub_82250498(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82200258
	if (!ctx.cr6.lt) goto loc_82200258;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// b 0x822002c4
	goto loc_822002C4;
loc_82200258:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x822002c8
	if (!ctx.cr6.eq) goto loc_822002C8;
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f9,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f0,f7,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f0.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x822002c8
	if (ctx.cr6.lt) goto loc_822002C8;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x822002c8
	if (ctx.cr6.gt) goto loc_822002C8;
loc_822002C4:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_822002C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82200220
	if (ctx.cr6.lt) goto loc_82200220;
loc_822002DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_82208C68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14436
	ctx.r3.s64 = ctx.r11.s64 + -14436;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208F28) {
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
	ctx.lr = 0x82208F30;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// bl 0x8214f4f0
	ctx.lr = 0x82208F48;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r9,r9,31888
	ctx.r9.s64 = ctx.r9.s64 + 31888;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r30,72
	r29.s64 = r30.s64 + 72;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 72, temp.u32);
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 76, temp.u32);
	// addi r26,r30,80
	r26.s64 = r30.s64 + 80;
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x82208F88;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82208fbc
	if (ctx.cr0.eq) goto loc_82208FBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,31812
	ctx.r4.s64 = ctx.r11.s64 + 31812;
	// bl 0x82120600
	ctx.lr = 0x82208FA0;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x82208FB4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82208fc0
	goto loc_82208FC0;
loc_82208FBC:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_82208FC0:
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82208FD0;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82208fec
	if (ctx.cr0.eq) goto loc_82208FEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82208FEC;
	sub_82120AC0(ctx, base);
loc_82208FEC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82208FF4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209028
	if (ctx.cr0.eq) goto loc_82209028;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,31828
	ctx.r4.s64 = ctx.r11.s64 + 31828;
	// bl 0x82120600
	ctx.lr = 0x8220900C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x82209020;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8220902c
	goto loc_8220902C;
loc_82209028:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_8220902C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209038;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209054
	if (ctx.cr0.eq) goto loc_82209054;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82209054;
	sub_82120AC0(ctx, base);
loc_82209054:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8220905C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209090
	if (ctx.cr0.eq) goto loc_82209090;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// bl 0x82120600
	ctx.lr = 0x82209074;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82209088;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209094
	goto loc_82209094;
loc_82209090:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_82209094:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822090A0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822090b8
	if (ctx.cr0.eq) goto loc_822090B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x822090B8;
	sub_82120AC0(ctx, base);
loc_822090B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82217FE8) {
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
	ctx.lr = 0x82217FF0;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r6,912(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 912);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r5,128(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r10,r10,-26796
	ctx.r10.s64 = ctx.r10.s64 + -26796;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r9,r9,-26808
	ctx.r9.s64 = ctx.r9.s64 + -26808;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-26828
	ctx.r8.s64 = ctx.r8.s64 + -26828;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r30,r3,908
	r30.s64 = ctx.r3.s64 + 908;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// ble 0x822183bc
	if (!ctx.cr0.gt) goto loc_822183BC;
	// addi r10,r3,360
	ctx.r10.s64 = ctx.r3.s64 + 360;
	// lfs f30,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// addi r9,r3,468
	ctx.r9.s64 = ctx.r3.s64 + 468;
	// lfs f31,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f31.f64 = double(temp.f32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r8,r3,160
	ctx.r8.s64 = ctx.r3.s64 + 160;
	// addi r10,r3,268
	ctx.r10.s64 = ctx.r3.s64 + 268;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r9,r3,376
	ctx.r9.s64 = ctx.r3.s64 + 376;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r8,r3,484
	ctx.r8.s64 = ctx.r3.s64 + 484;
	// addi r10,r3,592
	ctx.r10.s64 = ctx.r3.s64 + 592;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r5,-26768
	ctx.r5.s64 = ctx.r5.s64 + -26768;
	// addi r6,r6,-26784
	ctx.r6.s64 = ctx.r6.s64 + -26784;
	// addi r21,r3,144
	r21.s64 = ctx.r3.s64 + 144;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r20,r3,252
	r20.s64 = ctx.r3.s64 + 252;
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// addi r14,r3,576
	r14.s64 = ctx.r3.s64 + 576;
	// li r29,0
	r29.s64 = 0;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r19,r4,22808
	r19.s64 = ctx.r4.s64 + 22808;
	// addi r18,r7,-26816
	r18.s64 = ctx.r7.s64 + -26816;
	// addi r17,r8,23052
	r17.s64 = ctx.r8.s64 + 23052;
	// addi r16,r9,16176
	r16.s64 = ctx.r9.s64 + 16176;
	// addi r15,r10,-17264
	r15.s64 = ctx.r10.s64 + -17264;
loc_822180E0:
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8215f670
	ctx.lr = 0x822180EC;
	sub_8215F670(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x822180F4;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822180F8;
	sub_8215FA30(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 900);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221810C;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82218114;
	sub_8215F2D0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221811C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82218120;
	sub_8215FA30(ctx, base);
	// lwz r11,6140(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6140);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221813C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218150;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82218154;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218168;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8221816C;
	sub_8215F990(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x82218180;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82218194
	if (!ctx.cr6.eq) goto loc_82218194;
	// lbz r27,8(r3)
	r27.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82218198
	goto loc_82218198;
loc_82218194:
	// li r27,0
	r27.s64 = 0;
loc_82218198:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x822181A8;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822181AC;
	sub_8215F990(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822181c4
	if (ctx.cr0.eq) goto loc_822181C4;
	// bl 0x822192e8
	ctx.lr = 0x822181B8;
	sub_822192E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822181c8
	if (ctx.cr0.eq) goto loc_822181C8;
loc_822181C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822181C8:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822181d8
	if (!ctx.cr0.eq) goto loc_822181D8;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_822181D8:
	// lwz r3,6140(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822181EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f12,8(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f11,12(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221822C;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822184a8
	ctx.lr = 0x82218244;
	sub_822184A8(ctx, base);
	// lfs f0,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f12,8(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f11,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221827C;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x822184a8
	ctx.lr = 0x82218294;
	sub_822184A8(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822182a8
	if (ctx.cr6.lt) goto loc_822182A8;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x822182ac
	goto loc_822182AC;
loc_822182A8:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_822182AC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x822184a8
	ctx.lr = 0x822182EC;
	sub_822184A8(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82218300
	if (ctx.cr6.lt) goto loc_82218300;
	// lwz r6,0(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 0);
	// b 0x82218304
	goto loc_82218304;
loc_82218300:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82218304:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822184a8
	ctx.lr = 0x82218344;
	sub_822184A8(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82218358
	if (ctx.cr6.lt) goto loc_82218358;
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x8221835c
	goto loc_8221835C;
loc_82218358:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8221835C:
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f13,4(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x822184a8
	ctx.lr = 0x82218398;
	sub_822184A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822180e0
	if (ctx.cr6.lt) goto loc_822180E0;
loc_822183BC:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82218468
	if (!ctx.cr6.gt) goto loc_82218468;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_822183D0:
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f670
	ctx.lr = 0x822183DC;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822183E0;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x822183F0;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82218404
	if (!ctx.cr6.eq) goto loc_82218404;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82218408
	goto loc_82218408;
loc_82218404:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82218408:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x82218430
	if (ctx.cr0.eq) goto loc_82218430;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221842C;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82218430;
	sub_8215F990(ctx, base);
loc_82218430:
	// lwz r11,876(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 876);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// stwx r28,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,876(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 876);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822183d0
	if (ctx.cr6.lt) goto loc_822183D0;
loc_82218468:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r3,r31,684
	ctx.r3.s64 = r31.s64 + 684;
	// lfs f12,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82218494;
	sub_8226BF68(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822404F0) {
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
	ctx.lr = 0x822404F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,32784
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32784, ctx.xer);
	// bne cr6,0x8224060c
	if (!ctx.cr6.eq) goto loc_8224060C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227d980
	ctx.lr = 0x82240544;
	sub_8227D980(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82240604
	if (!ctx.cr0.gt) goto loc_82240604;
	// li r31,0
	r31.s64 = 0;
loc_8224056C:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240584;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r3,r27
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, r27.u64, ctx.xer);
	// bne cr6,0x822405e0
	if (!ctx.cr6.eq) goto loc_822405E0;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r9,224(r11)
	REX_STORE_U8(ctx.r11.u32 + 224, ctx.r9.u8);
loc_822405E0:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,304
	r31.s64 = r31.s64 + 304;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822405FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8224056c
	if (ctx.cr6.lt) goto loc_8224056C;
loc_82240604:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82240610
	goto loc_82240610;
loc_8224060C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82240610:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82246FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13332
	ctx.r3.s64 = ctx.r11.s64 + -13332;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822471E8) {
	REX_FUNC_PROLOGUE();
	// b 0x82247818
	sub_82247818(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822478D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13164
	ctx.r3.s64 = ctx.r11.s64 + -13164;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248080) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,128(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82249B40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82249B48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249B6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 568);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249BC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 576);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,580(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 580);
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x82249C08;
	sub_8212EAE0(ctx, base);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r31,2
	r31.s64 = 2;
loc_82249C40:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwzu r4,4(r29)
	ea = 4 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82249c40
	if (!ctx.cr0.eq) goto loc_82249C40;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822527D0) {
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
	ctx.lr = 0x822527D8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,832(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,836(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 836);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82252824
	if (!ctx.cr6.lt) goto loc_82252824;
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f13,836(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 836, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8225280c
	if (ctx.cr6.lt) goto loc_8225280C;
	// addi r4,r30,784
	ctx.r4.s64 = r30.s64 + 784;
	// b 0x8225281c
	goto loc_8225281C;
loc_8225280C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82253010
	ctx.lr = 0x82252818;
	sub_82253010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8225281C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82252f88
	ctx.lr = 0x82252824;
	sub_82252F88(ctx, base);
loc_82252824:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// lwz r30,6056(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82252858
	if (ctx.cr6.gt) goto loc_82252858;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821231d0
	ctx.lr = 0x82252858;
	sub_821231D0(ctx, base);
loc_82252858:
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// li r5,656
	ctx.r5.s64 = 656;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82252868;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,6100(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 6100);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225295C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82252980
	if (ctx.cr0.eq) goto loc_82252980;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82252980
	if (!ctx.cr6.eq) goto loc_82252980;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82252988
	ctx.lr = 0x82252980;
	sub_82252988(ctx, base);
loc_82252980:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82260830) {
	REX_FUNC_PROLOGUE();
	// b 0x82263c60
	sub_82263C60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822609D8) {
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
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x82260A04;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x82260A10;
	sub_82120600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82260A18;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82260A24;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82125d00
	ctx.lr = 0x82260A34;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82260a8c
	if (!ctx.cr0.eq) goto loc_82260A8C;
	// addi r31,r30,220
	r31.s64 = r30.s64 + 220;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82120b20
	ctx.lr = 0x82260A54;
	sub_82120B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822702c8
	ctx.lr = 0x82260A5C;
	sub_822702C8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260A74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x8227d5e8
	ctx.lr = 0x82260A88;
	sub_8227D5E8(ctx, base);
	// b 0x82260b60
	goto loc_82260B60;
loc_82260A8C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x82125d00
	ctx.lr = 0x82260A9C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82260b40
	if (!ctx.cr0.eq) goto loc_82260B40;
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x82260AB4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260b34
	if (ctx.cr0.eq) goto loc_82260B34;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120b20
	ctx.lr = 0x82260AD0;
	sub_82120B20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x82260AE0;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260b30
	if (ctx.cr0.eq) goto loc_82260B30;
	// bl 0x8228c1d0
	ctx.lr = 0x82260AF4;
	sub_8228C1D0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,204
	ctx.r10.s64 = r30.s64 + 204;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
loc_82260B04:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,80(r10)
	ea = 80 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82260b04
	if (ctx.cr6.lt) goto loc_82260B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228c248
	ctx.lr = 0x82260B2C;
	sub_8228C248(ctx, base);
	// b 0x82260b34
	goto loc_82260B34;
loc_82260B30:
	// bl 0x8228c1d0
	ctx.lr = 0x82260B34;
	sub_8228C1D0(ctx, base);
loc_82260B34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822703c8
	ctx.lr = 0x82260B3C;
	sub_822703C8(ctx, base);
	// b 0x82260b60
	goto loc_82260B60;
loc_82260B40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x82125d00
	ctx.lr = 0x82260B50;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82260b60
	if (!ctx.cr0.eq) goto loc_82260B60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82270480
	ctx.lr = 0x82260B60;
	sub_82270480(ctx, base);
loc_82260B60:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82260B70;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82260B80;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_8226AC38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi. r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226acc8
	if (ctx.cr0.eq) goto loc_8226ACC8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8226ac5c
	if (ctx.cr6.lt) goto loc_8226AC5C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8226AC5C:
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
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226acc8
	if (ctx.cr0.eq) goto loc_8226ACC8;
	// lbz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// beq 0x8226acb0
	if (ctx.cr0.eq) goto loc_8226ACB0;
	// addi r10,r11,336
	ctx.r10.s64 = ctx.r11.s64 + 336;
	// lbz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 336);
	// lbz r9,337(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 337);
	// lbz r8,338(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 338);
	// lbz r11,339(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 339);
	// b 0x8226ad04
	goto loc_8226AD04;
loc_8226ACB0:
	// addi r10,r11,332
	ctx.r10.s64 = ctx.r11.s64 + 332;
	// lbz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 332);
	// lbz r9,333(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 333);
	// lbz r8,334(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 334);
	// lbz r11,335(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 335);
	// b 0x8226ad04
	goto loc_8226AD04;
loc_8226ACC8:
	// lbz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// beq 0x8226acf0
	if (ctx.cr0.eq) goto loc_8226ACF0;
	// addi r10,r11,328
	ctx.r10.s64 = ctx.r11.s64 + 328;
	// lbz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 328);
	// lbz r9,329(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 329);
	// lbz r8,330(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 330);
	// lbz r11,331(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 331);
	// b 0x8226ad04
	goto loc_8226AD04;
loc_8226ACF0:
	// addi r10,r11,292
	ctx.r10.s64 = ctx.r11.s64 + 292;
	// lbz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 292);
	// lbz r9,293(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 293);
	// lbz r8,294(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 294);
	// lbz r11,295(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 295);
loc_8226AD04:
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r8,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82271A58) {
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
	ctx.lr = 0x82271A60;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821678f0
	ctx.lr = 0x82271A80;
	sub_821678F0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,648(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 648);
	// addi r31,r28,648
	r31.s64 = r28.s64 + 648;
	// lwz r10,652(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 652);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82271b0c
	if (!ctx.cr0.gt) goto loc_82271B0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-4200
	r27.s64 = ctx.r11.s64 + -4200;
loc_82271AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x82271AD4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82271AD8;
	sub_8215F990(ctx, base);
	// lwz r11,632(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 632);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8226a4e8
	ctx.lr = 0x82271AEC;
	sub_8226A4E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82271ac4
	if (ctx.cr6.lt) goto loc_82271AC4;
loc_82271B0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822771E8) {
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
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277224
	if (ctx.cr6.eq) goto loc_82277224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-2856
	ctx.r4.s64 = ctx.r11.s64 + -2856;
	// addi r3,r10,-2808
	ctx.r3.s64 = ctx.r10.s64 + -2808;
	// li r5,388
	ctx.r5.s64 = 388;
	// bl 0x821231d0
	ctx.lr = 0x82277224;
	sub_821231D0(ctx, base);
loc_82277224:
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// addi r4,r30,216
	ctx.r4.s64 = r30.s64 + 216;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82277238
	if (ctx.cr6.lt) goto loc_82277238;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82277238:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x82277248;
	sub_82150FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// stw r11,324(r30)
	REX_STORE_U32(r30.u32 + 324, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82151118
	ctx.lr = 0x8227725C;
	sub_82151118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822772b8
	if (ctx.cr0.eq) goto loc_822772B8;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82277280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lfs f1,372(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82277298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822772AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lbz r10,176(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 176);
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
loc_822772B8:
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

DEFINE_REX_FUNC(sub_8227E178) {
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
	ctx.lr = 0x8227E180;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,-608
	r24.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x8227e1c8
	if (!ctx.cr6.eq) goto loc_8227E1C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8227E1C8;
	sub_821231D0(ctx, base);
loc_8227E1C8:
	// cmplwi cr6,r23,33
	ctx.cr6.compare<uint32_t>(r23.u32, 33, ctx.xer);
	// bge cr6,0x8227e1e4
	if (!ctx.cr6.lt) goto loc_8227E1E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8227E1E4;
	sub_821231D0(ctx, base);
loc_8227E1E4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32787
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32787, ctx.xer);
	// beq cr6,0x8227e204
	if (ctx.cr6.eq) goto loc_8227E204;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8227E204;
	sub_821231D0(ctx, base);
loc_8227E204:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ldx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// bl 0x8228e020
	ctx.lr = 0x8227E21C;
	sub_8228E020(ctx, base);
	// addi r6,r29,8
	ctx.r6.s64 = r29.s64 + 8;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10);
	// bl 0x8228df80
	ctx.lr = 0x8227E230;
	sub_8228DF80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lwz r8,284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// lha r11,14(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 14));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lha r11,16(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 16));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lha r11,18(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 18));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// lha r11,24(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 24));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// lbz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 28);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r7,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 28);
	// rlwinm r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r9,29(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 29);
	// lbz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 28);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8228BDD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228BDE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228beec
	if (!ctx.cr0.eq) goto loc_8228BEEC;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822889d8
	ctx.lr = 0x8228BE24;
	sub_822889D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288bb8
	ctx.lr = 0x8228BE2C;
	sub_82288BB8(ctx, base);
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x8228be64
	if (ctx.cr6.lt) goto loc_8228BE64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,-4520
	ctx.r3.s64 = ctx.r10.s64 + -4520;
	// li r5,166
	ctx.r5.s64 = 166;
	// bl 0x821231d0
	ctx.lr = 0x8228BE64;
	sub_821231D0(ctx, base);
loc_8228BE64:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r10,r31,392
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(392));
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228beec
	if (ctx.cr0.eq) goto loc_8228BEEC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8228beec
	if (!ctx.cr6.eq) goto loc_8228BEEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82288f68
	ctx.lr = 0x8228BEAC;
	sub_82288F68(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8228BEB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82288e20
	ctx.lr = 0x8228BEB8;
	sub_82288E20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bee4
	if (!ctx.cr0.eq) goto loc_8228BEE4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8228beb0
	if (ctx.cr6.lt) goto loc_8228BEB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228BED0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228beec
	if (ctx.cr0.eq) goto loc_8228BEEC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// b 0x8228bef4
	goto loc_8228BEF4;
loc_8228BEE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8228bed0
	goto loc_8228BED0;
loc_8228BEEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228af60
	ctx.lr = 0x8228BEF4;
	sub_8228AF60(ctx, base);
loc_8228BEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82292E48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r9,r10,4776
	ctx.r9.s64 = ctx.r10.s64 + 4776;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stw r9,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// lfs f12,308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// lfs f11,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stfs f11,232(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stw r10,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stw r10,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229EFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229f0a0
	if (ctx.cr0.eq) goto loc_8229F0A0;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_8229F0A0:
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4FD8) {
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
	// lfs f12,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
loc_822A4FF4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x822a5054
	if (ctx.cr6.eq) goto loc_822A5054;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// bge cr6,0x822a5040
	if (!ctx.cr6.lt) goto loc_822A5040;
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x822a5044
	goto loc_822A5044;
loc_822A5040:
	// stfs f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_822A5044:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x822a5078
	goto loc_822A5078;
loc_822A5054:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822a5070
	if (!ctx.cr6.lt) goto loc_822A5070;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x822a5074
	goto loc_822A5074;
loc_822A5070:
	// stfs f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_822A5074:
	// stfs f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_822A5078:
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
	// bne 0x822a4ff4
	if (!ctx.cr0.eq) goto loc_822A4FF4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AD788) {
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
	ctx.lr = 0x822AD790;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822ad94c
	if (ctx.cr0.lt) goto loc_822AD94C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mulli r11,r10,192
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(192));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r7,r5,32
	ctx.r7.s64 = ctx.r5.s64 + 32;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822AD7D8:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r11,28
	r29.s64 = ctx.r11.s64 + 28;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f0.f64)));
	// lfs f2,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f6,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f13.f64)));
	// lfs f10,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f6,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f0,f6,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f13,f4,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f11,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f12.f64)));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r29,8(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r3,28(r11)
	REX_STORE_U64(ctx.r11.u32 + 28, ctx.r3.u64);
	// std r29,36(r11)
	REX_STORE_U64(ctx.r11.u32 + 36, r29.u64);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f31,f31,f1
	f31.f64 = double(float(f31.f64 * ctx.f1.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f0,f8,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, f31.f64)));
	// fmadds f12,f11,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f13,f11,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f0,f5,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f12,f1,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f12.f64)));
	// fmadds f13,f1,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, ctx.f13.f64)));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U64(r30.u32 + 8);
	// ld r30,0(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 0);
	// std r30,12(r11)
	REX_STORE_U64(ctx.r11.u32 + 12, r30.u64);
	// std r3,20(r11)
	REX_STORE_U64(ctx.r11.u32 + 20, ctx.r3.u64);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// fsubs f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f12,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r3.u32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// bne 0x822ad7d8
	if (!ctx.cr0.eq) goto loc_822AD7D8;
loc_822AD94C:
	// lwz r11,792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 792);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822ada2c
	if (ctx.cr0.lt) goto loc_822ADA2C;
	// mulli r11,r29,192
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(192));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r30,r11,88
	r30.s64 = ctx.r11.s64 + 88;
loc_822AD968:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,796(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 796);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822ad980
	if (!ctx.cr6.gt) goto loc_822AD980;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD980:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad9ec
	if (ctx.cr0.eq) goto loc_822AD9EC;
	// lfs f13,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,-8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,-16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,796(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 796);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x822ad9fc
	if (!ctx.cr6.gt) goto loc_822AD9FC;
loc_822AD9EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ad458
	ctx.lr = 0x822AD9F8;
	sub_822AD458(ctx, base);
	// b 0x822ada20
	goto loc_822ADA20;
loc_822AD9FC:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ada20
	if (ctx.cr6.eq) goto loc_822ADA20;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,788(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// lwz r4,784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 784);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ADA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ADA20:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,-192
	r30.s64 = r30.s64 + -192;
	// bge 0x822ad968
	if (!ctx.cr0.lt) goto loc_822AD968;
loc_822ADA2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C33E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3808) {
	REX_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10456(r3)
	REX_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4080) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lwz r11,1168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C68C8) {
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
	ctx.lr = 0x822C68D0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2598
	ctx.r11.s64 = ctx.r4.s64 + 2598;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c690c
	if (!ctx.cr6.gt) goto loc_822C690C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C690C;
	sub_822D5B28(ctx, base);
loc_822C690C:
	// addi r11,r29,8198
	ctx.r11.s64 = r29.s64 + 8198;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822c6938
	if (ctx.cr6.eq) goto loc_822C6938;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x822c6988
	goto loc_822C6988;
loc_822C6938:
	// lwz r11,10912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10912);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c6988
	if (ctx.cr0.eq) goto loc_822C6988;
	// lwz r11,13740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13740);
	// lwz r3,13736(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13736);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c6960
	if (ctx.cr6.lt) goto loc_822C6960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822C6960;
	sub_822D8DA0(ctx, base);
loc_822C6960:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13736(r31)
	REX_STORE_U32(r31.u32 + 13736, ctx.r9.u32);
loc_822C6988:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c69b4
	if (!ctx.cr6.eq) goto loc_822C69B4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r10,0,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// b 0x822c6a40
	goto loc_822C6A40;
loc_822C69B4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822c6a54
	if (!ctx.cr6.eq) goto loc_822C6A54;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r29,48(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,0,0,19
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r29,0,0,19
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822d22f8
	ctx.lr = 0x822C6A08;
	sub_822D22F8(ctx, base);
	// rlwinm r11,r27,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r27,3
	ctx.r10.u64 = r27.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822c5db8
	ctx.lr = 0x822C6A2C;
	sub_822C5DB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822c6a54
	if (ctx.cr6.eq) goto loc_822C6A54;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_822C6A40:
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822c5db8
	ctx.lr = 0x822C6A54;
	sub_822C5DB8(ctx, base);
loc_822C6A54:
	// lwz r11,13712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13712);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r11,13712(r31)
	REX_STORE_U32(r31.u32 + 13712, ctx.r11.u32);
	// ble cr6,0x822c6a78
	if (!ctx.cr6.gt) goto loc_822C6A78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C6A78;
	sub_822D5B28(ctx, base);
loc_822C6A78:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,17920
	ctx.r11.u64 = ctx.r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x822c6ae0
	if (!ctx.cr6.eq) goto loc_822C6AE0;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x822c6ae0
	if (ctx.cr6.eq) goto loc_822C6AE0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c6ab8
	if (!ctx.cr6.gt) goto loc_822C6AB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C6AB8;
	sub_822D5B28(ctx, base);
loc_822C6AB8:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822c6ae8
	if (ctx.cr6.eq) goto loc_822C6AE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c63f0
	ctx.lr = 0x822C6ADC;
	sub_822C63F0(ctx, base);
	// b 0x822c6ae8
	goto loc_822C6AE8;
loc_822C6AE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c6298
	ctx.lr = 0x822C6AE8;
	sub_822C6298(ctx, base);
loc_822C6AE8:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c6b00
	if (!ctx.cr6.gt) goto loc_822C6B00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C6B00;
	sub_822D5B28(ctx, base);
loc_822C6B00:
	// lwz r11,13712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13712);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c6b1c
	if (!ctx.cr6.eq) goto loc_822C6B1C;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822c6b20
	if (ctx.cr6.eq) goto loc_822C6B20;
loc_822C6B1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C6B20:
	// stw r11,13716(r31)
	REX_STORE_U32(r31.u32 + 13716, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D9E28) {
	REX_FUNC_PROLOGUE();
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,12820(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 12820, ctx.r10.u32);
	// eieio 
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,13320(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 13320, ctx.r10.u32);
	// eieio 
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D9ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D9ED8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,15156
	ctx.r3.s64 = ctx.r3.s64 + 15156;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82793894
	ctx.lr = 0x822D9EEC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,15184
	ctx.r3.s64 = r31.s64 + 15184;
	// bl 0x82793894
	ctx.lr = 0x822D9EF4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,-6048
	ctx.r7.s64 = ctx.r11.s64 + -6048;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r6,r10,-7200
	ctx.r6.s64 = ctx.r10.s64 + -7200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-25048
	ctx.r4.s64 = ctx.r9.s64 + -25048;
	// lis r3,11164
	ctx.r3.s64 = 731643904;
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
	// bl 0x82793dc4
	ctx.lr = 0x822D9F24;
	__imp__VdInitializeEngines(ctx, base);
	// bl 0x82793a84
	ctx.lr = 0x822D9F28;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822d9f50
	if (ctx.cr6.eq) goto loc_822D9F50;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-20920
	ctx.r3.s64 = ctx.r11.s64 + -20920;
	// bl 0x82793df4
	ctx.lr = 0x822D9F40;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// bl 0x82793df4
	ctx.lr = 0x822D9F50;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_822D9F50:
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r29,16924(r31)
	REX_STORE_U32(r31.u32 + 16924, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24384
	ctx.r3.s64 = ctx.r11.s64 + 24384;
	// bl 0x82793db4
	ctx.lr = 0x822D9F68;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// bl 0x82793a84
	ctx.lr = 0x822D9F6C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822d9f80
	if (ctx.cr6.eq) goto loc_822D9F80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// b 0x822d9f88
	goto loc_822D9F88;
loc_822D9F80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
loc_822D9F88:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,16928
	ctx.r5.s64 = r31.s64 + 16928;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827938f4
	ctx.lr = 0x822D9FA8;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822d9fb8
	if (!ctx.cr0.lt) goto loc_822D9FB8;
loc_822D9FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822da134
	goto loc_822DA134;
loc_822D9FB8:
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d61a8
	ctx.lr = 0x822D9FC4;
	sub_822D61A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d9fb0
	if (!ctx.cr0.eq) goto loc_822D9FB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c53f0
	ctx.lr = 0x822D9FD4;
	sub_822C53F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9fb0
	if (ctx.cr0.eq) goto loc_822D9FB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de6f8
	ctx.lr = 0x822D9FE4;
	sub_822DE6F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9fb0
	if (ctx.cr0.eq) goto loc_822D9FB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c8d08
	ctx.lr = 0x822D9FF4;
	sub_822C8D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9fb0
	if (ctx.cr0.eq) goto loc_822D9FB0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21772(r31)
	REX_STORE_U32(r31.u32 + 21772, ctx.r11.u32);
	// stw r11,21776(r31)
	REX_STORE_U32(r31.u32 + 21776, ctx.r11.u32);
	// bl 0x822e5950
	ctx.lr = 0x822DA010;
	sub_822E5950(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9a70
	ctx.lr = 0x822DA01C;
	sub_822D9A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9fb0
	if (ctx.cr0.eq) goto loc_822D9FB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9790
	ctx.lr = 0x822DA02C;
	sub_822D9790(ctx, base);
	// stw r29,13724(r31)
	REX_STORE_U32(r31.u32 + 13724, r29.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f0350
	ctx.lr = 0x822DA03C;
	sub_823F0350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da058
	if (ctx.cr6.eq) goto loc_822DA058;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822da05c
	goto loc_822DA05C;
loc_822DA058:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822DA05C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da090
	if (ctx.cr6.eq) goto loc_822DA090;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x822da080
	if (!ctx.cr6.gt) goto loc_822DA080;
	// addi r10,r31,16932
	ctx.r10.s64 = r31.s64 + 16932;
	// addi r9,r31,16936
	ctx.r9.s64 = r31.s64 + 16936;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_822DA080:
	// addi r10,r31,16772
	ctx.r10.s64 = r31.s64 + 16772;
	// addi r9,r31,21788
	ctx.r9.s64 = r31.s64 + 21788;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_822DA090:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DA098;
	sub_822D5B28(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ecc18
	ctx.lr = 0x822DA0A0;
	sub_823ECC18(ctx, base);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,21800(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 21800, temp.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,21804(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 21804, temp.u32);
	// bl 0x822e19f0
	ctx.lr = 0x822DA0CC;
	sub_822E19F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e5868
	ctx.lr = 0x822DA0DC;
	sub_822E5868(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c1ad8
	ctx.lr = 0x822DA0E8;
	sub_822C1AD8(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822da108
	if (!ctx.cr6.eq) goto loc_822DA108;
	// bl 0x82793dd4
	ctx.lr = 0x822DA0FC;
	__imp__VdIsHSIOTrainingSucceeded(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
loc_822DA108:
	// bl 0x82793a84
	ctx.lr = 0x822DA10C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822da130
	if (ctx.cr6.eq) goto loc_822DA130;
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,23592
	ctx.r10.s64 = r31.s64 + 23592;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822DA128:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822da128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA128;
loc_822DA130:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822DA134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822E9028) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EA858) {
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
	// bl 0x821678f0
	ctx.lr = 0x822EA880;
	sub_821678F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f12,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f13,f1
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f12,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
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

DEFINE_REX_FUNC(sub_822F3A00) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822f3b00
	ctx.lr = 0x822F3A38;
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

DEFINE_REX_FUNC(sub_822F5A30) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9365
	ctx.r4.s64 = 613744640;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F5E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822F5E60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f5ec0
	if (ctx.cr6.eq) goto loc_822F5EC0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822F5E78:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f5e78
	if (!ctx.cr6.eq) goto loc_822F5E78;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x822F5EA0;
	sub_8269D6A8(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f5ec0
	if (ctx.cr0.eq) goto loc_822F5EC0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1bc8
	ctx.lr = 0x822F5EB8;
	sub_826A1BC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r29)
	REX_STORE_U8(r29.u32 + 8, ctx.r11.u8);
loc_822F5EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822F6B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822F6B70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822f6be4
	if (ctx.cr6.eq) goto loc_822F6BE4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6b94
	if (ctx.cr6.eq) goto loc_822F6B94;
	// bl 0x8269d770
	ctx.lr = 0x822F6B94;
	sub_8269D770(ctx, base);
loc_822F6B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822f6be4
	if (ctx.cr6.eq) goto loc_822F6BE4;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822f6bb4
	goto loc_822F6BB4;
loc_822F6BB0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_822F6BB4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822f6bb0
	if (!ctx.cr0.eq) goto loc_822F6BB0;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x822F6BCC;
	sub_8269D6A8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f6be4
	if (ctx.cr0.eq) goto loc_822F6BE4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822F6BE4;
	sub_826A1E70(ctx, base);
loc_822F6BE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FAEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822faed0
	if (!ctx.cr6.eq) goto loc_822FAED0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FAED0:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB3C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fb46c
	if (ctx.cr6.eq) goto loc_822FB46C;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,220(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,224(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// stfs f11,184(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb43c
	if (ctx.cr6.eq) goto loc_822FB43C;
	// lfs f10,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,232(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f10,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,236(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f11,240(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,184(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
loc_822FB43C:
	// lfs f11,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x822fb460
	if (!ctx.cr6.eq) goto loc_822FB460;
	// lfs f0,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822fb460
	if (!ctx.cr6.eq) goto loc_822FB460;
	// lfs f0,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x822fb46c
	if (ctx.cr6.eq) goto loc_822FB46C;
loc_822FB460:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_822FB46C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822fb48c
	if (ctx.cr6.eq) goto loc_822FB48C;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
loc_822FB48C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822fb4ac
	if (ctx.cr6.eq) goto loc_822FB4AC;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
loc_822FB4AC:
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82302080) {
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
	ctx.lr = 0x82302088;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823020B4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82310898
	ctx.lr = 0x823020C8;
	sub_82310898(ctx, base);
	// lis r11,38
	ctx.r11.s64 = 2490368;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bge cr6,0x82302110
	if (!ctx.cr6.lt) goto loc_82302110;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82302110
	if (ctx.cr6.lt) goto loc_82302110;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x823020F8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82310740
	ctx.lr = 0x8230210C;
	sub_82310740(ctx, base);
	// b 0x82302148
	goto loc_82302148;
loc_82302110:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x82340718
	ctx.lr = 0x82302118;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302138;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82310710
	ctx.lr = 0x82302148;
	sub_82310710(ctx, base);
loc_82302148:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302160;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302180;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// lis r29,27
	r29.s64 = 1769472;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// blt cr6,0x823021bc
	if (ctx.cr6.lt) goto loc_823021BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823021AC;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823021c0
	goto loc_823021C0;
loc_823021BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823021C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823108b0
	ctx.lr = 0x823021C8;
	sub_823108B0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823021E0;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302200;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// blt cr6,0x8230223c
	if (ctx.cr6.lt) goto loc_8230223C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302230;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82302240
	if (ctx.cr0.eq) goto loc_82302240;
	// b 0x8230240c
	goto loc_8230240C;
loc_8230223C:
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
loc_82302240:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302258;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// blt cr6,0x82302290
	if (ctx.cr6.lt) goto loc_82302290;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302280;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82302294
	goto loc_82302294;
loc_82302290:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82302294:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823108c8
	ctx.lr = 0x8230229C;
	sub_823108C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823022B4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823022D4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// blt cr6,0x82302308
	if (ctx.cr6.lt) goto loc_82302308;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823022FC;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230230c
	if (ctx.cr0.eq) goto loc_8230230C;
	// b 0x8230240c
	goto loc_8230240C;
loc_82302308:
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8230230C:
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82302340
	if (ctx.cr6.lt) goto loc_82302340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302330;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82302344
	goto loc_82302344;
loc_82302340:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82302344:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823108e0
	ctx.lr = 0x8230234C;
	sub_823108E0(ctx, base);
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230237c
	if (ctx.cr6.lt) goto loc_8230237C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302370;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82302380
	if (ctx.cr0.eq) goto loc_82302380;
	// b 0x8230240c
	goto loc_8230240C;
loc_8230237C:
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_82302380:
	// lis r11,62
	ctx.r11.s64 = 4063232;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823023d0
	if (ctx.cr6.lt) goto loc_823023D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823023A4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,54
	ctx.r4.s64 = r31.s64 + 54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823023C4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823023dc
	if (ctx.cr0.eq) goto loc_823023DC;
	// b 0x8230240c
	goto loc_8230240C;
loc_823023D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,52(r31)
	REX_STORE_U16(r31.u32 + 52, ctx.r11.u16);
	// sth r11,54(r31)
	REX_STORE_U16(r31.u32 + 54, ctx.r11.u16);
loc_823023DC:
	// lis r11,63
	ctx.r11.s64 = 4128768;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82302408
	if (ctx.cr6.lt) goto loc_82302408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82302400;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230240c
	if (!ctx.cr0.eq) goto loc_8230240C;
loc_82302408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230240C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823175D8) {
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
	// addi r11,r11,6196
	ctx.r11.s64 = ctx.r11.s64 + 6196;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8231761c
	if (ctx.cr6.eq) goto loc_8231761C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8231761C:
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

DEFINE_REX_FUNC(sub_82319AB0) {
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
	// lbz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82319adc
	if (ctx.cr0.eq) goto loc_82319ADC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82319b30
	goto loc_82319B30;
loc_82319ADC:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319b2c
	if (ctx.cr6.eq) goto loc_82319B2C;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82319b2c
	if (ctx.cr6.eq) goto loc_82319B2C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82319b1c
	if (!ctx.cr6.eq) goto loc_82319B1C;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm. r10,r10,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82319b1c
	if (ctx.cr0.eq) goto loc_82319B1C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8230e228
	ctx.lr = 0x82319B14;
	sub_8230E228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319b30
	if (!ctx.cr0.eq) goto loc_82319B30;
loc_82319B1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
	// b 0x82319b30
	goto loc_82319B30;
loc_82319B2C:
	// li r3,33
	ctx.r3.s64 = 33;
loc_82319B30:
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

DEFINE_REX_FUNC(sub_8231FB78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8231FB80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231fbe8
	if (ctx.cr0.eq) goto loc_8231FBE8;
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231fbe8
	if (ctx.cr0.eq) goto loc_8231FBE8;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fbbc
	if (ctx.cr6.eq) goto loc_8231FBBC;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8231fbc0
	goto loc_8231FBC0;
loc_8231FBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231FBC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82330398
	ctx.lr = 0x8231FBC8;
	sub_82330398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231fbe8
	if (!ctx.cr0.eq) goto loc_8231FBE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fbe8
	if (ctx.cr6.eq) goto loc_8231FBE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8232fcf0
	ctx.lr = 0x8231FBE8;
	sub_8232FCF0(ctx, base);
loc_8231FBE8:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8231fc4c
	if (!ctx.cr0.eq) goto loc_8231FC4C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231fc4c
	if (!ctx.cr0.eq) goto loc_8231FC4C;
	// lwz r31,128(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 128);
	// addi r29,r28,128
	r29.s64 = r28.s64 + 128;
	// b 0x8231fc38
	goto loc_8231FC38;
loc_8231FC08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// bne cr6,0x8231fc18
	if (!ctx.cr6.eq) goto loc_8231FC18;
	// li r30,0
	r30.s64 = 0;
loc_8231FC18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82312e10
	ctx.lr = 0x8231FC20;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231fc94
	if (!ctx.cr0.eq) goto loc_8231FC94;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8231FC38:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8231fc08
	if (!ctx.cr6.eq) goto loc_8231FC08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r28)
	REX_STORE_U32(r28.u32 + 88, ctx.r11.u32);
	// b 0x8231fc90
	goto loc_8231FC90;
loc_8231FC4C:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fc80
	if (ctx.cr6.eq) goto loc_8231FC80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fc80
	if (ctx.cr6.eq) goto loc_8231FC80;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,64(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x8231FC80;
	sub_822F7C10(ctx, base);
loc_8231FC80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82312e10
	ctx.lr = 0x8231FC88;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231fc94
	if (!ctx.cr0.eq) goto loc_8231FC94;
loc_8231FC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231FC94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82329B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// b 0x82329b84
	goto loc_82329B84;
loc_82329B74:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82329b8c
	if (ctx.cr6.eq) goto loc_82329B8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82329B84:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82329b74
	if (!ctx.cr6.eq) goto loc_82329B74;
loc_82329B8C:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329bac
	if (ctx.cr6.eq) goto loc_82329BAC;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
loc_82329BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232CC40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8232cca0
	if (ctx.cr6.eq) goto loc_8232CCA0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8356
	ctx.r5.s64 = ctx.r10.s64 + 8356;
	// li r6,69
	ctx.r6.s64 = 69;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8232CC90;
	sub_82330E40(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,44
	ctx.r3.s64 = 44;
	// beq 0x8232cca4
	if (ctx.cr0.eq) goto loc_8232CCA4;
loc_8232CCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232CCA4:
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

DEFINE_REX_FUNC(sub_8232F4D8) {
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
	ctx.lr = 0x8232F4E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82332760
	ctx.lr = 0x8232F500;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f524
	if (!ctx.cr6.eq) goto loc_8232F524;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
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
	// bl 0x82338c70
	ctx.lr = 0x8232F524;
	sub_82338C70(ctx, base);
loc_8232F524:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82330150) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82351018
	ctx.lr = 0x82330174;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233018c
	if (!ctx.cr6.eq) goto loc_8233018C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82351b88
	ctx.lr = 0x8233018C;
	sub_82351B88(ctx, base);
loc_8233018C:
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

DEFINE_REX_FUNC(sub_82334338) {
	REX_FUNC_PROLOGUE();
	// lwz r11,25576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 25576);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82334354
	if (!ctx.cr6.eq) goto loc_82334354;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82334354:
	// addi r10,r10,25572
	ctx.r10.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82334360:
	// lwz r9,564(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82334370
	if (!ctx.cr6.eq) goto loc_82334370;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82334370:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82334384
	if (!ctx.cr6.eq) goto loc_82334384;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82334384:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82334360
	if (!ctx.cr6.eq) goto loc_82334360;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233D060) {
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
	ctx.lr = 0x8233D068;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r26,8
	r26.s64 = 8;
	// li r19,1
	r19.s64 = 1;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r24,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// stb r24,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, r24.u8);
	// stb r19,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r19.u8);
	// blt cr6,0x8233e074
	if (ctx.cr6.lt) goto loc_8233E074;
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bge cr6,0x8233e074
	if (!ctx.cr6.lt) goto loc_8233E074;
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d0fc
	if (ctx.cr6.eq) goto loc_8233D0FC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233D0E4;
	sub_8233CA70(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233D0FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823379a8
	ctx.lr = 0x8233D104;
	sub_823379A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// addi r27,r31,1184
	r27.s64 = r31.s64 + 1184;
	// lwz r10,1184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1184);
	// addi r23,r31,1188
	r23.s64 = r31.s64 + 1188;
	// lwz r9,1188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x8233e398
	ctx.lr = 0x8233D140;
	sub_8233E398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1180);
	// bl 0x82338988
	ctx.lr = 0x8233D14C;
	sub_82338988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233d1fc
	if (ctx.cr6.eq) goto loc_8233D1FC;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,22056(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8233d190
	if (!ctx.cr6.eq) goto loc_8233D190;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D190:
	// lwz r10,1212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1212);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// lwz r7,1216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// divwu r30,r7,r10
	r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// lwz r7,1200(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,1204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1204);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bctrl 
	ctx.lr = 0x8233D1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233d268
	if (ctx.cr6.eq) goto loc_8233D268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82336d78
	ctx.lr = 0x8233D1F8;
	sub_82336D78(ctx, base);
	// b 0x8233d268
	goto loc_8233D268;
loc_8233D1FC:
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233d268
	if (ctx.cr6.eq) goto loc_8233D268;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lwz r7,1200(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8233d22c
	if (!ctx.cr6.eq) goto loc_8233D22C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D22C:
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r9,1212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1212);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r10,1216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,1204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1204);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D268:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r29,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// li r25,6
	r25.s64 = 6;
	// lfs f30,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f30.f64 = double(temp.f32);
	// lis r20,-32129
	r20.s64 = -2105606144;
	// lfs f29,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	f29.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r22,r11,8872
	r22.s64 = ctx.r11.s64 + 8872;
	// beq cr6,0x8233d410
	if (ctx.cr6.eq) goto loc_8233D410;
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233d2b0
	if (ctx.cr6.eq) goto loc_8233D2B0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8233d410
	if (!ctx.cr6.eq) goto loc_8233D410;
loc_8233D2B0:
	// lwz r11,23036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d410
	if (!ctx.cr6.eq) goto loc_8233D410;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6378
	ctx.r6.s64 = 6378;
	// ori r4,r4,1516
	ctx.r4.u64 = ctx.r4.u64 | 1516;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8233D2DC;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d2ec
	if (ctx.cr6.eq) goto loc_8233D2EC;
	// bl 0x82336178
	ctx.lr = 0x8233D2E8;
	sub_82336178(ctx, base);
	// b 0x8233d2f0
	goto loc_8233D2F0;
loc_8233D2EC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D2F0:
	// stw r3,23036(r31)
	REX_STORE_U32(r31.u32 + 23036, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d320
	if (!ctx.cr6.eq) goto loc_8233D320;
loc_8233D2FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233D308;
	sub_8233CA70(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233D320:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,22056(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// lwz r5,0(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r4,1216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d410
	if (!ctx.cr6.eq) goto loc_8233D410;
	// stw r25,22056(r31)
	REX_STORE_U32(r31.u32 + 22056, r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r26,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D378;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D390;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D3A8;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D3C0;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D3D8;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D3F0;
	sub_823361F8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823361f8
	ctx.lr = 0x8233D408;
	sub_823361F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335e48
	ctx.lr = 0x8233D410;
	sub_82335E48(ctx, base);
loc_8233D410:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233d768
	if (!ctx.cr6.eq) goto loc_8233D768;
	// addi r10,r1,380
	ctx.r10.s64 = ctx.r1.s64 + 380;
	// stw r24,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, r24.u32);
	// addi r9,r1,380
	ctx.r9.s64 = ctx.r1.s64 + 380;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r9,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6470
	ctx.r6.s64 = 6470;
	// li r4,368
	ctx.r4.s64 = 368;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8233D454;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d464
	if (ctx.cr6.eq) goto loc_8233D464;
	// bl 0x82356060
	ctx.lr = 0x8233D460;
	sub_82356060(ctx, base);
	// b 0x8233d468
	goto loc_8233D468;
loc_8233D464:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D468:
	// stw r3,20884(r31)
	REX_STORE_U32(r31.u32 + 20884, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d2fc
	if (ctx.cr6.eq) goto loc_8233D2FC;
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// addi r3,r31,4348
	ctx.r3.s64 = r31.s64 + 4348;
	// lwz r11,4348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d49c
	if (!ctx.cr6.eq) goto loc_8233D49C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233D490;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D49C:
	// lwz r11,4352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4352);
	// addi r3,r31,4352
	ctx.r3.s64 = r31.s64 + 4352;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d4c0
	if (!ctx.cr6.eq) goto loc_8233D4C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233D4B4;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D4C0:
	// lwz r11,4356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4356);
	// addi r3,r31,4356
	ctx.r3.s64 = r31.s64 + 4356;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d4e4
	if (!ctx.cr6.eq) goto loc_8233D4E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233D4D8;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D4E4:
	// lwz r11,4360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4360);
	// addi r3,r31,4360
	ctx.r3.s64 = r31.s64 + 4360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d508
	if (!ctx.cr6.eq) goto loc_8233D508;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233D4FC;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D508:
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r24,20824(r31)
	REX_STORE_U32(r31.u32 + 20824, r24.u32);
	// addi r11,r31,20816
	ctx.r11.s64 = r31.s64 + 20816;
	// addi r10,r31,20848
	ctx.r10.s64 = r31.s64 + 20848;
	// stw r11,20816(r31)
	REX_STORE_U32(r31.u32 + 20816, ctx.r11.u32);
	// stw r11,20820(r31)
	REX_STORE_U32(r31.u32 + 20820, ctx.r11.u32);
	// addi r11,r31,4432
	ctx.r11.s64 = r31.s64 + 4432;
	// stw r10,20848(r31)
	REX_STORE_U32(r31.u32 + 20848, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,20852(r31)
	REX_STORE_U32(r31.u32 + 20852, ctx.r10.u32);
	// stw r24,20856(r31)
	REX_STORE_U32(r31.u32 + 20856, r24.u32);
loc_8233D534:
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x8233d534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233D534;
	// lwz r29,1200(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// lwz r11,1196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x8233d578
	if (!ctx.cr6.lt) goto loc_8233D578;
	// stw r29,1196(r31)
	REX_STORE_U32(r31.u32 + 1196, r29.u32);
loc_8233D578:
	// lwz r10,1196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233d588
	if (ctx.cr6.lt) goto loc_8233D588;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8233D588:
	// lwz r9,1212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1212);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// li r6,6538
	ctx.r6.s64 = 6538;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x8233D5B0;
	sub_82330E40(ctx, base);
	// stw r3,1224(r31)
	REX_STORE_U32(r31.u32 + 1224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d2fc
	if (ctx.cr6.eq) goto loc_8233D2FC;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,1220(r31)
	REX_STORE_U32(r31.u32 + 1220, ctx.r10.u32);
	// blt cr6,0x8233d5d8
	if (ctx.cr6.lt) goto loc_8233D5D8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8233D5D8:
	// lwz r11,21788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21788);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,1740
	ctx.r3.s64 = r31.s64 + 1740;
	// lwz r7,1196(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8235da68
	ctx.lr = 0x8233D5F4;
	sub_8235DA68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823ef5f0
	ctx.lr = 0x8233D610;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,9108
	ctx.r4.s64 = ctx.r11.s64 + 9108;
	// bl 0x82331480
	ctx.lr = 0x8233D620;
	sub_82331480(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, r29.u32);
	// addi r29,r31,4368
	r29.s64 = r31.s64 + 4368;
	// ori r30,r10,256
	r30.u64 = ctx.r10.u64 | 256;
	// stw r24,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, r24.u32);
	// stw r24,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r24,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r24.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r24,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r25,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, r25.u32);
	// stw r28,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, r28.u32);
	// bl 0x82336400
	ctx.lr = 0x8233D660;
	sub_82336400(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233d690
	if (ctx.cr6.eq) goto loc_8233D690;
loc_8233D66C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233D678;
	sub_8233CA70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233D690:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x8233D6B0;
	sub_823EF5F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r8,9076
	ctx.r4.s64 = ctx.r8.s64 + 9076;
	// bl 0x82331480
	ctx.lr = 0x8233D6C0;
	sub_82331480(ctx, base);
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// stw r24,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r24.u32);
	// addi r30,r31,4372
	r30.s64 = r31.s64 + 4372;
	// stw r24,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r24.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r24,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r24.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r24,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r24.u32);
	// bl 0x823362b8
	ctx.lr = 0x8233D6EC;
	sub_823362B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d66c
	if (!ctx.cr6.eq) goto loc_8233D66C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x8233D730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,284(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 284);
	// ori r4,r6,2
	ctx.r4.u64 = ctx.r6.u64 | 2;
	// stw r4,284(r7)
	REX_STORE_U32(ctx.r7.u32 + 284, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8233D75C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233D768:
	// addi r27,r31,21816
	r27.s64 = r31.s64 + 21816;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8233d79c
	if (!ctx.cr6.eq) goto loc_8233D79C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,37
	r29.s64 = 37;
	// bl 0x8233ca70
	ctx.lr = 0x8233D784;
	sub_8233CA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233D79C:
	// lwz r11,20884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20884);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,9056
	r30.s64 = ctx.r11.s64 + 9056;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8233d7c8
	if (!ctx.cr6.eq) goto loc_8233D7C8;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8233D7C8:
	// bl 0x82337f88
	ctx.lr = 0x8233D7CC;
	sub_82337F88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233da90
	if (!ctx.cr6.eq) goto loc_8233DA90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,21920
	ctx.r5.s64 = r31.s64 + 21920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82338df8
	ctx.lr = 0x8233D7E8;
	sub_82338DF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233d8b0
	if (!ctx.cr6.eq) goto loc_8233D8B0;
	// lwz r3,20884(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20884);
	// lwz r4,21788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21788);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D81C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d894
	if (ctx.cr6.eq) goto loc_8233D894;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r10,r11,-25864
	ctx.r10.s64 = ctx.r11.s64 + -25864;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8233d858
	if (!ctx.cr6.eq) goto loc_8233D858;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D858:
	// lwz r11,292(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233d8b0
	if (ctx.cr6.eq) goto loc_8233D8B0;
loc_8233D870:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233D87C;
	sub_8233CA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233D894:
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d8b0
	if (ctx.cr6.eq) goto loc_8233D8B0;
	// bl 0x82360a70
	ctx.lr = 0x8233D8A4;
	sub_82360A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233dafc
	if (!ctx.cr6.eq) goto loc_8233DAFC;
loc_8233D8B0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x8233d918
	if (!ctx.cr6.gt) goto loc_8233D918;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6663
	ctx.r6.s64 = 6663;
	// li r4,368
	ctx.r4.s64 = 368;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8233D8D8;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d8e8
	if (ctx.cr6.eq) goto loc_8233D8E8;
	// bl 0x82355a88
	ctx.lr = 0x8233D8E4;
	sub_82355A88(ctx, base);
	// b 0x8233d8ec
	goto loc_8233D8EC;
loc_8233D8E8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8233D8EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1208(r31)
	REX_STORE_U32(r31.u32 + 1208, ctx.r3.u32);
	// beq cr6,0x8233d2fc
	if (ctx.cr6.eq) goto loc_8233D2FC;
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,1208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1208);
	// bl 0x82355ae0
	ctx.lr = 0x8233D908;
	sub_82355AE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
loc_8233D918:
	// beq cr6,0x8233d9d0
	if (ctx.cr6.eq) goto loc_8233D9D0;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6685
	ctx.r6.s64 = 6685;
	// mulli r4,r21,424
	ctx.r4.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(424));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8233D938;
	sub_82330E40(ctx, base);
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d2fc
	if (ctx.cr6.eq) goto loc_8233D2FC;
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r21,304(r31)
	REX_STORE_U32(r31.u32 + 304, r21.u32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x8233d9d0
	if (!ctx.cr6.gt) goto loc_8233D9D0;
	// addi r28,r31,736
	r28.s64 = r31.s64 + 736;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8233D95C:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// add. r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233d974
	if (ctx.cr0.eq) goto loc_8233D974;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8234d8e8
	ctx.lr = 0x8233D974;
	sub_8234D8E8(ctx, base);
loc_8233D974:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r9,r31,744
	ctx.r9.s64 = r31.s64 + 744;
	// bne cr6,0x8233d984
	if (!ctx.cr6.eq) goto loc_8233D984;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8233D984:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8234ea18
	ctx.lr = 0x8233D9BC;
	sub_8234EA18(ctx, base);
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,424
	r30.s64 = r30.s64 + 424;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8233d95c
	if (ctx.cr6.lt) goto loc_8233D95C;
loc_8233D9D0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,15880
	r30.s64 = ctx.r11.s64 + 15880;
	// lwz r11,15880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233da00
	if (!ctx.cr6.eq) goto loc_8233DA00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233D9F0;
	sub_8233E6B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233da90
	if (!ctx.cr6.eq) goto loc_8233DA90;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8233DA00:
	// lwz r11,21960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21960);
	// addi r3,r31,21960
	ctx.r3.s64 = r31.s64 + 21960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233da24
	if (!ctx.cr6.eq) goto loc_8233DA24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DA18;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233DA24:
	// lbz r11,23368(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 23368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233dbd0
	if (!ctx.cr6.eq) goto loc_8233DBD0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233dbd0
	if (!ctx.cr6.eq) goto loc_8233DBD0;
	// addi r29,r31,23372
	r29.s64 = r31.s64 + 23372;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DA50;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// addi r30,r31,23376
	r30.s64 = r31.s64 + 23376;
	// lwz r27,0(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DA70;
	sub_8233E6B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233dab4
	if (ctx.cr6.eq) goto loc_8233DAB4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8233da90
	if (ctx.cr6.eq) goto loc_8233DA90;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DA90;
	sub_8233E770(ctx, base);
loc_8233DA90:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233DA9C;
	sub_8233CA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233DAB4:
	// addi r29,r31,23380
	r29.s64 = r31.s64 + 23380;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DAC8;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233db20
	if (ctx.cr6.eq) goto loc_8233DB20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233dae8
	if (ctx.cr6.eq) goto loc_8233DAE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DAE8;
	sub_8233E770(ctx, base);
loc_8233DAE8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8233dafc
	if (ctx.cr6.eq) goto loc_8233DAFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DAFC;
	sub_8233E770(ctx, base);
loc_8233DAFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233DB08;
	sub_8233CA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233DB20:
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,9036
	ctx.r4.s64 = ctx.r10.s64 + 9036;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,22920
	ctx.r5.s64 = ctx.r11.s64 + 22920;
	// addi r3,r31,23072
	ctx.r3.s64 = r31.s64 + 23072;
	// bl 0x82353870
	ctx.lr = 0x8233DB60;
	sub_82353870(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233dbcc
	if (ctx.cr6.eq) goto loc_8233DBCC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8233db80
	if (ctx.cr6.eq) goto loc_8233DB80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DB80;
	sub_8233E770(ctx, base);
loc_8233DB80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233db94
	if (ctx.cr6.eq) goto loc_8233DB94;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DB94;
	sub_8233E770(ctx, base);
loc_8233DB94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8233dba8
	if (ctx.cr6.eq) goto loc_8233DBA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e770
	ctx.lr = 0x8233DBA8;
	sub_8233E770(ctx, base);
loc_8233DBA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233DBB4;
	sub_8233CA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233DBCC:
	// stb r19,23368(r31)
	REX_STORE_U8(r31.u32 + 23368, r19.u8);
loc_8233DBD0:
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233dc04
	if (!ctx.cr6.eq) goto loc_8233DC04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DBEC;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_8233DC04:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233dc34
	if (!ctx.cr6.eq) goto loc_8233DC34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e6b8
	ctx.lr = 0x8233DC1C;
	sub_8233E6B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8233DC34:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233de70
	if (!ctx.cr6.eq) goto loc_8233DE70;
	// lwz r6,21648(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21648);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233dcb8
	if (ctx.cr6.eq) goto loc_8233DCB8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,23720
	ctx.r3.s64 = r31.s64 + 23720;
	// bl 0x82355128
	ctx.lr = 0x8233DC60;
	sub_82355128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,23728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23728);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233dcb8
	if (!ctx.cr6.gt) goto loc_8233DCB8;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r7,17
	ctx.r7.s64 = 17;
loc_8233DC84:
	// lwz r11,23732(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23732);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,1216(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 1216);
	// addi r8,r11,316
	ctx.r8.s64 = ctx.r11.s64 + 316;
	// stw r8,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r8.u32);
	// lwz r6,23992(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 23992);
	// stw r6,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r6.u32);
	// sth r7,316(r11)
	REX_STORE_U16(ctx.r11.u32 + 316, ctx.r7.u16);
	// lwz r5,23728(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 23728);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8233dc84
	if (ctx.cr6.lt) goto loc_8233DC84;
loc_8233DCB8:
	// lwz r6,21644(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21644);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233dd20
	if (ctx.cr6.eq) goto loc_8233DD20;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,23440
	ctx.r3.s64 = r31.s64 + 23440;
	// bl 0x82355128
	ctx.lr = 0x8233DCD4;
	sub_82355128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,23448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23448);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233dd20
	if (!ctx.cr6.gt) goto loc_8233DD20;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8233DCF4:
	// lwz r11,23452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23452);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r3,1216(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1216);
	// stw r24,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r24.u32);
	// stw r24,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r24.u32);
	// bl 0x82332598
	ctx.lr = 0x8233DD0C;
	sub_82332598(ctx, base);
	// lwz r9,23448(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 23448);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8233dcf4
	if (ctx.cr6.lt) goto loc_8233DCF4;
loc_8233DD20:
	// lwz r6,21652(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21652);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233dd98
	if (ctx.cr6.eq) goto loc_8233DD98;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,24000
	ctx.r3.s64 = r31.s64 + 24000;
	// bl 0x82355128
	ctx.lr = 0x8233DD3C;
	sub_82355128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,24008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24008);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233dd98
	if (!ctx.cr6.gt) goto loc_8233DD98;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8233DD5C:
	// lwz r11,24012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24012);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r3,1216(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1216);
	// stw r24,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r24.u32);
	// stw r24,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r24.u32);
	// bl 0x823785b8
	ctx.lr = 0x8233DD78;
	sub_823785B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233da90
	if (!ctx.cr6.eq) goto loc_8233DA90;
	// lwz r11,24008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24008);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233dd5c
	if (ctx.cr6.lt) goto loc_8233DD5C;
loc_8233DD98:
	// lwz r11,21656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233de70
	if (ctx.cr6.eq) goto loc_8233DE70;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lwz r4,21636(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21636);
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// bl 0x82356898
	ctx.lr = 0x8233DDB4;
	sub_82356898(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r6,21656(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21656);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,24280
	ctx.r3.s64 = r31.s64 + 24280;
	// bl 0x82355128
	ctx.lr = 0x8233DDD4;
	sub_82355128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233de10
	if (ctx.cr6.eq) goto loc_8233DE10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823379a8
	ctx.lr = 0x8233DDEC;
	sub_823379A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233DDF8;
	sub_8233CA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233DE10:
	// lwz r11,24288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24288);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233de70
	if (!ctx.cr6.gt) goto loc_8233DE70;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8233DE24:
	// lwz r11,24292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24292);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,1216(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1216);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// stw r24,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r24.u32);
	// stw r24,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, r24.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233DE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233da90
	if (!ctx.cr6.eq) goto loc_8233DA90;
	// lwz r11,24288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24288);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233de24
	if (ctx.cr6.lt) goto loc_8233DE24;
loc_8233DE70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,192(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,6792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6792);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f12,6796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6796);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,6788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6788);
	ctx.f11.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f0,3712(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-2602
	ctx.r3.s64 = -2602;
	// lfs f10,6780(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6780);
	ctx.f10.f64 = double(temp.f32);
	// li r10,200
	ctx.r10.s64 = 200;
	// lfs f9,6776(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6776);
	ctx.f9.f64 = double(temp.f32);
	// li r9,831
	ctx.r9.s64 = 831;
	// lfs f8,6784(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6784);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stfs f11,224(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r24,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r24.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// addi r3,r31,22444
	ctx.r3.s64 = r31.s64 + 22444;
	// stfs f10,256(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f9,260(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f8,264(r1)
	temp.f32 = float(ctx.f8.f64);
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
	// bl 0x8235c4c0
	ctx.lr = 0x8233DF4C;
	sub_8235C4C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334410
	ctx.lr = 0x8233DF68;
	sub_82334410(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,24980
	ctx.r3.s64 = r31.s64 + 24980;
	// bl 0x8235c4c0
	ctx.lr = 0x8233DF88;
	sub_8235C4C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82334608
	ctx.lr = 0x8233DFA4;
	sub_82334608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233e018
	if (ctx.cr6.eq) goto loc_8233E018;
	// lhz r3,21708(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 21708);
	// bl 0x8235eda8
	ctx.lr = 0x8233DFC8;
	sub_8235EDA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// stb r19,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, r19.u8);
	// bl 0x823a24e0
	ctx.lr = 0x8233DFDC;
	sub_823A24E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// bl 0x823a1fd0
	ctx.lr = 0x8233DFEC;
	sub_823A1FD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// bl 0x823a1d78
	ctx.lr = 0x8233DFFC;
	sub_823A1D78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// bl 0x823a18d0
	ctx.lr = 0x8233E00C;
	sub_823A18D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
loc_8233E018:
	// lwz r11,1200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// lwz r10,1196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1196);
	// stw r31,22020(r31)
	REX_STORE_U32(r31.u32 + 22020, r31.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8233e030
	if (ctx.cr6.gt) goto loc_8233E030;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8233E030:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,21716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21716);
	// addi r3,r31,22024
	ctx.r3.s64 = r31.s64 + 22024;
	// bl 0x82360528
	ctx.lr = 0x8233E040;
	sub_82360528(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d870
	if (!ctx.cr6.eq) goto loc_8233D870;
	// stb r19,21(r31)
	REX_STORE_U8(r31.u32 + 21, r19.u8);
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8233E074:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233ca70
	ctx.lr = 0x8233E080;
	sub_8233CA70(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
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

DEFINE_REX_FUNC(sub_823C16C0) {
	REX_FUNC_PROLOGUE();
	// lwz r8,264(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r7,18604(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 18604);
	// lwz r11,18600(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 18600);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stw r5,18600(r8)
	REX_STORE_U32(ctx.r8.u32 + 18600, ctx.r5.u32);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// slw r7,r8,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,264(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r3,18600(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 18600);
	// lwz r11,18604(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18604);
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// subfic r8,r4,16
	ctx.xer.ca = ctx.r4.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,18604(r6)
	REX_STORE_U32(ctx.r6.u32 + 18604, ctx.r7.u32);
	// srw r3,r5,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r11,264(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// lwz r6,18600(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stw r5,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C7D90) {
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
	ctx.lr = 0x823C7D98;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r15,0
	r15.s64 = 0;
	// bl 0x82340ff0
	ctx.lr = 0x823C7DB4;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8240
	if (!ctx.cr6.eq) goto loc_823C8240;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r11,-8
	r30.s64 = ctx.r11.s64 + -8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r23,4
	r23.s64 = 4;
	// lis r24,-32129
	r24.s64 = -2105606144;
	// addi r21,r11,-17568
	r21.s64 = ctx.r11.s64 + -17568;
	// addi r20,r10,-30724
	r20.s64 = ctx.r10.s64 + -30724;
	// addi r19,r9,-30732
	r19.s64 = ctx.r9.s64 + -30732;
	// addi r18,r8,18436
	r18.s64 = ctx.r8.s64 + 18436;
	// addi r17,r7,-30740
	r17.s64 = ctx.r7.s64 + -30740;
	// addi r16,r6,-30748
	r16.s64 = ctx.r6.s64 + -30748;
	// addi r25,r5,-30780
	r25.s64 = ctx.r5.s64 + -30780;
	// addi r22,r4,18200
	r22.s64 = ctx.r4.s64 + 18200;
loc_823C7E10:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82340e38
	ctx.lr = 0x823C7E20;
	sub_82340E38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82340718
	ctx.lr = 0x823C7E44;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x82331620
	ctx.lr = 0x823C7E84;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8054
	if (!ctx.cr6.eq) goto loc_823C8054;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r4,40
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 40, ctx.xer);
	// bge cr6,0x823c7e9c
	if (!ctx.cr6.lt) goto loc_823C7E9C;
	// li r4,40
	ctx.r4.s64 = 40;
loc_823C7E9C:
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823C7EB4;
	sub_82330E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c8490
	if (ctx.cr6.eq) goto loc_823C8490;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340718
	ctx.lr = 0x823C7ED8;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwinm r4,r6,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r7,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// lhz r4,14(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lhz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r5,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r5.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r3,18(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// sth r8,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r4,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,65534
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65534, ctx.xer);
	// bne cr6,0x823c843c
	if (!ctx.cr6.eq) goto loc_823C843C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// sth r8,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r8.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lbz r6,30(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// lhz r5,30(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r3.u16);
	// b 0x823c843c
	goto loc_823C843C;
loc_823C8054:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C8064;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x823c8198
	if (!ctx.cr6.eq) goto loc_823C8198;
	// addi r27,r31,304
	r27.s64 = r31.s64 + 304;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x823C8088;
	sub_82340718(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c843c
	if (ctx.cr6.eq) goto loc_823C843C;
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823c80bc
	if (ctx.cr6.eq) goto loc_823C80BC;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823C80BC;
	sub_82330D00(ctx, base);
loc_823C80BC:
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,123
	ctx.r6.s64 = 123;
	// mulli r4,r10,292
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(292));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823C80DC;
	sub_82330E40(ctx, base);
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c8490
	if (ctx.cr6.eq) goto loc_823C8490;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c843c
	if (!ctx.cr6.gt) goto loc_823C843C;
	// li r29,0
	r29.s64 = 0;
loc_823C80FC:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x82340718
	ctx.lr = 0x823C811C;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c843c
	if (!ctx.cr6.eq) goto loc_823C843C;
	// addi r11,r30,36
	ctx.r11.s64 = r30.s64 + 36;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// addi r29,r29,292
	r29.s64 = r29.s64 + 292;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r9,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r4,r8,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r6,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r3,r7,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r8,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r8.u16);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823c80fc
	if (ctx.cr6.lt) goto loc_823C80FC;
	// b 0x823c843c
	goto loc_823C843C;
loc_823C8198:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C81A4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x823c81e0
	if (!ctx.cr6.eq) goto loc_823C81E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x823C81C4;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x823c843c
	goto loc_823C843C;
loc_823C81E0:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C81EC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8248
	if (!ctx.cr6.eq) goto loc_823C8248;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x823C820C;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x823c7d90
	ctx.lr = 0x823C8224;
	sub_823C7D90(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c843c
	if (ctx.cr6.eq) goto loc_823C843C;
loc_823C8230:
	// addi r11,r26,-22
	ctx.r11.s64 = r26.s64 + -22;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 & r26.u64;
loc_823C8240:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
loc_823C8248:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C8258;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c82f0
	if (!ctx.cr6.eq) goto loc_823C82F0;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c843c
	if (ctx.cr6.eq) goto loc_823C843C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x823C8284;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c843c
	if (!ctx.cr6.gt) goto loc_823C843C;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823C82A8:
	// lhz r8,30(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823c82cc
	if (ctx.cr6.eq) goto loc_823C82CC;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823c82a8
	if (ctx.cr6.lt) goto loc_823C82A8;
	// b 0x823c843c
	goto loc_823C843C;
loc_823C82CC:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340718
	ctx.lr = 0x823C82E8;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x823c843c
	goto loc_823C843C;
loc_823C82F0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C8300;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c83ac
	if (!ctx.cr6.eq) goto loc_823C83AC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82340718
	ctx.lr = 0x823C8320;
	sub_82340718(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x823c843c
	if (!ctx.cr6.eq) goto loc_823C843C;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r4,r9,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r6,r4,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r3,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c843c
	if (ctx.cr6.eq) goto loc_823C843C;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// b 0x823c843c
	goto loc_823C843C;
loc_823C83AC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x823C83BC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c842c
	if (!ctx.cr6.eq) goto loc_823C842C;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823c83f4
	if (!ctx.cr6.eq) goto loc_823C83F4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x823C83E8;
	sub_82340FF0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
loc_823C83F4:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c8424
	if (ctx.cr6.eq) goto loc_823C8424;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82340e38
	ctx.lr = 0x823C8414;
	sub_82340E38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8230
	if (!ctx.cr6.eq) goto loc_823C8230;
	// b 0x823c843c
	goto loc_823C843C;
loc_823C8424:
	// li r15,1
	r15.s64 = 1;
	// b 0x823c843c
	goto loc_823C843C;
loc_823C842C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82340e38
	ctx.lr = 0x823C843C;
	sub_82340E38(ctx, base);
loc_823C843C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r23,r10,8
	r23.s64 = ctx.r10.s64 + 8;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x823c8470
	if (ctx.cr6.eq) goto loc_823C8470;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_823C8470:
	// cmplw cr6,r23,r14
	ctx.cr6.compare<uint32_t>(r23.u32, r14.u32, ctx.xer);
	// bge cr6,0x823c8230
	if (!ctx.cr6.lt) goto loc_823C8230;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823c8230
	if (ctx.cr6.eq) goto loc_823C8230;
	// clrlwi r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7e10
	if (ctx.cr6.eq) goto loc_823C7E10;
	// b 0x823c8230
	goto loc_823C8230;
loc_823C8490:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823EAE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823EAE88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823eaf4c
	if (ctx.cr6.eq) goto loc_823EAF4C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eaee0
	if (!ctx.cr6.gt) goto loc_823EAEE0;
	// li r30,0
	r30.s64 = 0;
loc_823EAEB0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823eaecc
	if (ctx.cr6.eq) goto loc_823EAECC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82393bf0
	ctx.lr = 0x823EAECC;
	sub_82393BF0(ctx, base);
loc_823EAECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823eaeb0
	if (ctx.cr6.lt) goto loc_823EAEB0;
loc_823EAEE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82393bf0
	ctx.lr = 0x823EAEEC;
	sub_82393BF0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eaf24
	if (!ctx.cr6.gt) goto loc_823EAF24;
	// li r29,0
	r29.s64 = 0;
loc_823EAF00:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x82393bf0
	ctx.lr = 0x823EAF10;
	sub_82393BF0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823eaf00
	if (ctx.cr6.lt) goto loc_823EAF00;
loc_823EAF24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82393bf0
	ctx.lr = 0x823EAF30;
	sub_82393BF0(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EAF40;
	sub_823EF5F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EAF4C;
	sub_82393BF0(ctx, base);
loc_823EAF4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823EDAD0) {
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
	ctx.lr = 0x823EDAD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x823edb08
	if (!ctx.cr6.lt) goto loc_823EDB08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f01e0
	ctx.lr = 0x823EDB04;
	sub_823F01E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823EDB08:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x823EDB14;
	sub_823F02B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823edb28
	if (!ctx.cr0.eq) goto loc_823EDB28;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823edb5c
	goto loc_823EDB5C;
loc_823EDB28:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bge cr6,0x823edb48
	if (!ctx.cr6.lt) goto loc_823EDB48;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0190
	ctx.lr = 0x823EDB44;
	sub_823F0190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823EDB48:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_823EDB5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823EF110) {
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
	ctx.lr = 0x823EF118;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi r30,r11,25
	r30.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bge cr6,0x823ef148
	if (!ctx.cr6.lt) goto loc_823EF148;
	// bl 0x826a1e70
	ctx.lr = 0x823EF140;
	sub_826A1E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823EF148:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823ef16c
	if (ctx.cr6.eq) goto loc_823EF16C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823EF160;
	sub_826A1E70(ctx, base);
	// add r28,r30,r27
	r28.u64 = r30.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
loc_823EF16C:
	// rlwinm r30,r31,0,0,24
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// clrlwi r31,r31,25
	r31.u64 = r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x823ef194
	if (ctx.cr6.eq) goto loc_823EF194;
	// bl 0x823f0a04
	ctx.lr = 0x823EF190;
	sub_823F0A04(ctx, base);
	// b 0x823ef198
	goto loc_823EF198;
loc_823EF194:
	// bl 0x823f06e0
	ctx.lr = 0x823EF198;
	sub_823F06E0(ctx, base);
loc_823EF198:
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ef1b0
	if (ctx.cr6.eq) goto loc_823EF1B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823EF1B0;
	sub_826A1E70(ctx, base);
loc_823EF1B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F370C) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4310) {
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
	ctx.lr = 0x823F4318;
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	REX_STORE_U32(r31.u32 + 96, r19.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x823f4380
	if (ctx.cr0.eq) goto loc_823F4380;
	// bl 0x82793a84
	ctx.lr = 0x823F435C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823f4380
	if (ctx.cr6.eq) goto loc_823F4380;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3180
	ctx.r6.s64 = 3180;
	// lwz r5,312(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x82793c34
	ctx.lr = 0x823F4380;
	__imp__KeBugCheckEx(ctx, base);
loc_823F4380:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x823f4390
	if (!ctx.cr6.eq) goto loc_823F4390;
loc_823F4388:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f4b50
	goto loc_823F4B50;
loc_823F4390:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	r23.u64 = ctx.r10.u64 | r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f4388
	if (ctx.cr6.gt) goto loc_823F4388;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x823f43bc
	if (!ctx.cr6.eq) goto loc_823F43BC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823F43BC:
	// lwz r10,80(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x823f43f4
	if (!ctx.cr0.eq) goto loc_823F43F4;
	// lwz r11,380(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f43f4
	if (!ctx.cr6.eq) goto loc_823F43F4;
	// lbz r11,-11(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f43fc
	if (ctx.cr0.eq) goto loc_823F43FC;
loc_823F43F4:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_823F43FC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f4420
	if (!ctx.cr0.eq) goto loc_823F4420;
	// lwz r3,1408(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 1408);
	// bl 0x827938a4
	ctx.lr = 0x823F4414;
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r22,96(r31)
	REX_STORE_U32(r31.u32 + 96, r22.u32);
	// stw r23,348(r31)
	REX_STORE_U32(r31.u32 + 348, r23.u32);
loc_823F4420:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4b24
	if (ctx.cr0.eq) goto loc_823F4B24;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// beq 0x823f4488
	if (ctx.cr0.eq) goto loc_823F4488;
	// addi r9,r24,32
	ctx.r9.s64 = r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x823f4498
	goto loc_823F4498;
loc_823F4488:
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_823F4498:
	// stw r25,92(r31)
	REX_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bgt cr6,0x823f48f4
	if (ctx.cr6.gt) goto loc_823F48F4;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x823f44c8
	if (!ctx.cr6.eq) goto loc_823F44C8;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_823F44C8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f44e4
	if (ctx.cr6.eq) goto loc_823F44E4;
	// subf r11,r26,r24
	ctx.r11.u64 = r24.u64 - r26.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// b 0x823f4524
	goto loc_823F4524;
loc_823F44E4:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f451c
	if (ctx.cr0.eq) goto loc_823F451C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.u64 = r24.u64 - r26.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x823f4524
	goto loc_823F4524;
loc_823F451C:
	// subf r11,r26,r24
	ctx.r11.u64 = r24.u64 - r26.u64;
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
loc_823F4524:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// ble cr6,0x823f4544
	if (!ctx.cr6.gt) goto loc_823F4544;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4544
	if (ctx.cr0.eq) goto loc_823F4544;
	// subf r5,r25,r26
	ctx.r5.u64 = r26.u64 - r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F4544;
	sub_826A2E60(ctx, base);
loc_823F4544:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// beq cr6,0x823f4af0
	if (ctx.cr6.eq) goto loc_823F4AF0;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f45a8
	if (ctx.cr0.eq) goto loc_823F45A8;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82793b64
	ctx.lr = 0x823F458C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f4af0
	if (ctx.cr0.lt) goto loc_823F4AF0;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// b 0x823f4af0
	goto loc_823F4AF0;
loc_823F45A8:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r29)
	REX_STORE_U8(r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r11
	r28.u64 = ctx.r11.u64 - r28.u64;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// beq 0x823f465c
	if (ctx.cr0.eq) goto loc_823F465C;
	// lbz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r29,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x823f4624
	if (!ctx.cr6.lt) goto loc_823F4624;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x823f4698
	goto loc_823F4698;
loc_823F4624:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_823F4630:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f46d0
	if (ctx.cr6.eq) goto loc_823F46D0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f46d0
	if (!ctx.cr6.gt) goto loc_823F46D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f4630
	goto loc_823F4630;
loc_823F465C:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f472c
	if (ctx.cr0.eq) goto loc_823F472C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x823f46f4
	if (!ctx.cr6.lt) goto loc_823F46F4;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_823F4698:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f46d0
	if (!ctx.cr6.eq) goto loc_823F46D0;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_823F46D0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// b 0x823f48dc
	goto loc_823F48DC;
loc_823F46F4:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_823F4700:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f46d0
	if (ctx.cr6.eq) goto loc_823F46D0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f46d0
	if (!ctx.cr6.gt) goto loc_823F46D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f4700
	goto loc_823F4700;
loc_823F472C:
	// stb r11,5(r29)
	REX_STORE_U8(r29.u32 + 5, ctx.r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f4790
	if (!ctx.cr6.eq) goto loc_823F4790;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4790
	if (!ctx.cr6.eq) goto loc_823F4790;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x823f4790
	if (!ctx.cr6.eq) goto loc_823F4790;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823f4790
	if (!ctx.cr6.lt) goto loc_823F4790;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
loc_823F4790:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f47d4
	if (ctx.cr0.eq) goto loc_823F47D4;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x823f47c4
	if (ctx.cr0.eq) goto loc_823F47C4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x823f47c4
	if (!ctx.cr6.gt) goto loc_823F47C4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_823F47C4:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x82793c44
	ctx.lr = 0x823F47D4;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823F47D4:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x823f48e4
	if (ctx.cr6.gt) goto loc_823F48E4;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f4818
	if (!ctx.cr0.eq) goto loc_823F4818;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x823f482c
	goto loc_823F482C;
loc_823F4818:
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_823F482C:
	// lbz r9,5(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x823f4884
	if (!ctx.cr6.lt) goto loc_823F4884;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f48bc
	if (!ctx.cr6.eq) goto loc_823F48BC;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// b 0x823f48bc
	goto loc_823F48BC;
loc_823F4884:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_823F4890:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f48bc
	if (ctx.cr6.eq) goto loc_823F48BC;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f48bc
	if (!ctx.cr6.gt) goto loc_823F48BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f4890
	goto loc_823F4890;
loc_823F48BC:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_823F48DC:
	// stw r11,48(r21)
	REX_STORE_U32(r21.u32 + 48, ctx.r11.u32);
	// b 0x823f4af0
	goto loc_823F4AF0;
loc_823F48E4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f22e0
	ctx.lr = 0x823F48F0;
	sub_823F22E0(ctx, base);
	// b 0x823f4af0
	goto loc_823F4AF0;
loc_823F48F4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823f491c
	if (!ctx.cr6.eq) goto loc_823F491C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f2418
	ctx.lr = 0x823F4914;
	sub_823F2418(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823f4af0
	if (!ctx.cr0.eq) goto loc_823F4AF0;
loc_823F491C:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f492c
	if (ctx.cr0.eq) goto loc_823F492C;
	// stw r19,356(r31)
	REX_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x823f4af8
	goto loc_823F4AF8;
loc_823F492C:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	REX_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f49f4
	if (ctx.cr0.eq) goto loc_823F49F4;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	REX_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x823f4970
	if (ctx.cr0.eq) goto loc_823F4970;
	// addi r11,r30,-32
	ctx.r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x823f4980
	goto loc_823F4980;
loc_823F4970:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_823F4980:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f49ac
	if (ctx.cr0.eq) goto loc_823F49AC;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f49ac
	if (!ctx.cr0.eq) goto loc_823F49AC;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = ctx.r11.u64 | r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(r31.u32 + 348, r23.u32);
loc_823F49AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f4a0c
	goto loc_823F4A0C;
loc_823F49F4:
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f4a0c
	if (ctx.cr0.eq) goto loc_823F4A0C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = ctx.r11.u64 | r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(r31.u32 + 348, r23.u32);
loc_823F4A0C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f3720
	ctx.lr = 0x823F4A1C;
	sub_823F3720(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x823f4ae8
	if (ctx.cr0.eq) goto loc_823F4AE8;
	// lbz r10,-11(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823f4a9c
	if (ctx.cr0.eq) goto loc_823F4A9C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f4a48
	if (ctx.cr0.eq) goto loc_823F4A48;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x823f4a58
	goto loc_823F4A58;
loc_823F4A48:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_823F4A58:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823f4a94
	if (ctx.cr0.eq) goto loc_823F4A94;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4a78
	if (ctx.cr0.eq) goto loc_823F4A78;
	// addi r11,r30,-32
	ctx.r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x823f4a88
	goto loc_823F4A88;
loc_823F4A78:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_823F4A88:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x823f4a9c
	goto loc_823F4A9C;
loc_823F4A94:
	// std r19,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_823F4A9C:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x823f4aac
	if (ctx.cr6.lt) goto loc_823F4AAC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_823F4AAC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823F4AB8;
	sub_8269CC20(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// ble cr6,0x823f4ad8
	if (!ctx.cr6.gt) goto loc_823F4AD8;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4ad8
	if (ctx.cr0.eq) goto loc_823F4AD8;
	// subf r5,r25,r26
	ctx.r5.u64 = r26.u64 - r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F4AD8;
	sub_826A2E60(ctx, base);
loc_823F4AD8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f4018
	ctx.lr = 0x823F4AE8;
	sub_823F4018(ctx, base);
loc_823F4AE8:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r29,356(r31)
	REX_STORE_U32(r31.u32 + 356, r29.u32);
loc_823F4AF0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x823f4b24
	if (!ctx.cr6.eq) goto loc_823F4B24;
loc_823F4AF8:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4b24
	if (ctx.cr0.eq) goto loc_823F4B24;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	REX_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	REX_STORE_U32(r31.u32 + 144, r22.u32);
	// stw r19,132(r31)
	REX_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	REX_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x82793c54
	ctx.lr = 0x823F4B24;
	__imp__RtlRaiseException(ctx, base);
loc_823F4B24:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f4b40
	goto loc_823F4B40;
loc_823F4B40:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = r31.s64 + 320;
	// bl 0x823f4b78
	ctx.lr = 0x823F4B4C;
	ctx.r19 = r19;
	ctx.r20 = r20;
	ctx.r21 = r21;
	ctx.r22 = r22;
	ctx.r23 = r23;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_823F4B78(ctx, base);
	r19 = ctx.r19;
	r20 = ctx.r20;
	r21 = ctx.r21;
	r22 = ctx.r22;
	r23 = ctx.r23;
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
loc_823F4B50:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82437B70) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82437b9c
	if (!ctx.cr6.eq) goto loc_82437B9C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82437b8c
	if (ctx.cr6.lt) goto loc_82437B8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82437B8C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82437bd0
	goto loc_82437BD0;
loc_82437B9C:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82437bb8
	if (ctx.cr6.lt) goto loc_82437BB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82437bc4
	goto loc_82437BC4;
loc_82437BB8:
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82437BC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82437BD0:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82438A18) {
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
	ctx.lr = 0x82438A20;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
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
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82438bd0
	if (ctx.cr6.lt) goto loc_82438BD0;
	// beq cr6,0x82438bc8
	if (ctx.cr6.eq) goto loc_82438BC8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82438ba8
	if (ctx.cr6.lt) goto loc_82438BA8;
	// beq cr6,0x82438b08
	if (ctx.cr6.eq) goto loc_82438B08;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82438a70
	if (ctx.cr6.eq) goto loc_82438A70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82438da0
	goto loc_82438DA0;
loc_82438A70:
	// lwz r9,52(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r27,r11,r9
	r27.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82438a8c
	if (!ctx.cr6.gt) goto loc_82438A8C;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_82438A8C:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82438b00
	if (ctx.cr6.eq) goto loc_82438B00;
loc_82438A98:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438af4
	if (ctx.cr0.eq) goto loc_82438AF4;
	// li r29,0
	r29.s64 = 0;
loc_82438AAC:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x82438a18
	ctx.lr = 0x82438ACC;
	sub_82438A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82438da0
	if (ctx.cr0.lt) goto loc_82438DA0;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 10);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x82438aac
	if (ctx.cr6.lt) goto loc_82438AAC;
loc_82438AF4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x82438a98
	if (ctx.cr6.lt) goto loc_82438A98;
loc_82438B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82438da0
	goto loc_82438DA0;
loc_82438B08:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// divwu r3,r11,r7
	ctx.r3.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82438b2c
	if (!ctx.cr6.gt) goto loc_82438B2C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82438B2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438ba0
	if (ctx.cr6.eq) goto loc_82438BA0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_82438B3C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82438b94
	if (ctx.cr6.eq) goto loc_82438B94;
loc_82438B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438b84
	if (ctx.cr6.eq) goto loc_82438B84;
loc_82438B54:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82438b54
	if (ctx.cr6.lt) goto loc_82438B54;
loc_82438B84:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82438b48
	if (ctx.cr6.lt) goto loc_82438B48;
loc_82438B94:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82438b3c
	if (ctx.cr6.lt) goto loc_82438B3C;
loc_82438BA0:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// b 0x82438be4
	goto loc_82438BE4;
loc_82438BA8:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82438BB4:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r3,r11,r9
	ctx.r3.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// b 0x82438bdc
	goto loc_82438BDC;
loc_82438BC8:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// b 0x82438bb4
	goto loc_82438BB4;
loc_82438BD0:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82438BDC:
	// ble cr6,0x82438be4
	if (!ctx.cr6.gt) goto loc_82438BE4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82438BE4:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82438c70
	if (ctx.cr6.eq) goto loc_82438C70;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x82438c40
	if (ctx.cr6.eq) goto loc_82438C40;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82438c6c
	if (!ctx.cr6.eq) goto loc_82438C6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438c6c
	if (ctx.cr6.eq) goto loc_82438C6C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
loc_82438C1C:
	// lwax r9,r11,r10
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82438c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438C1C;
	// b 0x82438c6c
	goto loc_82438C6C;
loc_82438C40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438c6c
	if (ctx.cr6.eq) goto loc_82438C6C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
loc_82438C54:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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
	// bdnz 0x82438c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438C54;
loc_82438C6C:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82438C70:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82438d50
	if (ctx.cr0.eq) goto loc_82438D50;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82438c94
	if (ctx.cr6.eq) goto loc_82438C94;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x82438c9c
	goto loc_82438C9C;
loc_82438C94:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 6);
loc_82438C9C:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82438d50
	if (ctx.cr0.eq) goto loc_82438D50;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82438cb8
	if (!ctx.cr6.eq) goto loc_82438CB8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21408
	ctx.r4.s64 = ctx.r9.s64 + -21408;
	// b 0x82438cc0
	goto loc_82438CC0;
loc_82438CB8:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21424
	ctx.r4.s64 = ctx.r9.s64 + -21424;
loc_82438CC0:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82438d4c
	if (ctx.cr0.eq) goto loc_82438D4C;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_82438CD8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82438d14
	if (!ctx.cr6.gt) goto loc_82438D14;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82438CF8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x82438cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438CF8;
loc_82438D14:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438d44
	if (ctx.cr6.eq) goto loc_82438D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82438D24:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r5,r10
	r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r25
	r31.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x82438d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438D24;
loc_82438D44:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82438cd8
	if (!ctx.cr6.eq) goto loc_82438CD8;
loc_82438D4C:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82438D50:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82438d68
	if (!ctx.cr6.gt) goto loc_82438D68;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82438D68:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82438d80
	if (!ctx.cr6.eq) goto loc_82438D80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82438da0
	goto loc_82438DA0;
loc_82438D80:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x82438D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82438DA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8244EC00) {
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
	ctx.lr = 0x8244EC08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8244ec30
	if (ctx.cr6.eq) goto loc_8244EC30;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8244EC30:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8244f06c
	if (!ctx.cr6.eq) goto loc_8244F06C;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8244f06c
	if (!ctx.cr6.eq) goto loc_8244F06C;
	// lwz r28,56(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r28,27
	ctx.cr6.compare<uint32_t>(r28.u32, 27, ctx.xer);
	// blt cr6,0x8244ec64
	if (ctx.cr6.lt) goto loc_8244EC64;
	// cmplwi cr6,r28,34
	ctx.cr6.compare<uint32_t>(r28.u32, 34, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8244ec68
	if (!ctx.cr6.gt) goto loc_8244EC68;
loc_8244EC64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EC68:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,35
	ctx.cr6.compare<uint32_t>(r28.u32, 35, ctx.xer);
	// blt cr6,0x8244ec80
	if (ctx.cr6.lt) goto loc_8244EC80;
	// cmplwi cr6,r28,39
	ctx.cr6.compare<uint32_t>(r28.u32, 39, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8244ec84
	if (!ctx.cr6.gt) goto loc_8244EC84;
loc_8244EC80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EC84:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// blt cr6,0x8244ec9c
	if (ctx.cr6.lt) goto loc_8244EC9C;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8244eca0
	if (!ctx.cr6.gt) goto loc_8244ECA0;
loc_8244EC9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244ECA0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 24, ctx.xer);
	// blt cr6,0x8244ecb8
	if (ctx.cr6.lt) goto loc_8244ECB8;
	// cmplwi cr6,r7,27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 27, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8244ecbc
	if (!ctx.cr6.gt) goto loc_8244ECBC;
loc_8244ECB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244ECBC:
	// clrlwi. r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x8244ecd4
	if (!ctx.cr0.eq) goto loc_8244ECD4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8244ecd8
	if (ctx.cr0.eq) goto loc_8244ECD8;
loc_8244ECD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8244ECD8:
	// clrlwi. r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x8244ecf0
	if (!ctx.cr0.eq) goto loc_8244ECF0;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8244ecf4
	if (ctx.cr0.eq) goto loc_8244ECF4;
loc_8244ECF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8244ECF4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244ed10
	if (ctx.cr0.eq) goto loc_8244ED10;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244ed10
	if (ctx.cr0.eq) goto loc_8244ED10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5424
	ctx.r4.s64 = ctx.r11.s64 + 5424;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244ED10:
	// cmplwi cr6,r28,23
	ctx.cr6.compare<uint32_t>(r28.u32, 23, ctx.xer);
	// beq cr6,0x8244ed34
	if (ctx.cr6.eq) goto loc_8244ED34;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(r28.u32, 24, ctx.xer);
	// beq cr6,0x8244ed34
	if (ctx.cr6.eq) goto loc_8244ED34;
	// cmplwi cr6,r28,252
	ctx.cr6.compare<uint32_t>(r28.u32, 252, ctx.xer);
	// beq cr6,0x8244ed34
	if (ctx.cr6.eq) goto loc_8244ED34;
	// cmplwi cr6,r28,253
	ctx.cr6.compare<uint32_t>(r28.u32, 253, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8244ed38
	if (!ctx.cr6.eq) goto loc_8244ED38;
loc_8244ED34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8244ED38:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 29, ctx.xer);
	// beq cr6,0x8244ed50
	if (ctx.cr6.eq) goto loc_8244ED50;
	// cmplwi cr6,r7,244
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 244, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8244ed54
	if (!ctx.cr6.eq) goto loc_8244ED54;
loc_8244ED50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8244ED54:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244ed70
	if (ctx.cr0.eq) goto loc_8244ED70;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244ed70
	if (ctx.cr0.eq) goto loc_8244ED70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5380
	ctx.r4.s64 = ctx.r11.s64 + 5380;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244ED70:
	// lwz r31,104(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8244eee4
	if (ctx.cr6.eq) goto loc_8244EEE4;
	// lwz r10,96(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244eee4
	if (ctx.cr6.eq) goto loc_8244EEE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,241
	ctx.cr6.compare<uint32_t>(r28.u32, 241, ctx.xer);
	// beq cr6,0x8244edd4
	if (ctx.cr6.eq) goto loc_8244EDD4;
	// cmplwi cr6,r28,243
	ctx.cr6.compare<uint32_t>(r28.u32, 243, ctx.xer);
	// beq cr6,0x8244edbc
	if (ctx.cr6.eq) goto loc_8244EDBC;
	// cmplwi cr6,r28,251
	ctx.cr6.compare<uint32_t>(r28.u32, 251, ctx.xer);
	// ble cr6,0x8244edac
	if (!ctx.cr6.gt) goto loc_8244EDAC;
	// cmplwi cr6,r28,253
	ctx.cr6.compare<uint32_t>(r28.u32, 253, ctx.xer);
	// ble cr6,0x8244edbc
	if (!ctx.cr6.gt) goto loc_8244EDBC;
loc_8244EDAC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-28408
	ctx.r11.s64 = ctx.r11.s64 + -28408;
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// b 0x8244edc0
	goto loc_8244EDC0;
loc_8244EDBC:
	// li r6,2
	ctx.r6.s64 = 2;
loc_8244EDC0:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8244edd4
	if (!ctx.cr6.eq) goto loc_8244EDD4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5272
	ctx.r5.s64 = ctx.r11.s64 + 5272;
	// b 0x8244eddc
	goto loc_8244EDDC;
loc_8244EDD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5168
	ctx.r5.s64 = ctx.r11.s64 + 5168;
loc_8244EDDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8244ee00
	if (ctx.cr6.eq) goto loc_8244EE00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5140
	ctx.r4.s64 = ctx.r11.s64 + 5140;
loc_8244EDF4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244EDFC;
	sub_8244BEB0(ctx, base);
	// b 0x8244f07c
	goto loc_8244F07C;
loc_8244EE00:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8244ee1c
	if (ctx.cr6.eq) goto loc_8244EE1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5108
	ctx.r4.s64 = ctx.r11.s64 + 5108;
	// b 0x8244edf4
	goto loc_8244EDF4;
loc_8244EE1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8244ee38
	if (ctx.cr6.eq) goto loc_8244EE38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5072
	ctx.r4.s64 = ctx.r11.s64 + 5072;
	// b 0x8244edf4
	goto loc_8244EDF4;
loc_8244EE38:
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r8,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xor. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244eed8
	if (!ctx.cr0.eq) goto loc_8244EED8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ee70
	if (ctx.cr6.eq) goto loc_8244EE70;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244eed8
	if (!ctx.cr6.eq) goto loc_8244EED8;
loc_8244EE70:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 11, ctx.xer);
	// blt cr6,0x8244ee88
	if (ctx.cr6.lt) goto loc_8244EE88;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// bgt cr6,0x8244ee88
	if (ctx.cr6.gt) goto loc_8244EE88;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8244EE88:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,5060
	ctx.r10.s64 = ctx.r10.s64 + 5060;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8244a580
	ctx.lr = 0x8244EEA4;
	sub_8244A580(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8244eec4
	if (ctx.cr6.eq) goto loc_8244EEC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4960
	ctx.r4.s64 = ctx.r11.s64 + 4960;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244EEC4:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8244eee4
	if (!ctx.cr6.eq) goto loc_8244EEE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4856
	ctx.r4.s64 = ctx.r11.s64 + 4856;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244EED8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4804
	ctx.r4.s64 = ctx.r11.s64 + 4804;
	// b 0x8244edf4
	goto loc_8244EDF4;
loc_8244EEE4:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ef10
	if (ctx.cr6.eq) goto loc_8244EF10;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8244ef08
	if (!ctx.cr6.eq) goto loc_8244EF08;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8244ef14
	goto loc_8244EF14;
loc_8244EF08:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8244ef14
	goto loc_8244EF14;
loc_8244EF10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8244EF14:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ef3c
	if (ctx.cr6.eq) goto loc_8244EF3C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8244ef34
	if (!ctx.cr6.eq) goto loc_8244EF34;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8244ef40
	goto loc_8244EF40;
loc_8244EF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8244ef40
	goto loc_8244EF40;
loc_8244EF3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EF40:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8244ef54
	if (ctx.cr6.eq) goto loc_8244EF54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4744
	ctx.r4.s64 = ctx.r11.s64 + 4744;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244EF54:
	// lwz r7,84(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r8,88(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244ef74
	if (ctx.cr6.eq) goto loc_8244EF74;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8244ef78
	if (!ctx.cr6.eq) goto loc_8244EF78;
loc_8244EF74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EF78:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244ef94
	if (ctx.cr6.eq) goto loc_8244EF94;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8244ef98
	if (ctx.cr6.eq) goto loc_8244EF98;
loc_8244EF94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EF98:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244efb4
	if (ctx.cr6.eq) goto loc_8244EFB4;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8244efb8
	if (!ctx.cr6.eq) goto loc_8244EFB8;
loc_8244EFB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EFB8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244efd4
	if (ctx.cr6.eq) goto loc_8244EFD4;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8244efd8
	if (ctx.cr6.eq) goto loc_8244EFD8;
loc_8244EFD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244EFD8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8244f008
	if (ctx.cr0.eq) goto loc_8244F008;
	// clrlwi. r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8244f008
	if (ctx.cr0.eq) goto loc_8244F008;
	// lwz r7,24(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8244f008
	if (ctx.cr6.eq) goto loc_8244F008;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4672
	ctx.r4.s64 = ctx.r11.s64 + 4672;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244F008:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244f018
	if (ctx.cr6.eq) goto loc_8244F018;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8244f028
	if (!ctx.cr0.eq) goto loc_8244F028;
loc_8244F018:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244f034
	if (ctx.cr0.eq) goto loc_8244F034;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244f034
	if (ctx.cr0.eq) goto loc_8244F034;
loc_8244F028:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4544
	ctx.r4.s64 = ctx.r11.s64 + 4544;
	// b 0x8244f074
	goto loc_8244F074;
loc_8244F034:
	// stw r28,56(r30)
	REX_STORE_U32(r30.u32 + 56, r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// bne cr6,0x8244f058
	if (!ctx.cr6.eq) goto loc_8244F058;
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
loc_8244F058:
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// b 0x8244f07c
	goto loc_8244F07C;
loc_8244F06C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4472
	ctx.r4.s64 = ctx.r11.s64 + 4472;
loc_8244F074:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244F07C;
	sub_8244BEB0(ctx, base);
loc_8244F07C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824721A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824721B0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x824721D8;
	sub_82477448(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x824721E8;
	sub_82477448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,66
	ctx.r4.s64 = 66;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82471828
	ctx.lr = 0x82472220;
	sub_82471828(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82473BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82473BC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82473c38
	if (ctx.cr6.eq) goto loc_82473C38;
	// addis r11,r11,-28768
	ctx.r11.s64 = ctx.r11.s64 + -1885339648;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473c30
	if (ctx.cr0.eq) goto loc_82473C30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82473c28
	if (ctx.cr6.eq) goto loc_82473C28;
	// addis r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -1048576;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82473c20
	if (ctx.cr0.eq) goto loc_82473C20;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82473c3c
	if (!ctx.cr6.eq) goto loc_82473C3C;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82473c3c
	goto loc_82473C3C;
loc_82473C20:
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82473c3c
	goto loc_82473C3C;
loc_82473C28:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82473c3c
	goto loc_82473C3C;
loc_82473C30:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82473c3c
	goto loc_82473C3C;
loc_82473C38:
	// li r4,24
	ctx.r4.s64 = 24;
loc_82473C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x82473C44;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
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
	ctx.lr = 0x82473C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// beq cr6,0x82473cf4
	if (ctx.cr6.eq) goto loc_82473CF4;
	// lis r11,15
	ctx.r11.s64 = 983040;
loc_82473CF4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82473D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82473DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82473E4C;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473e58
	if (ctx.cr0.lt) goto loc_82473E58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82473E58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82487EC0) {
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
	ctx.lr = 0x82487EC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82487f28
	if (ctx.cr6.eq) goto loc_82487F28;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_82487EF8:
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82487f18
	if (!ctx.cr6.eq) goto loc_82487F18;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82487f18
	if (ctx.cr6.gt) goto loc_82487F18;
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
loc_82487F18:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82487ef8
	if (ctx.cr6.lt) goto loc_82487EF8;
loc_82487F28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481098
	ctx.lr = 0x82487F30;
	sub_82481098(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82488070
	if (ctx.cr6.eq) goto loc_82488070;
	// li r27,0
	r27.s64 = 0;
loc_82487F44:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r30,r27,r11
	r30.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248805c
	if (ctx.cr0.eq) goto loc_8248805C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// divwu. r28,r10,r11
	r28.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// li r29,0
	r29.s64 = 0;
	// beq 0x8248805c
	if (ctx.cr0.eq) goto loc_8248805C;
loc_82487F78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477448
	ctx.lr = 0x82487F88;
	sub_82477448(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82488050
	if (!ctx.cr6.eq) goto loc_82488050;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82487ff4
	if (!ctx.cr6.gt) goto loc_82487FF4;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
loc_82487FBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82487fe4
	if (!ctx.cr6.eq) goto loc_82487FE4;
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,72(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82487ff4
	if (!ctx.cr6.eq) goto loc_82487FF4;
loc_82487FE4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82487fbc
	if (ctx.cr6.lt) goto loc_82487FBC;
loc_82487FF4:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82488050
	if (ctx.cr6.eq) goto loc_82488050;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82488050
	if (ctx.cr6.eq) goto loc_82488050;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_8248800C:
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82488048
	if (!ctx.cr6.eq) goto loc_82488048;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82488048:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8248800c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248800C;
loc_82488050:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x82487f78
	if (ctx.cr6.lt) goto loc_82487F78;
loc_8248805C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82487f44
	if (ctx.cr6.lt) goto loc_82487F44;
loc_82488070:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82488200
	if (ctx.cr6.eq) goto loc_82488200;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82488080:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824881ec
	if (ctx.cr0.eq) goto loc_824881EC;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824881ec
	if (!ctx.cr6.eq) goto loc_824881EC;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824881ec
	if (!ctx.cr6.eq) goto loc_824881EC;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82488168
	if (ctx.cr6.eq) goto loc_82488168;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82488108
	if (ctx.cr6.eq) goto loc_82488108;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824880E0:
	// lwzx r3,r10,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82488108
	if (!ctx.cr6.eq) goto loc_82488108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824880e0
	if (ctx.cr6.lt) goto loc_824880E0;
loc_82488108:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824881ec
	if (ctx.cr6.eq) goto loc_824881EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824881e4
	if (ctx.cr6.eq) goto loc_824881E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82488120:
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r25,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r25.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82488120
	if (ctx.cr6.lt) goto loc_82488120;
	// b 0x824881e4
	goto loc_824881E4;
loc_82488168:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824881a0
	if (ctx.cr6.eq) goto loc_824881A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82488178:
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824881a0
	if (ctx.cr6.eq) goto loc_824881A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82488178
	if (ctx.cr6.lt) goto loc_82488178;
loc_824881A0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824881ec
	if (ctx.cr6.lt) goto loc_824881EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824881e4
	if (ctx.cr6.eq) goto loc_824881E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824881B8:
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r25,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r25.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824881b8
	if (ctx.cr6.lt) goto loc_824881B8;
loc_824881E4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// li r24,1
	r24.s64 = 1;
loc_824881EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82488080
	if (ctx.cr6.lt) goto loc_82488080;
loc_82488200:
	// cntlzw r11,r24
	ctx.r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824A9D58) {
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
	ctx.lr = 0x824A9D60;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi. r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824a9d74
	if (!ctx.cr0.eq) goto loc_824A9D74;
loc_824A9D6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824a9e68
	goto loc_824A9E68;
loc_824A9D74:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu. r28,r11,r7
	r28.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824a9e64
	if (ctx.cr0.eq) goto loc_824A9E64;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	r27.s64 = ctx.r11.s32 >> 31;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r29,r11,-24168
	r29.s64 = ctx.r11.s64 + -24168;
loc_824A9DA4:
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// beq cr6,0x824a9df0
	if (ctx.cr6.eq) goto loc_824A9DF0;
	// addi r11,r1,-84
	ctx.r11.s64 = ctx.r1.s64 + -84;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824A9DCC:
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824a9dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A9DCC;
loc_824A9DF0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824a9e54
	if (ctx.cr6.eq) goto loc_824A9E54;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A9E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
loc_824A9E08:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a9e28
	if (ctx.cr6.eq) goto loc_824A9E28;
	// add r26,r9,r11
	r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r26,r29
	r26.u64 = REX_LOAD_U32(r26.u32 + r29.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x824a9e3c
	if (!ctx.cr6.eq) goto loc_824A9E3C;
loc_824A9E28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824a9e08
	if (ctx.cr6.lt) goto loc_824A9E08;
	// b 0x824a9e4c
	goto loc_824A9E4C;
loc_824A9E3C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x824a9e00
	if (ctx.cr6.lt) goto loc_824A9E00;
loc_824A9E4C:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// beq cr6,0x824a9d6c
	if (ctx.cr6.eq) goto loc_824A9D6C;
loc_824A9E54:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x824a9da4
	if (ctx.cr6.lt) goto loc_824A9DA4;
loc_824A9E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A9E68:
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824B0388) {
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
	ctx.lr = 0x824B0390;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824B03A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b03c4
	if (ctx.cr6.eq) goto loc_824B03C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// blt cr6,0x824b03a8
	if (ctx.cr6.lt) goto loc_824B03A8;
loc_824B03C4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x824b0830
	if (ctx.cr6.gt) goto loc_824B0830;
	// lwz r10,1156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1156);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x824b0830
	if (ctx.cr6.gt) goto loc_824B0830;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b04a8
	if (ctx.cr6.eq) goto loc_824B04A8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// addi r8,r31,1108
	ctx.r8.s64 = r31.s64 + 1108;
loc_824B0408:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// beq 0x824b0444
	if (ctx.cr0.eq) goto loc_824B0444;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824b0830
	if (ctx.cr6.eq) goto loc_824B0830;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x824b0494
	goto loc_824B0494;
loc_824B0444:
	// lis r27,4352
	r27.s64 = 285212672;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x824b0830
	if (ctx.cr6.eq) goto loc_824B0830;
	// lis r27,29200
	r27.s64 = 1913651200;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x824b048c
	if (ctx.cr6.eq) goto loc_824B048C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFC;
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lbz r9,111(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x824b0830
	if (!ctx.cr6.eq) goto loc_824B0830;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b0830
	if (!ctx.cr6.eq) goto loc_824B0830;
loc_824B048C:
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_824B0494:
	// lwz r11,1156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1156);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b0408
	if (ctx.cr6.lt) goto loc_824B0408;
loc_824B04A8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x824b0138
	ctx.lr = 0x824B04D8;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B04FC;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B0520;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B0544;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B0568;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B058C;
	sub_824B0138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b0830
	if (ctx.cr0.eq) goto loc_824B0830;
	// li r24,6
	r24.s64 = 6;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824b0820
	if (!ctx.cr6.eq) goto loc_824B0820;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// std r23,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r23.u64);
	// std r23,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r23.u64);
	// std r23,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r23.u64);
loc_824B05C8:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b05e8
	if (!ctx.cr6.eq) goto loc_824B05E8;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b07cc
	if (ctx.cr6.eq) goto loc_824B07CC;
loc_824B05E8:
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b0604
	if (ctx.cr6.eq) goto loc_824B0604;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
loc_824B0604:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b0620
	if (ctx.cr6.eq) goto loc_824B0620;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r27,r11,0,0,11
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
loc_824B0620:
	// bl 0x824aab40
	ctx.lr = 0x824B0624;
	sub_824AAB40(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x824b063c
	if (!ctx.cr0.eq) goto loc_824B063C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B0634;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b07cc
	if (ctx.cr0.eq) goto loc_824B07CC;
loc_824B063C:
	// li r29,-1
	r29.s64 = -1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824b06f4
	if (ctx.cr6.eq) goto loc_824B06F4;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 32);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82478758
	ctx.lr = 0x824B0678;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824b0830
	if (ctx.cr6.eq) goto loc_824B0830;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b06d0
	if (ctx.cr0.eq) goto loc_824B06D0;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_824B06A0:
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b06a0
	if (ctx.cr6.lt) goto loc_824B06A0;
loc_824B06D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r22,r10,r11
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r28,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r28.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824780d8
	ctx.lr = 0x824B06F0;
	sub_824780D8(ctx, base);
	// stw r25,12(r22)
	REX_STORE_U32(r22.u32 + 12, r25.u32);
loc_824B06F4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B06FC;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b07c4
	if (ctx.cr0.eq) goto loc_824B07C4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x824b074c
	if (!ctx.cr6.eq) goto loc_824B074C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f1,32(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 32);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82478758
	ctx.lr = 0x824B0740;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824b0830
	if (ctx.cr6.eq) goto loc_824B0830;
loc_824B074C:
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b0798
	if (ctx.cr0.eq) goto loc_824B0798;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_824B0768:
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b0768
	if (ctx.cr6.lt) goto loc_824B0768;
loc_824B0798:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// bne cr6,0x824b07c4
	if (!ctx.cr6.eq) goto loc_824B07C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824780d8
	ctx.lr = 0x824B07C0;
	sub_824780D8(ctx, base);
	// stw r25,12(r28)
	REX_STORE_U32(r28.u32 + 12, r25.u32);
loc_824B07C4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x824b0830
	if (ctx.cr6.eq) goto loc_824B0830;
loc_824B07CC:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// blt cr6,0x824b05c8
	if (ctx.cr6.lt) goto loc_824B05C8;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_824B07E8:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b0800
	if (ctx.cr6.eq) goto loc_824B0800;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_824B0800:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b0818
	if (ctx.cr6.eq) goto loc_824B0818;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_824B0818:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824b07e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B07E8;
loc_824B0820:
	// stw r24,548(r31)
	REX_STORE_U32(r31.u32 + 548, r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,552(r31)
	REX_STORE_U32(r31.u32 + 552, r24.u32);
	// b 0x824b0834
	goto loc_824B0834;
loc_824B0830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B0834:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824CADF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CB240) {
	REX_FUNC_PROLOGUE();
	// b 0x824cb0d0
	sub_824CB0D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824CB720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,112(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// blt 0x824cb79c
	if (ctx.cr0.lt) goto loc_824CB79C;
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_824CB73C:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824cb78c
	if (!ctx.cr6.gt) goto loc_824CB78C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_824CB74C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// beq cr6,0x824cb77c
	if (ctx.cr6.eq) goto loc_824CB77C;
	// subf r10,r8,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_824CB770:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbux r9,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824cb770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CB770;
loc_824CB77C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824cb74c
	if (ctx.cr6.lt) goto loc_824CB74C;
loc_824CB78C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bge 0x824cb73c
	if (!ctx.cr0.lt) goto loc_824CB73C;
loc_824CB79C:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D05A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D05B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D05DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824d05fc
	if (ctx.cr0.eq) goto loc_824D05FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r28,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r31,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, r31.u8);
	// stb r30,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, r30.u8);
loc_824D05FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D2868) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824d28ac
	if (ctx.cr6.lt) goto loc_824D28AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824D28AC:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D4450) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D4458;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r4,12
	r31.s64 = ctx.r4.s64 + 12;
	// li r30,4
	r30.s64 = 4;
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D4474:
	// lvlx128 v63,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushMode();
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
	// stvehx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	REX_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x824e3400
	ctx.lr = 0x824D44B8;
	sub_824E3400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lhzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + r28.u32, ctx.r10.u16);
	// bne 0x824d4474
	if (!ctx.cr0.eq) goto loc_824D4474;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D9338) {
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
	ctx.lr = 0x824D9340;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D935C;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r19,r10,21716
	r19.s64 = ctx.r10.s64 + 21716;
	// addi r27,r11,28488
	r27.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D937C;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9384;
	sub_824D8700(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r10,21228
	r26.s64 = ctx.r10.s64 + 21228;
	// addi r18,r11,21544
	r18.s64 = ctx.r11.s64 + 21544;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d94a4
	if (!ctx.cr6.lt) goto loc_824D94A4;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r6,21216
	r29.s64 = ctx.r6.s64 + 21216;
	// addi r25,r7,21708
	r25.s64 = ctx.r7.s64 + 21708;
	// addi r24,r8,21700
	r24.s64 = ctx.r8.s64 + 21700;
	// addi r23,r9,21692
	r23.s64 = ctx.r9.s64 + 21692;
	// addi r22,r10,21684
	r22.s64 = ctx.r10.s64 + 21684;
	// addi r21,r11,24460
	r21.s64 = ctx.r11.s64 + 24460;
loc_824D93E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D93E8;
	sub_824D7948(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D93F8;
	sub_824EAC90(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,-8(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D940C;
	sub_824EAC90(ctx, base);
	// lfs f1,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9428;
	sub_824EAC90(ctx, base);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9444;
	sub_824EAC90(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9460;
	sub_824EAC90(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D947C;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D9484;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// addi r9,r30,-8
	ctx.r9.s64 = r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d93e0
	if (ctx.cr6.lt) goto loc_824D93E0;
loc_824D94A4:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D94B0;
	sub_824D79A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D94B8;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r23,r11,21672
	r23.s64 = ctx.r11.s64 + 21672;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D94D0;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D94D8;
	sub_824D8700(ctx, base);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d95a8
	if (!ctx.cr6.lt) goto loc_824D95A8;
	// addi r30,r11,2
	r30.s64 = ctx.r11.s64 + 2;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r8,-18300
	r29.s64 = ctx.r8.s64 + -18300;
	// addi r28,r9,-20928
	r28.s64 = ctx.r9.s64 + -20928;
	// addi r25,r10,26392
	r25.s64 = ctx.r10.s64 + 26392;
	// addi r24,r11,24468
	r24.s64 = ctx.r11.s64 + 24468;
loc_824D9514:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D951C;
	sub_824D7948(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D952C;
	sub_824EAC90(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,-2(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + -2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9540;
	sub_824EAC90(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,-1(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9554;
	sub_824EAC90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9568;
	sub_824EAC90(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// bl 0x824eac90
	ctx.lr = 0x824D9580;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D9588;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9514
	if (ctx.cr6.lt) goto loc_824D9514;
loc_824D95A8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D95B4;
	sub_824D79A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D95BC;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r25,r11,21656
	r25.s64 = ctx.r11.s64 + 21656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D95D4;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D95DC;
	sub_824D8700(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r17)
	r30.u64 = REX_LOAD_U32(r17.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d9668
	if (!ctx.cr6.lt) goto loc_824D9668;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r10,-17164
	r29.s64 = ctx.r10.s64 + -17164;
	// addi r28,r11,24452
	r28.s64 = ctx.r11.s64 + 24452;
loc_824D9604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D960C;
	sub_824D7948(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D961C;
	sub_824EAC90(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9630;
	sub_824EAC90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9644;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D964C;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9604
	if (ctx.cr6.lt) goto loc_824D9604;
loc_824D9668:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9674;
	sub_824D79A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_824EAD48) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x824EAD50;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r11,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r10,-18912
	ctx.r9.s64 = ctx.r10.s64 + -18912;
	// stw r9,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r11,r11,17928
	ctx.r11.s64 = ctx.r11.s64 + 17928;
	// stw r10,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,-192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-760(r8)
	REX_STORE_U32(ctx.r8.u32 + -760, ctx.r11.u32);
	// addi r10,r10,17924
	ctx.r10.s64 = ctx.r10.s64 + 17924;
	// addi r9,r9,17920
	ctx.r9.s64 = ctx.r9.s64 + 17920;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,-192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r10,-756(r11)
	REX_STORE_U32(ctx.r11.u32 + -756, ctx.r10.u32);
	// stw r9,-752(r11)
	REX_STORE_U32(ctx.r11.u32 + -752, ctx.r9.u32);
	// addi r10,r7,-28640
	ctx.r10.s64 = ctx.r7.s64 + -28640;
	// stw r11,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r11,r8,17916
	ctx.r11.s64 = ctx.r8.s64 + 17916;
	// addi r9,r6,-28648
	ctx.r9.s64 = ctx.r6.s64 + -28648;
	// lwz r8,-192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r11,-748(r8)
	REX_STORE_U32(ctx.r8.u32 + -748, ctx.r11.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r10,-744(r8)
	REX_STORE_U32(ctx.r8.u32 + -744, ctx.r10.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r9,-740(r8)
	REX_STORE_U32(ctx.r8.u32 + -740, ctx.r9.u32);
	// addi r11,r5,-28656
	ctx.r11.s64 = ctx.r5.s64 + -28656;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r10,r4,-28664
	ctx.r10.s64 = ctx.r4.s64 + -28664;
	// addi r9,r3,-28672
	ctx.r9.s64 = ctx.r3.s64 + -28672;
	// stw r11,-736(r8)
	REX_STORE_U32(ctx.r8.u32 + -736, ctx.r11.u32);
	// lis r31,-32241
	r31.s64 = -2112946176;
	// stw r10,-732(r8)
	REX_STORE_U32(ctx.r8.u32 + -732, ctx.r10.u32);
	// lis r30,-32241
	r30.s64 = -2112946176;
	// stw r9,-728(r8)
	REX_STORE_U32(ctx.r8.u32 + -728, ctx.r9.u32);
	// lis r29,-32241
	r29.s64 = -2112946176;
	// addi r11,r31,17888
	ctx.r11.s64 = r31.s64 + 17888;
	// addi r10,r30,17880
	ctx.r10.s64 = r30.s64 + 17880;
	// addi r9,r29,17876
	ctx.r9.s64 = r29.s64 + 17876;
	// stw r11,-724(r8)
	REX_STORE_U32(ctx.r8.u32 + -724, ctx.r11.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// stw r10,-720(r8)
	REX_STORE_U32(ctx.r8.u32 + -720, ctx.r10.u32);
	// lis r27,-32241
	r27.s64 = -2112946176;
	// stw r9,-716(r8)
	REX_STORE_U32(ctx.r8.u32 + -716, ctx.r9.u32);
	// lis r26,-32241
	r26.s64 = -2112946176;
	// addi r11,r28,-28488
	ctx.r11.s64 = r28.s64 + -28488;
	// addi r10,r27,17860
	ctx.r10.s64 = r27.s64 + 17860;
	// addi r9,r26,17852
	ctx.r9.s64 = r26.s64 + 17852;
	// stw r11,-712(r8)
	REX_STORE_U32(ctx.r8.u32 + -712, ctx.r11.u32);
	// stw r10,-708(r8)
	REX_STORE_U32(ctx.r8.u32 + -708, ctx.r10.u32);
	// lis r31,-32251
	r31.s64 = -2113601536;
	// stw r9,-704(r8)
	REX_STORE_U32(ctx.r8.u32 + -704, ctx.r9.u32);
	// lis r30,-32251
	r30.s64 = -2113601536;
	// lis r29,-32251
	r29.s64 = -2113601536;
	// lis r28,-32251
	r28.s64 = -2113601536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r31,r31,-28572
	r31.s64 = r31.s64 + -28572;
	// addi r30,r30,-28580
	r30.s64 = r30.s64 + -28580;
	// addi r29,r29,-28588
	r29.s64 = r29.s64 + -28588;
	// addi r28,r28,-28596
	r28.s64 = r28.s64 + -28596;
	// lis r27,-32241
	r27.s64 = -2112946176;
	// lis r26,-32241
	r26.s64 = -2112946176;
	// addi r11,r11,17848
	ctx.r11.s64 = ctx.r11.s64 + 17848;
	// addi r10,r10,17844
	ctx.r10.s64 = ctx.r10.s64 + 17844;
	// addi r9,r9,17836
	ctx.r9.s64 = ctx.r9.s64 + 17836;
	// addi r8,r8,17828
	ctx.r8.s64 = ctx.r8.s64 + 17828;
	// addi r7,r7,17820
	ctx.r7.s64 = ctx.r7.s64 + 17820;
	// lwz r25,-192(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r24,-32128
	r24.s64 = -2105540608;
	// addi r3,r3,-28388
	ctx.r3.s64 = ctx.r3.s64 + -28388;
	// stw r31,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, r31.u32);
	// addi r23,r24,-19552
	r23.s64 = r24.s64 + -19552;
	// stw r30,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r30.u32);
	// addi r6,r6,-28504
	ctx.r6.s64 = ctx.r6.s64 + -28504;
	// stw r29,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, r29.u32);
	// addi r5,r5,-28356
	ctx.r5.s64 = ctx.r5.s64 + -28356;
	// stw r28,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r28.u32);
	// stw r8,-688(r25)
	REX_STORE_U32(r25.u32 + -688, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,-668(r25)
	REX_STORE_U32(r25.u32 + -668, ctx.r3.u32);
	// addi r4,r4,-28372
	ctx.r4.s64 = ctx.r4.s64 + -28372;
	// stw r31,-664(r25)
	REX_STORE_U32(r25.u32 + -664, r31.u32);
	// addi r27,r27,17720
	r27.s64 = r27.s64 + 17720;
	// stw r30,-660(r25)
	REX_STORE_U32(r25.u32 + -660, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-656(r25)
	REX_STORE_U32(r25.u32 + -656, r29.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r10,-696(r25)
	REX_STORE_U32(r25.u32 + -696, ctx.r10.u32);
	// addi r26,r26,18076
	r26.s64 = r26.s64 + 18076;
	// li r30,3
	r30.s64 = 3;
	// stw r7,-684(r25)
	REX_STORE_U32(r25.u32 + -684, ctx.r7.u32);
	// li r29,3
	r29.s64 = 3;
	// stw r8,16(r23)
	REX_STORE_U32(r23.u32 + 16, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,-652(r25)
	REX_STORE_U32(r25.u32 + -652, r28.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r27,-648(r25)
	REX_STORE_U32(r25.u32 + -648, r27.u32);
	// stw r6,-680(r25)
	REX_STORE_U32(r25.u32 + -680, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,-676(r25)
	REX_STORE_U32(r25.u32 + -676, ctx.r5.u32);
	// li r28,3
	r28.s64 = 3;
	// stw r4,-672(r25)
	REX_STORE_U32(r25.u32 + -672, ctx.r4.u32);
	// li r27,3
	r27.s64 = 3;
	// stw r3,36(r23)
	REX_STORE_U32(r23.u32 + 36, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,40(r23)
	REX_STORE_U32(r23.u32 + 40, r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,-700(r25)
	REX_STORE_U32(r25.u32 + -700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,-692(r25)
	REX_STORE_U32(r25.u32 + -692, ctx.r9.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	r31.s64 = -2113601536;
	// stw r26,-644(r25)
	REX_STORE_U32(r25.u32 + -644, r26.u32);
	// stw r30,44(r23)
	REX_STORE_U32(r23.u32 + 44, r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r23)
	REX_STORE_U32(r23.u32 + 48, r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r25.u32);
	// lis r30,-32241
	r30.s64 = -2112946176;
	// stw r10,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r10.u32);
	// lis r29,-32241
	r29.s64 = -2112946176;
	// li r25,2
	r25.s64 = 2;
	// stw r7,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r7.u32);
	// li r26,2
	r26.s64 = 2;
	// stw r8,76(r23)
	REX_STORE_U32(r23.u32 + 76, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,80(r23)
	REX_STORE_U32(r23.u32 + 80, ctx.r7.u32);
	// stw r28,52(r23)
	REX_STORE_U32(r23.u32 + 52, r28.u32);
	// addi r8,r3,-28620
	ctx.r8.s64 = ctx.r3.s64 + -28620;
	// stw r27,56(r23)
	REX_STORE_U32(r23.u32 + 56, r27.u32);
	// addi r7,r31,-28632
	ctx.r7.s64 = r31.s64 + -28632;
	// stw r6,24(r23)
	REX_STORE_U32(r23.u32 + 24, ctx.r6.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// stw r5,28(r23)
	REX_STORE_U32(r23.u32 + 28, ctx.r5.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// stw r4,32(r23)
	REX_STORE_U32(r23.u32 + 32, ctx.r4.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r11.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r9,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r9.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r25,-19552(r24)
	REX_STORE_U32(r24.u32 + -19552, r25.u32);
	// addi r3,r30,17628
	ctx.r3.s64 = r30.s64 + 17628;
	// stw r26,60(r23)
	REX_STORE_U32(r23.u32 + 60, r26.u32);
	// addi r31,r29,17620
	r31.s64 = r29.s64 + 17620;
	// stw r11,64(r23)
	REX_STORE_U32(r23.u32 + 64, ctx.r11.u32);
	// stw r10,68(r23)
	REX_STORE_U32(r23.u32 + 68, ctx.r10.u32);
	// stw r9,72(r23)
	REX_STORE_U32(r23.u32 + 72, ctx.r9.u32);
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r6,r6,17680
	ctx.r6.s64 = ctx.r6.s64 + 17680;
	// stw r11,84(r23)
	REX_STORE_U32(r23.u32 + 84, ctx.r11.u32);
	// addi r30,r28,-28396
	r30.s64 = r28.s64 + -28396;
	// stw r11,96(r23)
	REX_STORE_U32(r23.u32 + 96, ctx.r11.u32);
	// addi r29,r27,-28404
	r29.s64 = r27.s64 + -28404;
	// stw r11,108(r23)
	REX_STORE_U32(r23.u32 + 108, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r23)
	REX_STORE_U32(r23.u32 + 92, ctx.r9.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// stw r6,-400(r10)
	REX_STORE_U32(ctx.r10.u32 + -400, ctx.r6.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,104(r23)
	REX_STORE_U32(r23.u32 + 104, ctx.r9.u32);
	// lis r26,-32251
	r26.s64 = -2113601536;
	// stw r10,88(r23)
	REX_STORE_U32(r23.u32 + 88, ctx.r10.u32);
	// lis r25,-32241
	r25.s64 = -2112946176;
	// stw r10,100(r23)
	REX_STORE_U32(r23.u32 + 100, ctx.r10.u32);
	// lis r24,-32241
	r24.s64 = -2112946176;
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r22,-32241
	r22.s64 = -2112946176;
	// stw r11,-520(r10)
	REX_STORE_U32(ctx.r10.u32 + -520, ctx.r11.u32);
	// lis r21,-32251
	r21.s64 = -2113601536;
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r5,r5,-28608
	ctx.r5.s64 = ctx.r5.s64 + -28608;
	// stw r11,-508(r9)
	REX_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
	// addi r4,r4,17660
	ctx.r4.s64 = ctx.r4.s64 + 17660;
	// stw r10,112(r23)
	REX_STORE_U32(r23.u32 + 112, ctx.r10.u32);
	// addi r28,r28,-28412
	r28.s64 = r28.s64 + -28412;
	// stw r9,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r27,r27,-28420
	r27.s64 = r27.s64 + -28420;
	// stw r11,-496(r10)
	REX_STORE_U32(ctx.r10.u32 + -496, ctx.r11.u32);
	// addi r26,r26,-28428
	r26.s64 = r26.s64 + -28428;
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,116(r23)
	REX_STORE_U32(r23.u32 + 116, ctx.r9.u32);
	// lis r23,-32241
	r23.s64 = -2112946176;
	// lwz r9,-192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r25,r25,17572
	r25.s64 = r25.s64 + 17572;
	// stw r10,-516(r9)
	REX_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
	// addi r24,r24,17564
	r24.s64 = r24.s64 + 17564;
	// stw r9,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r23,r23,17560
	r23.s64 = r23.s64 + 17560;
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r22,17548
	r22.s64 = r22.s64 + 17548;
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// addi r21,r21,-28696
	r21.s64 = r21.s64 + -28696;
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-484(r9)
	REX_STORE_U32(ctx.r9.u32 + -484, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-472(r10)
	REX_STORE_U32(ctx.r10.u32 + -472, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-460(r6)
	REX_STORE_U32(ctx.r6.u32 + -460, ctx.r11.u32);
	// stw r11,-448(r6)
	REX_STORE_U32(ctx.r6.u32 + -448, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,-512(r6)
	REX_STORE_U32(ctx.r6.u32 + -512, ctx.r9.u32);
	// addi r20,r11,17528
	r20.s64 = ctx.r11.s64 + 17528;
	// stw r10,-504(r6)
	REX_STORE_U32(ctx.r6.u32 + -504, ctx.r10.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r9,-500(r6)
	REX_STORE_U32(ctx.r6.u32 + -500, ctx.r9.u32);
	// stw r10,-492(r6)
	REX_STORE_U32(ctx.r6.u32 + -492, ctx.r10.u32);
	// addi r19,r11,-28440
	r19.s64 = ctx.r11.s64 + -28440;
	// stw r9,-488(r6)
	REX_STORE_U32(ctx.r6.u32 + -488, ctx.r9.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r10,-480(r6)
	REX_STORE_U32(ctx.r6.u32 + -480, ctx.r10.u32);
	// stw r9,-476(r6)
	REX_STORE_U32(ctx.r6.u32 + -476, ctx.r9.u32);
	// addi r18,r11,-28448
	r18.s64 = ctx.r11.s64 + -28448;
	// stw r10,-468(r6)
	REX_STORE_U32(ctx.r6.u32 + -468, ctx.r10.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,-464(r6)
	REX_STORE_U32(ctx.r6.u32 + -464, ctx.r9.u32);
	// stw r10,-456(r6)
	REX_STORE_U32(ctx.r6.u32 + -456, ctx.r10.u32);
	// addi r11,r11,17508
	ctx.r11.s64 = ctx.r11.s64 + 17508;
	// stw r9,-452(r6)
	REX_STORE_U32(ctx.r6.u32 + -452, ctx.r9.u32);
	// stw r10,-444(r6)
	REX_STORE_U32(ctx.r6.u32 + -444, ctx.r10.u32);
	// stw r11,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,-372(r6)
	REX_STORE_U32(ctx.r6.u32 + -372, r30.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r30,-192(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r17,-32251
	r17.s64 = -2113601536;
	// stw r6,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// lis r16,-32251
	r16.s64 = -2113601536;
	// stw r9,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r30.u32);
	// lis r30,-32251
	r30.s64 = -2113601536;
	// stw r5,-396(r6)
	REX_STORE_U32(ctx.r6.u32 + -396, ctx.r5.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r8,-388(r6)
	REX_STORE_U32(ctx.r6.u32 + -388, ctx.r8.u32);
	// lis r15,-32241
	r15.s64 = -2112946176;
	// addi r8,r5,-28460
	ctx.r8.s64 = ctx.r5.s64 + -28460;
	// stw r4,-392(r6)
	REX_STORE_U32(ctx.r6.u32 + -392, ctx.r4.u32);
	// stw r3,-380(r6)
	REX_STORE_U32(ctx.r6.u32 + -380, ctx.r3.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r31,-376(r6)
	REX_STORE_U32(ctx.r6.u32 + -376, r31.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	r31.s64 = -2113601536;
	// stw r7,-384(r6)
	REX_STORE_U32(ctx.r6.u32 + -384, ctx.r7.u32);
	// addi r7,r4,17484
	ctx.r7.s64 = ctx.r4.s64 + 17484;
	// stw r10,-436(r6)
	REX_STORE_U32(ctx.r6.u32 + -436, ctx.r10.u32);
	// addi r4,r31,-28828
	ctx.r4.s64 = r31.s64 + -28828;
	// stw r10,-424(r6)
	REX_STORE_U32(ctx.r6.u32 + -424, ctx.r10.u32);
	// stw r10,-412(r6)
	REX_STORE_U32(ctx.r6.u32 + -412, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,-440(r6)
	REX_STORE_U32(ctx.r6.u32 + -440, ctx.r11.u32);
	// lis r14,-32251
	r14.s64 = -2113601536;
	// stw r11,-428(r6)
	REX_STORE_U32(ctx.r6.u32 + -428, ctx.r11.u32);
	// stw r11,-416(r6)
	REX_STORE_U32(ctx.r6.u32 + -416, ctx.r11.u32);
	// stw r29,-368(r6)
	REX_STORE_U32(ctx.r6.u32 + -368, r29.u32);
	// lis r29,-32251
	r29.s64 = -2113601536;
	// stw r9,-432(r6)
	REX_STORE_U32(ctx.r6.u32 + -432, ctx.r9.u32);
	// stw r9,-420(r6)
	REX_STORE_U32(ctx.r6.u32 + -420, ctx.r9.u32);
	// stw r9,-408(r6)
	REX_STORE_U32(ctx.r6.u32 + -408, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r28,-364(r6)
	REX_STORE_U32(ctx.r6.u32 + -364, r28.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// lwz r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,-360(r6)
	REX_STORE_U32(ctx.r6.u32 + -360, r27.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// lwz r31,-184(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// stw r26,-356(r6)
	REX_STORE_U32(ctx.r6.u32 + -356, r26.u32);
	// lis r26,-32251
	r26.s64 = -2113601536;
	// stw r25,-352(r6)
	REX_STORE_U32(ctx.r6.u32 + -352, r25.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,-404(r5)
	REX_STORE_U32(ctx.r5.u32 + -404, ctx.r11.u32);
	// lis r25,-32251
	r25.s64 = -2113601536;
	// stw r24,-348(r5)
	REX_STORE_U32(ctx.r5.u32 + -348, r24.u32);
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r5,r3,-28816
	ctx.r5.s64 = ctx.r3.s64 + -28816;
	// lwz r3,-188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r11,-192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r23,-344(r11)
	REX_STORE_U32(ctx.r11.u32 + -344, r23.u32);
	// stw r22,-336(r11)
	REX_STORE_U32(ctx.r11.u32 + -336, r22.u32);
	// addi r22,r16,-28928
	r22.s64 = r16.s64 + -28928;
	// stw r21,-340(r11)
	REX_STORE_U32(ctx.r11.u32 + -340, r21.u32);
	// stw r20,-324(r11)
	REX_STORE_U32(ctx.r11.u32 + -324, r20.u32);
	// stw r19,-332(r11)
	REX_STORE_U32(ctx.r11.u32 + -332, r19.u32);
	// addi r11,r10,-28472
	ctx.r11.s64 = ctx.r10.s64 + -28472;
	// lwz r10,-188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,-312(r10)
	REX_STORE_U32(ctx.r10.u32 + -312, r31.u32);
	// addi r31,r29,-28852
	r31.s64 = r29.s64 + -28852;
	// stw r3,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r30,-28840
	ctx.r3.s64 = r30.s64 + -28840;
	// stw r18,-328(r10)
	REX_STORE_U32(ctx.r10.u32 + -328, r18.u32);
	// addi r30,r28,-28868
	r30.s64 = r28.s64 + -28868;
	// stw r10,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// addi r10,r9,-28480
	ctx.r10.s64 = ctx.r9.s64 + -28480;
	// addi r29,r27,-28884
	r29.s64 = r27.s64 + -28884;
	// lwz r24,-172(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r9,r6,18092
	ctx.r9.s64 = ctx.r6.s64 + 18092;
	// lwz r23,-168(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// addi r28,r26,-28900
	r28.s64 = r26.s64 + -28900;
	// lwz r26,-180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// addi r27,r25,-28920
	r27.s64 = r25.s64 + -28920;
	// lwz r25,-176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r6,r17,-28804
	ctx.r6.s64 = r17.s64 + -28804;
	// lwz r19,-184(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lis r18,-32128
	r18.s64 = -2105540608;
	// addi r21,r15,17324
	r21.s64 = r15.s64 + 17324;
	// addi r17,r18,-19112
	r17.s64 = r18.s64 + -19112;
	// addi r20,r14,-28940
	r20.s64 = r14.s64 + -28940;
	// stw r19,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r19.u32);
	// stw r11,-320(r19)
	REX_STORE_U32(r19.u32 + -320, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r8,-304(r19)
	REX_STORE_U32(r19.u32 + -304, ctx.r8.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r7,-300(r19)
	REX_STORE_U32(r19.u32 + -300, ctx.r7.u32);
	// addi r11,r11,-28964
	ctx.r11.s64 = ctx.r11.s64 + -28964;
	// stw r10,-316(r19)
	REX_STORE_U32(r19.u32 + -316, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,-308(r19)
	REX_STORE_U32(r19.u32 + -308, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,-232(r19)
	REX_STORE_U32(r19.u32 + -232, ctx.r11.u32);
	// addi r8,r8,-29000
	ctx.r8.s64 = ctx.r8.s64 + -29000;
	// lwz r11,-188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// addi r7,r7,17284
	ctx.r7.s64 = ctx.r7.s64 + 17284;
	// stw r6,-296(r19)
	REX_STORE_U32(r19.u32 + -296, ctx.r6.u32);
	// addi r10,r10,-28976
	ctx.r10.s64 = ctx.r10.s64 + -28976;
	// stw r5,-292(r19)
	REX_STORE_U32(r19.u32 + -292, ctx.r5.u32);
	// addi r9,r9,-28988
	ctx.r9.s64 = ctx.r9.s64 + -28988;
	// stw r4,-288(r19)
	REX_STORE_U32(r19.u32 + -288, ctx.r4.u32);
	// stw r3,-284(r19)
	REX_STORE_U32(r19.u32 + -284, ctx.r3.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r8,-228(r19)
	REX_STORE_U32(r19.u32 + -228, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,-208(r19)
	REX_STORE_U32(r19.u32 + -208, ctx.r7.u32);
	// addi r6,r6,17280
	ctx.r6.s64 = ctx.r6.s64 + 17280;
	// stw r31,-280(r19)
	REX_STORE_U32(r19.u32 + -280, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,-276(r19)
	REX_STORE_U32(r19.u32 + -276, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-272(r19)
	REX_STORE_U32(r19.u32 + -272, r29.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r28,-268(r19)
	REX_STORE_U32(r19.u32 + -268, r28.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r27,-264(r19)
	REX_STORE_U32(r19.u32 + -264, r27.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r26,-260(r19)
	REX_STORE_U32(r19.u32 + -260, r26.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r10,-220(r19)
	REX_STORE_U32(r19.u32 + -220, ctx.r10.u32);
	// li r27,1
	r27.s64 = 1;
	// stw r9,-212(r19)
	REX_STORE_U32(r19.u32 + -212, ctx.r9.u32);
	// addi r19,r11,-28952
	r19.s64 = ctx.r11.s64 + -28952;
	// lwz r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// li r26,1
	r26.s64 = 1;
	// stw r5,-19112(r18)
	REX_STORE_U32(r18.u32 + -19112, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r17)
	REX_STORE_U32(r17.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,8(r17)
	REX_STORE_U32(r17.u32 + 8, ctx.r3.u32);
	// stw r31,12(r17)
	REX_STORE_U32(r17.u32 + 12, r31.u32);
	// stw r11,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lwz r7,-168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r6,-204(r11)
	REX_STORE_U32(ctx.r11.u32 + -204, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,-168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r25,-256(r8)
	REX_STORE_U32(ctx.r8.u32 + -256, r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,-252(r7)
	REX_STORE_U32(ctx.r7.u32 + -252, r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,16(r17)
	REX_STORE_U32(r17.u32 + 16, r30.u32);
	// stw r6,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// lwz r5,-168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r23,-248(r6)
	REX_STORE_U32(ctx.r6.u32 + -248, r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-244(r5)
	REX_STORE_U32(ctx.r5.u32 + -244, r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,-240(r4)
	REX_STORE_U32(ctx.r4.u32 + -240, r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,40(r17)
	REX_STORE_U32(r17.u32 + 40, ctx.r10.u32);
	// stw r10,80(r17)
	REX_STORE_U32(r17.u32 + 80, ctx.r10.u32);
	// stw r10,96(r17)
	REX_STORE_U32(r17.u32 + 96, ctx.r10.u32);
	// stw r10,108(r17)
	REX_STORE_U32(r17.u32 + 108, ctx.r10.u32);
	// stw r10,120(r17)
	REX_STORE_U32(r17.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r17)
	REX_STORE_U32(r17.u32 + 44, ctx.r9.u32);
	// stw r10,132(r17)
	REX_STORE_U32(r17.u32 + 132, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r17)
	REX_STORE_U32(r17.u32 + 84, ctx.r9.u32);
	// stw r10,144(r17)
	REX_STORE_U32(r17.u32 + 144, ctx.r10.u32);
	// stw r10,156(r17)
	REX_STORE_U32(r17.u32 + 156, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,100(r17)
	REX_STORE_U32(r17.u32 + 100, ctx.r9.u32);
	// stw r10,184(r17)
	REX_STORE_U32(r17.u32 + 184, ctx.r10.u32);
	// stw r10,188(r17)
	REX_STORE_U32(r17.u32 + 188, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,112(r17)
	REX_STORE_U32(r17.u32 + 112, ctx.r9.u32);
	// stw r9,124(r17)
	REX_STORE_U32(r17.u32 + 124, ctx.r9.u32);
	// stw r9,136(r17)
	REX_STORE_U32(r17.u32 + 136, ctx.r9.u32);
	// stw r9,148(r17)
	REX_STORE_U32(r17.u32 + 148, ctx.r9.u32);
	// stw r9,160(r17)
	REX_STORE_U32(r17.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,196(r17)
	REX_STORE_U32(r17.u32 + 196, ctx.r10.u32);
	// lwz r31,-168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r10,-164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// stw r11,36(r17)
	REX_STORE_U32(r17.u32 + 36, ctx.r11.u32);
	// stw r11,88(r17)
	REX_STORE_U32(r17.u32 + 88, ctx.r11.u32);
	// stw r11,92(r17)
	REX_STORE_U32(r17.u32 + 92, ctx.r11.u32);
	// stw r31,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r31.u32);
	// stw r11,104(r17)
	REX_STORE_U32(r17.u32 + 104, ctx.r11.u32);
	// stw r11,116(r17)
	REX_STORE_U32(r17.u32 + 116, ctx.r11.u32);
	// stw r11,128(r17)
	REX_STORE_U32(r17.u32 + 128, ctx.r11.u32);
	// stw r11,140(r17)
	REX_STORE_U32(r17.u32 + 140, ctx.r11.u32);
	// stw r11,152(r17)
	REX_STORE_U32(r17.u32 + 152, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,168(r17)
	REX_STORE_U32(r17.u32 + 168, ctx.r9.u32);
	// stw r9,172(r17)
	REX_STORE_U32(r17.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,48(r17)
	REX_STORE_U32(r17.u32 + 48, ctx.r8.u32);
	// stw r20,-224(r3)
	REX_STORE_U32(ctx.r3.u32 + -224, r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,-216(r31)
	REX_STORE_U32(r31.u32 + -216, r19.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,176(r17)
	REX_STORE_U32(r17.u32 + 176, ctx.r11.u32);
	// stw r11,180(r17)
	REX_STORE_U32(r17.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,-18912(r10)
	REX_STORE_U32(ctx.r10.u32 + -18912, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,20(r17)
	REX_STORE_U32(r17.u32 + 20, r29.u32);
	// stw r28,24(r17)
	REX_STORE_U32(r17.u32 + 24, r28.u32);
	// stw r27,28(r17)
	REX_STORE_U32(r17.u32 + 28, r27.u32);
	// stw r26,32(r17)
	REX_STORE_U32(r17.u32 + 32, r26.u32);
	// stw r7,52(r17)
	REX_STORE_U32(r17.u32 + 52, ctx.r7.u32);
	// stw r6,56(r17)
	REX_STORE_U32(r17.u32 + 56, ctx.r6.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,64(r17)
	REX_STORE_U32(r17.u32 + 64, ctx.r5.u32);
	// stw r4,60(r17)
	REX_STORE_U32(r17.u32 + 60, ctx.r4.u32);
	// stw r3,76(r17)
	REX_STORE_U32(r17.u32 + 76, ctx.r3.u32);
	// stw r31,68(r17)
	REX_STORE_U32(r17.u32 + 68, r31.u32);
	// stw r30,72(r17)
	REX_STORE_U32(r17.u32 + 72, r30.u32);
	// stw r11,192(r17)
	REX_STORE_U32(r17.u32 + 192, ctx.r11.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r10,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r10,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r9,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r9,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r9.u32);
	// stw r11,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// stw r10,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// stw r9,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r9.u32);
	// stw r11,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// stw r10,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// stw r9,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, ctx.r9.u32);
	// stw r11,92(r8)
	REX_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r9,100(r8)
	REX_STORE_U32(ctx.r8.u32 + 100, ctx.r9.u32);
	// stw r11,104(r8)
	REX_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,108(r8)
	REX_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// stw r9,112(r8)
	REX_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// stw r11,116(r8)
	REX_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// stw r10,120(r8)
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// stw r9,124(r8)
	REX_STORE_U32(ctx.r8.u32 + 124, ctx.r9.u32);
	// stw r11,128(r8)
	REX_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,132(r8)
	REX_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// stw r9,136(r8)
	REX_STORE_U32(ctx.r8.u32 + 136, ctx.r9.u32);
	// stw r11,140(r8)
	REX_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,144(r8)
	REX_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r9,148(r8)
	REX_STORE_U32(ctx.r8.u32 + 148, ctx.r9.u32);
	// stw r11,152(r8)
	REX_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// stw r10,156(r8)
	REX_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r9,160(r8)
	REX_STORE_U32(ctx.r8.u32 + 160, ctx.r9.u32);
	// stw r11,176(r8)
	REX_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r10,184(r8)
	REX_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// stw r9,168(r8)
	REX_STORE_U32(ctx.r8.u32 + 168, ctx.r9.u32);
	// stw r11,180(r8)
	REX_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r10,188(r8)
	REX_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// stw r9,172(r8)
	REX_STORE_U32(ctx.r8.u32 + 172, ctx.r9.u32);
	// stw r11,192(r8)
	REX_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r10,196(r8)
	REX_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825321E0) {
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
	ctx.lr = 0x825321E8;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r18,12(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825324a4
	if (!ctx.cr0.gt) goto loc_825324A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x825324a4
	if (ctx.cr6.gt) goto loc_825324A4;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825324a4
	if (!ctx.cr0.eq) goto loc_825324A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfd f30,-3744(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// bne cr6,0x82532260
	if (!ctx.cr6.eq) goto loc_82532260;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82532250;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82532260
	if (!ctx.cr0.eq) goto loc_82532260;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82532260:
	// li r24,0
	r24.s64 = 0;
	// addi r23,r27,44
	r23.s64 = r27.s64 + 44;
	// addi r21,r27,48
	r21.s64 = r27.s64 + 48;
	// li r25,1
	r25.s64 = 1;
loc_82532270:
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82532490
	if (!ctx.cr0.eq) goto loc_82532490;
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(r30.u32, r18.u32, ctx.xer);
	// beq cr6,0x825322b8
	if (ctx.cr6.eq) goto loc_825322B8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82532490
	if (!ctx.cr6.eq) goto loc_82532490;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825322B0;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532490
	if (ctx.cr0.eq) goto loc_82532490;
loc_825322B8:
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82532490
	if (!ctx.cr0.eq) goto loc_82532490;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825be308
	ctx.lr = 0x825322DC;
	sub_825BE308(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82532350
	if (ctx.cr0.eq) goto loc_82532350;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r6,r8,7,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82532350
	if (ctx.cr0.eq) goto loc_82532350;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
loc_82532304:
	// srw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r4,r25,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// and. r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82532340
	if (ctx.cr0.eq) goto loc_82532340;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfdx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r4.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x82532340
	if (!ctx.cr6.eq) goto loc_82532340;
	// rlwinm r10,r8,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_82532340:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82532304
	if (ctx.cr6.lt) goto loc_82532304;
loc_82532350:
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(r30.u32, r18.u32, ctx.xer);
	// bne cr6,0x825323c4
	if (!ctx.cr6.eq) goto loc_825323C4;
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82532394
	if (ctx.cr0.eq) goto loc_82532394;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82532370:
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82532370
	if (ctx.cr6.lt) goto loc_82532370;
loc_82532394:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r31,r11,29
	r31.u64 = ctx.r11.u32 & 0x7;
	// b 0x825323cc
	goto loc_825323CC;
loc_825323C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r31,r11,7,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_825323CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82532454
	if (ctx.cr6.eq) goto loc_82532454;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82532490
	if (ctx.cr6.gt) goto loc_82532490;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_825323EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532424
	if (ctx.cr6.eq) goto loc_82532424;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253241c
	if (ctx.cr6.eq) goto loc_8253241C;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8253241c
	if (!ctx.cr6.eq) goto loc_8253241C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82532428
	if (!ctx.cr0.eq) goto loc_82532428;
loc_8253241C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825323ec
	goto loc_825323EC;
loc_82532424:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82532428:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82532454
	if (ctx.cr6.eq) goto loc_82532454;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8252e180
	ctx.lr = 0x82532444;
	sub_8252E180(ctx, base);
	// subf r11,r19,r31
	ctx.r11.u64 = r31.u64 - r19.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82532490
	if (ctx.cr6.gt) goto loc_82532490;
loc_82532454:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwimi r11,r31,21,9,10
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x600000) | (ctx.r11.u64 & 0xFFFFFFFFFF9FFFFF);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// beq cr6,0x825324b8
	if (ctx.cr6.eq) goto loc_825324B8;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825c36d0
	ctx.lr = 0x82532488;
	sub_825C36D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x825324c8
	if (!ctx.cr6.eq) goto loc_825324C8;
loc_82532490:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r21,r21,-4
	r21.s64 = r21.s64 + -4;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// blt cr6,0x82532270
	if (ctx.cr6.lt) goto loc_82532270;
loc_825324A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825324A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_825324B8:
	// rlwimi r11,r24,20,11,11
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 20) & 0x100000) | (ctx.r11.u64 & 0xFFFFFFFFFFEFFFFF);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// b 0x825324a8
	goto loc_825324A8;
loc_825324C8:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// b 0x825324b8
	goto loc_825324B8;
}

DEFINE_REX_FUNC(sub_82554B20) {
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
	ctx.lr = 0x82554B28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554B54;
	sub_825BB860(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554B64;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554B70;
	sub_8250AD28(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82554B88;
	sub_824FFC30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82559818) {
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
	ctx.lr = 0x82559820;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x82559830;
	sub_824FFCC0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r8,68
	ctx.r8.s64 = 68;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r24,0
	r24.s64 = 0;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,616(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 616);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// divw r10,r10,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r23,r10,27
	r23.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// slw r10,r7,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r23.u8 & 0x3F));
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r3
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stwx r11,r29,r3
	REX_STORE_U32(r29.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r25,r11,8
	r25.s64 = ctx.r11.s64 + 8;
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825598B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825599b8
	if (ctx.cr6.eq) goto loc_825599B8;
	// lwz r28,4(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwzx r11,r29,r28
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r28.u32);
	// srw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r23.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825599a0
	if (!ctx.cr0.eq) goto loc_825599A0;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// ble cr6,0x825598e0
	if (!ctx.cr6.gt) goto loc_825598E0;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_825598E0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c67e8
	ctx.lr = 0x825598F0;
	sub_825C67E8(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825599a0
	if (!ctx.cr0.eq) goto loc_825599A0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825599a0
	if (ctx.cr0.eq) goto loc_825599A0;
loc_82559908:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82559944
	if (ctx.cr6.eq) goto loc_82559944;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82559944
	if (ctx.cr6.eq) goto loc_82559944;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82559944
	if (ctx.cr6.eq) goto loc_82559944;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82559944
	if (ctx.cr6.eq) goto loc_82559944;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82559944
	if (ctx.cr6.eq) goto loc_82559944;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82559948
	if (!ctx.cr6.eq) goto loc_82559948;
loc_82559944:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82559948:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82559984
	if (ctx.cr0.eq) goto loc_82559984;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82559968;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-16
	ctx.r11.s64 = r28.s64 + -16;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82559984
	if (!ctx.cr6.eq) goto loc_82559984;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82559984:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825599a0
	if (!ctx.cr0.eq) goto loc_825599A0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559908
	if (!ctx.cr6.eq) goto loc_82559908;
loc_825599A0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x825599b0
	if (!ctx.cr6.eq) goto loc_825599B0;
	// addi r25,r26,12
	r25.s64 = r26.s64 + 12;
loc_825599B0:
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x825598b0
	goto loc_825598B0;
loc_825599B8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825599C8;
	sub_825C69A0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwimi r24,r11,0,0,3
	r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000) | (r24.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r24,68(r31)
	REX_STORE_U32(r31.u32 + 68, r24.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// rlwimi r10,r11,20,13,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8257CF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8257CFC8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8257cfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257CFC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257E780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// slw r3,r11,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// slw r4,r11,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// slw r5,r11,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// slw r6,r11,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// slw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// slw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r9,r11,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257F938) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,28,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// rlwinm r8,r10,28,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FFF;
	// subf. r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257FBC0) {
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
	ctx.lr = 0x8257FBC8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x824ff930
	ctx.lr = 0x8257FBE8;
	sub_824FF930(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824453a8
	ctx.lr = 0x8257FBF4;
	sub_824453A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,16(r27)
	REX_STORE_U32(r27.u32 + 16, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x8257fb48
	ctx.lr = 0x8257FC14;
	sub_8257FB48(ctx, base);
	// stw r3,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r3.u32);
	// stw r28,24(r27)
	REX_STORE_U32(r27.u32 + 24, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82580980) {
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
	ctx.lr = 0x82580988;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825809AC;
	sub_8250AB60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825809BC;
	sub_8250AB60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825809dc
	if (ctx.cr6.eq) goto loc_825809DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825809D8;
	sub_8250AB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825809DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825809f8
	if (ctx.cr6.eq) goto loc_825809F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825809F4;
	sub_8250AB60(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_825809F8:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580870
	ctx.lr = 0x82580A20;
	sub_82580870(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82582618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582620;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582648;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582658;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582664;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82582688
	if (ctx.cr6.eq) goto loc_82582688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582684;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582688:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582690;
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

DEFINE_REX_FUNC(sub_82585720) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82585738
	if (ctx.cr0.eq) goto loc_82585738;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82585744
	goto loc_82585744;
loc_82585738:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82585744:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82585758
	if (ctx.cr6.eq) goto loc_82585758;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8258575c
	goto loc_8258575C;
loc_82585758:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258575C:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82586EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82586EC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586EF4;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82586f18
	if (ctx.cr6.eq) goto loc_82586F18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586F14;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82586F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586F20;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586F30;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586F3C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586F4C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586F58;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8259C6B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,20264(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20264);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fnmsubs f0,f0,f12,f1
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_8259C6F8:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f12,f1
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8259c724
	if (!ctx.cr6.lt) goto loc_8259C724;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8259C724:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8259c6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259C6F8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259ECC8) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8259ECD0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca4
	ctx.lr = 0x8259ECD8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8259f048
	if (!ctx.cr6.eq) goto loc_8259F048;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,112(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8259f048
	if (!ctx.cr6.eq) goto loc_8259F048;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8259f048
	if (!ctx.cr6.eq) goto loc_8259F048;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// rlwinm r31,r11,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// bl 0x8259eba0
	ctx.lr = 0x8259ED34;
	sub_8259EBA0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x8259eba0
	ctx.lr = 0x8259ED50;
	sub_8259EBA0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8259f018
	if (ctx.cr6.eq) goto loc_8259F018;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f018
	if (ctx.cr6.eq) goto loc_8259F018;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r23,-1
	r23.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259ed88
	if (!ctx.cr6.gt) goto loc_8259ED88;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8259ED88:
	// bl 0x822f6280
	ctx.lr = 0x8259ED8C;
	sub_822F6280(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f018
	if (ctx.cr6.eq) goto loc_8259F018;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259edb4
	if (!ctx.cr6.gt) goto loc_8259EDB4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8259EDB4:
	// bl 0x822f6280
	ctx.lr = 0x8259EDB8;
	sub_822F6280(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f018
	if (ctx.cr6.eq) goto loc_8259F018;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x8259f010
	if (!ctx.cr6.gt) goto loc_8259F010;
	// addi r28,r19,8
	r28.s64 = r19.s64 + 8;
loc_8259EDF8:
	// lwz r4,-8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -8);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// beq cr6,0x8259ee48
	if (ctx.cr6.eq) goto loc_8259EE48;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x8259ee34
	if (ctx.cr6.eq) goto loc_8259EE34;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EE30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8259ee48
	goto loc_8259EE48;
loc_8259EE34:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8259EE48:
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x8259ee74
	if (ctx.cr6.eq) goto loc_8259EE74;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EE74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259EE74:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259efd8
	if (!ctx.cr6.gt) goto loc_8259EFD8;
	// addi r10,r20,-16
	ctx.r10.s64 = r20.s64 + -16;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8259EE8C:
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + r30.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
	// lfsx f10,r9,r30
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + r31.u64;
	// lfsx f9,r8,r30
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f2,r9,r31
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f6,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f3,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f30,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfsx f29,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	f29.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f29,f13,f29
	f29.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f28,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f27,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	f28.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// fadds f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f29,f2
	ctx.f6.f64 = double(float(f29.f64 + ctx.f2.f64));
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(f30.f64 + ctx.f1.f64));
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(f28.f64 + f31.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259ee8c
	if (ctx.cr6.lt) goto loc_8259EE8C;
loc_8259EFD8:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259edf8
	if (ctx.cr6.lt) goto loc_8259EDF8;
loc_8259F010:
	// li r31,0
	r31.s64 = 0;
	// b 0x8259f020
	goto loc_8259F020;
loc_8259F018:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_8259F020:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F028;
	sub_8269CE98(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F030;
	sub_8269CE98(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F038;
	sub_8269CE98(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F040;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8259f050
	goto loc_8259F050;
loc_8259F048:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8259F050:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x8259F05C;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825B49D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B49D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1448(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825B49F4;
	sub_825B33A0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825b4a1c
	if (ctx.cr0.eq) goto loc_825B4A1C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// addi r10,r10,-4088
	ctx.r10.s64 = ctx.r10.s64 + -4088;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825b4a20
	goto loc_825B4A20;
loc_825B4A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B4A20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B7168) {
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
	ctx.lr = 0x825B7170;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,-2432
	r23.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b71c8
	if (!ctx.cr6.eq) goto loc_825B71C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1509
	ctx.r7.s64 = 1509;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B71C8;
	sub_824EA978(ctx, base);
loc_825B71C8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x825b7208
	if (!ctx.cr6.eq) goto loc_825B7208;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x824f10b8
	ctx.lr = 0x825B7204;
	sub_824F10B8(ctx, base);
	// b 0x825b7260
	goto loc_825B7260;
loc_825B7208:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x825b722c
	if (ctx.cr6.eq) goto loc_825B722C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1519
	ctx.r7.s64 = 1519;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B722C;
	sub_824EA978(ctx, base);
loc_825B722C:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x824f10b8
	ctx.lr = 0x825B7260;
	sub_824F10B8(ctx, base);
loc_825B7260:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825B93F8) {
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
	ctx.lr = 0x825B9400;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r11,-1992
	r29.s64 = ctx.r11.s64 + -1992;
	// rlwinm r25,r30,31,28,31
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// rlwinm r27,r30,25,25,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// add r11,r25,r29
	ctx.r11.u64 = r25.u64 + r29.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r24,1
	r24.s64 = 1;
	// clrlwi r22,r4,28
	r22.u64 = ctx.r4.u32 & 0xF;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(r27.u32, 96, ctx.xer);
	// rlwinm r10,r11,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r9,r11,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,31,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r23,r5,r11
	r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r23,r10,2,0,29
	r23.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (r23.u64 & 0xFFFFFFFF00000003);
	// blt cr6,0x825b9478
	if (ctx.cr6.lt) goto loc_825B9478;
	// cmplwi cr6,r27,102
	ctx.cr6.compare<uint32_t>(r27.u32, 102, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// ble cr6,0x825b947c
	if (!ctx.cr6.gt) goto loc_825B947C;
loc_825B9478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B947C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b96ec
	if (ctx.cr0.eq) goto loc_825B96EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,228
	ctx.r8.s64 = 228;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(r27.u32, 96, ctx.xer);
	// bne cr6,0x825b94d0
	if (!ctx.cr6.eq) goto loc_825B94D0;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824f71b8
	ctx.lr = 0x825B94B4;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = r26.s64 + -20;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r11,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r6,r11,24,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// rlwinm r8,r11,15,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// b 0x825b952c
	goto loc_825B952C;
loc_825B94D0:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(r27.u32, 97, ctx.xer);
	// beq cr6,0x825b94ec
	if (ctx.cr6.eq) goto loc_825B94EC;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(r27.u32, 99, ctx.xer);
	// beq cr6,0x825b94ec
	if (ctx.cr6.eq) goto loc_825B94EC;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b94f0
	if (!ctx.cr6.eq) goto loc_825B94F0;
loc_825B94EC:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_825B94F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b952c
	if (ctx.cr0.eq) goto loc_825B952C;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824f71b8
	ctx.lr = 0x825B9514;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r7,r10,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
loc_825B952C:
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_825B953C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b95ac
	if (ctx.cr6.eq) goto loc_825B95AC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// srw r11,r23,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// slw r5,r5,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// slw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// andc r5,r31,r5
	ctx.r5.u64 = r31.u64 & ~ctx.r5.u64;
	// and. r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// or r31,r4,r5
	r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// beq 0x825b9590
	if (ctx.cr0.eq) goto loc_825B9590;
	// slw r28,r24,r11
	r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
loc_825B9590:
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b959c
	if (ctx.cr0.eq) goto loc_825B959C;
	// slw r29,r24,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
loc_825B959C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x825b953c
	goto loc_825B953C;
loc_825B95AC:
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(r27.u32, 96, ctx.xer);
	// bne cr6,0x825b95fc
	if (!ctx.cr6.eq) goto loc_825B95FC;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824f71b8
	ctx.lr = 0x825B95D0;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = r26.s64 + -20;
	// rlwimi r28,r31,5,19,26
	r28.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0x1FE0) | (r28.u64 & 0xFFFFFFFFFFFFE01F);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// andi. r10,r28,8175
	ctx.r10.u64 = r28.u64 & 8175;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r29,r10,4,0,27
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0) | (r29.u64 & 0xFFFFFFFF0000000F);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r29,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,15,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x825b9658
	goto loc_825B9658;
loc_825B95FC:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(r27.u32, 97, ctx.xer);
	// beq cr6,0x825b9618
	if (ctx.cr6.eq) goto loc_825B9618;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(r27.u32, 99, ctx.xer);
	// beq cr6,0x825b9618
	if (ctx.cr6.eq) goto loc_825B9618;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b961c
	if (!ctx.cr6.eq) goto loc_825B961C;
loc_825B9618:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_825B961C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// beq 0x825b96dc
	if (ctx.cr0.eq) goto loc_825B96DC;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825B9640;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r31,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, r31.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r10,r28,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// rlwimi r10,r29,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
loc_825B9658:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825B965C:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_825B9660:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b9868
	if (ctx.cr6.eq) goto loc_825B9868;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b96d4
	if (ctx.cr0.eq) goto loc_825B96D4;
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(r23.u32, 228, ctx.xer);
	// beq cr6,0x825b96bc
	if (ctx.cr6.eq) goto loc_825B96BC;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825B96BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// rlwimi r9,r21,13,7,18
	ctx.r9.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 13) & 0x1FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFE001FFF);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825B96D4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825b9660
	goto loc_825B9660;
loc_825B96DC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r10,-1616
	ctx.r5.s64 = ctx.r10.s64 + -1616;
	// bl 0x824e4368
	ctx.lr = 0x825B96EC;
	sub_824E4368(ctx, base);
loc_825B96EC:
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(r23.u32, 228, ctx.xer);
	// beq cr6,0x825b965c
	if (ctx.cr6.eq) goto loc_825B965C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503ab8
	ctx.lr = 0x825B96FC;
	sub_82503AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b965c
	if (ctx.cr0.eq) goto loc_825B965C;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r22,r29
	ctx.r9.u64 = r22.u64 + r29.u64;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// rlwinm r7,r31,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x6;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lbz r10,-1(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// rlwinm r9,r31,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x6;
	// clrldi r8,r22,32
	ctx.r8.u64 = r22.u64 & 0xFFFFFFFF;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r31,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x6;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r5,r10,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r31,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// clrlwi. r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwimi r10,r5,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x825b97a0
	if (ctx.cr0.eq) goto loc_825B97A0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_825B9778:
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r5,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// bdnz 0x825b9778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B9778;
loc_825B97A0:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// addi r10,r10,-22012
	ctx.r10.s64 = ctx.r10.s64 + -22012;
	// rlwinm r5,r11,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// rlwinm r4,r11,31,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r26,44
	ctx.r8.s64 = r26.s64 + 44;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r9,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r9,r5,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r9,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
loc_825B97E8:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b965c
	if (!ctx.cr6.lt) goto loc_825B965C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r5,r9,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825b985c
	if (ctx.cr0.eq) goto loc_825B985C;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r11,27,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r3,r6,14,15,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x1C000;
	// srw r4,r9,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r31,r11,29,29,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// srw r3,r9,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// rlwinm r31,r11,31,29,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwimi r3,r4,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// srw r4,r9,r31
	ctx.r4.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// rlwinm r31,r11,1,29,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r4,r3,2,0,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// srw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// rlwimi r9,r4,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,27,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r5,0,7,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B985C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x825b97e8
	goto loc_825B97E8;
loc_825B9868:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwimi r11,r22,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825D71A8) {
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
	ctx.lr = 0x825D71B0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// bl 0x825f48c8
	ctx.lr = 0x825D71D4;
	sub_825F48C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,7552
	r23.s64 = ctx.r10.s64 + 7552;
	// bne 0x825d7208
	if (!ctx.cr0.eq) goto loc_825D7208;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,7692
	ctx.r5.s64 = ctx.r11.s64 + 7692;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1730
	ctx.r7.s64 = 1730;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7208;
	sub_824EA978(ctx, base);
loc_825D7208:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825d7248
	if (!ctx.cr6.eq) goto loc_825D7248;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825d7248
	if (!ctx.cr6.eq) goto loc_825D7248;
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825d7248
	if (!ctx.cr6.eq) goto loc_825D7248;
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825d7248
	if (!ctx.cr6.eq) goto loc_825D7248;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825d736c
	goto loc_825D736C;
loc_825D7248:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825f4b28
	ctx.lr = 0x825D7254;
	sub_825F4B28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r22,r11,7672
	r22.s64 = ctx.r11.s64 + 7672;
	// bgt 0x825d727c
	if (ctx.cr0.gt) goto loc_825D727C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1750
	ctx.r7.s64 = 1750;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D727C;
	sub_824EA978(ctx, base);
loc_825D727C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x825d72b8
	if (!ctx.cr6.gt) goto loc_825D72B8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r27,r31,r11
	r27.u64 = ctx.r11.u64 - r31.u64;
	// subf r26,r31,r10
	r26.u64 = ctx.r10.u64 - r31.u64;
loc_825D7294:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwzx r5,r27,r31
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825f4fa8
	ctx.lr = 0x825D72A8;
	sub_825F4FA8(ctx, base);
	// stwx r3,r26,r31
	REX_STORE_U32(r26.u32 + r31.u32, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825d7294
	if (!ctx.cr0.eq) goto loc_825D7294;
loc_825D72B8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f4e40
	ctx.lr = 0x825D72C8;
	sub_825F4E40(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f4e08
	ctx.lr = 0x825D72DC;
	sub_825F4E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825d72fc
	if (ctx.cr0.gt) goto loc_825D72FC;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1763
	ctx.r7.s64 = 1763;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D72FC;
	sub_824EA978(ctx, base);
loc_825D72FC:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// beq cr6,0x825d734c
	if (ctx.cr6.eq) goto loc_825D734C;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(r19.u32, 2, ctx.xer);
	// beq cr6,0x825d7334
	if (ctx.cr6.eq) goto loc_825D7334;
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(r19.u32, 4, ctx.xer);
	// beq cr6,0x825d732c
	if (ctx.cr6.eq) goto loc_825D732C;
	// cmplwi cr6,r19,8
	ctx.cr6.compare<uint32_t>(r19.u32, 8, ctx.xer);
	// bne cr6,0x825d737c
	if (!ctx.cr6.eq) goto loc_825D737C;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// b 0x825d7378
	goto loc_825D7378;
loc_825D732C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x825d7370
	goto loc_825D7370;
loc_825D7334:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// b 0x825d7368
	goto loc_825D7368;
loc_825D734C:
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_825D7368:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_825D736C:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_825D7370:
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_825D7378:
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_825D737C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825E7880) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r8,28928(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 28928);
	// b 0x825e6d18
	sub_825E6D18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E9278) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825e92a8
	if (!ctx.cr6.lt) goto loc_825E92A8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825e92ac
	goto loc_825E92AC;
loc_825E92A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E92AC:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x825f7658
	ctx.lr = 0x825E92BC;
	sub_825F7658(ctx, base);
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

DEFINE_REX_FUNC(sub_825ED5C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825ED710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825ED718;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_825ED728:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ed764
	if (ctx.cr0.eq) goto loc_825ED764;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x825ed728
	if (ctx.cr6.lt) goto loc_825ED728;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825ED75C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_825ED764:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825ed75c
	goto loc_825ED75C;
}

DEFINE_REX_FUNC(sub_825F16B8) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lbz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r7,21(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 21);
	// addi r10,r10,-27720
	ctx.r10.s64 = ctx.r10.s64 + -27720;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lbz r6,30(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 30);
	// lbz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 28);
	// lbz r9,29(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 29);
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// lbz r11,31(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 31);
	// rlwimi r7,r8,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// lbz r5,23(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 23);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// lbz r8,22(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 22);
	// rlwimi r6,r9,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// rlwimi r8,r7,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// rlwimi r11,r6,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwimi r5,r8,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r8,r11,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r10,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r9,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r11,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F4EA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,20096
	ctx.r10.s64 = 1317011456;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825f4ef4
	if (!ctx.cr6.gt) goto loc_825F4EF4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f4ee8
	if (ctx.cr0.eq) goto loc_825F4EE8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_825F4EE8:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_825F4EF4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F72A0) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,18112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f72e4
	if (ctx.cr6.eq) goto loc_825F72E4;
	// bl 0x825f7058
	ctx.lr = 0x825F72C8;
	sub_825F7058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f72e8
	if (ctx.cr0.lt) goto loc_825F72E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f5488
	ctx.lr = 0x825F72D8;
	sub_825F5488(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x825f72e8
	goto loc_825F72E8;
loc_825F72E4:
	// bl 0x825f7058
	ctx.lr = 0x825F72E8;
	sub_825F7058(ctx, base);
loc_825F72E8:
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

DEFINE_REX_FUNC(sub_825F7F08) {
	REX_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x825b3528
	sub_825B3528(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F8598) {
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
	ctx.lr = 0x825F85A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f85dc
	if (!ctx.cr6.eq) goto loc_825F85DC;
	// lwz r11,1508(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r6)
	REX_STORE_U32(ctx.r6.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x825e6c50
	ctx.lr = 0x825F85D8;
	sub_825E6C50(ctx, base);
	// stw r3,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r3.u32);
loc_825F85DC:
	// lwz r31,1452(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,52(r29)
	r24.u64 = REX_LOAD_U32(r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F85F0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// beq 0x825f8610
	if (ctx.cr0.eq) goto loc_825F8610;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825fad18
	ctx.lr = 0x825F8608;
	sub_825FAD18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825f8614
	goto loc_825F8614;
loc_825F8610:
	// li r31,0
	r31.s64 = 0;
loc_825F8614:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8624;
	sub_825F9F38(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r31,48(r29)
	REX_STORE_U32(r29.u32 + 48, r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825f8638
	if (!ctx.cr6.eq) goto loc_825F8638;
	// stw r31,116(r30)
	REX_STORE_U32(r30.u32 + 116, r31.u32);
loc_825F8638:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825f8650
	if (!ctx.cr6.eq) goto loc_825F8650;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,120(r30)
	REX_STORE_U32(r30.u32 + 120, r31.u32);
	// stb r11,126(r30)
	REX_STORE_U8(r30.u32 + 126, ctx.r11.u8);
loc_825F8650:
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// addi r28,r11,28328
	r28.s64 = ctx.r11.s64 + 28328;
	// bne cr6,0x825f8680
	if (!ctx.cr6.eq) goto loc_825F8680;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r31,112(r30)
	REX_STORE_U32(r30.u32 + 112, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F867C;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_825F8680:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x825f86a0
	if (!ctx.cr6.eq) goto loc_825F86A0;
	// stw r31,108(r30)
	REX_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F869C;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_825F86A0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F86B0;
	sub_825F9F38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825F86BC;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 168);
	// bl 0x825fcb60
	ctx.lr = 0x825F86C8;
	sub_825FCB60(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r10,22852
	r28.s64 = ctx.r10.s64 + 22852;
	// addi r29,r11,28460
	r29.s64 = ctx.r11.s64 + 28460;
	// addi r27,r9,28428
	r27.s64 = ctx.r9.s64 + 28428;
	// addi r26,r8,28336
	r26.s64 = ctx.r8.s64 + 28336;
loc_825F86F8:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(r25.u32, 8, ctx.xer);
	// blt cr6,0x825f8720
	if (ctx.cr6.lt) goto loc_825F8720;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F8720;
	sub_824EA978(ctx, base);
loc_825F8720:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stbx r11,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825f86f8
	if (ctx.cr6.lt) goto loc_825F86F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826070B0) {
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
	ctx.lr = 0x826070B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825db6e8
	ctx.lr = 0x826070C4;
	sub_825DB6E8(ctx, base);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x825f74b8
	ctx.lr = 0x826070D8;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82607158
	if (ctx.cr6.lt) goto loc_82607158;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
loc_826070E8:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82607104
	if (ctx.cr6.eq) goto loc_82607104;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x82607104;
	sub_825B3528(ctx, base);
loc_82607104:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82607120
	if (ctx.cr6.eq) goto loc_82607120;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x82607120;
	sub_825B3528(ctx, base);
loc_82607120:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260713c
	if (ctx.cr6.eq) goto loc_8260713C;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x8260713C;
	sub_825B3528(ctx, base);
loc_8260713C:
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x825f74b8
	ctx.lr = 0x82607150;
	sub_825F74B8(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x826070e8
	if (!ctx.cr6.gt) goto loc_826070E8;
loc_82607158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8260B4A0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8260B4C0:
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
	// bne 0x8260b4c0
	if (!ctx.cr0.eq) goto loc_8260B4C0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8260b51c
	if (!ctx.cr6.eq) goto loc_8260B51C;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82793894
	ctx.lr = 0x8260B4EC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b1d0
	ctx.lr = 0x8260B4F8;
	sub_8260B1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8260b51c
	if (!ctx.cr0.lt) goto loc_8260B51C;
loc_8260B500:
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
	// bne 0x8260b500
	if (!ctx.cr0.eq) goto loc_8260B500;
loc_8260B51C:
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

DEFINE_REX_FUNC(sub_8260EAE8) {
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
	ctx.lr = 0x8260EAF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EB1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r29,0
	r29.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8260eb58
	if (ctx.cr0.eq) goto loc_8260EB58;
	// add r8,r30,r28
	ctx.r8.u64 = r30.u64 + r28.u64;
loc_8260EB38:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8260eb58
	if (!ctx.cr0.eq) goto loc_8260EB58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8260eb38
	if (!ctx.cr6.eq) goto loc_8260EB38;
loc_8260EB58:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8260ebac
	if (ctx.cr0.eq) goto loc_8260EBAC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260eb78
	if (ctx.cr6.eq) goto loc_8260EB78;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260eb7c
	goto loc_8260EB7C;
loc_8260EB78:
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_8260EB7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8260ebac
	if (ctx.cr0.lt) goto loc_8260EBAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8260EBAC;
	sub_826A1E70(ctx, base);
loc_8260EBAC:
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
	ctx.lr = 0x8260EBC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82613AF8) {
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
	ctx.lr = 0x82613B18;
	sub_82613198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82613b5c
	if (ctx.cr0.eq) goto loc_82613B5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613b48
	if (ctx.cr6.eq) goto loc_82613B48;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82613b4c
	goto loc_82613B4C;
loc_82613B48:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82613B4C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82613B5C:
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

DEFINE_REX_FUNC(sub_82615D30) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615d10
	sub_82615D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261bae0
	sub_8261BAE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615fb0
	sub_82615FB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826162E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x82625cb8
	sub_82625CB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826166A0) {
	REX_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_826166CC:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x826166cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826166CC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82618438) {
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
	// bl 0x82629d78
	ctx.lr = 0x82618454;
	sub_82629D78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82618480
	if (!ctx.cr6.lt) goto loc_82618480;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_82618480:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82618494
	if (!ctx.cr6.gt) goto loc_82618494;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_82618494:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826184a8
	if (ctx.cr6.eq) goto loc_826184A8;
	// bl 0x8264c3d0
	ctx.lr = 0x826184A4;
	sub_8264C3D0(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_826184A8:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x826a2e60
	ctx.lr = 0x826184B8;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_8261DAA8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261dacc
	if (ctx.cr6.eq) goto loc_8261DACC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8261db10
	if (ctx.cr6.lt) goto loc_8261DB10;
loc_8261DACC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x8261DAD8;
	sub_82130E88(ctx, base);
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x826e07e0
	ctx.lr = 0x8261DAE0;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261db10
	if (ctx.cr6.eq) goto loc_8261DB10;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8261DAF8;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261da18
	ctx.lr = 0x8261DB00;
	sub_8261DA18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x8261db14
	if (!ctx.cr6.lt) goto loc_8261DB14;
	// bl 0x82634e78
	ctx.lr = 0x8261DB10;
	sub_82634E78(ctx, base);
loc_8261DB10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261DB14:
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

DEFINE_REX_FUNC(sub_82625AF0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82625B04:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x82625b04
	if (!ctx.cr0.lt) goto loc_82625B04;
	// stw r10,528(r3)
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// stw r10,532(r3)
	REX_STORE_U32(ctx.r3.u32 + 532, ctx.r10.u32);
	// stw r10,536(r3)
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// stw r10,540(r3)
	REX_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// stw r10,544(r3)
	REX_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// stw r10,548(r3)
	REX_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// stw r10,552(r3)
	REX_STORE_U32(ctx.r3.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82627360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627368;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bl 0x826421e0
	ctx.lr = 0x826273A4;
	sub_826421E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826273dc
	if (ctx.cr0.lt) goto loc_826273DC;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,228(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82627280
	ctx.lr = 0x826273CC;
	sub_82627280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826273dc
	if (ctx.cr0.lt) goto loc_826273DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_826273DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82629178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82629180;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826291A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82614f88
	ctx.lr = 0x826291B4;
	sub_82614F88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826291C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262B940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x8262b9d0
	if (!ctx.cr6.eq) goto loc_8262B9D0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8262B97C:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262b9b0
	if (ctx.cr6.eq) goto loc_8262B9B0;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f8,f12,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262b9c0
	goto loc_8262B9C0;
loc_8262B9B0:
	// fmuls f11,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262B9C0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// bdnz 0x8262b97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262B97C;
	// blr 
	return;
loc_8262B9D0:
	// lfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8262B9EC:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262ba20
	if (ctx.cr6.eq) goto loc_8262BA20;
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f6,f12,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262ba30
	goto loc_8262BA30;
loc_8262BA20:
	// fmuls f9,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262BA30:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// bdnz 0x8262b9ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262B9EC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82637758) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x82637760;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,244(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r30,0
	r30.s64 = 0;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fdivs f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// ble cr6,0x82637838
	if (!ctx.cr6.gt) goto loc_82637838;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// lfs f30,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lfs f31,6152(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6152);
	f31.f64 = double(temp.f32);
loc_826377C0:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// divw r31,r11,r10
	r31.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f30.f64)));
	// bl 0x826a3cb0
	ctx.lr = 0x826377EC;
	sub_826A3CB0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82637808
	if (!ctx.cr6.lt) goto loc_82637808;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82637808:
	// srawi r10,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r10.s64 = r31.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263781c
	if (ctx.cr6.lt) goto loc_8263781C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8263781C:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 352);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,244(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 244);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826377c0
	if (ctx.cr6.lt) goto loc_826377C0;
loc_82637838:
	// lwz r11,352(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8263EDC0) {
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
	ctx.lr = 0x8263EDC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r26,24
	r26.s64 = 24;
	// lwz r9,304(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x8263edf8
	if (ctx.cr6.gt) goto loc_8263EDF8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_8263EDF8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8263efe0
	if (!ctx.cr6.gt) goto loc_8263EFE0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8263ee2c
	if (!ctx.cr6.eq) goto loc_8263EE2C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8263ee34
	if (!ctx.cr6.eq) goto loc_8263EE34;
loc_8263EE2C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8263efe0
	if (!ctx.cr6.eq) goto loc_8263EFE0;
loc_8263EE34:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8263eecc
	if (ctx.cr6.eq) goto loc_8263EECC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8263f01c
	if (!ctx.cr6.eq) goto loc_8263F01C;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f1f78
	ctx.lr = 0x8263EE5C;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f024
	if (ctx.cr6.lt) goto loc_8263F024;
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r30,r26,-1
	r30.s64 = r26.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8263f01c
	if (!ctx.cr6.lt) goto loc_8263F01C;
loc_8263EE74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263EE84;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f024
	if (ctx.cr6.lt) goto loc_8263F024;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,304(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8263ee74
	if (ctx.cr6.lt) goto loc_8263EE74;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8263EECC:
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826f1f78
	ctx.lr = 0x8263EEDC;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f024
	if (ctx.cr6.lt) goto loc_8263F024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263EEF4;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f024
	if (ctx.cr6.lt) goto loc_8263F024;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8263ef70
	if (!ctx.cr6.eq) goto loc_8263EF70;
	// lwz r10,304(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 304);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8263f01c
	if (!ctx.cr6.gt) goto loc_8263F01C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263EF34:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8263ef34
	if (ctx.cr6.lt) goto loc_8263EF34;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8263EF70:
	// addic. r29,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r29.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8263efbc
	if (!ctx.cr0.gt) goto loc_8263EFBC;
loc_8263EF78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263EF88;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f024
	if (ctx.cr6.lt) goto loc_8263F024;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8263ef78
	if (ctx.cr6.lt) goto loc_8263EF78;
loc_8263EFBC:
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8263EFE0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8263f01c
	if (!ctx.cr6.gt) goto loc_8263F01C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263EFF0:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8263eff0
	if (ctx.cr6.lt) goto loc_8263EFF0;
loc_8263F01C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_8263F024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8264C950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c9bc
	if (ctx.cr6.eq) goto loc_8264C9BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c9bc
	if (ctx.cr6.eq) goto loc_8264C9BC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c9bc
	if (ctx.cr6.eq) goto loc_8264C9BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce38
	ctx.lr = 0x8264C990;
	sub_8264CE38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8264c9c0
	if (!ctx.cr0.eq) goto loc_8264C9C0;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// bl 0x8264eb28
	ctx.lr = 0x8264C9AC;
	sub_8264EB28(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264c9c0
	goto loc_8264C9C0;
loc_8264C9BC:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8264C9C0:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264E168) {
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
	ctx.lr = 0x8264E188;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8264e1fc
	if (!ctx.cr0.eq) goto loc_8264E1FC;
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
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x8264E1C0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264e1d0
	if (!ctx.cr0.lt) goto loc_8264E1D0;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x8264e1f4
	goto loc_8264E1F4;
loc_8264E1D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8264e1f0
	if (!ctx.cr6.eq) goto loc_8264E1F0;
	// bl 0x823f0058
	ctx.lr = 0x8264E1DC;
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
	// b 0x8264e1f4
	goto loc_8264E1F4;
loc_8264E1F0:
	// li r31,997
	r31.s64 = 997;
loc_8264E1F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264E1FC;
	__imp__ObDereferenceObject(ctx, base);
loc_8264E1FC:
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

DEFINE_REX_FUNC(sub_8264FFB8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826500a4
	if (ctx.cr6.lt) goto loc_826500A4;
	// beq cr6,0x8265004c
	if (ctx.cr6.eq) goto loc_8265004C;
	// li r11,46
	ctx.r11.s64 = 46;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8264ffe0
	if (!ctx.cr6.eq) goto loc_8264FFE0;
	// li r11,62
	ctx.r11.s64 = 62;
	// b 0x8264fff0
	goto loc_8264FFF0;
loc_8264FFE0:
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8264fff0
	if (ctx.cr0.eq) goto loc_8264FFF0;
	// li r11,42
	ctx.r11.s64 = 42;
loc_8264FFF0:
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82650004
	if (ctx.cr0.eq) goto loc_82650004;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x8265002c
	goto loc_8265002C;
loc_82650004:
	// rlwinm. r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82650010
	if (!ctx.cr0.eq) goto loc_82650010;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82650010:
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265002c
	if (!ctx.cr0.eq) goto loc_8265002C;
	// rlwinm. r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82650028
	if (ctx.cr0.eq) goto loc_82650028;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// b 0x8265002c
	goto loc_8265002C;
loc_82650028:
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_8265002C:
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826500e0
	if (ctx.cr0.eq) goto loc_826500E0;
	// rlwinm. r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500e0
	if (!ctx.cr0.eq) goto loc_826500E0;
	// rlwinm. r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500e0
	if (!ctx.cr0.eq) goto loc_826500E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x826500e0
	goto loc_826500E0;
loc_8265004C:
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82650060
	if (ctx.cr0.eq) goto loc_82650060;
	// li r11,36
	ctx.r11.s64 = 36;
loc_82650060:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82650094
	if (ctx.cr0.eq) goto loc_82650094;
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r11,r11,770
	ctx.r11.u64 = ctx.r11.u64 | 770;
	// bne 0x82650078
	if (!ctx.cr0.eq) goto loc_82650078;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
loc_82650078:
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826500ec
	if (ctx.cr0.eq) goto loc_826500EC;
	// rlwinm. r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500ec
	if (!ctx.cr0.eq) goto loc_826500EC;
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826500ec
	if (!ctx.cr0.eq) goto loc_826500EC;
	// b 0x8265009c
	goto loc_8265009C;
loc_82650094:
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826500ec
	if (ctx.cr0.eq) goto loc_826500EC;
loc_8265009C:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x826500ec
	goto loc_826500EC;
loc_826500A4:
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500c0
	if (!ctx.cr0.eq) goto loc_826500C0;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500c4
	if (!ctx.cr0.eq) goto loc_826500C4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826500c4
	if (ctx.cr6.eq) goto loc_826500C4;
loc_826500C0:
	// li r11,5
	ctx.r11.s64 = 5;
loc_826500C4:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500dc
	if (!ctx.cr0.eq) goto loc_826500DC;
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826500ec
	if (!ctx.cr0.eq) goto loc_826500EC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826500ec
	if (ctx.cr6.eq) goto loc_826500EC;
loc_826500DC:
	// ori r11,r11,770
	ctx.r11.u64 = ctx.r11.u64 | 770;
loc_826500E0:
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826500ec
	if (!ctx.cr0.eq) goto loc_826500EC;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
loc_826500EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265C9A0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265D138) {
	REX_FUNC_PROLOGUE();
	// b 0x8265c9b8
	sub_8265C9B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D620) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8265d640
	if (!ctx.cr6.eq) goto loc_8265D640;
	// li r6,128
	ctx.r6.s64 = 128;
loc_8265D640:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8266caa0
	ctx.lr = 0x8265D66C;
	sub_8266CAA0(ctx, base);
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

DEFINE_REX_FUNC(sub_8265DF38) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,996
	ctx.r10.u64 = ctx.r10.u64 | 996;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8265df5c
	if (ctx.cr6.eq) goto loc_8265DF5C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8265df68
	if (!ctx.cr6.lt) goto loc_8265DF68;
loc_8265DF54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265DF5C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265df54
	if (ctx.cr6.eq) goto loc_8265DF54;
loc_8265DF68:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F250) {
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
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265f280
	if (!ctx.cr0.eq) goto loc_8265F280;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
	// b 0x8265f2fc
	goto loc_8265F2FC;
loc_8265F280:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f2b8
	if (!ctx.cr6.eq) goto loc_8265F2B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f2b8
	if (!ctx.cr6.eq) goto loc_8265F2B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f2b8
	if (!ctx.cr6.eq) goto loc_8265F2B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f2b8
	if (!ctx.cr6.eq) goto loc_8265F2B8;
	// li r30,1
	r30.s64 = 1;
	// b 0x8265f2fc
	goto loc_8265F2FC;
loc_8265F2B8:
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// stw r5,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// stw r6,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82654388
	ctx.lr = 0x8265F2D0;
	sub_82654388(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265f2fc
	if (ctx.cr0.lt) goto loc_8265F2FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826544b8
	ctx.lr = 0x8265F2E0;
	sub_826544B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265f2fc
	if (ctx.cr0.lt) goto loc_8265F2FC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x826512a8
	ctx.lr = 0x8265F2FC;
	sub_826512A8(ctx, base);
loc_8265F2FC:
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

DEFINE_REX_FUNC(sub_82663508) {
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
	ctx.lr = 0x82663510;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r31,184(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r10,r11,0,25,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF87F;
	// li r22,0
	r22.s64 = 0;
	// bl 0x82672378
	ctx.lr = 0x82663554;
	sub_82672378(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82663568
	if (!ctx.cr0.eq) goto loc_82663568;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82663764
	goto loc_82663764;
loc_82663568:
	// addi r21,r28,132
	r21.s64 = r28.s64 + 132;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663574;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82663788
	if (!ctx.cr6.lt) goto loc_82663788;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82663718
	if (ctx.cr6.eq) goto loc_82663718;
loc_8266358C:
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// rlwinm r11,r10,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r10,r10,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826636a0
	if (!ctx.cr6.eq) goto loc_826636A0;
	// lwzx r10,r9,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// rlwinm. r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82663770
	if (!ctx.cr0.eq) goto loc_82663770;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8266377c
	if (!ctx.cr6.eq) goto loc_8266377C;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subfic r11,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// li r22,1
	r22.s64 = 1;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82663770
	if (!ctx.cr6.lt) goto loc_82663770;
	// addi r9,r11,94
	ctx.r9.s64 = ctx.r11.s64 + 94;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82663770
	if (!ctx.cr6.lt) goto loc_82663770;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826635fc
	if (!ctx.cr6.eq) goto loc_826635FC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_826635FC:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82663770
	if (ctx.cr6.eq) goto loc_82663770;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// subfic r8,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r8.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// lwz r11,240(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 240);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// addi r30,r28,240
	r30.s64 = r28.s64 + 240;
	// rlwinm r8,r8,24,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// or r27,r8,r10
	r27.u64 = ctx.r8.u64 | ctx.r10.u64;
	// beq cr6,0x8266370c
	if (ctx.cr6.eq) goto loc_8266370C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266370c
	if (ctx.cr0.eq) goto loc_8266370C;
loc_82663638:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// lwz r11,288(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 288);
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r9,r10
	r29.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bne 0x82663694
	if (!ctx.cr0.eq) goto loc_82663694;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82663694
	if (!ctx.cr0.eq) goto loc_82663694;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663694
	if (!ctx.cr0.eq) goto loc_82663694;
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663694
	if (!ctx.cr6.eq) goto loc_82663694;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82662ca8
	ctx.lr = 0x8266368C;
	sub_82662CA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82663790
	if (ctx.cr0.lt) goto loc_82663790;
loc_82663694:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82663638
	if (!ctx.cr6.eq) goto loc_82663638;
	// b 0x8266370c
	goto loc_8266370C;
loc_826636A0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8266377c
	if (!ctx.cr6.eq) goto loc_8266377C;
	// lwz r8,200(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 200);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82663770
	if (!ctx.cr6.eq) goto loc_82663770;
	// addi r11,r28,432
	ctx.r11.s64 = r28.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82663770
	if (ctx.cr6.eq) goto loc_82663770;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82663788
	if (!ctx.cr0.eq) goto loc_82663788;
	// lwzx r10,r9,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// rlwinm r10,r10,13,1,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7F000000;
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bne 0x826636f4
	if (!ctx.cr0.eq) goto loc_826636F4;
	// oris r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 2147483648;
loc_826636F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82662ca8
	ctx.lr = 0x82663704;
	sub_82662CA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82663790
	if (ctx.cr0.lt) goto loc_82663790;
loc_8266370C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// blt cr6,0x8266358c
	if (ctx.cr6.lt) goto loc_8266358C;
loc_82663718:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x827938b4
	ctx.lr = 0x82663724;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
loc_82663728:
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
	// bne 0x82663728
	if (!ctx.cr0.eq) goto loc_82663728;
loc_82663744:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82663764
	if (!ctx.cr6.eq) goto loc_82663764;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82663764:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_82663770:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
	// b 0x82663790
	goto loc_82663790;
loc_8266377C:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x82663790
	goto loc_82663790;
loc_82663788:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4112
	r31.u64 = r31.u64 | 4112;
loc_82663790:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663798;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
loc_8266379C:
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
	// bne 0x8266379c
	if (!ctx.cr0.eq) goto loc_8266379C;
	// b 0x82663744
	goto loc_82663744;
}

DEFINE_REX_FUNC(sub_82676718) {
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
	// bl 0x826766b0
	ctx.lr = 0x82676730;
	sub_826766B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,261
	ctx.r3.s64 = 261;
	// bl 0x8265d850
	ctx.lr = 0x8267673C;
	sub_8265D850(ctx, base);
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

DEFINE_REX_FUNC(sub_82677468) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82677470;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	r29.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677488;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r10,448(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 448);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,448(r30)
	REX_STORE_U32(r30.u32 + 448, ctx.r10.u32);
	// bne cr6,0x826774f0
	if (!ctx.cr6.eq) goto loc_826774F0;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// b 0x826774e8
	goto loc_826774E8;
loc_826774B0:
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
	ctx.lr = 0x826774D8;
	sub_82676D18(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r30)
	REX_STORE_U32(r30.u32 + 284, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_826774E8:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x826774b0
	if (!ctx.cr6.eq) goto loc_826774B0;
loc_826774F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x826774F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8267A620) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a67c
	if (!ctx.cr6.eq) goto loc_8267A67C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,424(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267a670
	if (ctx.cr6.lt) goto loc_8267A670;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a670
	if (ctx.cr6.eq) goto loc_8267A670;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// stb r11,1185(r3)
	REX_STORE_U8(ctx.r3.u32 + 1185, ctx.r11.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1184(r3)
	REX_STORE_U8(ctx.r3.u32 + 1184, ctx.r11.u8);
	// ori r11,r9,4103
	ctx.r11.u64 = ctx.r9.u64 | 4103;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x826797d8
	sub_826797D8(ctx, base);
	return;
loc_8267A670:
	// lbz r11,1184(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1184);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8267a694
	goto loc_8267A694;
loc_8267A67C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lbz r11,1184(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1184);
	// bne cr6,0x8267a690
	if (!ctx.cr6.eq) goto loc_8267A690;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8267a694
	goto loc_8267A694;
loc_8267A690:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_8267A694:
	// stb r11,1184(r3)
	REX_STORE_U8(ctx.r3.u32 + 1184, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267D008) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267D010;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,656(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,656
	r29.s64 = ctx.r3.s64 + 656;
	// li r28,0
	r28.s64 = 0;
	// b 0x8267d084
	goto loc_8267D084;
loc_8267D028:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82687208
	ctx.lr = 0x8267D038;
	sub_82687208(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,680(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 680);
	// lhz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267d090
	if (!ctx.cr6.eq) goto loc_8267D090;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82687280
	ctx.lr = 0x8267D054;
	sub_82687280(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r5,r11,r31
	ctx.r5.u64 = r31.u64 - ctx.r11.u64;
	// bl 0x8267b0f0
	ctx.lr = 0x8267D078;
	sub_8267B0F0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8267d0a8
	if (ctx.cr0.lt) goto loc_8267D0A8;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8267D084:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8267d028
	if (!ctx.cr6.eq) goto loc_8267D028;
	// b 0x8267d0a8
	goto loc_8267D0A8;
loc_8267D090:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8267d0a8
	if (ctx.cr6.lt) goto loc_8267D0A8;
	// lis r28,-32646
	r28.s64 = -2139488256;
	// ori r28,r28,4109
	r28.u64 = r28.u64 | 4109;
loc_8267D0A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82681520) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r9,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// lhz r7,832(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 832);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// subfe r8,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwimi r7,r8,15,16,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x8000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF7FFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// rldicr r3,r6,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// clrldi r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFF;
	// sth r8,828(r11)
	REX_STORE_U16(ctx.r11.u32 + 828, ctx.r8.u16);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,830(r11)
	REX_STORE_U16(ctx.r11.u32 + 830, ctx.r8.u16);
	// sth r7,832(r11)
	REX_STORE_U16(ctx.r11.u32 + 832, ctx.r7.u16);
	// or r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplwi cr6,r5,32768
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32768, ctx.xer);
	// bge cr6,0x8268157c
	if (!ctx.cr6.lt) goto loc_8268157C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82681574
	if (!ctx.cr6.lt) goto loc_82681574;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
loc_82681574:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x8268158c
	goto loc_8268158C;
loc_8268157C:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8268158c
	if (!ctx.cr6.gt) goto loc_8268158C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8268158C:
	// std r8,816(r11)
	REX_STORE_U64(ctx.r11.u32 + 816, ctx.r8.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82683168) {
	REX_FUNC_PROLOGUE();
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r5,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826831c8
	if (ctx.cr0.eq) goto loc_826831C8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x826831cc
	goto loc_826831CC;
loc_826831C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826831CC:
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82686210) {
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
	ctx.lr = 0x82686218;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r29,r24
	r29.u64 = r24.u64;
	// ble cr6,0x826862b8
	if (!ctx.cr6.gt) goto loc_826862B8;
	// addi r27,r3,40
	r27.s64 = ctx.r3.s64 + 40;
	// addi r26,r3,28
	r26.s64 = ctx.r3.s64 + 28;
	// addi r28,r11,-20
	r28.s64 = ctx.r11.s64 + -20;
loc_82686250:
	// lwzu r30,20(r28)
	ea = 20 + r28.u32;
	r30.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82684528
	ctx.lr = 0x8268625C;
	sub_82684528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82684bf8
	ctx.lr = 0x82686268;
	sub_82684BF8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x82685528
	ctx.lr = 0x82686288;
	sub_82685528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82685aa8
	ctx.lr = 0x82686290;
	sub_82685AA8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82686250
	if (ctx.cr6.lt) goto loc_82686250;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826862c4
	if (!ctx.cr6.eq) goto loc_826862C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x826862c4
	if (ctx.cr6.gt) goto loc_826862C4;
loc_826862B8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_826862C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
loc_826862CC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82686314
	if (ctx.cr6.eq) goto loc_82686314;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826860a0
	ctx.lr = 0x82686304;
	sub_826860A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82676d18
	ctx.lr = 0x8268630C;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x826862cc
	goto loc_826862CC;
loc_82686314:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8268633c
	if (ctx.cr6.eq) goto loc_8268633C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268633c
	if (ctx.cr0.eq) goto loc_8268633C;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82686350
	goto loc_82686350;
loc_8268633C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82686350:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8268E388) {
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
	ctx.lr = 0x8268E390;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r26,1
	r26.s64 = 1;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E3C8;
	sub_823EF5F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e400
	if (!ctx.cr6.gt) goto loc_8268E400;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8268E3DC:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E3F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e3dc
	if (ctx.cr6.lt) goto loc_8268E3DC;
loc_8268E400:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e484
	if (ctx.cr6.eq) goto loc_8268E484;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e480
	if (ctx.cr6.eq) goto loc_8268E480;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8268e480
	if (ctx.cr0.lt) goto loc_8268E480;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8268e480
	if (ctx.cr0.lt) goto loc_8268E480;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8268E480:
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
loc_8268E484:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82696CD8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2ca8
	ctx.lr = 0x82696CF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// bl 0x822ee210
	ctx.lr = 0x82696D10;
	sub_822EE210(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// lhz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 24);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// xori r30,r11,1
	r30.u64 = ctx.r11.u64 ^ 1;
	// bne 0x82696d34
	if (!ctx.cr0.eq) goto loc_82696D34;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,24(r31)
	REX_STORE_U16(r31.u32 + 24, ctx.r11.u16);
loc_82696D34:
	// lhz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 26);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82696d48
	if (!ctx.cr0.eq) goto loc_82696D48;
	// li r11,90
	ctx.r11.s64 = 90;
	// sth r11,26(r31)
	REX_STORE_U16(r31.u32 + 26, ctx.r11.u16);
loc_82696D48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 + ctx.f0.f64));
	// bl 0x826a1830
	ctx.lr = 0x82696D58;
	sub_826A1830(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,-2368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82699060
	ctx.lr = 0x82696D74;
	sub_82699060(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lhz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 24);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x826990d0
	ctx.lr = 0x82696D88;
	sub_826990D0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82699158
	ctx.lr = 0x82696D94;
	sub_82699158(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lhz r5,26(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 26);
	// lhz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 24);
	// bl 0x82699318
	ctx.lr = 0x82696DA8;
	sub_82699318(ctx, base);
	// sth r3,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r3.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x826993e8
	ctx.lr = 0x82696DBC;
	sub_826993E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82696e04
	if (ctx.cr0.eq) goto loc_82696E04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f0,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x82698ef0
	ctx.lr = 0x82696DE4;
	sub_82698EF0(ctx, base);
	// lbz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 30);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82696e0c
	if (ctx.cr0.eq) goto loc_82696E0C;
	// lhz r4,22(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 22);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82698db0
	ctx.lr = 0x82696DFC;
	sub_82698DB0(ctx, base);
	// sth r3,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r3.u16);
	// b 0x82696e0c
	goto loc_82696E0C;
loc_82696E04:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82699008
	ctx.lr = 0x82696E0C;
	sub_82699008(ctx, base);
loc_82696E0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf4
	ctx.lr = 0x82696E1C;
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

DEFINE_REX_FUNC(sub_8269DF6C) {
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
	ctx.lr = 0x8269DF8C;
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

DEFINE_REX_FUNC(sub_8269ED60) {
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
	// bl 0x8269dfa8
	ctx.lr = 0x8269ED84;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269ede0
	if (ctx.cr6.eq) goto loc_8269EDE0;
	// bl 0x8269dfa8
	ctx.lr = 0x8269ED94;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269ede0
	if (ctx.cr6.eq) goto loc_8269EDE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8269edb4
	if (!ctx.cr6.eq) goto loc_8269EDB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269eb80
	ctx.lr = 0x8269EDB0;
	sub_8269EB80(ctx, base);
	// b 0x8269ede4
	goto loc_8269EDE4;
loc_8269EDB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x8269EDBC;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269eb00
	ctx.lr = 0x8269EDC8;
	sub_8269EB00(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = r31.s64 + 112;
	// bl 0x8269ee1c
	ctx.lr = 0x8269EDD8;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269EE1C(ctx, base);
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8269ede4
	goto loc_8269EDE4;
loc_8269EDE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269EDE4:
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

DEFINE_REX_FUNC(__restgprlr_14) {
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
	// ld r14,-152(r1)
	r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
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

DEFINE_REX_FUNC(sub_826A2F00) {
	REX_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f0,19024(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19024);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f1,f12
	ctx.f10.f64 = ctx.f1.f64 - ctx.f12.f64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_90) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A9610) {
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
	// bl 0x826a96a8
	ctx.lr = 0x826A9624;
	sub_826A96A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A9BD0) {
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
	ctx.lr = 0x826A9BD8;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x826a9c1c
	if (!ctx.cr6.eq) goto loc_826A9C1C;
	// bl 0x826a3408
	ctx.lr = 0x826A9BFC;
	sub_826A3408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826A9C08;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826a9cec
	goto loc_826A9CEC;
loc_826A9C1C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826a9c34
	if (ctx.cr6.lt) goto loc_826A9C34;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,31232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31232);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826a9c58
	if (ctx.cr6.lt) goto loc_826A9C58;
loc_826A9C34:
	// bl 0x826a3408
	ctx.lr = 0x826A9C38;
	sub_826A3408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826A9C44;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A9C50;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a9cec
	goto loc_826A9CEC;
loc_826A9C58:
	// srawi r11,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = r30.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,31264
	r28.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r30,27
	ctx.r11.u64 = r30.u32 & 0x1F;
	// mulli r29,r11,72
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9c34
	if (ctx.cr0.eq) goto loc_826A9C34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b02f0
	ctx.lr = 0x826A9C8C;
	sub_826B02F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9cbc
	if (ctx.cr0.eq) goto loc_826A9CBC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a9988
	ctx.lr = 0x826A9CB4;
	sub_826A9988(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x826a9cdc
	goto loc_826A9CDC;
loc_826A9CBC:
	// bl 0x826a33d0
	ctx.lr = 0x826A9CC0;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a3408
	ctx.lr = 0x826A9CCC;
	sub_826A3408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_826A9CDC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x826a9d14
	ctx.lr = 0x826A9CE8;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A9D14(ctx, base);
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_826A9CEC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826B0B28) {
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
	ctx.lr = 0x826B0B30;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x826a32d0
	ctx.lr = 0x826B0B60;
	sub_826A32D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b102c
	if (!ctx.cr0.eq) goto loc_826B102C;
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b0b74
	if (!ctx.cr0.eq) goto loc_826B0B74;
	// li r27,-128
	r27.s64 = -128;
loc_826B0B74:
	// clrlwi r11,r21,30
	ctx.r11.u64 = r21.u32 & 0x3;
	// lis r20,-16384
	r20.s64 = -1073741824;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826b0bcc
	if (ctx.cr6.lt) goto loc_826B0BCC;
	// beq cr6,0x826b0bc4
	if (ctx.cr6.eq) goto loc_826B0BC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826b0bbc
	if (ctx.cr6.lt) goto loc_826B0BBC;
loc_826B0B90:
	// bl 0x826a3408
	ctx.lr = 0x826B0B94;
	sub_826A3408(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826B0BA4;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B0BB0;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_826B0BB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826B0BBC:
	// mr r25,r20
	r25.u64 = r20.u64;
	// b 0x826b0bd0
	goto loc_826B0BD0;
loc_826B0BC4:
	// lis r25,16384
	r25.s64 = 1073741824;
	// b 0x826b0bd0
	goto loc_826B0BD0;
loc_826B0BCC:
	// lis r25,-32768
	r25.s64 = -2147483648;
loc_826B0BD0:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// beq cr6,0x826b0c24
	if (ctx.cr6.eq) goto loc_826B0C24;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// beq cr6,0x826b0c1c
	if (ctx.cr6.eq) goto loc_826B0C1C;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(r31.s32, 48, ctx.xer);
	// beq cr6,0x826b0c14
	if (ctx.cr6.eq) goto loc_826B0C14;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(r31.s32, 64, ctx.xer);
	// beq cr6,0x826b0c0c
	if (ctx.cr6.eq) goto loc_826B0C0C;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// bne cr6,0x826b0b90
	if (!ctx.cr6.eq) goto loc_826B0B90;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x826b0c28
	goto loc_826B0C28;
loc_826B0C0C:
	// li r24,3
	r24.s64 = 3;
	// b 0x826b0c28
	goto loc_826B0C28;
loc_826B0C14:
	// li r24,2
	r24.s64 = 2;
	// b 0x826b0c28
	goto loc_826B0C28;
loc_826B0C1C:
	// li r24,1
	r24.s64 = 1;
	// b 0x826b0c28
	goto loc_826B0C28;
loc_826B0C24:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_826B0C28:
	// rlwinm r11,r21,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bgt cr6,0x826b0c70
	if (ctx.cr6.gt) goto loc_826B0C70;
	// beq cr6,0x826b0c68
	if (ctx.cr6.eq) goto loc_826B0C68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b0c68
	if (ctx.cr6.eq) goto loc_826B0C68;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x826b0c60
	if (ctx.cr6.eq) goto loc_826B0C60;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x826b0ce0
	if (ctx.cr6.eq) goto loc_826B0CE0;
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// bne cr6,0x826b0b90
	if (!ctx.cr6.eq) goto loc_826B0B90;
	// li r31,2
	r31.s64 = 2;
	// b 0x826b0c8c
	goto loc_826B0C8C;
loc_826B0C60:
	// li r31,4
	r31.s64 = 4;
	// b 0x826b0c8c
	goto loc_826B0C8C;
loc_826B0C68:
	// li r31,3
	r31.s64 = 3;
	// b 0x826b0c8c
	goto loc_826B0C8C;
loc_826B0C70:
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// beq cr6,0x826b0c88
	if (ctx.cr6.eq) goto loc_826B0C88;
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// beq cr6,0x826b0ce0
	if (ctx.cr6.eq) goto loc_826B0CE0;
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bne cr6,0x826b0b90
	if (!ctx.cr6.eq) goto loc_826B0B90;
loc_826B0C88:
	// li r31,1
	r31.s64 = 1;
loc_826B0C8C:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,128
	r26.s64 = 128;
	// beq 0x826b0cb0
	if (ctx.cr0.eq) goto loc_826B0CB0;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,8948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8948);
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b0cb0
	if (!ctx.cr0.eq) goto loc_826B0CB0;
	// li r26,1
	r26.s64 = 1;
loc_826B0CB0:
	// rlwinm. r11,r21,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0cc4
	if (ctx.cr0.eq) goto loc_826B0CC4;
	// oris r26,r26,1024
	r26.u64 = r26.u64 | 67108864;
	// oris r25,r25,1
	r25.u64 = r25.u64 | 65536;
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
loc_826B0CC4:
	// rlwinm. r11,r21,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0cd0
	if (ctx.cr0.eq) goto loc_826B0CD0;
	// ori r26,r26,256
	r26.u64 = r26.u64 | 256;
loc_826B0CD0:
	// rlwinm. r11,r21,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0ce8
	if (ctx.cr0.eq) goto loc_826B0CE8;
	// oris r26,r26,2048
	r26.u64 = r26.u64 | 134217728;
	// b 0x826b0cf4
	goto loc_826B0CF4;
loc_826B0CE0:
	// li r31,5
	r31.s64 = 5;
	// b 0x826b0c8c
	goto loc_826B0C8C;
loc_826B0CE8:
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0cf4
	if (ctx.cr0.eq) goto loc_826B0CF4;
	// oris r26,r26,4096
	r26.u64 = r26.u64 | 268435456;
loc_826B0CF4:
	// bl 0x826b0420
	ctx.lr = 0x826B0CF8;
	sub_826B0420(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826b0d2c
	if (!ctx.cr6.eq) goto loc_826B0D2C;
	// bl 0x826a3408
	ctx.lr = 0x826B0D08;
	sub_826A3408(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826B0D18;
	sub_826A33D0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826B0D24;
	sub_826A33D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826b0bb4
	goto loc_826B0BB4;
loc_826B0D2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823ede98
	ctx.lr = 0x826B0D54;
	sub_823EDE98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826b0dec
	if (!ctx.cr6.eq) goto loc_826B0DEC;
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x826b0da4
	if (!ctx.cr6.eq) goto loc_826B0DA4;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0da4
	if (ctx.cr0.eq) goto loc_826B0DA4;
	// clrlwi r25,r25,1
	r25.u64 = r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823ede98
	ctx.lr = 0x826B0D98;
	sub_823EDE98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826b0dec
	if (!ctx.cr6.eq) goto loc_826B0DEC;
loc_826B0DA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
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
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x823ee280
	ctx.lr = 0x826B0DDC;
	sub_823EE280(ctx, base);
	// bl 0x826a3440
	ctx.lr = 0x826B0DE0;
	sub_826A3440(ctx, base);
loc_826B0DE0:
	// bl 0x826a33d0
	ctx.lr = 0x826B0DE4;
	sub_826A33D0(ctx, base);
	// lwz r23,0(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826b1024
	goto loc_826B1024;
loc_826B0DEC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826b0110
	ctx.lr = 0x826B0DF8;
	sub_826B0110(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,31264
	r31.s64 = ctx.r11.s64 + 31264;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// ori r11,r27,1
	ctx.r11.u64 = r27.u64 | 1;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// andi. r30,r11,72
	r30.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x826b0ef8
	if (!ctx.cr0.eq) goto loc_826B0EF8;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0ef8
	if (ctx.cr0.eq) goto loc_826B0EF8;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0ef8
	if (ctx.cr0.eq) goto loc_826B0EF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826abee8
	ctx.lr = 0x826B0E7C;
	sub_826ABEE8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826b0ea4
	if (!ctx.cr6.eq) goto loc_826B0EA4;
	// bl 0x826a3408
	ctx.lr = 0x826B0E8C;
	sub_826A3408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 131, ctx.xer);
	// beq cr6,0x826b0ef8
	if (ctx.cr6.eq) goto loc_826B0EF8;
loc_826B0E98:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826aa5b8
	ctx.lr = 0x826B0EA0;
	sub_826AA5B8(ctx, base);
	// b 0x826b0de0
	goto loc_826B0DE0;
loc_826B0EA4:
	// stb r23,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826ac128
	ctx.lr = 0x826B0EB8;
	sub_826AC128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b0ee0
	if (!ctx.cr0.eq) goto loc_826B0EE0;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x826b0ee0
	if (!ctx.cr6.eq) goto loc_826B0EE0;
	// extsw r4,r27
	ctx.r4.s64 = r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826b2cc0
	ctx.lr = 0x826B0ED8;
	sub_826B2CC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826b0e98
	if (ctx.cr6.eq) goto loc_826B0E98;
loc_826B0EE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826abee8
	ctx.lr = 0x826B0EF0;
	sub_826ABEE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826b0e98
	if (ctx.cr6.eq) goto loc_826B0E98;
loc_826B0EF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x826b0f84
	if (!ctx.cr6.eq) goto loc_826B0F84;
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0f84
	if (ctx.cr0.eq) goto loc_826B0F84;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_826B0F84:
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x826b1024
	if (!ctx.cr6.eq) goto loc_826B1024;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b1024
	if (ctx.cr0.eq) goto loc_826B1024;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ed360
	ctx.lr = 0x826B0FA0;
	sub_823ED360(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823ede98
	ctx.lr = 0x826B0FC0;
	sub_823EDE98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826b1008
	if (!ctx.cr6.eq) goto loc_826B1008;
	// bl 0x823ee280
	ctx.lr = 0x826B0FCC;
	sub_823EE280(ctx, base);
	// bl 0x826a3440
	ctx.lr = 0x826B0FD0;
	sub_826A3440(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826b0198
	ctx.lr = 0x826B1004;
	sub_826B0198(ctx, base);
	// b 0x826b0de0
	goto loc_826B0DE0;
loc_826B1008:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_826B1024:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x826b0bb4
	goto loc_826B0BB4;
loc_826B102C:
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
	ctx.lr = 0x826B1044;
	sub_8269CBF8(ctx, base);
}

DEFINE_REX_FUNC(sub_826DE0C8) {
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
	ctx.lr = 0x826DE0D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x826c6880
	ctx.lr = 0x826DE100;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de220
	if (ctx.cr6.lt) goto loc_826DE220;
	// li r5,144
	ctx.r5.s64 = 144;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826DE11C;
	sub_826A2E60(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, r27.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, r28.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r6,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r6,92(r7)
	REX_STORE_U32(ctx.r7.u32 + 92, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,100(r9)
	REX_STORE_U32(ctx.r9.u32 + 100, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r6,104(r7)
	REX_STORE_U32(ctx.r7.u32 + 104, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r8,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r6,116(r7)
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,136(r9)
	REX_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// bl 0x826c6880
	ctx.lr = 0x826DE1EC;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de220
	if (ctx.cr6.lt) goto loc_826DE220;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826DE220:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826de23c
	if (ctx.cr6.eq) goto loc_826DE23C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c68d8
	ctx.lr = 0x826DE23C;
	sub_826C68D8(ctx, base);
loc_826DE23C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826E48E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826E48E8;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e4c0c
	if (!ctx.cr6.gt) goto loc_826E4C0C;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_826E4900:
	// lwz r9,584(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,424(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 424);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x826e4b80
	if (ctx.cr6.eq) goto loc_826E4B80;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x826e4aa4
	if (ctx.cr6.eq) goto loc_826E4AA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826e49e8
	if (!ctx.cr6.gt) goto loc_826E49E8;
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
loc_826E4960:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826e49c0
	if (!ctx.cr6.gt) goto loc_826E49C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826E4970:
	// addi r29,r11,158
	r29.s64 = ctx.r11.s64 + 158;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r3
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// ble cr6,0x826e4998
	if (!ctx.cr6.gt) goto loc_826E4998;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x826e49a8
	goto loc_826E49A8;
loc_826E4998:
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r8,r8,117
	ctx.r8.s64 = ctx.r8.s64 + 117;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
loc_826E49A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826e4970
	if (ctx.cr6.lt) goto loc_826E4970;
loc_826E49C0:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826e4960
	if (ctx.cr6.lt) goto loc_826E4960;
loc_826E49E8:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// bge cr6,0x826e4a6c
	if (!ctx.cr6.lt) goto loc_826E4A6C;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_826E4A00:
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826e4a48
	if (!ctx.cr6.gt) goto loc_826E4A48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826E4A14:
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r29,r11,158
	r29.s64 = ctx.r11.s64 + 158;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r29,r29,r3
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x826e4a14
	if (ctx.cr6.lt) goto loc_826E4A14;
loc_826E4A48:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// blt cr6,0x826e4a00
	if (ctx.cr6.lt) goto loc_826E4A00;
loc_826E4A6C:
	// lwz r10,648(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e4bf0
	if (!ctx.cr6.gt) goto loc_826E4BF0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,464
	ctx.r9.s64 = ctx.r4.s64 + 464;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_826E4A88:
	// lwzu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,648(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826e4a88
	if (ctx.cr6.lt) goto loc_826E4A88;
	// b 0x826e4bf0
	goto loc_826E4BF0;
loc_826E4AA4:
	// lwz r10,632(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lwz r6,472(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 472);
	// lwz r11,636(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r11,r11,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,636(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r5,632(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r11,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// ble cr6,0x826e4b5c
	if (!ctx.cr6.gt) goto loc_826E4B5C;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826E4B20:
	// lwz r9,636(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r8,632(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826e4b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4B20;
loc_826E4B5C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// stw r6,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r6.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r5,472(r4)
	REX_STORE_U32(ctx.r4.u32 + 472, ctx.r5.u32);
	// b 0x826e4bf0
	goto loc_826E4BF0;
loc_826E4B80:
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// lwz r10,468(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r9,582(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sraw r11,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// ble cr6,0x826e4be0
	if (!ctx.cr6.gt) goto loc_826E4BE0;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826E4BB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,632(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r10,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826e4bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4BB8;
loc_826E4BE0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r10.u32);
loc_826E4BF0:
	// lhz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826e4900
	if (ctx.cr6.lt) goto loc_826E4900;
loc_826E4C0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82705A30) {
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
	ctx.lr = 0x82705A38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,24
	r30.s64 = 24;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x82705ab4
	if (!ctx.cr6.lt) goto loc_82705AB4;
loc_82705A5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705ab4
	if (ctx.cr6.eq) goto loc_82705AB4;
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
	// bge 0x82705aa4
	if (!ctx.cr0.lt) goto loc_82705AA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705AA4;
	sub_82725E38(ctx, base);
loc_82705AA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705a5c
	if (ctx.cr6.gt) goto loc_82705A5C;
loc_82705AB4:
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
	// bge 0x82705aec
	if (!ctx.cr0.lt) goto loc_82705AEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705AEC;
	sub_82725E38(ctx, base);
loc_82705AEC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x82705b00
	if (ctx.cr6.eq) goto loc_82705B00;
loc_82705AF4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82705B00:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82705b74
	if (!ctx.cr6.lt) goto loc_82705B74;
loc_82705B1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705b74
	if (ctx.cr6.eq) goto loc_82705B74;
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
	// bge 0x82705b64
	if (!ctx.cr0.lt) goto loc_82705B64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705B64;
	sub_82725E38(ctx, base);
loc_82705B64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705b1c
	if (ctx.cr6.gt) goto loc_82705B1C;
loc_82705B74:
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
	// bge 0x82705bac
	if (!ctx.cr0.lt) goto loc_82705BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705BAC;
	sub_82725E38(ctx, base);
loc_82705BAC:
	// cmplwi cr6,r30,182
	ctx.cr6.compare<uint32_t>(r30.u32, 182, ctx.xer);
	// bne cr6,0x82705af4
	if (!ctx.cr6.eq) goto loc_82705AF4;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82705c28
	if (!ctx.cr6.lt) goto loc_82705C28;
loc_82705BD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705c28
	if (ctx.cr6.eq) goto loc_82705C28;
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
	// bge 0x82705c18
	if (!ctx.cr0.lt) goto loc_82705C18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705C18;
	sub_82725E38(ctx, base);
loc_82705C18:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705bd0
	if (ctx.cr6.gt) goto loc_82705BD0;
loc_82705C28:
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
	// bge 0x82705c60
	if (!ctx.cr0.lt) goto loc_82705C60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705C60;
	sub_82725E38(ctx, base);
loc_82705C60:
	// li r28,0
	r28.s64 = 0;
	// stw r30,284(r26)
	REX_STORE_U32(r26.u32 + 284, r30.u32);
	// li r25,1
	r25.s64 = 1;
loc_82705C6C:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705ce0
	if (!ctx.cr6.lt) goto loc_82705CE0;
loc_82705C88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705ce0
	if (ctx.cr6.eq) goto loc_82705CE0;
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
	// bge 0x82705cd0
	if (!ctx.cr0.lt) goto loc_82705CD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705CD0;
	sub_82725E38(ctx, base);
loc_82705CD0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705c88
	if (ctx.cr6.gt) goto loc_82705C88;
loc_82705CE0:
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
	// bge 0x82705d18
	if (!ctx.cr0.lt) goto loc_82705D18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705D18;
	sub_82725E38(ctx, base);
loc_82705D18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82705d28
	if (ctx.cr6.eq) goto loc_82705D28;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82705c6c
	goto loc_82705C6C;
loc_82705D28:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// ld r11,3624(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 3624);
	// mr r30,r25
	r30.u64 = r25.u64;
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705d8c
	if (!ctx.cr6.lt) goto loc_82705D8C;
loc_82705D4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705d8c
	if (ctx.cr6.eq) goto loc_82705D8C;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x82705d7c
	if (!ctx.cr0.lt) goto loc_82705D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705D7C;
	sub_82725E38(ctx, base);
loc_82705D7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705d4c
	if (ctx.cr6.gt) goto loc_82705D4C;
loc_82705D8C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x82705db0
	if (!ctx.cr0.lt) goto loc_82705DB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705DB0;
	sub_82725E38(ctx, base);
loc_82705DB0:
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,3656(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 3656);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82705dd4
	if (!ctx.cr6.gt) goto loc_82705DD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82705e80
	goto loc_82705E80;
loc_82705DD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82705de4
	if (!ctx.cr6.eq) goto loc_82705DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82705e80
	goto loc_82705E80;
loc_82705DE4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82705e44
	if (!ctx.cr6.gt) goto loc_82705E44;
loc_82705DEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705e44
	if (ctx.cr6.eq) goto loc_82705E44;
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
	// bge 0x82705e34
	if (!ctx.cr0.lt) goto loc_82705E34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705E34;
	sub_82725E38(ctx, base);
loc_82705E34:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705dec
	if (ctx.cr6.gt) goto loc_82705DEC;
loc_82705E44:
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
	// bge 0x82705e7c
	if (!ctx.cr0.lt) goto loc_82705E7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705E7C;
	sub_82725E38(ctx, base);
loc_82705E7C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82705E80:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// clrldi r28,r11,32
	r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705edc
	if (!ctx.cr6.lt) goto loc_82705EDC;
loc_82705E9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705edc
	if (ctx.cr6.eq) goto loc_82705EDC;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x82705ecc
	if (!ctx.cr0.lt) goto loc_82705ECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705ECC;
	sub_82725E38(ctx, base);
loc_82705ECC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705e9c
	if (ctx.cr6.gt) goto loc_82705E9C;
loc_82705EDC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x82705f00
	if (!ctx.cr0.lt) goto loc_82705F00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705F00;
	sub_82725E38(ctx, base);
loc_82705F00:
	// lwz r11,3592(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 3592);
	// mr r30,r25
	r30.u64 = r25.u64;
	// ld r10,3624(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 3624);
	// li r29,0
	r29.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ld r8,3632(r26)
	ctx.r8.u64 = REX_LOAD_U64(r26.u32 + 3632);
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mulld r11,r9,r27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * r27.u64);
	// std r27,3624(r26)
	REX_STORE_U64(r26.u32 + 3624, r27.u64);
	// std r10,3640(r26)
	REX_STORE_U64(r26.u32 + 3640, ctx.r10.u64);
	// std r8,3648(r26)
	REX_STORE_U64(r26.u32 + 3648, ctx.r8.u64);
	// std r10,3632(r26)
	REX_STORE_U64(r26.u32 + 3632, ctx.r10.u64);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// std r7,3600(r26)
	REX_STORE_U64(r26.u32 + 3600, ctx.r7.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705fa0
	if (!ctx.cr6.lt) goto loc_82705FA0;
loc_82705F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705fa0
	if (ctx.cr6.eq) goto loc_82705FA0;
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
	// bge 0x82705f90
	if (!ctx.cr0.lt) goto loc_82705F90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705F90;
	sub_82725E38(ctx, base);
loc_82705F90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82705f48
	if (ctx.cr6.gt) goto loc_82705F48;
loc_82705FA0:
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
	// bge 0x82705fd8
	if (!ctx.cr0.lt) goto loc_82705FD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705FD8;
	sub_82725E38(ctx, base);
loc_82705FD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82705af4
	if (ctx.cr6.eq) goto loc_82705AF4;
	// lwz r11,284(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827060a0
	if (!ctx.cr6.eq) goto loc_827060A0;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82706060
	if (!ctx.cr6.lt) goto loc_82706060;
loc_82706008:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706060
	if (ctx.cr6.eq) goto loc_82706060;
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
	// bge 0x82706050
	if (!ctx.cr0.lt) goto loc_82706050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706050;
	sub_82725E38(ctx, base);
loc_82706050:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82706008
	if (ctx.cr6.gt) goto loc_82706008;
loc_82706060:
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
	// bge 0x82706098
	if (!ctx.cr0.lt) goto loc_82706098;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706098;
	sub_82725E38(ctx, base);
loc_82706098:
	// stw r30,3928(r26)
	REX_STORE_U32(r26.u32 + 3928, r30.u32);
	// b 0x827060a8
	goto loc_827060A8;
loc_827060A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3928(r26)
	REX_STORE_U32(r26.u32 + 3928, ctx.r11.u32);
loc_827060A8:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82706100
	if (!ctx.cr6.lt) goto loc_82706100;
loc_827060C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706100
	if (ctx.cr6.eq) goto loc_82706100;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x827060f0
	if (!ctx.cr0.lt) goto loc_827060F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827060F0;
	sub_82725E38(ctx, base);
loc_827060F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827060c0
	if (ctx.cr6.gt) goto loc_827060C0;
loc_82706100:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x82706124
	if (!ctx.cr0.lt) goto loc_82706124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706124;
	sub_82725E38(ctx, base);
loc_82706124:
	// lwz r11,284(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827061f0
	if (!ctx.cr6.eq) goto loc_827061F0;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge cr6,0x827061a4
	if (!ctx.cr6.lt) goto loc_827061A4;
loc_8270614C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827061a4
	if (ctx.cr6.eq) goto loc_827061A4;
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
	// bge 0x82706194
	if (!ctx.cr0.lt) goto loc_82706194;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706194;
	sub_82725E38(ctx, base);
loc_82706194:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270614c
	if (ctx.cr6.gt) goto loc_8270614C;
loc_827061A4:
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
	// bge 0x827061dc
	if (!ctx.cr0.lt) goto loc_827061DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827061DC;
	sub_82725E38(ctx, base);
loc_827061DC:
	// stw r30,248(r26)
	REX_STORE_U32(r26.u32 + 248, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,3580(r26)
	REX_STORE_U32(r26.u32 + 3580, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_827061F0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82706370
	if (!ctx.cr6.eq) goto loc_82706370;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge cr6,0x8270626c
	if (!ctx.cr6.lt) goto loc_8270626C;
loc_82706214:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270626c
	if (ctx.cr6.eq) goto loc_8270626C;
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
	// bge 0x8270625c
	if (!ctx.cr0.lt) goto loc_8270625C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270625C;
	sub_82725E38(ctx, base);
loc_8270625C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82706214
	if (ctx.cr6.gt) goto loc_82706214;
loc_8270626C:
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
	// bge 0x827062a4
	if (!ctx.cr0.lt) goto loc_827062A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827062A4;
	sub_82725E38(ctx, base);
loc_827062A4:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// stw r29,248(r26)
	REX_STORE_U32(r26.u32 + 248, r29.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8270631c
	if (!ctx.cr6.lt) goto loc_8270631C;
loc_827062C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270631c
	if (ctx.cr6.eq) goto loc_8270631C;
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
	// bge 0x8270630c
	if (!ctx.cr0.lt) goto loc_8270630C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270630C;
	sub_82725E38(ctx, base);
loc_8270630C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827062c4
	if (ctx.cr6.gt) goto loc_827062C4;
loc_8270631C:
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
	// bge 0x82706354
	if (!ctx.cr0.lt) goto loc_82706354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706354;
	sub_82725E38(ctx, base);
loc_82706354:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,3580(r26)
	REX_STORE_U32(r26.u32 + 3580, r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// stw r9,3588(r26)
	REX_STORE_U32(r26.u32 + 3588, ctx.r9.u32);
	// stw r8,3584(r26)
	REX_STORE_U32(r26.u32 + 3584, ctx.r8.u32);
loc_82706370:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8274E6B8) {
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
	ctx.lr = 0x8274E6C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,1772(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r27,456(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lhzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// bne cr6,0x8274e738
	if (!ctx.cr6.eq) goto loc_8274E738;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8274E704:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r9,128
	ctx.r9.s64 = 128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8274E720:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8274e720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274E720;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8274e704
	if (ctx.cr6.lt) goto loc_8274E704;
	// b 0x8274e7d0
	goto loc_8274E7D0;
loc_8274E738:
	// lhzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r9,1776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,15504(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// srawi r7,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r7.s64 = r29.s32 >> 1;
	// lhzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
	// bne cr6,0x8274e77c
	if (!ctx.cr6.eq) goto loc_8274E77C;
	// bl 0x82760fd0
	ctx.lr = 0x8274E778;
	sub_82760FD0(ctx, base);
	// b 0x8274e780
	goto loc_8274E780;
loc_8274E77C:
	// bl 0x82760f08
	ctx.lr = 0x8274E780;
	sub_82760F08(ctx, base);
loc_8274E780:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lwz r7,3780(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r10,r5
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x8274E7D0;
	sub_82761270(ctx, base);
loc_8274E7D0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8274e7f8
	if (ctx.cr6.eq) goto loc_8274E7F8;
	// lwz r11,3172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3172);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274E7F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274E7F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8275A108) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275a12c
	if (ctx.cr6.eq) goto loc_8275A12C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8275a12c
	if (ctx.cr6.eq) goto loc_8275A12C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8278b2e0
	sub_8278B2E0(ctx, base);
	return;
loc_8275A12C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275B550) {
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
	ctx.lr = 0x8275B558;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,3740(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,15660(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15660);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r21,r10,r4
	r21.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r19,132(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r7,220(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r22,r7,r8
	r22.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r24,128(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r20,r10,r11
	r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8275b6c8
	if (ctx.cr6.eq) goto loc_8275B6C8;
loc_8275B5A0:
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8275b69c
	if (ctx.cr6.eq) goto loc_8275B69C;
	// addi r17,r24,-1
	r17.s64 = r24.s64 + -1;
	// addi r18,r19,-1
	r18.s64 = r19.s64 + -1;
	// subf r26,r25,r20
	r26.u64 = r20.u64 - r25.u64;
loc_8275B5C4:
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(r27.u32, r17.u32, ctx.xer);
	// beq cr6,0x8275b60c
	if (ctx.cr6.eq) goto loc_8275B60C;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(r23.u32, r18.u32, ctx.xer);
	// beq cr6,0x8275b604
	if (ctx.cr6.eq) goto loc_8275B604;
	// lwz r11,15904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15904);
	// add r7,r26,r30
	ctx.r7.u64 = r26.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,15652(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275B600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8275b680
	goto loc_8275B680;
loc_8275B604:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8275b61c
	goto loc_8275B61C;
loc_8275B60C:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8275B61C:
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(r23.u32, r18.u32, ctx.xer);
	// beq cr6,0x8275b62c
	if (ctx.cr6.eq) goto loc_8275B62C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8275b654
	goto loc_8275B654;
loc_8275B62C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8275B654:
	// lwz r16,15908(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15908);
	// add r7,r26,r30
	ctx.r7.u64 = r26.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// bctrl 
	ctx.lr = 0x8275B680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8275B680:
	// lwz r11,15664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15664);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x8275b5c4
	if (ctx.cr6.lt) goto loc_8275B5C4;
loc_8275B69C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,15676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15676);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r9,r22
	r22.u64 = ctx.r9.u64 + r22.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// add r21,r10,r21
	r21.u64 = ctx.r10.u64 + r21.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x8275b5a0
	if (ctx.cr6.lt) goto loc_8275B5A0;
loc_8275B6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82761BE0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82761BE8;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r25,r5,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// li r24,0
	r24.s64 = 0;
	// rlwinm r26,r4,6,0,25
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82761dd0
	if (!ctx.cr6.eq) goto loc_82761DD0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82761c30
	if (ctx.cr6.eq) goto loc_82761C30;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// b 0x82761c84
	goto loc_82761C84;
loc_82761C30:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82761c7c
	if (!ctx.cr6.eq) goto loc_82761C7C;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82761C48:
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lhzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_82761C60:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82761df0
	if (!ctx.cr6.eq) goto loc_82761DF0;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// b 0x826a1cf0
	return;
loc_82761C7C:
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82761C84:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subfc r31,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	r31.u64 = ctx.r4.u64 - ctx.r11.u64;
	// eqv r4,r11,r4
	ctx.r4.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// addi r31,r3,-16384
	r31.s64 = ctx.r3.s64 + -16384;
	// rlwinm r5,r5,1,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// cntlzw r31,r31
	r31.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lhzx r29,r4,r8
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r30,r31,27,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r5,r29
	ctx.r5.s64 = r29.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r5,-16384
	r31.s64 = ctx.r5.s64 + -16384;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cntlzw r31,r31
	r31.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r31,r31,27,31,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r11,-16384
	ctx.r8.s64 = ctx.r11.s64 + -16384;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82761d20
	if (!ctx.cr6.gt) goto loc_82761D20;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// b 0x826a1cf0
	return;
loc_82761D20:
	// bne cr6,0x82761d5c
	if (!ctx.cr6.eq) goto loc_82761D5C;
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x82761d38
	if (!ctx.cr6.eq) goto loc_82761D38;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x82761d5c
	goto loc_82761D5C;
loc_82761D38:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82761d4c
	if (!ctx.cr6.eq) goto loc_82761D4C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x82761d5c
	goto loc_82761D5C;
loc_82761D4C:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x82761d5c
	if (!ctx.cr6.eq) goto loc_82761D5C;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82761D5C:
	// subf r8,r5,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r31,r3,r11
	r31.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r4,r9
	r29.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r23,r28,r9
	r23.u64 = ctx.r9.u64 - r28.u64;
	// xor r31,r31,r8
	r31.u64 = r31.u64 ^ ctx.r8.u64;
	// subf r22,r4,r28
	r22.u64 = r28.u64 - ctx.r4.u64;
	// xor r30,r30,r8
	r30.u64 = r30.u64 ^ ctx.r8.u64;
	// xor r23,r23,r29
	r23.u64 = r23.u64 ^ r29.u64;
	// srawi r8,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 31;
	// xor r29,r22,r29
	r29.u64 = r22.u64 ^ r29.u64;
	// srawi r31,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r30.s32 >> 31;
	// srawi r30,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	r30.s64 = r23.s32 >> 31;
	// srawi r29,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r29.s32 >> 31;
	// or r23,r8,r31
	r23.u64 = ctx.r8.u64 | r31.u64;
	// or r22,r30,r29
	r22.u64 = r30.u64 | r29.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 & ~r23.u64;
	// andc r8,r28,r22
	ctx.r8.u64 = r28.u64 & ~r22.u64;
	// and r9,r30,r9
	ctx.r9.u64 = r30.u64 & ctx.r9.u64;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r11,r31,r5
	ctx.r11.u64 = r31.u64 & ctx.r5.u64;
	// and r8,r29,r4
	ctx.r8.u64 = r29.u64 & ctx.r4.u64;
	// or r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// b 0x82761c60
	goto loc_82761C60;
loc_82761DD0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82761de0
	if (!ctx.cr6.gt) goto loc_82761DE0;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82761c48
	goto loc_82761C48;
loc_82761DE0:
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	r24.s64 = 0;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
loc_82761DF0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + r26.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + r25.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpwi cr6,r11,-60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -60, ctx.xer);
	// bge cr6,0x82761e24
	if (!ctx.cr6.lt) goto loc_82761E24;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// b 0x82761e34
	goto loc_82761E34;
loc_82761E24:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82761e38
	if (!ctx.cr6.gt) goto loc_82761E38;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82761E34:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82761E38:
	// cmpwi cr6,r5,-60
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -60, ctx.xer);
	// bge cr6,0x82761e58
	if (!ctx.cr6.lt) goto loc_82761E58;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x826a1cf0
	return;
loc_82761E58:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82761e70
	if (!ctx.cr6.gt) goto loc_82761E70;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_82761E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827707D8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827708A8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82770930) {
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
	ctx.lr = 0x82770938;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8277095c
	if (!ctx.cr6.lt) goto loc_8277095C;
	// neg r30,r30
	r30.s64 = static_cast<int64_t>(-r30.u64);
loc_8277095C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x82770968
	if (!ctx.cr6.lt) goto loc_82770968;
	// neg r26,r26
	r26.s64 = static_cast<int64_t>(-r26.u64);
loc_82770968:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r27,0
	r27.s64 = 0;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// beq cr6,0x82770994
	if (ctx.cr6.eq) goto loc_82770994;
	// bl 0x8271b1a0
	ctx.lr = 0x82770990;
	sub_8271B1A0(ctx, base);
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
loc_82770994:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bgt cr6,0x827709a0
	if (ctx.cr6.gt) goto loc_827709A0;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_827709A0:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// bgt cr6,0x827709ac
	if (ctx.cr6.gt) goto loc_827709AC;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_827709AC:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8271b190
	ctx.lr = 0x827709C4;
	sub_8271B190(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827709d8
	if (!ctx.cr6.eq) goto loc_827709D8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827709D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8277BD48) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8277BD50;
	// lwz r26,100(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	r29.s64 = 0;
	// lwz r23,108(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// blt cr6,0x8277bd68
	if (ctx.cr6.lt) goto loc_8277BD68;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8277BD68:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r28,r9,r31
	r28.u64 = r31.u64 - ctx.r9.u64;
	// addc r11,r30,r11
	ctx.xer.ca = r30.u32 + ctx.r11.u32 < r30.u32;
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// xoris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 ^ 2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r28,r9
	ctx.xer.ca = r28.u32 + ctx.r9.u32 < r28.u32;
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// and r30,r11,r10
	r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// and r27,r10,r31
	r27.u64 = ctx.r10.u64 & r31.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// bge cr6,0x8277c030
	if (!ctx.cr6.lt) goto loc_8277C030;
	// lwz r24,84(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x8277bdb8
	if (ctx.cr6.lt) goto loc_8277BDB8;
	// mr r24,r23
	r24.u64 = r23.u64;
loc_8277BDB8:
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(r30.s32, r24.s32, ctx.xer);
	// bge cr6,0x8277bfb8
	if (!ctx.cr6.lt) goto loc_8277BFB8;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// mr r28,r27
	r28.u64 = r27.u64;
	// blt cr6,0x8277bdd0
	if (ctx.cr6.lt) goto loc_8277BDD0;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8277BDD0:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// mr r25,r26
	r25.u64 = r26.u64;
	// bgt cr6,0x8277bde0
	if (ctx.cr6.gt) goto loc_8277BDE0;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8277BDE0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bge cr6,0x8277beb0
	if (!ctx.cr6.lt) goto loc_8277BEB0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277be2c
	if (!ctx.cr6.gt) goto loc_8277BE2C;
	// mullw. r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8277be24
	if (!ctx.cr0.gt) goto loc_8277BE24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r31,r3,r7
	r31.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_8277BE0C:
	// lbzx r29,r31,r11
	r29.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8277be0c
	if (ctx.cr6.lt) goto loc_8277BE0C;
loc_8277BE24:
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8277BE2C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x8277be74
	if (!ctx.cr6.lt) goto loc_8277BE74;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// add r31,r29,r4
	r31.u64 = r29.u64 + ctx.r4.u64;
	// bge cr6,0x8277be44
	if (!ctx.cr6.lt) goto loc_8277BE44;
	// add r31,r29,r6
	r31.u64 = r29.u64 + ctx.r6.u64;
loc_8277BE44:
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277be6c
	if (!ctx.cr0.gt) goto loc_8277BE6C;
	// add r9,r29,r3
	ctx.r9.u64 = r29.u64 + ctx.r3.u64;
loc_8277BE58:
	// lbzx r30,r31,r11
	r30.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stbx r30,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277be58
	if (ctx.cr6.lt) goto loc_8277BE58;
loc_8277BE6C:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8277BE74:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x8277beec
	if (!ctx.cr6.lt) goto loc_8277BEEC;
	// subf r10,r11,r27
	ctx.r10.u64 = r27.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277bea8
	if (!ctx.cr0.gt) goto loc_8277BEA8;
	// add r9,r29,r7
	ctx.r9.u64 = r29.u64 + ctx.r7.u64;
	// add r31,r29,r3
	r31.u64 = r29.u64 + ctx.r3.u64;
loc_8277BE94:
	// lbzx r30,r9,r11
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r30,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277be94
	if (ctx.cr6.lt) goto loc_8277BE94;
loc_8277BEA8:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// b 0x8277bee8
	goto loc_8277BEE8;
loc_8277BEB0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8277beec
	if (!ctx.cr6.gt) goto loc_8277BEEC;
	// mullw. r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8277bee4
	if (!ctx.cr0.gt) goto loc_8277BEE4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r31,r3,r7
	r31.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_8277BECC:
	// lbzx r30,r11,r31
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8277becc
	if (ctx.cr6.lt) goto loc_8277BECC;
loc_8277BEE4:
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_8277BEE8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8277BEEC:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x8277bf28
	if (!ctx.cr6.lt) goto loc_8277BF28;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277bf20
	if (!ctx.cr0.gt) goto loc_8277BF20;
	// add r9,r29,r5
	ctx.r9.u64 = r29.u64 + ctx.r5.u64;
	// add r5,r29,r3
	ctx.r5.u64 = r29.u64 + ctx.r3.u64;
loc_8277BF0C:
	// lbzx r31,r9,r11
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, r31.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277bf0c
	if (ctx.cr6.lt) goto loc_8277BF0C;
loc_8277BF20:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8277BF28:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(r24.s32, r26.s32, ctx.xer);
	// ble cr6,0x8277c0d8
	if (!ctx.cr6.gt) goto loc_8277C0D8;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bge cr6,0x8277bf6c
	if (!ctx.cr6.lt) goto loc_8277BF6C;
	// subf r10,r11,r25
	ctx.r10.u64 = r25.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277bf64
	if (!ctx.cr0.gt) goto loc_8277BF64;
	// add r9,r29,r7
	ctx.r9.u64 = r29.u64 + ctx.r7.u64;
	// add r5,r29,r3
	ctx.r5.u64 = r29.u64 + ctx.r3.u64;
loc_8277BF50:
	// lbzx r31,r9,r11
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, r31.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277bf50
	if (ctx.cr6.lt) goto loc_8277BF50;
loc_8277BF64:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8277BF6C:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bge cr6,0x8277c0d8
	if (!ctx.cr6.lt) goto loc_8277C0D8;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8277bf84
	if (ctx.cr6.lt) goto loc_8277BF84;
	// add r6,r29,r4
	ctx.r6.u64 = r29.u64 + ctx.r4.u64;
	// b 0x8277bf88
	goto loc_8277BF88;
loc_8277BF84:
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
loc_8277BF88:
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277bfb0
	if (!ctx.cr0.gt) goto loc_8277BFB0;
	// add r9,r29,r3
	ctx.r9.u64 = r29.u64 + ctx.r3.u64;
loc_8277BF9C:
	// lbzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r5,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277bf9c
	if (ctx.cr6.lt) goto loc_8277BF9C;
loc_8277BFB0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8277c0d4
	goto loc_8277C0D4;
loc_8277BFB8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8277bff4
	if (!ctx.cr6.gt) goto loc_8277BFF4;
	// mullw. r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8277bfec
	if (!ctx.cr0.gt) goto loc_8277BFEC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_8277BFD4:
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8277bfd4
	if (ctx.cr6.lt) goto loc_8277BFD4;
loc_8277BFEC:
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8277BFF4:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x8277c0d8
	if (!ctx.cr6.lt) goto loc_8277C0D8;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277c028
	if (!ctx.cr0.gt) goto loc_8277C028;
	// add r9,r29,r5
	ctx.r9.u64 = r29.u64 + ctx.r5.u64;
	// add r6,r29,r3
	ctx.r6.u64 = r29.u64 + ctx.r3.u64;
loc_8277C014:
	// lbzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r5,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277c014
	if (ctx.cr6.lt) goto loc_8277C014;
loc_8277C028:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x8277c0d4
	goto loc_8277C0D4;
loc_8277C030:
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(r31.s32, r23.s32, ctx.xer);
	// blt cr6,0x8277c040
	if (ctx.cr6.lt) goto loc_8277C040;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_8277C040:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bge cr6,0x8277c0d8
	if (!ctx.cr6.lt) goto loc_8277C0D8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277c084
	if (!ctx.cr6.gt) goto loc_8277C084;
	// mullw. r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8277c07c
	if (!ctx.cr0.gt) goto loc_8277C07C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_8277C064:
	// lbzx r29,r11,r5
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8277c064
	if (ctx.cr6.lt) goto loc_8277C064;
loc_8277C07C:
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8277C084:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8277c0d8
	if (!ctx.cr6.lt) goto loc_8277C0D8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8277c0a4
	if (ctx.cr6.lt) goto loc_8277C0A4;
	// add r6,r29,r4
	ctx.r6.u64 = r29.u64 + ctx.r4.u64;
	// b 0x8277c0a8
	goto loc_8277C0A8;
loc_8277C0A4:
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
loc_8277C0A8:
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277c0d0
	if (!ctx.cr0.gt) goto loc_8277C0D0;
	// add r9,r29,r3
	ctx.r9.u64 = r29.u64 + ctx.r3.u64;
loc_8277C0BC:
	// lbzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r5,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277c0bc
	if (ctx.cr6.lt) goto loc_8277C0BC;
loc_8277C0D0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8277C0D4:
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_8277C0D8:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8277c10c
	if (!ctx.cr6.lt) goto loc_8277C10C;
	// subf r10,r11,r23
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8277c10c
	if (!ctx.cr0.gt) goto loc_8277C10C;
	// add r9,r29,r7
	ctx.r9.u64 = r29.u64 + ctx.r7.u64;
	// add r7,r29,r3
	ctx.r7.u64 = r29.u64 + ctx.r3.u64;
loc_8277C0F8:
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277c0f8
	if (ctx.cr6.lt) goto loc_8277C0F8;
loc_8277C10C:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_827921A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12640
	ctx.r3.s64 = ctx.r11.s64 + 12640;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827922F8) {
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
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x8212a018
	ctx.lr = 0x82792310;
	sub_8212A018(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// bl 0x8269d008
	ctx.lr = 0x8279231C;
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

DEFINE_REX_FUNC(sub_827925E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r8,8363
	ctx.r8.s64 = 8363;
	// addi r11,r11,-27992
	ctx.r11.s64 = ctx.r11.s64 + -27992;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82792604:
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stb r9,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stwu r10,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82792604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82792604;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792E00) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// bl 0x8269ca18
	ctx.lr = 0x82792E18;
	sub_8269CA18(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13784
	ctx.r3.s64 = ctx.r11.s64 + 13784;
	// bl 0x8269d008
	ctx.lr = 0x82792E24;
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

DEFINE_REX_FUNC(sub_82793160) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,1616(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1616);
	// b 0x8269d6a0
	sub_8269D6A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793428) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793598) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,15544
	ctx.r3.s64 = ctx.r11.s64 + 15544;
	// b 0x82331388
	sub_82331388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793688) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001a9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793778) {
	REX_FUNC_PROLOGUE();
	// .long 0x200025a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827938A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010125
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827939F8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010021
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B78) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010135
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793D18) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b6
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793ED8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010269
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827940E8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000010
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827942F8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201005d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279AE88) {
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
	ctx.lr = 0x8279AE90;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r26,50(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r16,0
	r16.s64 = 0;
	// srawi r23,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r23.s64 = r26.s32 >> 1;
	// beq cr6,0x8279aed0
	if (ctx.cr6.eq) goto loc_8279AED0;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r16
	r22.u64 = r16.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8279aed4
	if (ctx.cr6.eq) goto loc_8279AED4;
loc_8279AED0:
	// li r22,1
	r22.s64 = 1;
loc_8279AED4:
	// lwz r10,340(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 340);
	// lwz r31,0(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r29,348(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + 348);
	// lhz r25,62(r18)
	r25.u64 = REX_LOAD_U16(r18.u32 + 62);
	// lhz r21,66(r18)
	r21.u64 = REX_LOAD_U16(r18.u32 + 66);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r24,64(r18)
	r24.u64 = REX_LOAD_U16(r18.u32 + 64);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lhz r20,68(r18)
	r20.u64 = REX_LOAD_U16(r18.u32 + 68);
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// extsh r28,r5
	r28.s64 = ctx.r5.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8279afdc
	if (ctx.cr6.lt) goto loc_8279AFDC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = r28.u32 & 0xF;
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
	// bge cr6,0x8279afd4
	if (!ctx.cr6.lt) goto loc_8279AFD4;
loc_8279AF3C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279af68
	if (ctx.cr6.lt) goto loc_8279AF68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8279AF58;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8279af3c
	if (ctx.cr6.eq) goto loc_8279AF3C;
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279AF68:
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
loc_8279AFD4:
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279AFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279AFE4;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,32768
	r27.u64 = ctx.r11.u64 | 32768;
loc_8279AFEC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279B004;
	sub_82725F80(ctx, base);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r30.u32);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8279afec
	if (ctx.cr6.lt) goto loc_8279AFEC;
loc_8279B01C:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8279b038
	if (ctx.cr6.eq) goto loc_8279B038;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
loc_8279B038:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279b054
	if (ctx.cr6.eq) goto loc_8279B054;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,336(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279B054;
	sub_8279A080(ctx, base);
loc_8279B054:
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// beq cr6,0x8279b104
	if (ctx.cr6.eq) goto loc_8279B104;
	// lwz r10,-24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + -24);
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279b104
	if (ctx.cr6.eq) goto loc_8279B104;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b09c
	if (!ctx.cr6.lt) goto loc_8279B09C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8279b0f8
	goto loc_8279B0F8;
loc_8279B09C:
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,90(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// sth r5,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_8279B0F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8279B104:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8279b280
	if (!ctx.cr6.eq) goto loc_8279B280;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r26,r19
	ctx.r11.u64 = r19.u64 - r26.u64;
	// add r10,r23,r10
	ctx.r10.u64 = r23.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r17
	ctx.r6.u64 = r17.u64 - ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279b1bc
	if (ctx.cr6.eq) goto loc_8279B1BC;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b14c
	if (!ctx.cr6.lt) goto loc_8279B14C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8279b1a8
	goto loc_8279B1A8;
loc_8279B14C:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r4,r8,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// sth r8,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// sth r7,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
loc_8279B1A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8279B1BC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// beq cr6,0x8279b280
	if (ctx.cr6.eq) goto loc_8279B280;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8279b1dc
	if (ctx.cr6.eq) goto loc_8279B1DC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x8279b1e4
	goto loc_8279B1E4;
loc_8279B1DC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_8279B1E4:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279b280
	if (ctx.cr6.eq) goto loc_8279B280;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b210
	if (!ctx.cr6.lt) goto loc_8279B210;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8279b26c
	goto loc_8279B26C;
loc_8279B210:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_8279B26C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8279B280:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x8279b32c
	if (ctx.cr6.lt) goto loc_8279B32C;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
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
	// subf r27,r6,r4
	r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r30,r6
	r14.u64 = ctx.r6.u64 - r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r27,r27,r8
	r27.u64 = r27.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r27.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r27,r11,r10
	r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 & ~r27.u64;
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
	// b 0x8279b344
	goto loc_8279B344;
loc_8279B32C:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_8279B344:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// and r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 & r21.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// and r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 & r20.u64;
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - r25.u64;
	// subf r10,r24,r4
	ctx.r10.u64 = ctx.r4.u64 - r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + r29.u32, ctx.r10.u16);
	// beq cr6,0x8279b3a4
	if (ctx.cr6.eq) goto loc_8279B3A4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,336(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279B3A4;
	sub_8279A080(ctx, base);
loc_8279B3A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x8279b5e4
	if (!ctx.cr6.eq) goto loc_8279B5E4;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r26,r19
	ctx.r10.u64 = r19.u64 - r26.u64;
	// add r9,r23,r11
	ctx.r9.u64 = r23.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r17
	ctx.r6.u64 = r17.u64 - ctx.r8.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r10,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8279b46c
	if (ctx.cr6.eq) goto loc_8279B46C;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b404
	if (!ctx.cr6.lt) goto loc_8279B404;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8279b460
	goto loc_8279B460;
loc_8279B404:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r5,r8,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r4,90(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
loc_8279B460:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_8279B46C:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// beq cr6,0x8279b530
	if (ctx.cr6.eq) goto loc_8279B530;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8279b48c
	if (ctx.cr6.eq) goto loc_8279B48C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x8279b494
	goto loc_8279B494;
loc_8279B48C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_8279B494:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279b530
	if (ctx.cr6.eq) goto loc_8279B530;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b4c0
	if (!ctx.cr6.lt) goto loc_8279B4C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8279b51c
	goto loc_8279B51C;
loc_8279B4C0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r5,r8,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_8279B51C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8279B530:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x8279b5dc
	if (ctx.cr6.lt) goto loc_8279B5DC;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r30,r5
	ctx.r11.u64 = ctx.r5.u64 - r30.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r30,r7
	ctx.r9.u64 = ctx.r7.u64 - r30.u64;
	// subf r8,r27,r4
	ctx.r8.u64 = ctx.r4.u64 - r27.u64;
	// subf r23,r6,r4
	r23.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r22,r27,r6
	r22.u64 = ctx.r6.u64 - r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r23,r23,r8
	r23.u64 = r23.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r22,r8
	ctx.r8.u64 = r22.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r23.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r23,r11,r10
	r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r22,r9,r8
	r22.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	// andc r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 & ~r23.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// andc r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & ~r22.u64;
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
	// b 0x8279b5ec
	goto loc_8279B5EC;
loc_8279B5DC:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8279b5ec
	if (!ctx.cr6.eq) goto loc_8279B5EC;
loc_8279B5E4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8279B5EC:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r28,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + r24.u64;
	// and r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 & r21.u64;
	// and r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 & r20.u64;
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - r25.u64;
	// subf r11,r24,r4
	ctx.r11.u64 = ctx.r4.u64 - r24.u64;
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8279b644
	if (ctx.cr6.eq) goto loc_8279B644;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,336(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279B644;
	sub_8279A080(ctx, base);
loc_8279B644:
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x8279b6ec
	if (ctx.cr6.eq) goto loc_8279B6EC;
	// lwz r9,-24(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + -24);
	// add r11,r19,r26
	ctx.r11.u64 = r19.u64 + r26.u64;
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279b6ec
	if (ctx.cr6.eq) goto loc_8279B6EC;
	// rlwinm r10,r9,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279b684
	if (!ctx.cr6.lt) goto loc_8279B684;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// b 0x8279b6e4
	goto loc_8279B6E4;
loc_8279B684:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r5,86(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,90(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// sth r6,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// sth r5,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8279B6E4:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8279B6EC:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r30,r19,r26
	r30.u64 = r19.u64 + r26.u64;
	// clrlwi r4,r28,31
	ctx.r4.u64 = r28.u32 & 0x1;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r6,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r6,102(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r27,r8
	r27.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r9,r6,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r7,r27
	ctx.r8.u64 = r27.u64 - ctx.r7.u64;
	// subf r23,r28,r27
	r23.u64 = r27.u64 - r28.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r22,r7,r28
	r22.u64 = r28.u64 - ctx.r7.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r23,r23,r8
	r23.u64 = r23.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r22,r8
	ctx.r8.u64 = r22.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r23.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r23,r11,r10
	r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r22,r9,r8
	r22.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// andc r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 & ~r23.u64;
	// andc r10,r28,r22
	ctx.r10.u64 = r28.u64 & ~r22.u64;
	// and r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 & r27.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + r25.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// and r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 & r21.u64;
	// and r3,r5,r20
	ctx.r3.u64 = ctx.r5.u64 & r20.u64;
	// subf r11,r25,r4
	ctx.r11.u64 = ctx.r4.u64 - r25.u64;
	// subf r8,r24,r3
	ctx.r8.u64 = ctx.r3.u64 - r24.u64;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// sth r8,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// beq cr6,0x8279b800
	if (ctx.cr6.eq) goto loc_8279B800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,336(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279B7FC;
	sub_8279A080(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8279B800:
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r9,r30,r4
	ctx.r9.u64 = ctx.r4.u64 - r30.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - r30.u64;
	// subf r11,r5,r29
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// subf r27,r28,r29
	r27.u64 = r29.u64 - r28.u64;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r26,r28,r5
	r26.u64 = ctx.r5.u64 - r28.u64;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r23,r11,r27
	r23.u64 = ctx.r11.u64 ^ r27.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r27,r26,r27
	r27.u64 = r26.u64 ^ r27.u64;
	// srawi r9,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 31;
	// srawi r8,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r23.s32 >> 31;
	// srawi r7,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r27.s32 >> 31;
	// or r27,r11,r9
	r27.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r26,r8,r7
	r26.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// andc r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ~r27.u64;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
	// andc r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 & ~r26.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// and r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 & r29.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 | ctx.r11.u64;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// and r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 & r21.u64;
	// and r7,r9,r20
	ctx.r7.u64 = ctx.r9.u64 & r20.u64;
	// subf r6,r25,r8
	ctx.r6.u64 = ctx.r8.u64 - r25.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - r24.u64;
	// sth r6,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// sth r5,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r5.u16);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827D3298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 16;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-115
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -115, ctx.xer);
	// bge cr6,0x827d32d8
	if (!ctx.cr6.lt) goto loc_827D32D8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// b 0x827d32f0
	goto loc_827D32F0;
loc_827D32D8:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x827d32f4
	if (!ctx.cr6.gt) goto loc_827D32F4;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_827D32F0:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_827D32F4:
	// cmpwi cr6,r31,-115
	ctx.cr6.compare<int32_t>(r31.s32, -115, ctx.xer);
	// bge cr6,0x827d3330
	if (!ctx.cr6.lt) goto loc_827D3330;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// beq cr6,0x827d3320
	if (ctx.cr6.eq) goto loc_827D3320;
	// addi r10,r11,-116
	ctx.r10.s64 = ctx.r11.s64 + -116;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827D3320:
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827D3330:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827d335c
	if (!ctx.cr6.gt) goto loc_827D335C;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827d3358
	if (!ctx.cr6.eq) goto loc_827D3358;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_827D3358:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_827D335C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

