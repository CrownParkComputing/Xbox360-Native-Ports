#include "hydrothunder_funcs.23.h"

DEFINE_REX_FUNC(sub_821214C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,69(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821214e8
	if (!ctx.cr0.eq) goto loc_821214E8;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_821214E8:
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
	// bne cr6,0x82121508
	if (!ctx.cr6.eq) goto loc_82121508;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82121524
	goto loc_82121524;
loc_82121508:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82121520
	if (!ctx.cr6.eq) goto loc_82121520;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82121524
	goto loc_82121524;
loc_82121520:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82121524:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82129B80) {
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
	ctx.lr = 0x82129B88;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-24456
	ctx.r4.s64 = ctx.r10.s64 + -24456;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82129BC4;
	sub_82120600(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82129BD8;
	sub_82121DD0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-24460
	r29.s64 = ctx.r11.s64 + -24460;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121928
	ctx.lr = 0x82129BE8;
	sub_82121928(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82121928
	ctx.lr = 0x82129BF0;
	sub_82121928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121928
	ctx.lr = 0x82129BF8;
	sub_82121928(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82121dd0
	ctx.lr = 0x82129C08;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x82129C14;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82129C24;
	sub_82120AC0(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821234f0
	ctx.lr = 0x82129C30;
	sub_821234F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82129c64
	if (ctx.cr6.eq) goto loc_82129C64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82129C4C;
	sub_82120AC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82129C60;
	sub_82120B20(ctx, base);
	// b 0x82129c6c
	goto loc_82129C6C;
loc_82129C64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120d70
	ctx.lr = 0x82129C6C;
	sub_82120D70(ctx, base);
loc_82129C6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x82129C78;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82129C88;
	sub_82120AC0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129cb8
	if (ctx.cr6.eq) goto loc_82129CB8;
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a778
	ctx.lr = 0x82129CA4;
	sub_8212A778(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82129CB8;
	sub_82121DD0(ctx, base);
loc_82129CB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24440
	ctx.r4.s64 = ctx.r11.s64 + -24440;
	// bl 0x82121928
	ctx.lr = 0x82129CC8;
	sub_82121928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82123288
	ctx.lr = 0x82129CD4;
	sub_82123288(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82129CE4;
	sub_82120AC0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82133448) {
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
	ctx.lr = 0x82133450;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821334b0
	if (!ctx.cr0.eq) goto loc_821334B0;
	// lhz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 12);
loc_82133480:
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
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
	// beq 0x821334a0
	if (ctx.cr0.eq) goto loc_821334A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821334a4
	goto loc_821334A4;
loc_821334A0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_821334A4:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82133480
	if (ctx.cr0.eq) goto loc_82133480;
loc_821334B0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x82133504
	if (ctx.cr0.eq) goto loc_82133504;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821334fc
	if (!ctx.cr6.eq) goto loc_821334FC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821334D8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82133540
	ctx.lr = 0x821334E8;
	sub_82133540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82133534
	goto loc_82133534;
loc_821334FC:
	// bl 0x8216c0e0
	ctx.lr = 0x82133500;
	sub_8216C0E0(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82133504:
	// lhz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 12);
	// lhz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82133520
	if (!ctx.cr6.lt) goto loc_82133520;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x821334d8
	goto loc_821334D8;
loc_82133520:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82133528;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82133534:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8213AA10) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8213AA2C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8213aa94
	if (ctx.cr0.eq) goto loc_8213AA94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// addi r10,r10,-18384
	ctx.r10.s64 = ctx.r10.s64 + -18384;
	// addi r9,r9,-18364
	ctx.r9.s64 = ctx.r9.s64 + -18364;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// bl 0x822f6280
	ctx.lr = 0x8213AA60;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213aa84
	if (ctx.cr0.eq) goto loc_8213AA84;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8212a018
	ctx.lr = 0x8213AA80;
	sub_8212A018(ctx, base);
	// b 0x8213aa88
	goto loc_8213AA88;
loc_8213AA84:
	// li r31,0
	r31.s64 = 0;
loc_8213AA88:
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8213aa98
	goto loc_8213AA98;
loc_8213AA94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213AA98:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,6132
	ctx.r11.s64 = ctx.r11.s64 + 6132;
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

DEFINE_REX_FUNC(sub_821406F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141FA0) {
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
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82141fec
	if (ctx.cr0.eq) goto loc_82141FEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82141ff0
	if (!ctx.cr0.eq) goto loc_82141FF0;
loc_82141FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82141FF0:
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

DEFINE_REX_FUNC(sub_82146CC0) {
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
	ctx.lr = 0x82146CC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82146dc0
	if (!ctx.cr6.gt) goto loc_82146DC0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82146CE8:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82146d0c
	if (ctx.cr6.eq) goto loc_82146D0C;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82146ce8
	if (ctx.cr6.lt) goto loc_82146CE8;
	// b 0x82146dc0
	goto loc_82146DC0;
loc_82146D0C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82146d20
	if (ctx.cr6.lt) goto loc_82146D20;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82146d38
	if (!ctx.cr6.gt) goto loc_82146D38;
loc_82146D20:
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
	ctx.lr = 0x82146D38;
	sub_821231D0(ctx, base);
loc_82146D38:
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
	ctx.lr = 0x82146D5C;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82146dbc
	if (!ctx.cr6.gt) goto loc_82146DBC;
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
	// bgt cr6,0x82146d88
	if (ctx.cr6.gt) goto loc_82146D88;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82146D88:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82146dbc
	if (!ctx.cr6.gt) goto loc_82146DBC;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82146D9C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82146DAC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82146DB4;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82146DBC:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82146DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8214E460) {
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
	// bl 0x8214e4b0
	ctx.lr = 0x8214E480;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e490
	if (ctx.cr0.eq) goto loc_8214E490;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214E490;
	sub_8269CE98(ctx, base);
loc_8214E490:
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

DEFINE_REX_FUNC(sub_821508E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821508F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 89);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82150930
	goto loc_82150930;
loc_82150908:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821508e8
	ctx.lr = 0x82150914;
	sub_821508E8(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82150bf0
	ctx.lr = 0x82150920;
	sub_82150BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82150928;
	sub_8269CE98(ctx, base);
	// lbz r11,89(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 89);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82150930:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82150908
	if (ctx.cr0.eq) goto loc_82150908;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82152440) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8215248c
	if (ctx.cr6.eq) goto loc_8215248C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8215248c
	if (ctx.cr6.eq) goto loc_8215248C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8215248c
	if (ctx.cr6.eq) goto loc_8215248C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-11080
	ctx.r4.s64 = ctx.r11.s64 + -11080;
	// addi r3,r10,-11008
	ctx.r3.s64 = ctx.r10.s64 + -11008;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x821231d0
	ctx.lr = 0x8215248C;
	sub_821231D0(ctx, base);
loc_8215248C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8215249c
	if (ctx.cr0.eq) goto loc_8215249C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8215249C:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x821524ac
	if (ctx.cr6.lt) goto loc_821524AC;
	// li r3,4
	ctx.r3.s64 = 4;
loc_821524AC:
	// bl 0x823ed260
	ctx.lr = 0x821524B0;
	sub_823ED260(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

DEFINE_REX_FUNC(sub_82156928) {
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
	// addi r11,r11,-8452
	ctx.r11.s64 = ctx.r11.s64 + -8452;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82156954
	if (ctx.cr0.eq) goto loc_82156954;
	// bl 0x8269ce98
	ctx.lr = 0x82156954;
	sub_8269CE98(ctx, base);
loc_82156954:
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

DEFINE_REX_FUNC(sub_82158EF0) {
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
	ctx.lr = 0x82158EF8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82158f64
	goto loc_82158F64;
loc_82158F24:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158F3C;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158f48
	if (ctx.cr0.eq) goto loc_82158F48;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_82158F48:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_82158F64:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x82158f24
	if (ctx.cr6.lt) goto loc_82158F24;
	// bne cr6,0x82158f88
	if (!ctx.cr6.eq) goto loc_82158F88;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r31,r28,-1
	r31.s64 = r28.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_82158F88:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x82158fe4
	if (!ctx.cr6.lt) goto loc_82158FE4;
loc_82158FA4:
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82158698
	ctx.lr = 0x82158FB8;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158fe4
	if (ctx.cr0.eq) goto loc_82158FE4;
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x82158fa4
	if (ctx.cr6.lt) goto loc_82158FA4;
loc_82158FE4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82160388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82160390;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821603bc
	if (ctx.cr6.lt) goto loc_821603BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821603BC:
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821603D0;
	sub_82120AC0(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821603f0
	if (ctx.cr6.gt) goto loc_821603F0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82120dc8
	ctx.lr = 0x821603EC;
	sub_82120DC8(ctx, base);
	// b 0x821603fc
	goto loc_821603FC;
loc_821603F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// bl 0x8212a778
	ctx.lr = 0x821603FC;
	sub_8212A778(ctx, base);
loc_821603FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82160478
	if (!ctx.cr6.gt) goto loc_82160478;
loc_8216040C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82160420
	if (ctx.cr6.lt) goto loc_82160420;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82160424
	goto loc_82160424;
loc_82160420:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82160424:
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82160438
	if (!ctx.cr6.eq) goto loc_82160438;
	// li r9,92
	ctx.r9.s64 = 92;
	// b 0x82160450
	goto loc_82160450;
loc_82160438:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82160448
	if (ctx.cr6.lt) goto loc_82160448;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8216044c
	goto loc_8216044C;
loc_82160448:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8216044C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
loc_82160450:
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82160464
	if (!ctx.cr6.lt) goto loc_82160464;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82160464:
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8216040c
	if (ctx.cr6.lt) goto loc_8216040C;
loc_82160478:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8216048c
	if (!ctx.cr6.lt) goto loc_8216048C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8216048C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8215dac0
	ctx.lr = 0x82160494;
	sub_8215DAC0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160510
	if (ctx.cr0.eq) goto loc_82160510;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821604c0
	if (ctx.cr6.lt) goto loc_821604C0;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821604c4
	goto loc_821604C4;
loc_821604C0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_821604C4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18672
	ctx.r4.s64 = ctx.r11.s64 + 18672;
	// bl 0x82160698
	ctx.lr = 0x821604D4;
	sub_82160698(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821604D8:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8215dba0
	ctx.lr = 0x821604E0;
	sub_8215DBA0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,18556
	ctx.r11.s64 = ctx.r11.s64 + 18556;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x822f63d0
	ctx.lr = 0x821604F4;
	sub_822F63D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160504;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d08
	return;
loc_82160510:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82160520;
	sub_82120AC0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821611e8
	ctx.lr = 0x8216052C;
	sub_821611E8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82160540
	if (!ctx.cr6.lt) goto loc_82160540;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82160540:
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bne cr6,0x82160568
	if (!ctx.cr6.eq) goto loc_82160568;
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,187
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 187, ctx.xer);
	// bne cr6,0x82160568
	if (!ctx.cr6.eq) goto loc_82160568;
	// lbz r11,2(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 191, ctx.xer);
	// bne cr6,0x82160568
	if (!ctx.cr6.eq) goto loc_82160568;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
loc_82160568:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821605e0
	ctx.lr = 0x82160574;
	sub_821605E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82160588;
	sub_82120AC0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8215bf90
	ctx.lr = 0x82160590;
	sub_8215BF90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821604d8
	if (!ctx.cr0.eq) goto loc_821604D8;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x821605c0
	if (!ctx.cr6.eq) goto loc_821605C0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_821605C0:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq 0x821604d8
	if (ctx.cr0.eq) goto loc_821604D8;
	// bl 0x8215d170
	ctx.lr = 0x821605D8;
	sub_8215D170(ctx, base);
	// b 0x821604d8
	goto loc_821604D8;
}

DEFINE_REX_FUNC(sub_82175368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm. r11,r5,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1C;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82175390
	if (!ctx.cr0.eq) goto loc_82175390;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// blr 
	return;
loc_82175390:
	// rlwinm. r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x821753cc
	if (!ctx.cr0.eq) goto loc_821753CC;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821753c4
	goto loc_821753C4;
loc_821753B0:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,65534
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65534, ctx.xer);
	// bne cr6,0x821753c0
	if (!ctx.cr6.eq) goto loc_821753C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821753C0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_821753C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821753b0
	if (!ctx.cr6.eq) goto loc_821753B0;
loc_821753CC:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82175418
	if (ctx.cr0.eq) goto loc_82175418;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82175410:
	// fnmsubs f1,f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// blr 
	return;
loc_82175418:
	// rlwinm. r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// beq 0x8217544c
	if (ctx.cr0.eq) goto loc_8217544C;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82175410
	goto loc_82175410;
loc_8217544C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fnmsubs f0,f11,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fmadds f1,f13,f10,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217FA08) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,30632
	ctx.r10.s64 = ctx.r10.s64 + 30632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r3,6160(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6160);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217FA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x8269d1b8
	ctx.lr = 0x8217FA54;
	sub_8269D1B8(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8215f0f0
	ctx.lr = 0x8217FA5C;
	sub_8215F0F0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8217FA6C;
	sub_82120AC0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8269d1b8
	ctx.lr = 0x8217FA74;
	sub_8269D1B8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8269d1b8
	ctx.lr = 0x8217FA7C;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x8217FA90;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217faa0
	if (ctx.cr0.eq) goto loc_8217FAA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8217FAA0;
	sub_8269CE98(ctx, base);
loc_8217FAA0:
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

DEFINE_REX_FUNC(sub_82188160) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x82188168;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c90
	ctx.lr = 0x82188170;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82177510
	ctx.lr = 0x82188188;
	sub_82177510(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821881A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f28,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f28.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f27,1472(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1472);
	f27.f64 = double(temp.f32);
	// addi r30,r11,-24920
	r30.s64 = ctx.r11.s64 + -24920;
	// lfs f29,1008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1008);
	f29.f64 = double(temp.f32);
	// addi r29,r10,-24980
	r29.s64 = ctx.r10.s64 + -24980;
	// lfs f23,656(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 656);
	f23.f64 = double(temp.f32);
	// lfs f26,552(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 552);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	f25.f64 = double(temp.f32);
	// lfs f24,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f24.f64 = double(temp.f32);
loc_821881E8:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// bl 0x82186c18
	ctx.lr = 0x82188204;
	sub_82186C18(ctx, base);
	// fsubs f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
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
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f31,f0,f1,f29
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82139c28
	ctx.lr = 0x82188238;
	sub_82139C28(ctx, base);
	// fmuls f30,f1,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f27.f64));
	// fabs f0,f30
	ctx.f0.u64 = f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x82188258
	if (!ctx.cr6.gt) goto loc_82188258;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,70
	ctx.r5.s64 = 70;
	// bl 0x821231d0
	ctx.lr = 0x82188258;
	sub_821231D0(ctx, base);
loc_82188258:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x82188260;
	sub_8269D370(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82139c28
	ctx.lr = 0x82188274;
	sub_82139C28(ctx, base);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82139c28
	ctx.lr = 0x82188280;
	sub_82139C28(ctx, base);
	// fdivs f22,f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(f22.f64 / ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8269ff50
	ctx.lr = 0x8218828C;
	sub_8269FF50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269ff50
	ctx.lr = 0x82188298;
	sub_8269FF50(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f22,f22
	ctx.f13.f64 = double(float(f22.f64 * f22.f64));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fmadds f0,f0,f23,f24
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, f24.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// stbx r11,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// blt cr6,0x821881e8
	if (ctx.cr6.lt) goto loc_821881E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821882E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cdc
	ctx.lr = 0x821882F4;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82195128) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219516C;
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

DEFINE_REX_FUNC(sub_82196298) {
	REX_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196B30) {
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
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82196b6c
	goto loc_82196B6C;
loc_82196B50:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_82196B6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82196b50
	if (!ctx.cr6.eq) goto loc_82196B50;
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

DEFINE_REX_FUNC(sub_821984B0) {
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
	ctx.lr = 0x821984B8;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2ca4
	ctx.lr = 0x821984C0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,606
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 606, ctx.xer);
	// ble cr6,0x821984f4
	if (!ctx.cr6.gt) goto loc_821984F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-30708
	ctx.r4.s64 = ctx.r11.s64 + -30708;
	// addi r3,r10,-30656
	ctx.r3.s64 = ctx.r10.s64 + -30656;
	// li r5,197
	ctx.r5.s64 = 197;
	// bl 0x821231d0
	ctx.lr = 0x821984F4;
	sub_821231D0(ctx, base);
loc_821984F4:
	// lfs f0,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,84(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,28(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 28);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r26,r11,16592
	r26.s64 = ctx.r11.s64 + 16592;
	// lfs f0,72(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f12,88(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,80(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,64(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 144);
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// lfs f7,444(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 444);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f31,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f30,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,160(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r8,r7,-17164
	ctx.r8.s64 = ctx.r7.s64 + -17164;
	// lfs f5,156(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r26,256
	ctx.r10.s64 = r26.s64 + 256;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// addi r31,r27,64
	r31.s64 = r27.s64 + 64;
	// lwzx r19,r11,r8
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r22,r29,384
	r22.s64 = r29.s64 + 384;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fdivs f28,f31,f6
	f28.f64 = double(float(f31.f64 / ctx.f6.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
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
	// rlwinm r9,r11,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f27,f13,f0,f31
	f27.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// bctrl 
	ctx.lr = 0x821985E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lis r21,-32106
	r21.s64 = -2104098816;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwz r3,6060(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6060);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x8212dd28
	ctx.lr = 0x821985FC;
	sub_8212DD28(ctx, base);
	// lwz r25,44(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// addi r23,r3,128
	r23.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x821987d4
	if (ctx.cr6.eq) goto loc_821987D4;
loc_82198614:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbd18
	ctx.lr = 0x82198624;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lfs f10,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f7,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f8,156(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f9,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f29,f0,f28
	f29.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(f29.f64, f30.f64);
	// ble cr6,0x821986d0
	if (!ctx.cr6.gt) goto loc_821986D0;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82198698;
	sub_826A1E70(ctx, base);
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f29.f64));
	// addi r11,r26,256
	ctx.r11.s64 = r26.s64 + 256;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
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
	// lfs f0,60(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f29,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : f31.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,60(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 60, temp.u32);
	// addi r23,r23,112
	r23.s64 = r23.s64 + 112;
loc_821986D0:
	// lwz r25,0(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82198614
	if (!ctx.cr6.eq) goto loc_82198614;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x821987d4
	if (!ctx.cr6.gt) goto loc_821987D4;
	// lwz r29,6060(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 6060);
	// mulli r11,r24,112
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(112));
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r26,r11,128
	r26.s64 = ctx.r11.s64 + 128;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82125c98
	ctx.lr = 0x82198708;
	sub_82125C98(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82198728
	if (ctx.cr6.eq) goto loc_82198728;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// li r5,227
	ctx.r5.s64 = 227;
	// bl 0x821231d0
	ctx.lr = 0x82198728;
	sub_821231D0(ctx, base);
loc_82198728:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + r26.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82125c20
	ctx.lr = 0x82198744;
	sub_82125C20(ctx, base);
	// stw r18,0(r30)
	REX_STORE_U32(r30.u32 + 0, r18.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8219875C;
	sub_826A1E70(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpwi cr6,r24,606
	ctx.cr6.compare<int32_t>(r24.s32, 606, ctx.xer);
	// std r11,80(r30)
	REX_STORE_U64(r30.u32 + 80, ctx.r11.u64);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// std r11,88(r30)
	REX_STORE_U64(r30.u32 + 88, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// std r11,96(r30)
	REX_STORE_U64(r30.u32 + 96, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// std r11,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r11.u64);
	// blt cr6,0x82198788
	if (ctx.cr6.lt) goto loc_82198788;
	// li r24,606
	r24.s64 = 606;
loc_82198788:
	// stw r24,112(r30)
	REX_STORE_U32(r30.u32 + 112, r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 116, temp.u32);
	// lwz r3,6060(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6060);
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r5,16(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 16);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r7,r11,32272
	ctx.r7.s64 = ctx.r11.s64 + 32272;
	// bne cr6,0x821987c8
	if (!ctx.cr6.eq) goto loc_821987C8;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82139a08
	ctx.lr = 0x821987C4;
	sub_82139A08(ctx, base);
	// b 0x82198828
	goto loc_82198828;
loc_821987C8:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82139b18
	ctx.lr = 0x821987D0;
	sub_82139B18(ctx, base);
	// b 0x82198828
	goto loc_82198828;
loc_821987D4:
	// lwz r31,6060(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 6060);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82125c98
	ctx.lr = 0x821987F0;
	sub_82125C98(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82198810
	if (ctx.cr6.eq) goto loc_82198810;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// li r5,227
	ctx.r5.s64 = 227;
	// bl 0x821231d0
	ctx.lr = 0x82198810;
	sub_821231D0(ctx, base);
loc_82198810:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82125c20
	ctx.lr = 0x82198828;
	sub_82125C20(ctx, base);
loc_82198828:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2cf0
	ctx.lr = 0x82198834;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_821B8EC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,140(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x821b8f18
	sub_821B8F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BC3E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BC3F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x821bc818
	ctx.lr = 0x821BC40C;
	sub_821BC818(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bc818
	ctx.lr = 0x821BC420;
	sub_821BC818(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// subfc r10,r3,r29
	ctx.xer.ca = r29.u32 >= ctx.r3.u32;
	ctx.r10.u64 = r29.u64 - ctx.r3.u64;
	// eqv r9,r3,r29
	ctx.r9.u64 = ~(ctx.r3.u64 ^ r29.u64);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BF110) {
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
	// bl 0x821911f8
	ctx.lr = 0x821BF130;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r11,r11,-18648
	ctx.r11.s64 = ctx.r11.s64 + -18648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120d70
	ctx.lr = 0x821BF148;
	sub_82120D70(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120d70
	ctx.lr = 0x821BF154;
	sub_82120D70(ctx, base);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
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

DEFINE_REX_FUNC(sub_821C0E30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14856
	ctx.r3.s64 = ctx.r11.s64 + -14856;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C20E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C20F0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c2198
	if (!ctx.cr0.eq) goto loc_821C2198;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c2198
	if (ctx.cr0.eq) goto loc_821C2198;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c2198
	if (ctx.cr0.eq) goto loc_821C2198;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821c2188
	if (!ctx.cr6.gt) goto loc_821C2188;
	// lwa r10,88(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x821c2190
	goto loc_821C2190;
loc_821C2188:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_821C2190:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// li r29,1
	r29.s64 = 1;
loc_821C2198:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// beq 0x821c23b4
	if (ctx.cr0.eq) goto loc_821C23B4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82126320
	ctx.lr = 0x821C21B0;
	sub_82126320(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r10,224
	ctx.r11.s64 = ctx.r10.s64 + 224;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// lfs f11,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x823fbf60
	ctx.lr = 0x821C221C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C222C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c222c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C222C;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x821C2250;
	sub_82173338(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
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
	ctx.lr = 0x821C2278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C22A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C22C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C22D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,58
	ctx.r7.s64 = 58;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,-14848(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -14848);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,58
	ctx.r7.s64 = 58;
	// lwz r9,-14848(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -14848);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C239C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C23B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C23B4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821D96A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,93(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d96c0
	if (ctx.cr0.eq) goto loc_821D96C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821d972c
	goto loc_821D972C;
loc_821D96C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,93(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821d970c
	if (!ctx.cr0.eq) goto loc_821D970C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x821d96e0
	goto loc_821D96E0;
loc_821D96D8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_821D96E0:
	// lbz r9,93(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821d96d8
	if (ctx.cr0.eq) goto loc_821D96D8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_821D96F4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821d971c
	if (!ctx.cr6.eq) goto loc_821D971C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821D970C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,93(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d96f4
	if (ctx.cr0.eq) goto loc_821D96F4;
loc_821D971C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,93(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 93);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_821D972C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DC4E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DC4E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821dc52c
	if (ctx.cr6.eq) goto loc_821DC52C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,-14580
	r30.s64 = ctx.r11.s64 + -14580;
loc_821DC508:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821DC514;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821dc538
	if (!ctx.cr0.eq) goto loc_821DC538;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821dc508
	if (!ctx.cr6.eq) goto loc_821DC508;
loc_821DC52C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DC530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_821DC538:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821dc530
	goto loc_821DC530;
}

DEFINE_REX_FUNC(sub_821DE4AC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DE548) {
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
	ctx.lr = 0x821DE550;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821de5c4
	if (!ctx.cr6.gt) goto loc_821DE5C4;
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
	// bgt cr6,0x821de590
	if (ctx.cr6.gt) goto loc_821DE590;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821DE590:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821de5c4
	if (!ctx.cr6.gt) goto loc_821DE5C4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,48
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821DE5A4;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,48
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(48));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DE5B4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821DE5BC;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821DE5C4:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE5D4;
	sub_821AFA30(ctx, base);
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x821afa30
	ctx.lr = 0x821DE5F8;
	sub_821AFA30(ctx, base);
	// stfs f31,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E4A80) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
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
	// lfs f1,240(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821e4adc
	if (!ctx.cr6.gt) goto loc_821E4ADC;
	// lwz r11,252(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4adc
	if (ctx.cr6.eq) goto loc_821E4ADC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4ADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E4ADC:
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

DEFINE_REX_FUNC(sub_821E8A90) {
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
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
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
	ctx.lr = 0x821E8ADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8BA4;
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

DEFINE_REX_FUNC(sub_821F45B0) {
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
	// addi r11,r11,23372
	ctx.r11.s64 = ctx.r11.s64 + 23372;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821f45dc
	if (ctx.cr0.eq) goto loc_821F45DC;
	// bl 0x8269ce98
	ctx.lr = 0x821F45DC;
	sub_8269CE98(ctx, base);
loc_821F45DC:
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

DEFINE_REX_FUNC(sub_821F5690) {
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
	ctx.lr = 0x821F5698;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f56dc
	if (ctx.cr6.eq) goto loc_821F56DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,368
	ctx.r5.s64 = 368;
	// bl 0x821231d0
	ctx.lr = 0x821F56DC;
	sub_821231D0(ctx, base);
loc_821F56DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F56F0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// bl 0x8215f338
	ctx.lr = 0x821F56FC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F5704;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F570C;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F5714;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,23208
	ctx.r4.s64 = ctx.r11.s64 + 23208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x821F5728;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x821f6130
	ctx.lr = 0x821F573C;
	sub_821F6130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5774
	if (ctx.cr0.eq) goto loc_821F5774;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23220
	ctx.r4.s64 = ctx.r11.s64 + 23220;
	// bl 0x82120600
	ctx.lr = 0x821F5754;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,3
	r30.s64 = 3;
	// bl 0x821f6130
	ctx.lr = 0x821F5768;
	sub_821F6130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x821f5778
	if (!ctx.cr0.eq) goto loc_821F5778;
loc_821F5774:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F5778:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x821f5798
	if (ctx.cr0.eq) goto loc_821F5798;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821F5798;
	sub_82120AC0(ctx, base);
loc_821F5798:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f57b0
	if (ctx.cr0.eq) goto loc_821F57B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821F57B0;
	sub_82120AC0(ctx, base);
loc_821F57B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FBE40) {
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
	ctx.lr = 0x821FBE48;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fbe80
	if (ctx.cr6.eq) goto loc_821FBE80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,579
	ctx.r5.s64 = 579;
	// bl 0x821231d0
	ctx.lr = 0x821FBE80;
	sub_821231D0(ctx, base);
loc_821FBE80:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FBE94;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25456
	ctx.r4.s64 = ctx.r11.s64 + 25456;
	// bl 0x8215f338
	ctx.lr = 0x821FBEA0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,16576
	r28.s64 = ctx.r11.s64 + 16576;
	// addi r25,r10,16568
	r25.s64 = ctx.r10.s64 + 16568;
	// addi r27,r9,16504
	r27.s64 = ctx.r9.s64 + 16504;
	// addi r30,r8,16528
	r30.s64 = ctx.r8.s64 + 16528;
loc_821FBEC8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fbeec
	if (!ctx.cr6.eq) goto loc_821FBEEC;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821fbef0
	goto loc_821FBEF0;
loc_821FBEEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FBEF0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fbf88
	if (!ctx.cr6.lt) goto loc_821FBF88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FBF04;
	sub_8215F1B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBF10;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FBF14;
	sub_8215FA30(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82120780
	ctx.lr = 0x821FBF1C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fbf78
	if (!ctx.cr0.eq) goto loc_821FBF78;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBF30;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FBF34;
	sub_8215FA30(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82120780
	ctx.lr = 0x821FBF3C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fbf78
	if (!ctx.cr0.eq) goto loc_821FBF78;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82125d00
	ctx.lr = 0x821FBF50;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fbf80
	if (!ctx.cr0.eq) goto loc_821FBF80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBF64;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FBF68;
	sub_8215FA30(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82120780
	ctx.lr = 0x821FBF70;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fbf80
	if (ctx.cr0.eq) goto loc_821FBF80;
loc_821FBF78:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821fbec8
	goto loc_821FBEC8;
loc_821FBF80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821fbf90
	goto loc_821FBF90;
loc_821FBF88:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_821FBF90:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82204AE8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82204B18;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82204B20;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82204b78
	if (ctx.cr6.eq) goto loc_82204B78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x8215f338
	ctx.lr = 0x82204B38;
	sub_8215F338(ctx, base);
	// addi r4,r30,124
	ctx.r4.s64 = r30.s64 + 124;
	// bl 0x8215fb50
	ctx.lr = 0x82204B40;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204b78
	if (ctx.cr0.eq) goto loc_82204B78;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204B64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82204b74
	if (ctx.cr6.lt) goto loc_82204B74;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82204B74:
	// stw r3,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r3.u32);
loc_82204B78:
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

DEFINE_REX_FUNC(sub_82208018) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82208078
	if (!ctx.cr6.eq) goto loc_82208078;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82208078
	if (ctx.cr0.eq) goto loc_82208078;
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x82208378
	ctx.lr = 0x82208078;
	sub_82208378(ctx, base);
loc_82208078:
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

DEFINE_REX_FUNC(sub_8220BEE8) {
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
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8220BF34;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x8215f338
	ctx.lr = 0x8220BF40;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb00
	ctx.lr = 0x8220BF48;
	sub_8215FB00(ctx, base);
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

DEFINE_REX_FUNC(sub_8220E6C8) {
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
	ctx.lr = 0x8220E6DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220e6ec
	if (ctx.cr0.eq) goto loc_8220E6EC;
	// bl 0x8220e700
	ctx.lr = 0x8220E6E8;
	sub_8220E700(ctx, base);
	// b 0x8220e6f0
	goto loc_8220E6F0;
loc_8220E6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220E6F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210250) {
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
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x822f6280
	ctx.lr = 0x82210264;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82210274
	if (ctx.cr0.eq) goto loc_82210274;
	// bl 0x82210288
	ctx.lr = 0x82210270;
	sub_82210288(ctx, base);
	// b 0x82210278
	goto loc_82210278;
loc_82210274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822129F8) {
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
	// bl 0x822e73b8
	ctx.lr = 0x82212A08;
	sub_822E73B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// lwz r11,6100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212A38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82212a58
	if (!ctx.cr0.eq) goto loc_82212A58;
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
	ctx.lr = 0x82212A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212A58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82217660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82217668;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-26552
	ctx.r11.s64 = ctx.r11.s64 + -26552;
	// addi r10,r10,-26504
	ctx.r10.s64 = ctx.r10.s64 + -26504;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,900(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
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
	ctx.lr = 0x822176A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,904(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 904);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822176C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,908
	ctx.r3.s64 = r31.s64 + 908;
	// bl 0x8215fce8
	ctx.lr = 0x822176C8;
	sub_8215FCE8(ctx, base);
	// addi r3,r31,684
	ctx.r3.s64 = r31.s64 + 684;
	// bl 0x8226b588
	ctx.lr = 0x822176D0;
	sub_8226B588(ctx, base);
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x822e6f28
	ctx.lr = 0x822176D8;
	sub_822E6F28(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = r31.s64 + 484;
	// bl 0x822e6f28
	ctx.lr = 0x822176E0;
	sub_822E6F28(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x822e6f28
	ctx.lr = 0x822176E8;
	sub_822E6F28(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x822e6f28
	ctx.lr = 0x822176F0;
	sub_822E6F28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822e6f28
	ctx.lr = 0x822176F8;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x82217700;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217710
	if (ctx.cr0.eq) goto loc_82217710;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82217710;
	sub_8269CE98(ctx, base);
loc_82217710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221FC88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14004
	ctx.r3.s64 = ctx.r11.s64 + -14004;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822205E8) {
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
	ctx.lr = 0x822205F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
	// addi r9,r9,-25116
	ctx.r9.s64 = ctx.r9.s64 + -25116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r9,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82220668
	if (!ctx.cr6.gt) goto loc_82220668;
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
loc_8222062C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82220638;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220658
	if (ctx.cr6.eq) goto loc_82220658;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220658:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222062c
	if (ctx.cr6.lt) goto loc_8222062C;
loc_82220668:
	// stw r27,120(r31)
	REX_STORE_U32(r31.u32 + 120, r27.u32);
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// stw r27,708(r31)
	REX_STORE_U32(r31.u32 + 708, r27.u32);
	// bl 0x8226b588
	ctx.lr = 0x82220678;
	sub_8226B588(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// bl 0x822e6f28
	ctx.lr = 0x82220680;
	sub_822E6F28(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x822e6f28
	ctx.lr = 0x82220688;
	sub_822E6F28(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x822e6f28
	ctx.lr = 0x82220690;
	sub_822E6F28(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x8269d1b8
	ctx.lr = 0x82220698;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822206A0;
	sub_82178388(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822206b0
	if (ctx.cr0.eq) goto loc_822206B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822206B0;
	sub_8269CE98(ctx, base);
loc_822206B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82227410) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82227440;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f338
	ctx.lr = 0x8222744C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227450;
	sub_8215FA30(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82227468;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82227470;
	sub_8215F2D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x8215f338
	ctx.lr = 0x8222747C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// bl 0x8215f338
	ctx.lr = 0x82227488;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222748C;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822274a0
	if (ctx.cr6.lt) goto loc_822274A0;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822274a4
	goto loc_822274A4;
loc_822274A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822274A4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,6248(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// beq 0x822274d0
	if (ctx.cr0.eq) goto loc_822274D0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x821ea0e0
	ctx.lr = 0x822274C0;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822274d0
	if (ctx.cr0.eq) goto loc_822274D0;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x822fbe20
	ctx.lr = 0x822274D0;
	sub_822FBE20(ctx, base);
loc_822274D0:
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

DEFINE_REX_FUNC(sub_8222A8D0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x822f6280
	ctx.lr = 0x8222A8E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222a8f4
	if (ctx.cr0.eq) goto loc_8222A8F4;
	// bl 0x8222a788
	ctx.lr = 0x8222A8F0;
	sub_8222A788(ctx, base);
	// b 0x8222a8f8
	goto loc_8222A8F8;
loc_8222A8F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B5D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13676
	ctx.r3.s64 = ctx.r11.s64 + -13676;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B840) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-22844
	ctx.r4.s64 = ctx.r11.s64 + -22844;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8222B86C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222B870;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x8222B87C;
	sub_82120D70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,0
	r30.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r30,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r30.u32);
	// bge cr6,0x8222b898
	if (!ctx.cr6.lt) goto loc_8222B898;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8222B898:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8222B89C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222b89c
	if (!ctx.cr6.eq) goto loc_8222B89C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8222B8C8;
	sub_8216B6A8(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x8222B8E0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x8216bc98
	ctx.lr = 0x8222B8F0;
	sub_8216BC98(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222B904;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82232538) {
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
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x822f6280
	ctx.lr = 0x8223254C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223255c
	if (ctx.cr0.eq) goto loc_8223255C;
	// bl 0x82232570
	ctx.lr = 0x82232558;
	sub_82232570(ctx, base);
	// b 0x82232560
	goto loc_82232560;
loc_8223255C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82232560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233CE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,976(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 976);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82233ddc
	if (!ctx.cr6.eq) goto loc_82233DDC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,848
	ctx.r3.s64 = ctx.r3.s64 + 848;
	// lfs f31,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bl 0x822eede0
	ctx.lr = 0x82233D70;
	sub_822EEDE0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82233d84
	if (!ctx.cr6.eq) goto loc_82233D84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82233D84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82233ddc
	if (ctx.cr0.eq) goto loc_82233DDC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lbz r7,26(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// std r10,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// std r9,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r9.u64);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r8,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r8.u64);
	// std r11,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r11.u64);
	// beq 0x82233ddc
	if (ctx.cr0.eq) goto loc_82233DDC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82233DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82233DDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8223D780) {
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
	ctx.lr = 0x8223D788;
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
	ctx.lr = 0x8223D7CC;
	sub_8227A148(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223D7D4;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223D7DC;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d858
	if (ctx.cr6.eq) goto loc_8223D858;
	// addi r4,r31,3832
	ctx.r4.s64 = r31.s64 + 3832;
	// bl 0x8215f2d0
	ctx.lr = 0x8223D7F0;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// bl 0x8215f338
	ctx.lr = 0x8223D7FC;
	sub_8215F338(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8223D808:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8223d828
	if (!ctx.cr6.eq) goto loc_8223D828;
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
	// b 0x8223d82c
	goto loc_8223D82C;
loc_8223D828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223D82C:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8223d854
	if (!ctx.cr6.lt) goto loc_8223D854;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8223D83C;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8223D840;
	sub_8215F9E0(ctx, base);
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8223d854
	if (!ctx.cr6.gt) goto loc_8223D854;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8223d808
	goto loc_8223D808;
loc_8223D854:
	// stw r4,316(r29)
	REX_STORE_U32(r29.u32 + 316, ctx.r4.u32);
loc_8223D858:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// addi r4,r11,-13316
	ctx.r4.s64 = ctx.r11.s64 + -13316;
	// bl 0x821fd140
	ctx.lr = 0x8223D868;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d8b8
	if (ctx.cr0.eq) goto loc_8223D8B8;
	// lfs f0,648(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8223d8b8
	if (!ctx.cr6.gt) goto loc_8223D8B8;
	// lbz r11,657(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 657);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223d8b8
	if (!ctx.cr0.eq) goto loc_8223D8B8;
	// lwz r11,316(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223d8b8
	if (!ctx.cr6.gt) goto loc_8223D8B8;
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
	ctx.lr = 0x8223D8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D8B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82245E68) {
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
	ctx.lr = 0x82245E70;
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
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
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
	// addi r28,r10,23296
	r28.s64 = ctx.r10.s64 + 23296;
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
	// beq cr6,0x82245f58
	if (ctx.cr6.eq) goto loc_82245F58;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82245F34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245f54
	if (ctx.cr0.eq) goto loc_82245F54;
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
loc_82245F54:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82245F58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8224FB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,6336
	ctx.r3.s64 = ctx.r11.s64 + 6336;
	// lwz r11,6324(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224fc94
	if (!ctx.cr0.eq) goto loc_8224FC94;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,6324(r10)
	REX_STORE_U32(ctx.r10.u32 + 6324, ctx.r11.u32);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r10,6448(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 6448);
	// addi r11,r8,6400
	ctx.r11.s64 = ctx.r8.s64 + 6400;
	// lfs f0,15048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// bne 0x8224fc34
	if (!ctx.cr0.eq) goto loc_8224FC34;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,6448(r9)
	REX_STORE_U32(ctx.r9.u32 + 6448, ctx.r10.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f13,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_8224FC34:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// ld r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// ld r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// ld r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r31,0(r8)
	r31.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r7,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r6,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// std r4,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r4.u64);
	// std r31,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, r31.u64);
	// std r8,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r8.u64);
loc_8224FC94:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254CF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,30592
	ctx.r4.s64 = ctx.r11.s64 + 30592;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x82120c08
	sub_82120C08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82255310) {
	REX_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256010) {
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
	ctx.lr = 0x82256018;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225608c
	if (ctx.cr6.eq) goto loc_8225608C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,-21756
	r30.s64 = ctx.r11.s64 + -21756;
	// addi r29,r10,-21824
	r29.s64 = ctx.r10.s64 + -21824;
loc_82256044:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82256060
	if (ctx.cr6.gt) goto loc_82256060;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x82256060;
	sub_821231D0(ctx, base);
loc_82256060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256840
	ctx.lr = 0x82256068;
	sub_82256840(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82256074;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82256044
	if (!ctx.cr6.eq) goto loc_82256044;
loc_8225608C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82256728
	ctx.lr = 0x8225609C;
	sub_82256728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256798
	ctx.lr = 0x822560A8;
	sub_82256798(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822560B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x8226afb8
	ctx.lr = 0x822560C4;
	sub_8226AFB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10772
	ctx.r4.s64 = ctx.r11.s64 + -10772;
	// bl 0x82120600
	ctx.lr = 0x822560D4;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r31,-1
	r31.s64 = -1;
	// addi r3,r11,-13252
	ctx.r3.s64 = ctx.r11.s64 + -13252;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x822560F0;
	sub_82120B20(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82120b20
	ctx.lr = 0x82256108;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82256118;
	sub_82120AC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8225E590) {
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
	ctx.lr = 0x8225E598;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r3.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r14,0
	r14.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// beq 0x8225edd0
	if (ctx.cr0.eq) goto loc_8225EDD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r19,r20,192
	r19.s64 = r20.s64 + 192;
	// addi r21,r11,17480
	r21.s64 = ctx.r11.s64 + 17480;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82125d00
	ctx.lr = 0x8225E5E4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// bne 0x8225e838
	if (!ctx.cr0.eq) goto loc_8225E838;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8225E600;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x8225E60C;
	sub_8215F338(ctx, base);
	// lis r22,32767
	r22.s64 = 2147418112;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r22,r22,65535
	r22.u64 = r22.u64 | 65535;
	// li r23,-1
	r23.s64 = -1;
	// mr r28,r14
	r28.u64 = r14.u64;
	// addi r25,r11,-24944
	r25.s64 = ctx.r11.s64 + -24944;
	// addi r24,r10,24544
	r24.s64 = ctx.r10.s64 + 24544;
	// addi r27,r9,-7872
	r27.s64 = ctx.r9.s64 + -7872;
loc_8225E638:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225e65c
	if (!ctx.cr6.eq) goto loc_8225E65C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225e660
	goto loc_8225E660;
loc_8225E65C:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8225E660:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225e708
	if (!ctx.cr6.lt) goto loc_8225E708;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8225E674;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E680;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x8225E684;
	sub_8215FAB8(ctx, base);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8228c390
	ctx.lr = 0x8225E694;
	sub_8228C390(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8225e700
	if (ctx.cr0.eq) goto loc_8225E700;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82125d00
	ctx.lr = 0x8225E6A8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225e700
	if (!ctx.cr0.eq) goto loc_8225E700;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E6BC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225E6C0;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E6D0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8225e6e4
	if (!ctx.cr6.eq) goto loc_8225E6E4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8225e6e8
	goto loc_8225E6E8;
loc_8225E6E4:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8225E6E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e700
	if (ctx.cr0.eq) goto loc_8225E700;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// bge cr6,0x8225e700
	if (!ctx.cr6.lt) goto loc_8225E700;
	// lwz r23,116(r29)
	r23.u64 = REX_LOAD_U32(r29.u32 + 116);
	// mr r22,r30
	r22.u64 = r30.u64;
loc_8225E700:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8225e638
	goto loc_8225E638;
loc_8225E708:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt cr6,0x8225e728
	if (ctx.cr6.lt) goto loc_8225E728;
	// mulli r11,r23,80
	ctx.r11.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
loc_8225E728:
	// lwz r11,288(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 288);
	// lwz r10,368(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 368);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// blt cr6,0x8225e748
	if (ctx.cr6.lt) goto loc_8225E748;
	// stw r18,292(r20)
	REX_STORE_U32(r20.u32 + 292, r18.u32);
	// stw r11,372(r20)
	REX_STORE_U32(r20.u32 + 372, ctx.r11.u32);
	// b 0x8225e750
	goto loc_8225E750;
loc_8225E748:
	// stw r18,372(r20)
	REX_STORE_U32(r20.u32 + 372, r18.u32);
	// stw r11,292(r20)
	REX_STORE_U32(r20.u32 + 292, ctx.r11.u32);
loc_8225E750:
	// lwz r11,276(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 276);
	// mr r31,r14
	r31.u64 = r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225edd0
	if (!ctx.cr6.gt) goto loc_8225EDD0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r26,r20,280
	r26.s64 = r20.s64 + 280;
	// addi r28,r11,-308
	r28.s64 = ctx.r11.s64 + -308;
	// addi r27,r10,-540
	r27.s64 = ctx.r10.s64 + -540;
loc_8225E774:
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8225E780:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8225e798
	if (ctx.cr0.eq) goto loc_8225E798;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// beq cr6,0x8225e828
	if (ctx.cr6.eq) goto loc_8225E828;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8225E798:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8225e780
	if (ctx.cr6.lt) goto loc_8225E780;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8225E7AC:
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bge cr6,0x8225e7cc
	if (!ctx.cr6.lt) goto loc_8225E7CC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,592
	ctx.r5.s64 = 592;
	// bl 0x821231d0
	ctx.lr = 0x8225E7CC;
	sub_821231D0(ctx, base);
loc_8225E7CC:
	// li r4,-32750
	ctx.r4.s64 = -32750;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217f4b0
	ctx.lr = 0x8225E7D8;
	sub_8217F4B0(ctx, base);
	// stw r31,114(r1)
	REX_STORE_U32(ctx.r1.u32 + 114, r31.u32);
	// stw r29,118(r1)
	REX_STORE_U32(ctx.r1.u32 + 118, r29.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,276(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 276);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225e774
	if (ctx.cr6.lt) goto loc_8225E774;
	// b 0x8225edd0
	goto loc_8225EDD0;
loc_8225E828:
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// b 0x8225e7ac
	goto loc_8225E7AC;
loc_8225E838:
	// addi r31,r11,-27048
	r31.s64 = ctx.r11.s64 + -27048;
	// lwz r11,1568(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1568);
	// addi r30,r10,1624
	r30.s64 = ctx.r10.s64 + 1624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,1568(r20)
	REX_STORE_U32(r20.u32 + 1568, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r25,r20,1536
	r25.s64 = r20.s64 + 1536;
	// bl 0x8215f338
	ctx.lr = 0x8225E85C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// bl 0x8215f338
	ctx.lr = 0x8225E868;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8225e87c
	if (!ctx.cr6.eq) goto loc_8225E87C;
	// lbz r20,8(r3)
	r20.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8225e880
	goto loc_8225E880;
loc_8225E87C:
	// mr r20,r14
	r20.u64 = r14.u64;
loc_8225E880:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E88C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x8225E898;
	sub_8215F338(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r18,r7,-26828
	r18.s64 = ctx.r7.s64 + -26828;
	// addi r19,r5,24544
	r19.s64 = ctx.r5.s64 + 24544;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r28,r14
	r28.u64 = r14.u64;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// addi r22,r11,3648
	r22.s64 = ctx.r11.s64 + 3648;
	// addi r21,r10,3792
	r21.s64 = ctx.r10.s64 + 3792;
	// addi r24,r9,3600
	r24.s64 = ctx.r9.s64 + 3600;
	// addi r23,r8,16432
	r23.s64 = ctx.r8.s64 + 16432;
	// addi r27,r6,-24932
	r27.s64 = ctx.r6.s64 + -24932;
loc_8225E8E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225e904
	if (!ctx.cr6.eq) goto loc_8225E904;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225e908
	goto loc_8225E908;
loc_8225E904:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8225E908:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225ea54
	if (!ctx.cr6.lt) goto loc_8225EA54;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8225E91C;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E924;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225E928;
	sub_8215F990(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8225E938;
	sub_8215F1B0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E940;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225E944;
	sub_8215F990(ctx, base);
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225e97c
	if (ctx.cr6.lt) goto loc_8225E97C;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x8225e97c
	if (!ctx.cr6.lt) goto loc_8225E97C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r23
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// b 0x8225e980
	goto loc_8225E980;
loc_8225E97C:
	// mr r29,r14
	r29.u64 = r14.u64;
loc_8225E980:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8225E98C;
	sub_8215F1B0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225E994;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225E998;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8228c528
	ctx.lr = 0x8225E9AC;
	sub_8228C528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228c718
	ctx.lr = 0x8225E9B8;
	sub_8228C718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8225e9d0
	if (!ctx.cr0.eq) goto loc_8225E9D0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8225E9D0;
	sub_821231D0(ctx, base);
loc_8225E9D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8225e9e8
	if (ctx.cr6.gt) goto loc_8225E9E8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x821231d0
	ctx.lr = 0x8225E9E8;
	sub_821231D0(ctx, base);
loc_8225E9E8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225ea0c
	if (ctx.cr6.eq) goto loc_8225EA0C;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225ea10
	if (!ctx.cr6.lt) goto loc_8225EA10;
loc_8225EA0C:
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_8225EA10:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8225ea28
	if (!ctx.cr6.eq) goto loc_8225EA28;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x8225ea2c
	goto loc_8225EA2C;
loc_8225EA28:
	// stw r14,64(r31)
	REX_STORE_U32(r31.u32 + 64, r14.u32);
loc_8225EA2C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bgt cr6,0x8225ea4c
	if (ctx.cr6.gt) goto loc_8225EA4C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_8225EA4C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8225e8e0
	goto loc_8225E8E0;
loc_8225EA54:
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r14,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r14.u64);
	// bl 0x8215f0f0
	ctx.lr = 0x8225EA64;
	sub_8215F0F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228c7b8
	ctx.lr = 0x8225EA6C;
	sub_8228C7B8(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r31,r25,16
	r31.s64 = r25.s64 + 16;
	// mr r29,r14
	r29.u64 = r14.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8225ead8
	if (!ctx.cr0.gt) goto loc_8225EAD8;
	// addi r28,r25,4
	r28.s64 = r25.s64 + 4;
	// mr r30,r14
	r30.u64 = r14.u64;
loc_8225EA90:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f270
	ctx.lr = 0x8225EA98;
	sub_8215F270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8228ca78
	ctx.lr = 0x8225EAAC;
	sub_8228CA78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8228c8e0
	ctx.lr = 0x8225EAB8;
	sub_8228C8E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225ea90
	if (ctx.cr6.lt) goto loc_8225EA90;
loc_8225EAD8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225eafc
	if (!ctx.cr6.eq) goto loc_8225EAFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225eb00
	goto loc_8225EB00;
loc_8225EAFC:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8225EB00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225ed94
	if (!ctx.cr6.gt) goto loc_8225ED94;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// ld r23,88(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// addi r16,r11,-364
	r16.s64 = ctx.r11.s64 + -364;
	// addi r15,r10,-540
	r15.s64 = ctx.r10.s64 + -540;
	// addi r22,r9,-8136
	r22.s64 = ctx.r9.s64 + -8136;
	// addi r21,r8,-8148
	r21.s64 = ctx.r8.s64 + -8148;
	// addi r20,r7,-8160
	r20.s64 = ctx.r7.s64 + -8160;
	// addi r19,r6,-8176
	r19.s64 = ctx.r6.s64 + -8176;
	// addi r18,r5,-8188
	r18.s64 = ctx.r5.s64 + -8188;
	// addi r17,r4,-31432
	r17.s64 = ctx.r4.s64 + -31432;
loc_8225EB4C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225eb6c
	if (!ctx.cr6.eq) goto loc_8225EB6C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225eb70
	goto loc_8225EB70;
loc_8225EB6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225EB70:
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225edbc
	if (!ctx.cr6.lt) goto loc_8225EDBC;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f200
	ctx.lr = 0x8225EB84;
	sub_8215F200(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,6152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EBAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8225ec44
	if (!ctx.cr0.gt) goto loc_8225EC44;
loc_8225EBB4:
	// lwz r3,6152(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6152);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EBCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EBE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225EBF0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225EBF4;
	sub_8215FA30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82125d00
	ctx.lr = 0x8225EBFC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ec28
	if (ctx.cr0.eq) goto loc_8225EC28;
	// lwz r3,6152(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8225ebb4
	if (ctx.cr6.lt) goto loc_8225EBB4;
	// b 0x8225ec44
	goto loc_8225EC44;
loc_8225EC28:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EC3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
loc_8225EC44:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ed88
	if (ctx.cr0.eq) goto loc_8225ED88;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225EC58;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225EC5C;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225EC6C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225EC70;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225EC80;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225EC84;
	sub_8215F990(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225EC94;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225EC98;
	sub_8215F990(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ECA8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225ECAC;
	sub_8215F990(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ECBC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225ECC0;
	sub_8215F990(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x8225ECD0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225ECD4;
	sub_8215F990(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f338
	ctx.lr = 0x8225ECE4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225ECE8;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r23,0
	ctx.cr6.compare<uint64_t>(r23.u64, 0, ctx.xer);
	// bne cr6,0x8225ed04
	if (!ctx.cr6.eq) goto loc_8225ED04;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// li r5,554
	ctx.r5.s64 = 554;
	// bl 0x821231d0
	ctx.lr = 0x8225ED04;
	sub_821231D0(ctx, base);
loc_8225ED04:
	// li r4,-32759
	ctx.r4.s64 = -32759;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8217f4b0
	ctx.lr = 0x8225ED10;
	sub_8217F4B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8225ed24
	if (ctx.cr6.lt) goto loc_8225ED24;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8225ed28
	goto loc_8225ED28;
loc_8225ED24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8225ED28:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,354
	ctx.r3.s64 = ctx.r1.s64 + 354;
	// bl 0x8269cd20
	ctx.lr = 0x8225ED34;
	sub_8269CD20(ctx, base);
	// stw r28,442(r1)
	REX_STORE_U32(ctx.r1.u32 + 442, r28.u32);
	// stw r27,438(r1)
	REX_STORE_U32(ctx.r1.u32 + 438, r27.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r24,426(r1)
	REX_STORE_U32(ctx.r1.u32 + 426, r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,446(r1)
	REX_STORE_U32(ctx.r1.u32 + 446, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,450(r1)
	REX_STORE_U32(ctx.r1.u32 + 450, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r25,430(r1)
	REX_STORE_U32(ctx.r1.u32 + 430, r25.u32);
	// li r6,102
	ctx.r6.s64 = 102;
	// stw r26,434(r1)
	REX_STORE_U32(ctx.r1.u32 + 434, r26.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r12,418
	ctx.r12.s64 = 418;
	// stdx r23,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, r23.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ED88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225ED88:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// b 0x8225eb4c
	goto loc_8225EB4C;
loc_8225ED94:
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
	ctx.lr = 0x8225EDAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8227d560
	ctx.lr = 0x8225EDBC;
	sub_8227D560(ctx, base);
loc_8225EDBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8225EDC4;
	sub_8215F0F0(ctx, base);
	// lwz r20,628(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// li r18,1
	r18.s64 = 1;
	// li r14,0
	r14.s64 = 0;
loc_8225EDD0:
	// lwz r11,1596(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225f08c
	if (!ctx.cr6.eq) goto loc_8225F08C;
	// lwz r31,172(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225edf8
	if (ctx.cr0.eq) goto loc_8225EDF8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225f08c
	if (!ctx.cr6.eq) goto loc_8225F08C;
loc_8225EDF8:
	// stw r14,32(r31)
	REX_STORE_U32(r31.u32 + 32, r14.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r14,28(r31)
	REX_STORE_U32(r31.u32 + 28, r14.u32);
	// stb r18,36(r31)
	REX_STORE_U8(r31.u32 + 36, r18.u8);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r18,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225ee40
	if (!ctx.cr0.eq) goto loc_8225EE40;
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
	ctx.lr = 0x8225EE40;
	sub_821231D0(ctx, base);
loc_8225EE40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r14,44(r31)
	REX_STORE_U32(r31.u32 + 44, r14.u32);
	// stb r14,52(r31)
	REX_STORE_U8(r31.u32 + 52, r14.u8);
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
	// beq cr6,0x8225f080
	if (ctx.cr6.eq) goto loc_8225F080;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225EE78;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EE84;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8225EE98;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225EEA8;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EEB4;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8225EEC8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225EED8;
	sub_82120600(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EEE4;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8225EEF8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225EF08;
	sub_82120600(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EF14;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8225EF28;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225EF38;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EF44;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8225EF58;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225EF68;
	sub_82120600(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225EF74;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8225EF88;
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
	ctx.lr = 0x8225EFA4;
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
	ctx.lr = 0x8225EFB8;
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
	ctx.lr = 0x8225EFD0;
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
	ctx.lr = 0x8225EFE8;
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
	ctx.lr = 0x8225F000;
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
	ctx.lr = 0x8225F018;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-8124
	ctx.r4.s64 = ctx.r11.s64 + -8124;
	// bl 0x82288848
	ctx.lr = 0x8225F028;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225F038;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225F048;
	sub_82120600(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225F054;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x8225F068;
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
	ctx.lr = 0x8225F080;
	sub_82288798(ctx, base);
loc_8225F080:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225F08C;
	sub_8226AFB8(ctx, base);
loc_8225F08C:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822A7768) {
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
	// bl 0x826a1c80
	ctx.lr = 0x822A7770;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c70
	ctx.lr = 0x822A7778;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822a7790
	if (!ctx.cr0.eq) goto loc_822A7790;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_822A7790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bne cr6,0x822a77a0
	if (!ctx.cr6.eq) goto loc_822A77A0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_822A77A0:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x822a7cd8
	if (ctx.cr6.lt) goto loc_822A7CD8;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822940c8
	ctx.lr = 0x822A77EC;
	sub_822940C8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f6,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f10,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lfs f12,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f12,f3
	f30.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f28,f12,f1
	f28.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f8,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f25,f13,f3
	f25.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f9,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f23,f13,f1
	f23.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f2,f9,f4,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f2.f64)));
	// lfs f7,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f31,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f31.f64 = double(temp.f32);
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f29,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	f29.f64 = double(temp.f32);
	// fmuls f27,f12,f31
	f27.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f26,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	f26.f64 = double(temp.f32);
	// fmuls f21,f13,f31
	f21.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f24,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f24.f64 = double(temp.f32);
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f22,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f22.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f20,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f20.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f19,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	f19.f64 = double(temp.f32);
	// fmuls f15,f0,f29
	f15.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f18,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	f18.f64 = double(temp.f32);
	// fmadds f25,f9,f24,f25
	f25.f64 = double(float(std::fma(ctx.f9.f64, f24.f64, f25.f64)));
	// lfs f17,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f17.f64 = double(temp.f32);
	// lfs f16,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f16.f64 = double(temp.f32);
	// fmadds f2,f7,f26,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, f26.f64, ctx.f2.f64)));
	// fmadds f5,f10,f4,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f5.f64)));
	// lfs f14,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f14.f64 = double(temp.f32);
	// fmadds f6,f11,f4,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f6.f64)));
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f11,f24,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, f24.f64, f30.f64)));
	// fmadds f30,f11,f22,f28
	f30.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, f28.f64)));
	// fmadds f3,f10,f24,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, ctx.f3.f64)));
	// fmadds f28,f11,f20,f27
	f28.f64 = double(float(std::fma(ctx.f11.f64, f20.f64, f27.f64)));
	// fmadds f1,f10,f22,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, f22.f64, ctx.f1.f64)));
	// fmadds f31,f10,f20,f31
	f31.f64 = double(float(std::fma(ctx.f10.f64, f20.f64, f31.f64)));
	// fmadds f24,f9,f22,f23
	f24.f64 = double(float(std::fma(ctx.f9.f64, f22.f64, f23.f64)));
	// fmadds f27,f10,f19,f15
	f27.f64 = double(float(std::fma(ctx.f10.f64, f19.f64, f15.f64)));
	// lfs f10,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f5,f8,f26,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, f26.f64, ctx.f5.f64)));
	// fmadds f23,f9,f20,f21
	f23.f64 = double(float(std::fma(ctx.f9.f64, f20.f64, f21.f64)));
	// fmadds f6,f10,f26,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, f26.f64, ctx.f6.f64)));
	// fmuls f22,f13,f29
	f22.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmadds f3,f8,f17,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, f17.f64, ctx.f3.f64)));
	// fmadds f1,f8,f16,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, f16.f64, ctx.f1.f64)));
	// fmadds f31,f8,f14,f31
	f31.f64 = double(float(std::fma(ctx.f8.f64, f14.f64, f31.f64)));
	// fmadds f26,f7,f16,f24
	f26.f64 = double(float(std::fma(ctx.f7.f64, f16.f64, f24.f64)));
	// fmadds f8,f8,f12,f27
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, f27.f64)));
	// fadds f5,f5,f18
	ctx.f5.f64 = double(float(ctx.f5.f64 + f18.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f5,f10,f17,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, f17.f64, ctx.f4.f64)));
	// fmadds f4,f10,f16,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, f16.f64, f30.f64)));
	// fmadds f30,f10,f14,f28
	f30.f64 = double(float(std::fma(ctx.f10.f64, f14.f64, f28.f64)));
	// lfs f10,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f28,f7,f17,f25
	f28.f64 = double(float(std::fma(ctx.f7.f64, f17.f64, f25.f64)));
	// fmadds f7,f7,f14,f23
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f14.f64, f23.f64)));
	// lfs f27,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	f27.f64 = double(temp.f32);
	// fmadds f9,f9,f19,f22
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f19.f64, f22.f64)));
	// lfs f24,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	f24.f64 = double(temp.f32);
	// fmuls f25,f13,f10
	f25.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f23,f13,f27
	f23.f64 = double(float(ctx.f13.f64 * f27.f64));
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f22,f13,f24
	f22.f64 = double(float(ctx.f13.f64 * f24.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fmuls f21,f0,f10
	f21.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f18,f0,f27
	f18.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f20,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	f20.f64 = double(temp.f32);
	// fmuls f16,f0,f24
	f16.f64 = double(float(ctx.f0.f64 * f24.f64));
	// lfs f17,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	f17.f64 = double(temp.f32);
	// fmuls f14,f12,f10
	f14.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f15,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f15.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f24,f12,f24
	f24.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmuls f29,f12,f29
	f29.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfs f12,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f25,f13,f20,f25
	f25.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, f25.f64)));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f23,f13,f17,f23
	f23.f64 = double(float(std::fma(ctx.f13.f64, f17.f64, f23.f64)));
	// lfs f12,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f22,f13,f15,f22
	f22.f64 = double(float(std::fma(ctx.f13.f64, f15.f64, f22.f64)));
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f21,f13,f20,f21
	f21.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, f21.f64)));
	// lfs f10,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f18,f13,f17,f18
	f18.f64 = double(float(std::fma(ctx.f13.f64, f17.f64, f18.f64)));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f16,f13,f15,f16
	f16.f64 = double(float(std::fma(ctx.f13.f64, f15.f64, f16.f64)));
	// lfs f13,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// stfd f10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.f10.u64);
	// fmadds f20,f11,f20,f14
	f20.f64 = double(float(std::fma(ctx.f11.f64, f20.f64, f14.f64)));
	// stfd f13,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f13.u64);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// stfs f3,248(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmadds f3,f11,f19,f29
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, f19.f64, f29.f64)));
	// fmadds f27,f11,f17,f27
	f27.f64 = double(float(std::fma(ctx.f11.f64, f17.f64, f27.f64)));
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f8,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f26,260(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmadds f9,f0,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfs f10,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmadds f1,f0,f8,f23
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, f23.f64)));
	// stfs f7,256(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmadds f7,f11,f15,f24
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, f15.f64, f24.f64)));
	// stfs f4,276(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lfs f29,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	f29.f64 = double(temp.f32);
	// fmadds f26,f0,f29,f25
	f26.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f25.f64)));
	// stfs f5,280(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lfs f31,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f25,f0,f31,f22
	f25.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f22.f64)));
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f24,f0,f29,f21
	f24.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f21.f64)));
	// lfs f5,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// stfs f28,264(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f28,f0,f8,f18
	f28.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, f18.f64)));
	// stfs f30,272(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f30,f0,f31,f16
	f30.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f16.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lfd f13,192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// lfd f10,224(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fmadds f8,f13,f8,f27
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f27.f64)));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f5,f13,f29,f20
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, f20.f64)));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmadds f7,f13,f31,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f7.f64)));
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// fadds f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lfs f6,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f13,f6,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f25,144(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// ble cr6,0x822a7ad0
	if (!ctx.cr6.gt) goto loc_822A7AD0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822a7ad4
	if (ctx.cr6.lt) goto loc_822A7AD4;
loc_822A7AD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A7AD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a7cd8
	if (ctx.cr0.eq) goto loc_822A7CD8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfs f13,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bge cr6,0x822a7b08
	if (!ctx.cr6.lt) goto loc_822A7B08;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// b 0x822a7b0c
	goto loc_822A7B0C;
loc_822A7B08:
	// lfs f7,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
loc_822A7B0C:
	// lfs f8,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x822a7b1c
	if (!ctx.cr6.lt) goto loc_822A7B1C;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_822A7B1C:
	// lfs f10,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x822a7b2c
	if (!ctx.cr6.lt) goto loc_822A7B2C;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_822A7B2C:
	// lfs f6,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f12
	ctx.cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// ble cr6,0x822a7b3c
	if (!ctx.cr6.gt) goto loc_822A7B3C;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_822A7B3C:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// blt cr6,0x822a7b60
	if (ctx.cr6.lt) goto loc_822A7B60;
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
loc_822A7B60:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822a7b70
	if (!ctx.cr6.lt) goto loc_822A7B70;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_822A7B70:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822a7b80
	if (!ctx.cr6.lt) goto loc_822A7B80;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_822A7B80:
	// lfs f11,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x822a7b90
	if (!ctx.cr6.lt) goto loc_822A7B90;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_822A7B90:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lfs f12,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lfs f1,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// fsubs f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// ld r29,0(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r30,r1,224
	r30.s64 = ctx.r1.s64 + 224;
	// ld r27,0(r9)
	r27.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r24,0(r8)
	r24.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lis r28,-32241
	r28.s64 = -2112946176;
	// ld r21,0(r7)
	r21.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r26,r1,304
	r26.s64 = ctx.r1.s64 + 304;
	// ld r18,0(r6)
	r18.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// addi r25,r1,320
	r25.s64 = ctx.r1.s64 + 320;
	// ld r15,0(r4)
	r15.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r23,r1,336
	r23.s64 = ctx.r1.s64 + 336;
	// ld r14,0(r30)
	r14.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r22,r1,352
	r22.s64 = ctx.r1.s64 + 352;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r20,r1,368
	r20.s64 = ctx.r1.s64 + 368;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r19,r1,384
	r19.s64 = ctx.r1.s64 + 384;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r17,r1,400
	r17.s64 = ctx.r1.s64 + 400;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r16,r1,416
	r16.s64 = ctx.r1.s64 + 416;
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r28,r28,6656
	r28.s64 = r28.s64 + 6656;
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// ld r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// ld r30,8(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 8);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stw r28,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r28.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r5,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r5.u64);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r11,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r11.u64);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// std r29,0(r25)
	REX_STORE_U64(r25.u32 + 0, r29.u64);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r10,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r10.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r27,0(r23)
	REX_STORE_U64(r23.u32 + 0, r27.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r9,8(r23)
	REX_STORE_U64(r23.u32 + 8, ctx.r9.u64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r24,0(r22)
	REX_STORE_U64(r22.u32 + 0, r24.u64);
	// std r8,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r8.u64);
	// std r21,0(r20)
	REX_STORE_U64(r20.u32 + 0, r21.u64);
	// std r7,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r7.u64);
	// std r18,0(r19)
	REX_STORE_U64(r19.u32 + 0, r18.u64);
	// std r6,8(r19)
	REX_STORE_U64(r19.u32 + 8, ctx.r6.u64);
	// std r15,0(r17)
	REX_STORE_U64(r17.u32 + 0, r15.u64);
	// std r4,8(r17)
	REX_STORE_U64(r17.u32 + 8, ctx.r4.u64);
	// std r14,0(r16)
	REX_STORE_U64(r16.u32 + 0, r14.u64);
	// std r30,8(r16)
	REX_STORE_U64(r16.u32 + 8, r30.u64);
	// stfs f1,500(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f12,496(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// beq 0x822a7cc4
	if (ctx.cr0.eq) goto loc_822A7CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A7CC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,500(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f1.f64 = double(temp.f32);
loc_822A7CC4:
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822a7cd8
	if (!ctx.cr6.lt) goto loc_822A7CD8;
	// stfs f1,248(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// b 0x822a7ce4
	goto loc_822A7CE4;
loc_822A7CD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_822A7CE4:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cbc
	ctx.lr = 0x822A7CF0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822DC140) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r8,20
	ctx.r11.u64 = ctx.r8.u32 & 0xFFF;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r5,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822DC1B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822dc1e0
	if (ctx.cr6.eq) goto loc_822DC1E0;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1e70
	ctx.lr = 0x822DC1E0;
	sub_826A1E70(ctx, base);
loc_822DC1E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dc1f4
	if (!ctx.cr0.eq) goto loc_822DC1F4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x822dc1b8
	goto loc_822DC1B8;
loc_822DC1F4:
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

DEFINE_REX_FUNC(sub_822E3108) {
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
	ctx.lr = 0x822E3110;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// bl 0x82793d84
	ctx.lr = 0x822E3144;
	__imp__VdQueryVideoMode(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r29,120(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822e316c
	if (!ctx.cr6.eq) goto loc_822E316C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822e316c
	if (!ctx.cr6.eq) goto loc_822E316C;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_822E316C:
	// lwz r20,420(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r24,r26,16,16,31
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF;
	// lwz r17,21764(r28)
	r17.u64 = REX_LOAD_U32(r28.u32 + 21764);
	// rlwinm r18,r31,16,16,31
	r18.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lwz r15,21760(r28)
	r15.u64 = REX_LOAD_U32(r28.u32 + 21760);
	// clrlwi r16,r31,16
	r16.u64 = r31.u32 & 0xFFFF;
	// rlwinm r27,r30,16,16,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// clrlwi r23,r30,16
	r23.u64 = r30.u32 & 0xFFFF;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// clrlwi r26,r26,16
	r26.u64 = r26.u32 & 0xFFFF;
	// rlwinm r22,r25,16,16,31
	r22.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF;
	// clrlwi r21,r25,16
	r21.u64 = r25.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e31c8
	if (!ctx.cr6.eq) goto loc_822E31C8;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// bne cr6,0x822e31b4
	if (!ctx.cr6.eq) goto loc_822E31B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822e31c4
	goto loc_822E31C4;
loc_822E31B4:
	// subfc r11,r22,r27
	ctx.xer.ca = r27.u32 >= r22.u32;
	ctx.r11.u64 = r27.u64 - r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_822E31C4:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_822E31C8:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e320c
	if (!ctx.cr6.eq) goto loc_822E320C;
	// divwu r11,r21,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? r21.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e31f8
	if (!ctx.cr6.eq) goto loc_822E31F8;
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x822e3208
	goto loc_822E3208;
loc_822E31F8:
	// subfc r11,r11,r23
	ctx.xer.ca = r23.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_822E3208:
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_822E320C:
	// clrldi r11,r22,32
	ctx.r11.u64 = r22.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,668(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfd f13,1400(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 1400);
	// fdivs f30,f11,f12
	f30.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// blt cr6,0x822e325c
	if (ctx.cr6.lt) goto loc_822E325C;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x822e325c
	if (ctx.cr6.gt) goto loc_822E325C;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_822E325C:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r21,32
	ctx.r10.u64 = r21.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// clrldi r11,r23,32
	ctx.r11.u64 = r23.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f31,f12,f10
	f31.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x822e32b8
	if (ctx.cr6.lt) goto loc_822E32B8;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// bgt cr6,0x822e32b8
	if (ctx.cr6.gt) goto loc_822E32B8;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// b 0x822e32f0
	goto loc_822E32F0;
loc_822E32B8:
	// lfs f13,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x822e32d0
	if (ctx.cr6.lt) goto loc_822E32D0;
	// lfd f0,1408(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 1408);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x822e32ec
	if (!ctx.cr6.gt) goto loc_822E32EC;
loc_822E32D0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f13,-19392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x822e32f0
	if (ctx.cr6.lt) goto loc_822E32F0;
	// lfd f0,1328(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 1328);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x822e32f0
	if (ctx.cr6.gt) goto loc_822E32F0;
loc_822E32EC:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f13.f64;
loc_822E32F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,1944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1944);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// divwu r11,r10,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// rlwinm r25,r11,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(r25.u32, 10, ctx.xer);
	// ble cr6,0x822e3318
	if (!ctx.cr6.gt) goto loc_822E3318;
	// li r25,10
	r25.s64 = 10;
loc_822E3318:
	// li r11,7680
	ctx.r11.s64 = 7680;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(r28.u32, 6, ctx.xer);
	// bgt cr6,0x822e3338
	if (ctx.cr6.gt) goto loc_822E3338;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822E3338:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e338c
	if (!ctx.cr6.lt) goto loc_822E338C;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(r28.u32, 6, ctx.xer);
	// ble cr6,0x822e339c
	if (!ctx.cr6.gt) goto loc_822E339C;
	// li r28,6
	r28.s64 = 6;
	// b 0x822e339c
	goto loc_822E339C;
loc_822E338C:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822E339C:
	// lwz r31,436(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x822E33B0;
	sub_826A2E60(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,0(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r28,r31,652
	r28.s64 = r31.s64 + 652;
	// bl 0x822e2e80
	ctx.lr = 0x822E33D4;
	sub_822E2E80(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822e2e80
	ctx.lr = 0x822E33F4;
	sub_822E2E80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f11,1416(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1416);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r11.u32);
	// addi r9,r27,3
	ctx.r9.s64 = r27.s64 + 3;
	// stw r10,1360(r31)
	REX_STORE_U32(r31.u32 + 1360, ctx.r10.u32);
	// clrlwi r10,r19,16
	ctx.r10.u64 = r19.u32 & 0xFFFF;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// rlwinm r5,r27,16,4,15
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFF0000;
	// clrlwi r4,r23,20
	ctx.r4.u64 = r23.u32 & 0xFFF;
	// subf r8,r21,r15
	ctx.r8.u64 = r15.u64 - r21.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// subf r27,r26,r8
	r27.u64 = ctx.r8.u64 - r26.u64;
	// clrlwi r4,r10,22
	ctx.r4.u64 = ctx.r10.u32 & 0x3FF;
	// clrlwi r28,r16,20
	r28.u64 = r16.u32 & 0xFFF;
	// rlwinm r3,r18,16,4,15
	ctx.r3.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0xFFF0000;
	// rlwinm r9,r19,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFFFF;
	// or r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 | r28.u64;
	// subf r6,r22,r17
	ctx.r6.u64 = r17.u64 - r22.u64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// subf r6,r24,r6
	ctx.r6.u64 = ctx.r6.u64 - r24.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r25,r9,0,0,26
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,648(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 648);
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// lwz r8,652(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 652);
	// clrlwi r26,r26,20
	r26.u64 = r26.u32 & 0xFFF;
	// stw r5,1356(r31)
	REX_STORE_U32(r31.u32 + 1356, ctx.r5.u32);
	// clrlwi r27,r27,20
	r27.u64 = r27.u32 & 0xFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r4,1404(r31)
	REX_STORE_U32(r31.u32 + 1404, ctx.r4.u32);
	// clrlwi r5,r24,20
	ctx.r5.u64 = r24.u32 & 0xFFF;
	// stw r7,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r7.u32);
	// rlwimi r28,r8,8,20,23
	r28.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xF00) | (r28.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r3,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r3.u32);
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
	// stw r11,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r11.u32);
	// andi. r8,r28,3847
	ctx.r8.u64 = r28.u64 & 3847;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r11.u32);
	// stw r8,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r8.u32);
	// cntlzw r7,r29
	ctx.r7.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r25,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, r25.u32);
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// stw r25,1320(r31)
	REX_STORE_U32(r31.u32 + 1320, r25.u32);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r26,1304(r31)
	REX_STORE_U32(r31.u32 + 1304, r26.u32);
	// stw r27,1308(r31)
	REX_STORE_U32(r31.u32 + 1308, r27.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r5,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r5.u32);
	// stw r6,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r6.u32);
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// lwz r7,1300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1300);
	// stw r8,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r8.u32);
	// rlwinm r8,r7,5,6,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x3FFFFE0;
	// stw r8,1376(r31)
	REX_STORE_U32(r31.u32 + 1376, ctx.r8.u32);
	// stw r11,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r11.u32);
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r4.u32);
	// lfs f13,544(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,1300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1300);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmadds f10,f10,f13,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64)));
	// fctidz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,9,12,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFE00;
	// stw r11,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r11.u32);
	// beq cr6,0x822e35b8
	if (ctx.cr6.eq) goto loc_822E35B8;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f11,1424(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1424);
	ctx.f11.f64 = double(temp.f32);
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f10,1420(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1420);
	ctx.f10.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f8,88(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmadds f11,f8,f11,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f10,f8,f10,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f9.f64)));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fctidz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r11.u32);
	// rlwinm r11,r10,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7FE00;
	// stw r11,1400(r31)
	REX_STORE_U32(r31.u32 + 1400, ctx.r11.u32);
	// b 0x822e3600
	goto loc_822E3600;
loc_822E35B8:
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r11.u32);
loc_822E3600:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82304A30) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r9,r9,4472
	ctx.r9.s64 = ctx.r9.s64 + 4472;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 + 88;
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// addi r8,r3,112
	ctx.r8.s64 = ctx.r3.s64 + 112;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// li r6,10000
	ctx.r6.s64 = 10000;
	// stw r9,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addi r9,r3,124
	ctx.r9.s64 = ctx.r3.s64 + 124;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r10,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r8,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r8,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r9,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r9,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r7,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r6,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r6.u32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230EEA0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5120
	ctx.r5.s64 = ctx.r10.s64 + 5120;
	// li r6,137
	ctx.r6.s64 = 137;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82330d00
	sub_82330D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230F918) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8230f954
	if (ctx.cr6.eq) goto loc_8230F954;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8230f948
	if (ctx.cr6.eq) goto loc_8230F948;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8230f960
	if (!ctx.cr6.eq) goto loc_8230F960;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3780);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8230f95c
	goto loc_8230F95C;
loc_8230F948:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3776);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8230f95c
	goto loc_8230F95C;
loc_8230F954:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
loc_8230F95C:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8230F960:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f9bc
	if (ctx.cr6.eq) goto loc_8230F9BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f13,5152(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
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
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82330108
	ctx.lr = 0x8230F9B4;
	sub_82330108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f9c0
	if (!ctx.cr0.eq) goto loc_8230F9C0;
loc_8230F9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82315930) {
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
	// bne cr6,0x82315958
	if (!ctx.cr6.eq) goto loc_82315958;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82315968
	goto loc_82315968;
loc_82315958:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f3d8
	ctx.lr = 0x82315960;
	sub_8233F3D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82315968:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82315980
	if (ctx.cr0.eq) goto loc_82315980;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8233ea40
	ctx.lr = 0x82315978;
	sub_8233EA40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315984
	if (!ctx.cr0.eq) goto loc_82315984;
loc_82315980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315984:
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

DEFINE_REX_FUNC(sub_823177C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317908) {
	REX_FUNC_PROLOGUE();
	// lis r3,29550
	ctx.r3.s64 = 1936588800;
	// ori r3,r3,27764
	ctx.r3.u64 = ctx.r3.u64 | 27764;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318260) {
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
	ctx.lr = 0x82318268;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318324
	if (ctx.cr6.eq) goto loc_82318324;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mulli r6,r11,12
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x82331a00
	ctx.lr = 0x82318298;
	sub_82331A00(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82318324
	if (!ctx.cr6.gt) goto loc_82318324;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,6196
	r25.s64 = ctx.r11.s64 + 6196;
loc_823182B4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x823175d8
	ctx.lr = 0x823182C4;
	sub_823175D8(ctx, base);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823182f0
	if (ctx.cr6.eq) goto loc_823182F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823182E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82318378
	if (!ctx.cr0.eq) goto loc_82318378;
loc_823182F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// beq cr6,0x82318310
	if (ctx.cr6.eq) goto loc_82318310;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82318310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82318310:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823182b4
	if (ctx.cr6.lt) goto loc_823182B4;
loc_82318324:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318348
	if (ctx.cr6.eq) goto loc_82318348;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82331a00
	ctx.lr = 0x82318348;
	sub_82331A00(ctx, base);
loc_82318348:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231836c
	if (ctx.cr6.eq) goto loc_8231836C;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231836C;
	sub_82331A00(ctx, base);
loc_8231836C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318370:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82318378:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231838C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82318370
	goto loc_82318370;
}

DEFINE_REX_FUNC(sub_82323DE0) {
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
	ctx.lr = 0x82323DE8;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82323e04
	if (!ctx.cr6.eq) goto loc_82323E04;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82323eb8
	goto loc_82323EB8;
loc_82323E04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// b 0x82323ea8
	goto loc_82323EA8;
loc_82323E18:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x82323eb0
	if (ctx.cr6.eq) goto loc_82323EB0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x82323e30
	if (!ctx.cr6.eq) goto loc_82323E30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82323E30:
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82323ea4
	if (ctx.cr6.eq) goto loc_82323EA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82330438
	ctx.lr = 0x82323E48;
	sub_82330438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323eb8
	if (!ctx.cr0.eq) goto loc_82323EB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82323ea4
	if (!ctx.cr6.gt) goto loc_82323EA4;
loc_82323E60:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82330480
	ctx.lr = 0x82323E70;
	sub_82330480(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323eb8
	if (!ctx.cr0.eq) goto loc_82323EB8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233f2b8
	ctx.lr = 0x82323E84;
	sub_8233F2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323eb8
	if (!ctx.cr0.eq) goto loc_82323EB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82323e60
	if (ctx.cr6.lt) goto loc_82323E60;
loc_82323EA4:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82323EA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82323e18
	if (!ctx.cr6.eq) goto loc_82323E18;
loc_82323EB0:
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82323EB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8232ADB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8080
	ctx.r5.s64 = ctx.r10.s64 + 8080;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82330d00
	sub_82330D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232B1B0) {
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
	// addi r11,r11,8052
	ctx.r11.s64 = ctx.r11.s64 + 8052;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8232b1dc
	if (ctx.cr0.eq) goto loc_8232B1DC;
	// bl 0x8269ce98
	ctx.lr = 0x8232B1DC;
	sub_8269CE98(ctx, base);
loc_8232B1DC:
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

DEFINE_REX_FUNC(sub_8232D0B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D410) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8232d430
	if (ctx.cr6.eq) goto loc_8232D430;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232d430
	if (ctx.cr6.eq) goto loc_8232D430;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232d434
	if (!ctx.cr6.eq) goto loc_8232D434;
loc_8232D430:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232D434:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232E888) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x8232ccb8
	ctx.lr = 0x8232E8A4;
	sub_8232CCB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e8e0
	if (!ctx.cr0.eq) goto loc_8232E8E0;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8232d7c8
	ctx.lr = 0x8232E8B4;
	sub_8232D7C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232e8e0
	if (!ctx.cr6.eq) goto loc_8232E8E0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e8dc
	if (ctx.cr6.eq) goto loc_8232E8DC;
	// bl 0x82330040
	ctx.lr = 0x8232E8CC;
	sub_82330040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e8e0
	if (!ctx.cr0.eq) goto loc_8232E8E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8232E8DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E8E0:
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

DEFINE_REX_FUNC(sub_82330438) {
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
	ctx.lr = 0x82330454;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330468
	if (!ctx.cr6.eq) goto loc_82330468;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82351940
	ctx.lr = 0x82330468;
	sub_82351940(ctx, base);
loc_82330468:
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

DEFINE_REX_FUNC(sub_82333BC8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82333c00
	if (ctx.cr6.lt) goto loc_82333C00;
	// beq cr6,0x82333bf8
	if (ctx.cr6.eq) goto loc_82333BF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82333bf0
	if (ctx.cr6.lt) goto loc_82333BF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82333BF0:
	// lwz r3,21364(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21364);
	// b 0x823567d8
	sub_823567D8(ctx, base);
	return;
loc_82333BF8:
	// lwz r3,21364(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21364);
	// b 0x82356778
	sub_82356778(ctx, base);
	return;
loc_82333C00:
	// lwz r3,21364(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21364);
	// b 0x82356838
	sub_82356838(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82336FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82337000;
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
	// bne cr6,0x82337020
	if (!ctx.cr6.eq) goto loc_82337020;
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82337020:
	// addi r28,r31,21724
	r28.s64 = r31.s64 + 21724;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823581b8
	ctx.lr = 0x8233702C;
	sub_823581B8(ctx, base);
	// lwz r11,21780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21780);
	// addi r30,r31,21780
	r30.s64 = r31.s64 + 21780;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337044
	if (!ctx.cr6.eq) goto loc_82337044;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233e338
	ctx.lr = 0x82337044;
	sub_8233E338(ctx, base);
loc_82337044:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e338
	ctx.lr = 0x8233704C;
	sub_8233E338(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bge cr6,0x82337064
	if (!ctx.cr6.lt) goto loc_82337064;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82337064:
	// lwz r3,1208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1208);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337080
	if (ctx.cr6.eq) goto loc_82337080;
	// bl 0x823d1958
	ctx.lr = 0x82337078;
	sub_823D1958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
loc_82337080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82336b78
	ctx.lr = 0x82337088;
	sub_82336B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82332938
	ctx.lr = 0x8233709C;
	sub_82332938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82333150
	ctx.lr = 0x823370B0;
	sub_82333150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// lwz r11,20884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337108
	if (!ctx.cr6.eq) goto loc_82337108;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8233e338
	ctx.lr = 0x823370D4;
	sub_8233E338(ctx, base);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,1188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// ld r10,20888(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20888);
	// divdu r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 ? ctx.r4.u64 / ctx.r8.u64 : 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r3,20888(r31)
	REX_STORE_U64(r31.u32 + 20888, ctx.r3.u64);
loc_82337108:
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337174
	if (ctx.cr6.eq) goto loc_82337174;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337174
	if (ctx.cr6.eq) goto loc_82337174;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82358338
	ctx.lr = 0x82337130;
	sub_82358338(ctx, base);
	// lwz r9,1176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r10,r11,-25864
	ctx.r10.s64 = ctx.r11.s64 + -25864;
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82337154
	if (!ctx.cr6.eq) goto loc_82337154;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82337154:
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82337160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82358338
	ctx.lr = 0x82337174;
	sub_82358338(ctx, base);
loc_82337174:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823335f0
	ctx.lr = 0x82337180;
	sub_823335F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823371b0
	if (ctx.cr6.eq) goto loc_823371B0;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823371b0
	if (ctx.cr6.eq) goto loc_823371B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82359e90
	ctx.lr = 0x823371A8;
	sub_82359E90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
loc_823371B0:
	// lwz r11,21344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21344);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823371dc
	if (!ctx.cr6.gt) goto loc_823371DC;
	// addi r11,r31,20893
	ctx.r11.s64 = r31.s64 + 20893;
loc_823371C4:
	// stb r30,111(r11)
	REX_STORE_U8(ctx.r11.u32 + 111, r30.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r30,112(r11)
	ea = 112 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// lwz r9,21344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21344);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823371c4
	if (ctx.cr6.lt) goto loc_823371C4;
loc_823371DC:
	// stb r30,24576(r31)
	REX_STORE_U8(r31.u32 + 24576, r30.u8);
	// bl 0x82341958
	ctx.lr = 0x823371E4;
	sub_82341958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823581f0
	ctx.lr = 0x823371F8;
	sub_823581F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82337210
	if (ctx.cr6.eq) goto loc_82337210;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823327d0
	ctx.lr = 0x82337210;
	sub_823327D0(ctx, base);
loc_82337210:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233723c
	if (ctx.cr6.eq) goto loc_8233723C;
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// lwz r10,196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233723c
	if (ctx.cr6.eq) goto loc_8233723C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// bl 0x823537f0
	ctx.lr = 0x8233723C;
	sub_823537F0(ctx, base);
loc_8233723C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82337260
	if (ctx.cr6.eq) goto loc_82337260;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f230
	ctx.lr = 0x82337258;
	sub_8235F230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337264
	if (!ctx.cr6.eq) goto loc_82337264;
loc_82337260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82337264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234D5F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d60c
	if (!ctx.cr6.eq) goto loc_8234D60C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D60C:
	// stw r4,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D800) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d810
	if (!ctx.cr6.eq) goto loc_8234D810;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D810:
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234EA18) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8234e760
	sub_8234E760(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823500A8) {
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
	ctx.lr = 0x823500B0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823500e4
	if (!ctx.cr6.eq) goto loc_823500E4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_823500E4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82350100
	if (!ctx.cr6.eq) goto loc_82350100;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_82350100:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234b480
	ctx.lr = 0x82350110;
	sub_8234B480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// bl 0x8234e340
	ctx.lr = 0x82350130;
	sub_8234E340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8235019c
	if (ctx.cr6.eq) goto loc_8235019C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350164
	if (ctx.cr6.eq) goto loc_82350164;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// b 0x82350174
	goto loc_82350174;
loc_82350164:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
loc_82350174:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234ee28
	ctx.lr = 0x8235017C;
	sub_8234EE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f680
	ctx.lr = 0x82350194;
	sub_8234F680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
loc_8235019C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234b9a8
	ctx.lr = 0x823501A4;
	sub_8234B9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,240(r30)
	REX_STORE_U32(r30.u32 + 240, ctx.r9.u32);
	// beq cr6,0x82350238
	if (ctx.cr6.eq) goto loc_82350238;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350238
	if (ctx.cr6.eq) goto loc_82350238;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r3,15880(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 15880);
	// bl 0x8233e7e0
	ctx.lr = 0x823501E0;
	sub_8233E7E0(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// lwz r6,224(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,21924
	ctx.r11.s64 = ctx.r11.s64 + 21924;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r3,15880(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 15880);
	// bl 0x8233e820
	ctx.lr = 0x82350238;
	sub_8233E820(ctx, base);
loc_82350238:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823502c4
	if (ctx.cr6.eq) goto loc_823502C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82350290
	if (ctx.cr6.eq) goto loc_82350290;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r11,20896
	ctx.r4.s64 = ctx.r11.s64 + 20896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234ccd0
	ctx.lr = 0x82350288;
	sub_8234CCD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
loc_82350290:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823502c4
	if (ctx.cr6.eq) goto loc_823502C4;
	// lwz r11,21816(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
	// lbz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823502c4
	if (ctx.cr6.eq) goto loc_823502C4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x8234cba0
	ctx.lr = 0x823502BC;
	sub_8234CBA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
loc_823502C4:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823502e8
	if (ctx.cr6.eq) goto loc_823502E8;
	// lwz r10,200(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823502e8
	if (ctx.cr6.eq) goto loc_823502E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_823502E8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82350308
	if (!ctx.cr6.eq) goto loc_82350308;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234e340
	ctx.lr = 0x82350300;
	sub_8234E340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235030c
	if (!ctx.cr6.eq) goto loc_8235030C;
loc_82350308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235030C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8235F3C0) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f3fc
	if (!ctx.cr6.eq) goto loc_8235F3FC;
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,284(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r8.u32);
	// b 0x8235f44c
	goto loc_8235F44C;
loc_8235F3FC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f430
	if (ctx.cr6.eq) goto loc_8235F430;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4348(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4348);
	// bl 0x8233e7e0
	ctx.lr = 0x8235F414;
	sub_8233E7E0(ctx, base);
	// lwz r9,400(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4348(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4348);
	// bl 0x8233e820
	ctx.lr = 0x8235F42C;
	sub_8233E820(ctx, base);
	// b 0x8235f44c
	goto loc_8235F44C;
loc_8235F430:
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f44c
	if (ctx.cr6.eq) goto loc_8235F44C;
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 400);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_8235F44C:
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

DEFINE_REX_FUNC(sub_823633F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823633F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82363458
	if (!ctx.cr6.gt) goto loc_82363458;
	// li r29,0
	r29.s64 = 0;
loc_82363420:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82363444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,164(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82363420
	if (ctx.cr6.lt) goto loc_82363420;
loc_82363458:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,352
	ctx.r11.s64 = r31.s64 + 352;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8236346C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8236346c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236346C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82369810) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82369820
	if (!ctx.cr6.eq) goto loc_82369820;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369820:
	// b 0x82369048
	sub_82369048(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236A660) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8236a6f0
	if (ctx.cr6.lt) goto loc_8236A6F0;
	// beq cr6,0x8236a6bc
	if (ctx.cr6.eq) goto loc_8236A6BC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x8236a710
	if (!ctx.cr6.lt) goto loc_8236A710;
	// lfs f0,332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236A6A8;
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
loc_8236A6BC:
	// lfs f0,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236A6DC;
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
loc_8236A6F0:
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236A710;
	sub_826A0568(ctx, base);
loc_8236A710:
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

DEFINE_REX_FUNC(sub_82370FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,1188(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// lfs f12,17184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfs f13,13960(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 13960);
	ctx.f13.f64 = double(temp.f32);
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// blt cr6,0x82371008
	if (ctx.cr6.lt) goto loc_82371008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,448(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// lfs f0,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82371008:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x82371040
	if (ctx.cr6.gt) goto loc_82371040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,11196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fdivs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// stfs f7,448(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f6,452(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// blr 
	return;
loc_82371040:
	// fsubs f11,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,448(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f6,452(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82379E98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82379ea8
	if (!ctx.cr6.eq) goto loc_82379EA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82379EA8:
	// b 0x82379168
	sub_82379168(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237A210) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8237a220
	if (!ctx.cr6.eq) goto loc_8237A220;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237A220:
	// b 0x82379fa0
	sub_82379FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237C920) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8234f290
	ctx.lr = 0x8237C940;
	sub_8234F290(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stb r10,608(r31)
	REX_STORE_U8(r31.u32 + 608, ctx.r10.u8);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,11736
	ctx.r11.s64 = ctx.r11.s64 + 11736;
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r31,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_82381B68) {
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
	// lwz r11,15520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15520);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381ba0
	if (!ctx.cr6.eq) goto loc_82381BA0;
	// li r3,33
	ctx.r3.s64 = 33;
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
loc_82381BA0:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1820
	ctx.r3.s64 = r31.s64 + 1820;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82381BB8;
	sub_823EF5F0(ctx, base);
loc_82381BB8:
	// lwz r11,15520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82381d5c
	if (ctx.cr6.eq) goto loc_82381D5C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r6,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,364
	ctx.r10.s64 = ctx.r11.s64 + 364;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x82381c10
	if (ctx.cr6.eq) goto loc_82381C10;
	// lbz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// stw r8,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r8.u32);
	// stb r9,1756(r10)
	REX_STORE_U8(ctx.r10.u32 + 1756, ctx.r9.u8);
	// b 0x82381c14
	goto loc_82381C14;
loc_82381C10:
	// lbz r9,1756(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1756);
loc_82381C14:
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82381c58
	if (ctx.cr6.eq) goto loc_82381C58;
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,254
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 254, ctx.xer);
	// blt cr6,0x82381c48
	if (ctx.cr6.lt) goto loc_82381C48;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x82381c50
	goto loc_82381C50;
loc_82381C48:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82381C50:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,1436(r10)
	REX_STORE_U8(ctx.r10.u32 + 1436, ctx.r9.u8);
loc_82381C58:
	// rlwinm r9,r7,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381c84
	if (ctx.cr6.eq) goto loc_82381C84;
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r5,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r5.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1500(r10)
	REX_STORE_U8(ctx.r10.u32 + 1500, ctx.r4.u8);
loc_82381C84:
	// rlwinm r9,r7,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381cb4
	if (ctx.cr6.eq) goto loc_82381CB4;
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r4,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r4.u32);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,1564(r10)
	REX_STORE_U8(ctx.r10.u32 + 1564, ctx.r3.u8);
loc_82381CB4:
	// rlwinm r9,r7,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381cfc
	if (ctx.cr6.eq) goto loc_82381CFC;
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r9.u32);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r5,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// lwz r9,15520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r4,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r4.u32);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r3,1628(r10)
	REX_STORE_U8(ctx.r10.u32 + 1628, ctx.r3.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r9,1692(r10)
	REX_STORE_U8(ctx.r10.u32 + 1692, ctx.r9.u8);
loc_82381CFC:
	// rlwinm r9,r7,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381d10
	if (ctx.cr6.eq) goto loc_82381D10;
	// lbz r9,1436(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1436);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82381D10:
	// rlwinm r9,r7,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381d24
	if (ctx.cr6.eq) goto loc_82381D24;
	// lbz r9,1500(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1500);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82381D24:
	// rlwinm r9,r7,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381d38
	if (ctx.cr6.eq) goto loc_82381D38;
	// lbz r9,1564(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1564);
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
loc_82381D38:
	// rlwinm r9,r7,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381d54
	if (ctx.cr6.eq) goto loc_82381D54;
	// lbz r9,1628(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1628);
	// stb r9,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lbz r8,1692(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1692);
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
loc_82381D54:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82381bb8
	if (!ctx.cr6.eq) goto loc_82381BB8;
loc_82381D5C:
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

DEFINE_REX_FUNC(sub_8239B5E0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,1012(r7)
	REX_STORE_U32(ctx.r7.u32 + 1012, ctx.r11.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,1184(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1184);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// lwz r8,1200(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// stw r9,360(r3)
	REX_STORE_U32(ctx.r3.u32 + 360, ctx.r9.u32);
	// bgt cr6,0x8239b76c
	if (ctx.cr6.gt) goto loc_8239B76C;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18896
	ctx.r12.s64 = ctx.r12.s64 + -18896;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239B694;
	case 1:
		goto loc_8239B660;
	case 2:
		goto loc_8239B668;
	case 3:
		goto loc_8239B670;
	case 4:
		goto loc_8239B678;
	case 5:
		goto loc_8239B678;
	case 6:
		goto loc_8239B694;
	case 7:
		goto loc_8239B694;
	case 8:
		goto loc_8239B694;
	case 9:
		goto loc_8239B694;
	case 10:
		goto loc_8239B694;
	case 11:
		goto loc_8239B694;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239B660:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8239b67c
	goto loc_8239B67C;
loc_8239B668:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8239b67c
	goto loc_8239B67C;
loc_8239B670:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8239b67c
	goto loc_8239B67C;
loc_8239B678:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8239B67C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r6,r9,61,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// b 0x8239b720
	goto loc_8239B720;
loc_8239B694:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18772
	ctx.r12.s64 = ctx.r12.s64 + -18772;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239B71C;
	case 1:
		goto loc_8239B76C;
	case 2:
		goto loc_8239B76C;
	case 3:
		goto loc_8239B76C;
	case 4:
		goto loc_8239B76C;
	case 5:
		goto loc_8239B76C;
	case 6:
		goto loc_8239B6DC;
	case 7:
		goto loc_8239B6F0;
	case 8:
		goto loc_8239B708;
	case 9:
		goto loc_8239B724;
	case 10:
		goto loc_8239B724;
	case 11:
		goto loc_8239B724;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239B6DC:
	// addi r11,r9,13
	ctx.r11.s64 = ctx.r9.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8239b720
	goto loc_8239B720;
loc_8239B6F0:
	// addi r11,r9,63
	ctx.r11.s64 = ctx.r9.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8239b720
	goto loc_8239B720;
loc_8239B708:
	// addi r11,r9,27
	ctx.r11.s64 = ctx.r9.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8239b720
	goto loc_8239B720;
loc_8239B71C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239B720:
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_8239B724:
	// lwz r11,1012(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,20508
	ctx.r5.s64 = ctx.r10.s64 + 20508;
	// li r6,201
	ctx.r6.s64 = 201;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239B744;
	sub_82330E40(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r3,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r3.u32);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
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
loc_8239B76C:
	// li r3,25
	ctx.r3.s64 = 25;
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

DEFINE_REX_FUNC(sub_823A31A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a31b0
	if (!ctx.cr6.eq) goto loc_823A31B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A31B0:
	// b 0x823a29f0
	sub_823A29F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A3288) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a3298
	if (!ctx.cr6.eq) goto loc_823A3298;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A3298:
	// b 0x823a2c50
	sub_823A2C50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A3F2C) {
	REX_FUNC_PROLOGUE();
	PPCRegister r17{};
	PPCRegister r26{};
	// lwz r17,16284(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16284);
	// lwz r17,16308(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16308);
	// lwz r17,16308(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16308);
	// lwz r17,16308(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16308);
	// lwz r17,16308(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16308);
	// lwz r17,16308(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16308);
	// lwz r17,16220(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16220);
	// lwz r17,16236(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16236);
	// lwz r17,16256(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16256);
	// lwz r17,16272(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16272);
	// lwz r17,16272(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16272);
	// lwz r17,16272(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16272);
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3FA4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A9480) {
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
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,29616
	ctx.r6.s64 = 29616;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823A94A4;
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

DEFINE_REX_FUNC(sub_823AA0E0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823d1830
	ctx.lr = 0x823AA0FC;
	sub_823D1830(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823aa190
	if (!ctx.cr6.eq) goto loc_823AA190;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// li r30,0
	r30.s64 = 0;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x823AA138;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,21920
	ctx.r4.s64 = ctx.r9.s64 + 21920;
	// bl 0x82331480
	ctx.lr = 0x823AA148;
	sub_82331480(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// ori r6,r8,256
	ctx.r6.u64 = ctx.r8.u64 | 256;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r7,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r7.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r5,r31,388
	ctx.r5.s64 = r31.s64 + 388;
	// stw r4,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82336400
	ctx.lr = 0x823AA17C;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aa194
	if (!ctx.cr6.eq) goto loc_823AA194;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_823AA190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA194:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

DEFINE_REX_FUNC(sub_823AEC90) {
	REX_FUNC_PROLOGUE();
	// b 0x823adff8
	sub_823ADFF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AEC98) {
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
	ctx.lr = 0x823AECA0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823aece0
	if (ctx.cr6.lt) goto loc_823AECE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cdc
	return;
loc_823AECE0:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// beq cr6,0x823af184
	if (ctx.cr6.eq) goto loc_823AF184;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// lwz r22,0(r6)
	r22.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r26,272(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aed28
	if (ctx.cr6.eq) goto loc_823AED28;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x823AED28;
	sub_8233E2B0(ctx, base);
loc_823AED28:
	// ld r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 320);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne cr6,0x823aed48
	if (!ctx.cr6.eq) goto loc_823AED48;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cdc
	return;
loc_823AED48:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// mr r21,r25
	r21.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823aeef0
	if (ctx.cr6.eq) goto loc_823AEEF0;
	// addi r28,r23,-1
	r28.s64 = r23.s64 + -1;
loc_823AED5C:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,364(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mullw r8,r29,r9
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82348c30
	ctx.lr = 0x823AED8C;
	sub_82348C30(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823aedc0
	if (ctx.cr6.eq) goto loc_823AEDC0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e2b0
	ctx.lr = 0x823AEDA8;
	sub_8233E2B0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r8.u16);
loc_823AEDC0:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354248
	ctx.lr = 0x823AEDE0;
	sub_82354248(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823aee14
	if (ctx.cr6.eq) goto loc_823AEE14;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823AEE0C;
	sub_823EF5F0(ctx, base);
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// stw r8,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r8.u32);
loc_823AEE14:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aee30
	if (ctx.cr6.eq) goto loc_823AEE30;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x823AEE30;
	sub_8233E2B0(ctx, base);
loc_823AEE30:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x823AEE50;
	sub_823EF2F8(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823aee70
	if (ctx.cr6.lt) goto loc_823AEE70;
	// stw r25,364(r31)
	REX_STORE_U32(r31.u32 + 364, r25.u32);
loc_823AEE70:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823aeed8
	if (!ctx.cr6.eq) goto loc_823AEED8;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823aeed8
	if (ctx.cr6.eq) goto loc_823AEED8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_823AEE98:
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r7,348(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f0,r5,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r3,352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 352);
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823aee98
	if (ctx.cr6.lt) goto loc_823AEE98;
loc_823AEED8:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823aed5c
	if (!ctx.cr6.eq) goto loc_823AED5C;
loc_823AEEF0:
	// ld r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpdi cr6,r8,256
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 256, ctx.xer);
	// ble cr6,0x823aef88
	if (!ctx.cr6.gt) goto loc_823AEF88;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// lwz r7,356(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 356);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r5,336(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 336);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r6,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ld r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// subf r7,r5,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r5.u64;
	// divdu r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 ? ctx.r7.u64 / ctx.r8.u64 : 0;
	// divdu r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 ? ctx.r7.u64 / ctx.r8.u64 : 0;
	// mulld r5,r6,r8
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r8.u64);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x823aef74
	if (ctx.cr6.eq) goto loc_823AEF74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
loc_823AEF74:
	// clrldi r10,r22,32
	ctx.r10.u64 = r22.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x823aef88
	if (ctx.cr6.gt) goto loc_823AEF88;
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r21,1
	r21.s64 = 1;
loc_823AEF88:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823aeff0
	if (!ctx.cr6.eq) goto loc_823AEFF0;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aeff0
	if (!ctx.cr6.eq) goto loc_823AEFF0;
	// lwz r8,352(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mullw r6,r8,r27
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r8,r29
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823AEFD4;
	sub_823EF2F8(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// clrldi r3,r29,32
	ctx.r3.u64 = r29.u64 & 0xFFFFFFFF;
	// ld r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 336);
	// mulld r11,r3,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r11.u64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,336(r31)
	REX_STORE_U64(r31.u32 + 336, ctx.r10.u64);
	// b 0x823af0d0
	goto loc_823AF0D0;
loc_823AEFF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,21948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21948);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823af0a4
	if (ctx.cr6.gt) goto loc_823AF0A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823af0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823AF0A4;
	// bdzf 4*cr6+eq,0x823af044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823AF044;
	// bne cr6,0x823af074
	if (!ctx.cr6.eq) goto loc_823AF074;
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823b9c58
	ctx.lr = 0x823AF040;
	sub_823B9C58(ctx, base);
	// b 0x823af0d0
	goto loc_823AF0D0;
loc_823AF044:
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823b73e0
	ctx.lr = 0x823AF070;
	sub_823B73E0(ctx, base);
	// b 0x823af0d0
	goto loc_823AF0D0;
loc_823AF074:
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823b55c0
	ctx.lr = 0x823AF0A0;
	sub_823B55C0(ctx, base);
	// b 0x823af0d0
	goto loc_823AF0D0;
loc_823AF0A4:
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823b2940
	ctx.lr = 0x823AF0D0;
	sub_823B2940(ctx, base);
loc_823AF0D0:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823af0f0
	if (ctx.cr6.lt) goto loc_823AF0F0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_823AF0F0:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// subf r22,r29,r22
	r22.u64 = r22.u64 - r29.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// beq cr6,0x823af12c
	if (ctx.cr6.eq) goto loc_823AF12C;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// bne cr6,0x823af120
	if (!ctx.cr6.eq) goto loc_823AF120;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
loc_823AF120:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bgt cr6,0x823aed48
	if (ctx.cr6.gt) goto loc_823AED48;
	// b 0x823af134
	goto loc_823AF134;
loc_823AF12C:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// stw r23,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r23.u32);
loc_823AF134:
	// stw r26,0(r18)
	REX_STORE_U32(r18.u32 + 0, r26.u32);
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823af1a0
	if (ctx.cr6.eq) goto loc_823AF1A0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e2b0
	ctx.lr = 0x823AF15C;
	sub_8233E2B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lhz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 88);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// sth r25,88(r31)
	REX_STORE_U16(r31.u32 + 88, r25.u16);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,86(r31)
	REX_STORE_U16(r31.u32 + 86, ctx.r8.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cdc
	return;
loc_823AF184:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// stw r10,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r10.u32);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
loc_823AF1A0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_823D6E30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_823D6E4C:
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d6e4c
	if (ctx.cr6.lt) goto loc_823D6E4C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D8DD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// ble cr6,0x823d8ebc
	if (!ctx.cr6.gt) goto loc_823D8EBC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823d8e7c
	if (ctx.cr6.lt) goto loc_823D8E7C;
	// addi r11,r5,-5
	ctx.r11.s64 = ctx.r5.s64 + -5;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D8E28:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f3,f6,f6,f12
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f12.f64)));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f2,f5,f5,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f10.f64)));
	// stfs f2,8(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmadds f1,f4,f4,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f8.f64)));
	// stfs f1,12(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f0,f0,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823d8e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8E28;
loc_823D8E7C:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823d8ebc
	if (!ctx.cr6.lt) goto loc_823D8EBC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r10,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D8EA4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823d8ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8EA4;
loc_823D8EBC:
	// b 0x823d8bd8
	sub_823D8BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DEC90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823DEC98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823decc0
	if (!ctx.cr6.gt) goto loc_823DECC0;
loc_823DECB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DECC0:
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823decd0
	if (!ctx.cr6.eq) goto loc_823DECD0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823DECD0:
	// bl 0x8269d6a8
	ctx.lr = 0x823DECD4;
	sub_8269D6A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823decb4
	if (ctx.cr6.eq) goto loc_823DECB4;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823decf0
	if (ctx.cr6.eq) goto loc_823DECF0;
	// bl 0x8269d770
	ctx.lr = 0x823DECF0;
	sub_8269D770(ctx, base);
loc_823DECF0:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E1EF8) {
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
	ctx.lr = 0x823E1F00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e212c
	if (ctx.cr6.eq) goto loc_823E212C;
	// lwz r24,0(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823e1f28
	if (ctx.cr6.eq) goto loc_823E1F28;
	// lwz r28,28(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 28);
	// b 0x823e1f2c
	goto loc_823E1F2C;
loc_823E1F28:
	// li r28,0
	r28.s64 = 0;
loc_823E1F2C:
	// lwz r25,96(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 96);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823e2090
	if (ctx.cr6.eq) goto loc_823E2090;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1f6c
	if (ctx.cr6.eq) goto loc_823E1F6C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ea0e0
	ctx.lr = 0x823E1F50;
	sub_823EA0E0(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82393bf0
	ctx.lr = 0x823E1F60;
	sub_82393BF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8);
	// bl 0x82393bf0
	ctx.lr = 0x823E1F6C;
	sub_82393BF0(ctx, base);
loc_823E1F6C:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1fa0
	if (ctx.cr6.eq) goto loc_823E1FA0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ea0e0
	ctx.lr = 0x823E1F84;
	sub_823EA0E0(ctx, base);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82393bf0
	ctx.lr = 0x823E1F94;
	sub_82393BF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// bl 0x82393bf0
	ctx.lr = 0x823E1FA0;
	sub_82393BF0(ctx, base);
loc_823E1FA0:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2018
	if (ctx.cr6.eq) goto loc_823E2018;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823e200c
	if (ctx.cr6.eq) goto loc_823E200C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e200c
	if (!ctx.cr6.gt) goto loc_823E200C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,792
	r29.s64 = r28.s64 + 792;
	// addi r27,r11,-2284
	r27.s64 = ctx.r11.s64 + -2284;
loc_823E1FD4:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823E1FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823e1fd4
	if (ctx.cr6.lt) goto loc_823E1FD4;
loc_823E200C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,20(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 20);
	// bl 0x82393bf0
	ctx.lr = 0x823E2018;
	sub_82393BF0(ctx, base);
loc_823E2018:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2090
	if (ctx.cr6.eq) goto loc_823E2090;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823e2084
	if (ctx.cr6.eq) goto loc_823E2084;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e2084
	if (!ctx.cr6.gt) goto loc_823E2084;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,1304
	r29.s64 = r28.s64 + 1304;
	// addi r27,r11,-2276
	r27.s64 = ctx.r11.s64 + -2276;
loc_823E204C:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823E2070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,20(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823e204c
	if (ctx.cr6.lt) goto loc_823E204C;
loc_823E2084:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,24(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 24);
	// bl 0x82393bf0
	ctx.lr = 0x823E2090;
	sub_82393BF0(ctx, base);
loc_823E2090:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2108
	if (ctx.cr6.eq) goto loc_823E2108;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823e20e8
	if (ctx.cr6.eq) goto loc_823E20E8;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e20e8
	if (!ctx.cr6.gt) goto loc_823E20E8;
	// li r31,0
	r31.s64 = 0;
loc_823E20B8:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e20d4
	if (ctx.cr6.eq) goto loc_823E20D4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82393bf0
	ctx.lr = 0x823E20D4;
	sub_82393BF0(ctx, base);
loc_823E20D4:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e20b8
	if (ctx.cr6.lt) goto loc_823E20B8;
loc_823E20E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x82393bf0
	ctx.lr = 0x823E20F4;
	sub_82393BF0(ctx, base);
	// lwz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e2108
	if (ctx.cr6.eq) goto loc_823E2108;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E2108;
	sub_82393BF0(ctx, base);
loc_823E2108:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823e211c
	if (ctx.cr6.eq) goto loc_823E211C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E211C;
	sub_82393BF0(ctx, base);
loc_823E211C:
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E212C;
	sub_823EF5F0(ctx, base);
loc_823E212C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823EC168) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x823EC170;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// addi r23,r4,4
	r23.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r25,1036(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 1036);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r18,2844(r9)
	r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 2844);
	// bl 0x823e2da8
	ctx.lr = 0x823EC1A4;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823ec2e8
	if (!ctx.cr6.eq) goto loc_823EC2E8;
	// lwz r11,1024(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 1024);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e1918
	ctx.lr = 0x823EC1C0;
	sub_823E1918(ctx, base);
	// lwz r10,1032(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 1032);
	// li r16,0
	r16.s64 = 0;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// beq 0x823ec1e8
	if (ctx.cr0.eq) goto loc_823EC1E8;
loc_823EC1D8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec1d8
	if (!ctx.cr6.eq) goto loc_823EC1D8;
loc_823EC1E8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EC1F0;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// lwz r11,1032(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 1032);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// beq 0x823ec214
	if (ctx.cr0.eq) goto loc_823EC214;
loc_823EC204:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec204
	if (!ctx.cr6.eq) goto loc_823EC204;
loc_823EC214:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EC21C;
	sub_823E2DA8(ctx, base);
	// stw r3,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r3.u32);
	// mr r19,r16
	r19.u64 = r16.u64;
	// li r21,2
	r21.s64 = 2;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ec320
	if (!ctx.cr6.gt) goto loc_823EC320;
	// addi r20,r25,4
	r20.s64 = r25.s64 + 4;
	// li r17,1
	r17.s64 = 1;
loc_823EC23C:
	// lwz r31,0(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r30,r16
	r30.u64 = r16.u64;
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r9,r25
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// lwzx r24,r8,r25
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	// slw r29,r17,r28
	r29.u64 = r28.u8 & 0x20 ? 0 : (r17.u32 << (r28.u8 & 0x3F));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823ec290
	if (ctx.cr6.eq) goto loc_823EC290;
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// mulli r11,r9,44
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x823e4360
	ctx.lr = 0x823EC284;
	sub_823E4360(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823ec2e8
	if (ctx.cr6.eq) goto loc_823EC2E8;
loc_823EC290:
	// mr r26,r16
	r26.u64 = r16.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823ec308
	if (!ctx.cr6.gt) goto loc_823EC308;
	// addi r10,r31,10
	ctx.r10.s64 = r31.s64 + 10;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// rlwinm r27,r10,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r22
	r31.u64 = ctx.r11.u64 + r22.u64;
loc_823EC2B0:
	// and r11,r29,r30
	ctx.r11.u64 = r29.u64 & r30.u64;
	// sraw r30,r30,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r30.s32 < 0) & (((r30.s32 >> temp.u32) << temp.u32) != r30.s32);
	r30.s64 = r30.s32 >> temp.u32;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ec2f4
	if (ctx.cr6.lt) goto loc_823EC2F4;
	// mulli r11,r11,44
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x823e4360
	ctx.lr = 0x823EC2DC;
	sub_823E4360(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823ec2f8
	if (!ctx.cr6.eq) goto loc_823EC2F8;
loc_823EC2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_823EC2F4:
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
loc_823EC2F8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// blt cr6,0x823ec2b0
	if (ctx.cr6.lt) goto loc_823EC2B0;
loc_823EC308:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// add r21,r24,r21
	r21.u64 = r24.u64 + r21.u64;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ec23c
	if (ctx.cr6.lt) goto loc_823EC23C;
loc_823EC320:
	// lwz r11,1024(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 1024);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823ec47c
	if (!ctx.cr6.gt) goto loc_823EC47C;
	// addi r6,r22,8
	ctx.r6.s64 = r22.s64 + 8;
	// addi r8,r15,520
	ctx.r8.s64 = r15.s64 + 520;
	// addi r5,r25,844
	ctx.r5.s64 = r25.s64 + 844;
loc_823EC33C:
	// lwz r11,252(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 252);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,209
	ctx.r11.s64 = ctx.r11.s64 + 209;
	// addi r10,r10,209
	ctx.r10.s64 = ctx.r10.s64 + 209;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r22
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r22.u32);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r9,r3,17
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFF;
	// lwzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// subf. r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r31,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = ctx.r9.s32 >> 31;
	// subf r3,r3,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r3.u64;
	// xor r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 ^ r31.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - r31.u64;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r9,r7,r3
	ctx.r9.u64 = uint32_t((ctx.r3.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r7.s32 / ctx.r3.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt 0x823ec3b8
	if (ctx.cr0.lt) goto loc_823EC3B8;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823EC3B8:
	// lwz r11,1032(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 1032);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// blt cr6,0x823ec3d0
	if (ctx.cr6.lt) goto loc_823EC3D0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_823EC3D0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ec458
	if (ctx.cr6.eq) goto loc_823EC458;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823ec404
	if (ctx.cr6.lt) goto loc_823EC404;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823ec3f8
	if (!ctx.cr6.gt) goto loc_823EC3F8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x823ec424
	goto loc_823EC424;
loc_823EC3F8:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823ec424
	goto loc_823EC424;
loc_823EC404:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ec420
	if (ctx.cr6.eq) goto loc_823EC420;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// neg r11,r9
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// b 0x823ec424
	goto loc_823EC424;
loc_823EC420:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
loc_823EC424:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,252(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 252);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// stwx r9,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r22
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// stwx r10,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, ctx.r10.u32);
	// b 0x823ec460
	goto loc_823EC460;
loc_823EC458:
	// ori r11,r10,32768
	ctx.r11.u64 = ctx.r10.u64 | 32768;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823EC460:
	// lwz r11,1024(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 1024);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ec33c
	if (ctx.cr6.lt) goto loc_823EC33C;
loc_823EC47C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_823FFBD0) {
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
	ctx.lr = 0x823FFBD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x823ff708
	ctx.lr = 0x823FFC00;
	sub_823FF708(ctx, base);
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2924
	ctx.r11.u64 = ctx.r11.u64 | 2924;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823ffc3c
	if (!ctx.cr6.eq) goto loc_823FFC3C;
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ffc3c
	if (!ctx.cr0.eq) goto loc_823FFC3C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ori r6,r31,4
	ctx.r6.u64 = r31.u64 | 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ff708
	ctx.lr = 0x823FFC3C;
	sub_823FF708(ctx, base);
loc_823FFC3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82400908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82400928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82403A98) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
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
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
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
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
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
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
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
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
loc_82403BC0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82403bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82403BC0;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82403970
	ctx.lr = 0x82403BF8;
	sub_82403970(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
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
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
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
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
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
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
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
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
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
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82411CD8) {
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
	ctx.lr = 0x82411CE0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x82411d50
	if (!ctx.cr6.lt) goto loc_82411D50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82411D28:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fbcc0
	ctx.lr = 0x82411D38;
	sub_823FBCC0(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x82411d28
	if (ctx.cr6.lt) goto loc_82411D28;
loc_82411D50:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411d70
	if (ctx.cr6.eq) goto loc_82411D70;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411D70;
	sub_825C73B8(ctx, base);
loc_82411D70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411d90
	if (ctx.cr6.eq) goto loc_82411D90;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82411D90;
	sub_82409820(ctx, base);
loc_82411D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82415480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,1586
	ctx.r10.s64 = 103940096;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r10,r10,55311
	ctx.r10.u64 = ctx.r10.u64 | 55311;
	// beq cr6,0x824154c4
	if (ctx.cr6.eq) goto loc_824154C4;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824154c4
	if (ctx.cr0.eq) goto loc_824154C4;
loc_8241549C:
	// mulli r10,r10,19
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(19));
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241549c
	if (!ctx.cr0.eq) goto loc_8241549C;
	// li r11,127
	ctx.r11.s64 = 127;
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,127
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(127));
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
loc_824154C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82416E70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82416E8C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x82416eb4
	if (ctx.cr0.eq) goto loc_82416EB4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x82416eb8
	goto loc_82416EB8;
loc_82416EB4:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82416EB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82416ecc
	if (!ctx.cr6.eq) goto loc_82416ECC;
loc_82416EC0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82416f20
	goto loc_82416F20;
loc_82416ECC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82444750
	ctx.lr = 0x82416EE0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82416ef4
	if (ctx.cr0.eq) goto loc_82416EF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82444d78
	ctx.lr = 0x82416EF0;
	sub_82444D78(ctx, base);
	// b 0x82416ef8
	goto loc_82416EF8;
loc_82416EF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82416EF8:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82416f14
	if (!ctx.cr6.eq) goto loc_82416F14;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82415a50
	ctx.lr = 0x82416F10;
	sub_82415A50(ctx, base);
	// b 0x82416ec0
	goto loc_82416EC0;
loc_82416F14:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82416F20;
	sub_82416CF0(ctx, base);
loc_82416F20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8241B4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241B4F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241b550
	if (!ctx.cr6.lt) goto loc_8241B550;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x8241b550
	if (!ctx.cr6.eq) goto loc_8241B550;
	// addi r31,r4,1
	r31.s64 = ctx.r4.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8241af70
	ctx.lr = 0x8241B520;
	sub_8241AF70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241b550
	if (ctx.cr0.eq) goto loc_8241B550;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241b550
	if (!ctx.cr6.lt) goto loc_8241B550;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// bne cr6,0x8241b550
	if (!ctx.cr6.eq) goto loc_8241B550;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8241b554
	goto loc_8241B554;
loc_8241B550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8241F640) {
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
	// lwz r3,3032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f528
	ctx.lr = 0x8241F67C;
	sub_8241F528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82423660) {
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
	ctx.lr = 0x82423668;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r28,64(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82423768
	goto loc_82423768;
loc_8242367C:
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82423688:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x826a4a90
	ctx.lr = 0x82423694;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824236f8
	if (!ctx.cr0.eq) goto loc_824236F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x824236AC;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824236ec
	if (ctx.cr0.lt) goto loc_824236EC;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824236d4
	if (!ctx.cr6.eq) goto loc_824236D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824236ec
	if (!ctx.cr6.eq) goto loc_824236EC;
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x824236ec
	goto loc_824236EC;
loc_824236D4:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824236ec
	if (!ctx.cr6.eq) goto loc_824236EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824236ec
	if (!ctx.cr6.eq) goto loc_824236EC;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_824236EC:
	// lwz r28,40(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82423688
	if (!ctx.cr6.eq) goto loc_82423688;
loc_824236F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242370c
	if (!ctx.cr6.eq) goto loc_8242370C;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82423768
	if (ctx.cr6.eq) goto loc_82423768;
loc_8242370C:
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r5,2897
	ctx.r5.s64 = 2897;
	// bl 0x824786b8
	ctx.lr = 0x82423724;
	sub_824786B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8242377c
	if (ctx.cr6.eq) goto loc_8242377C;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82423738:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82478758
	ctx.lr = 0x82423750;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8242377c
	if (ctx.cr6.eq) goto loc_8242377C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82423738
	if (ctx.cr6.lt) goto loc_82423738;
loc_82423768:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8242367c
	if (!ctx.cr6.eq) goto loc_8242367C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82423774:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8242377C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82423774
	goto loc_82423774;
}

DEFINE_REX_FUNC(sub_82437E70) {
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
	// beq 0x82437eb0
	if (ctx.cr0.eq) goto loc_82437EB0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82437E90:
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
	// bdnz 0x82437e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82437E90;
loc_82437EB0:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x822c8e98
	ctx.lr = 0x82437EE0;
	sub_822C8E98(ctx, base);
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

DEFINE_REX_FUNC(sub_8243C030) {
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
	ctx.lr = 0x8243C038;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x8243c054
	goto loc_8243C054;
loc_8243C050:
	// lbzu r11,1(r28)
	ea = 1 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
loc_8243C054:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0860
	ctx.lr = 0x8243C05C;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8243c050
	if (!ctx.cr0.eq) goto loc_8243C050;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0880
	ctx.lr = 0x8243C070;
	sub_826A0880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8243c09c
	if (!ctx.cr0.eq) goto loc_8243C09C;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8243c09c
	if (ctx.cr6.eq) goto loc_8243C09C;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x8243c09c
	if (ctx.cr6.eq) goto loc_8243C09C;
loc_8243C090:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x8243c290
	goto loc_8243C290;
loc_8243C09C:
	// li r30,1
	r30.s64 = 1;
loc_8243C0A0:
	// lbzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r28.u32);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0880
	ctx.lr = 0x8243C0B0;
	sub_826A0880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8243c0c4
	if (!ctx.cr0.eq) goto loc_8243C0C4;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x8243c0cc
	if (!ctx.cr6.eq) goto loc_8243C0CC;
loc_8243C0C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8243c0a0
	goto loc_8243C0A0;
loc_8243C0CC:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243c164
	if (ctx.cr6.eq) goto loc_8243C164;
loc_8243C0F0:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x8243c144
	if (ctx.cr6.eq) goto loc_8243C144;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// subf r4,r28,r5
	ctx.r4.u64 = ctx.r5.u64 - r28.u64;
loc_8243C118:
	// lbzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8243c284
	if (ctx.cr6.lt) goto loc_8243C284;
	// bgt cr6,0x8243c158
	if (ctx.cr6.gt) goto loc_8243C158;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x8243c118
	if (ctx.cr6.lt) goto loc_8243C118;
loc_8243C144:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x8243c164
	if (!ctx.cr6.eq) goto loc_8243C164;
	// lbzx r11,r9,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243c164
	if (ctx.cr0.eq) goto loc_8243C164;
loc_8243C158:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8243C15C:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8243c0f0
	if (ctx.cr6.lt) goto loc_8243C0F0;
loc_8243C164:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c090
	if (ctx.cr6.eq) goto loc_8243C090;
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r28,r10,r3
	r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq cr6,0x8243c1d4
	if (ctx.cr6.eq) goto loc_8243C1D4;
	// addi r8,r11,-20
	ctx.r8.s64 = ctx.r11.s64 + -20;
loc_8243C188:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243c1c8
	if (ctx.cr6.eq) goto loc_8243C1C8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8243C19C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8243c1c0
	if (ctx.cr0.eq) goto loc_8243C1C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8243c19c
	if (ctx.cr6.eq) goto loc_8243C19C;
loc_8243C1C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243c1d4
	if (!ctx.cr0.eq) goto loc_8243C1D4;
loc_8243C1C8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r8,r8,-20
	ctx.r8.s64 = ctx.r8.s64 + -20;
	// bne 0x8243c188
	if (!ctx.cr0.eq) goto loc_8243C188;
loc_8243C1D4:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8243bcb0
	ctx.lr = 0x8243C1EC;
	sub_8243BCB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243c090
	if (ctx.cr0.eq) goto loc_8243C090;
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_8243C1FC:
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r25,r3,36
	r25.s64 = ctx.r3.s64 + 36;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8243c28c
	if (!ctx.cr6.lt) goto loc_8243C28C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243c264
	if (ctx.cr6.eq) goto loc_8243C264;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8243C238:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8243c25c
	if (ctx.cr0.eq) goto loc_8243C25C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8243c238
	if (ctx.cr6.eq) goto loc_8243C238;
loc_8243C25C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243c28c
	if (!ctx.cr0.eq) goto loc_8243C28C;
loc_8243C264:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8243bcb0
	ctx.lr = 0x8243C278;
	sub_8243BCB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243c1fc
	if (!ctx.cr0.eq) goto loc_8243C1FC;
	// b 0x8243c090
	goto loc_8243C090;
loc_8243C284:
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// b 0x8243c15c
	goto loc_8243C15C;
loc_8243C28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243C290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82447A08) {
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
	// beq cr6,0x82447abc
	if (ctx.cr6.eq) goto loc_82447ABC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82447abc
	if (!ctx.cr6.eq) goto loc_82447ABC;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82447abc
	if (!ctx.cr6.eq) goto loc_82447ABC;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82447A48:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82447a68
	if (!ctx.cr0.eq) goto loc_82447A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82447a48
	if (!ctx.cr6.eq) goto loc_82447A48;
loc_82447A68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82447a78
	if (!ctx.cr0.eq) goto loc_82447A78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82447ac0
	goto loc_82447AC0;
loc_82447A78:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82447abc
	if (!ctx.cr6.eq) goto loc_82447ABC;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82447aa4
	if (ctx.cr6.eq) goto loc_82447AA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447AA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447ab0
	goto loc_82447AB0;
loc_82447AA4:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82447AB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82447ac0
	if (!ctx.cr6.eq) goto loc_82447AC0;
loc_82447ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82447AC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244B648) {
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
	// lwz r3,316(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b678
	if (ctx.cr6.eq) goto loc_8244B678;
	// bl 0x824d7fa8
	ctx.lr = 0x8244B674;
	sub_824D7FA8(ctx, base);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
loc_8244B678:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b68c
	if (ctx.cr6.eq) goto loc_8244B68C;
	// bl 0x822cd730
	ctx.lr = 0x8244B688;
	sub_822CD730(ctx, base);
	// stw r30,312(r31)
	REX_STORE_U32(r31.u32 + 312, r30.u32);
loc_8244B68C:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b6ac
	if (ctx.cr6.eq) goto loc_8244B6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B6A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
loc_8244B6AC:
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

DEFINE_REX_FUNC(sub_82453C28) {
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
	ctx.lr = 0x82453C30;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,-24988
	ctx.r9.s64 = ctx.r11.s64 + -24988;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82453C60:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82453c84
	if (ctx.cr0.eq) goto loc_82453C84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82453c60
	if (ctx.cr6.eq) goto loc_82453C60;
loc_82453C84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-24996
	ctx.r11.s64 = ctx.r11.s64 + -24996;
loc_82453C8C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82453cb0
	if (ctx.cr0.eq) goto loc_82453CB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82453c8c
	if (ctx.cr6.eq) goto loc_82453C8C;
loc_82453CB0:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82453ccc
	if (!ctx.cr6.eq) goto loc_82453CCC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82453cf4
	if (ctx.cr6.eq) goto loc_82453CF4;
loc_82453CCC:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82453cf4
	if (!ctx.cr0.eq) goto loc_82453CF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,12696
	ctx.r6.s64 = ctx.r11.s64 + 12696;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x82453CE8;
	sub_8241A4F0(ctx, base);
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2905
	r31.u64 = r31.u64 | 2905;
	// b 0x82453da8
	goto loc_82453DA8;
loc_82453CF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82453d00
	if (ctx.cr0.eq) goto loc_82453D00;
	// li r29,1
	r29.s64 = 1;
loc_82453D00:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x823f02b8
	ctx.lr = 0x82453D0C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82453d44
	if (ctx.cr0.eq) goto loc_82453D44;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r31.u32);
	// stw r31,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, r31.u32);
	// stw r31,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, r31.u32);
	// stw r31,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r31.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// b 0x82453d48
	goto loc_82453D48;
loc_82453D44:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82453D48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82453d5c
	if (!ctx.cr6.eq) goto loc_82453D5C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82453da8
	goto loc_82453DA8;
loc_82453D5C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82453a28
	ctx.lr = 0x82453D78;
	sub_82453A28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82453d94
	if (ctx.cr0.lt) goto loc_82453D94;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824522e0
	ctx.lr = 0x82453D90;
	sub_824522E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82453D94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244b648
	ctx.lr = 0x82453D9C;
	sub_8244B648(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82453DA8;
	sub_823F0350(ctx, base);
loc_82453DA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8245CE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8245CE80;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,540(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CEB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8245cee4
	if (ctx.cr6.eq) goto loc_8245CEE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
loc_8245CEE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,14180
	r30.s64 = ctx.r11.s64 + 14180;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,564(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CF04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8245CF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245b958
	ctx.lr = 0x8245CF64;
	sub_8245B958(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8245CF7C;
	sub_82404168(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,13164
	ctx.r4.s64 = ctx.r11.s64 + 13164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,488(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CF9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245CFAC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,18404
	ctx.r4.s64 = ctx.r11.s64 + 18404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245CFC8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8245d0dc
	if (ctx.cr6.eq) goto loc_8245D0DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,18388
	ctx.r4.s64 = ctx.r11.s64 + 18388;
	// bl 0x824555b8
	ctx.lr = 0x8245CFEC;
	sub_824555B8(ctx, base);
loc_8245CFEC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,18364
	ctx.r4.s64 = ctx.r11.s64 + 18364;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D008;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18344
	ctx.r4.s64 = ctx.r11.s64 + 18344;
	// bl 0x824555b8
	ctx.lr = 0x8245D03C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8245d0ec
	if (ctx.cr6.eq) goto loc_8245D0EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,18324
	ctx.r4.s64 = ctx.r11.s64 + 18324;
	// bl 0x824555b8
	ctx.lr = 0x8245D060;
	sub_824555B8(ctx, base);
loc_8245D060:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245D070;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14296
	ctx.r4.s64 = ctx.r11.s64 + 14296;
	// bl 0x824555b8
	ctx.lr = 0x8245D088;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245d100
	if (ctx.cr0.lt) goto loc_8245D100;
	// lwz r11,1808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,1812(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
	// lwz r10,1544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// lwz r11,1808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r11.u32);
	// stw r10,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r10.u32);
	// beq cr6,0x8245d0fc
	if (ctx.cr6.eq) goto loc_8245D0FC;
	// bl 0x82474360
	ctx.lr = 0x8245D0D8;
	sub_82474360(ctx, base);
	// b 0x8245d100
	goto loc_8245D100;
loc_8245D0DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,23492
	ctx.r4.s64 = ctx.r11.s64 + 23492;
	// bl 0x824555b8
	ctx.lr = 0x8245D0E8;
	sub_824555B8(ctx, base);
	// b 0x8245cfec
	goto loc_8245CFEC;
loc_8245D0EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14300
	ctx.r4.s64 = ctx.r11.s64 + 14300;
	// bl 0x824555b8
	ctx.lr = 0x8245D0F8;
	sub_824555B8(ctx, base);
	// b 0x8245d060
	goto loc_8245D060;
loc_8245D0FC:
	// bl 0x82474290
	ctx.lr = 0x8245D100;
	sub_82474290(ctx, base);
loc_8245D100:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8246E618) {
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
	ctx.lr = 0x8246E620;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,260(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r25,0
	r25.s64 = 0;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// stw r25,352(r3)
	REX_STORE_U32(ctx.r3.u32 + 352, r25.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246e834
	if (!ctx.cr6.eq) goto loc_8246E834;
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// beq 0x8246e694
	if (ctx.cr0.eq) goto loc_8246E694;
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246E668:
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r7,r27
	r27.u64 = ctx.r7.u64 & r27.u64;
	// bdnz 0x8246e668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246E668;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8246e6c4
	if (ctx.cr6.eq) goto loc_8246E6C4;
loc_8246E694:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r4,r11,8256
	ctx.r4.u64 = ctx.r11.u64 | 541065216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82467900
	ctx.lr = 0x8246E6AC;
	sub_82467900(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x8246e834
	if (ctx.cr0.eq) goto loc_8246E834;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8246e6d0
	goto loc_8246E6D0;
loc_8246E6C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,3824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
loc_8246E6D0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r31,r10,12
	r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8246e71c
	if (ctx.cr0.eq) goto loc_8246E71C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8246e744
	goto loc_8246E744;
loc_8246E71C:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246e834
	if (ctx.cr0.eq) goto loc_8246E834;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_8246E744:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246e778
	if (ctx.cr6.eq) goto loc_8246E778;
loc_8246E750:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfd f13,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8246e834
	if (!ctx.cr6.eq) goto loc_8246E834;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// blt cr6,0x8246e750
	if (ctx.cr6.lt) goto loc_8246E750;
loc_8246E778:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8246e800
	if (!ctx.cr6.eq) goto loc_8246E800;
	// lwz r5,260(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 260);
	// li r11,129
	ctx.r11.s64 = 129;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// bl 0x82467900
	ctx.lr = 0x8246E7A4;
	sub_82467900(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8246e834
	if (ctx.cr0.eq) goto loc_8246E834;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246e7f4
	if (ctx.cr6.eq) goto loc_8246E7F4;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8246E7C8:
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addic r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bdnz 0x8246e7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246E7C8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8246e834
	if (ctx.cr6.eq) goto loc_8246E834;
loc_8246E7F4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// b 0x8246e80c
	goto loc_8246E80C;
loc_8246E800:
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8246E80C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246d648
	ctx.lr = 0x8246E824;
	sub_8246D648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8246e838
	if (!ctx.cr6.eq) goto loc_8246E838;
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// b 0x8246e838
	goto loc_8246E838;
loc_8246E834:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8246E838:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824796E8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82479734
	if (ctx.cr6.eq) goto loc_82479734;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_824796F4:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247973c
	if (!ctx.cr0.eq) goto loc_8247973C;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82479728
	if (ctx.cr6.eq) goto loc_82479728;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247973c
	if (!ctx.cr0.eq) goto loc_8247973C;
loc_82479728:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x824796f4
	if (!ctx.cr6.eq) goto loc_824796F4;
loc_82479734:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8247973C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247CAD0) {
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
	ctx.lr = 0x8247CAD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r9,r11
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// rlwinm r8,r10,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8247cb14
	if (!ctx.cr6.lt) goto loc_8247CB14;
loc_8247CB0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247ccec
	goto loc_8247CCEC;
loc_8247CB14:
	// ble cr6,0x8247cb20
	if (!ctx.cr6.gt) goto loc_8247CB20;
loc_8247CB18:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247ccec
	goto loc_8247CCEC;
loc_8247CB20:
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8247cb18
	if (ctx.cr6.lt) goto loc_8247CB18;
	// bgt cr6,0x8247cb0c
	if (ctx.cr6.gt) goto loc_8247CB0C;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247cbb8
	if (ctx.cr6.eq) goto loc_8247CBB8;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
loc_8247CB54:
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247cb54
	if (ctx.cr6.lt) goto loc_8247CB54;
loc_8247CBB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477530
	ctx.lr = 0x8247CBC0;
	sub_82477530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247cc8c
	if (ctx.cr0.eq) goto loc_8247CC8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// clrlwi. r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8247cce8
	if (ctx.cr0.eq) goto loc_8247CCE8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
loc_8247CBEC:
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,48(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r5,48(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8247cc40
	if (ctx.cr6.lt) goto loc_8247CC40;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bgt cr6,0x8247cc44
	if (ctx.cr6.gt) goto loc_8247CC44;
loc_8247CC40:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8247CC44:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// blt cr6,0x8247cc58
	if (ctx.cr6.lt) goto loc_8247CC58;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bgt cr6,0x8247cc5c
	if (ctx.cr6.gt) goto loc_8247CC5C;
loc_8247CC58:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8247CC5C:
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247cbec
	if (ctx.cr6.lt) goto loc_8247CBEC;
	// b 0x8247cce8
	goto loc_8247CCE8;
loc_8247CC8C:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247cce8
	if (ctx.cr6.eq) goto loc_8247CCE8;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
loc_8247CCAC:
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247cb0c
	if (ctx.cr6.lt) goto loc_8247CB0C;
	// bgt cr6,0x8247cb18
	if (ctx.cr6.gt) goto loc_8247CB18;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8247ccac
	if (ctx.cr6.lt) goto loc_8247CCAC;
loc_8247CCE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247CCEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82495868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82495870;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824958b8
	if (ctx.cr6.eq) goto loc_824958B8;
loc_82495888:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824958b0
	if (!ctx.cr6.eq) goto loc_824958B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82495868
	ctx.lr = 0x824958A0;
	sub_82495868(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82495888
	if (!ctx.cr6.eq) goto loc_82495888;
loc_824958B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824958c0
	if (!ctx.cr6.eq) goto loc_824958C0;
loc_824958B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82495948
	goto loc_82495948;
loc_824958C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82495938
	if (ctx.cr6.eq) goto loc_82495938;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82495920
	if (ctx.cr6.eq) goto loc_82495920;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8249590c
	if (ctx.cr6.eq) goto loc_8249590C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x82495904
	if (ctx.cr6.eq) goto loc_82495904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23188
	ctx.r6.s64 = ctx.r11.s64 + -23188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82494e30
	ctx.lr = 0x824958FC;
	sub_82494E30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495948
	goto loc_82495948;
loc_82495904:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x82495940
	goto loc_82495940;
loc_8249590C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82495918:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x82495948
	goto loc_82495948;
loc_82495920:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82495868
	ctx.lr = 0x8249592C;
	sub_82495868(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// b 0x82495918
	goto loc_82495918;
loc_82495938:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82495940:
	// bl 0x82495868
	ctx.lr = 0x82495944;
	sub_82495868(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82495948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8249C2E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8249C2F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8249c3c4
	if (ctx.cr6.eq) goto loc_8249C3C4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8249af20
	ctx.lr = 0x8249C314;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249c3ac
	if (ctx.cr0.lt) goto loc_8249C3AC;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249af20
	ctx.lr = 0x8249C32C;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249c3ac
	if (ctx.cr0.lt) goto loc_8249C3AC;
	// lwz r29,128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// blt cr6,0x8249c38c
	if (ctx.cr6.lt) goto loc_8249C38C;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// bgt cr6,0x8249c38c
	if (ctx.cr6.gt) goto loc_8249C38C;
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x8249c38c
	if (ctx.cr6.lt) goto loc_8249C38C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bgt cr6,0x8249c38c
	if (ctx.cr6.gt) goto loc_8249C38C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249C364;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c3c4
	if (ctx.cr0.eq) goto loc_8249C3C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824461c0
	ctx.lr = 0x8249C388;
	sub_824461C0(ctx, base);
	// b 0x8249c3c8
	goto loc_8249C3C8;
loc_8249C38C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,-10476
	ctx.r6.s64 = ctx.r11.s64 + -10476;
	// li r5,3053
	ctx.r5.s64 = 3053;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C3A8;
	sub_82494D48(ctx, base);
	// b 0x8249c3c4
	goto loc_8249C3C4;
loc_8249C3AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3061
	ctx.r5.s64 = 3061;
	// addi r6,r11,-10532
	ctx.r6.s64 = ctx.r11.s64 + -10532;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C3C4;
	sub_82494D48(ctx, base);
loc_8249C3C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249C3C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824A81D0) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a822c
	if (ctx.cr6.eq) goto loc_824A822C;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_824A81F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e840
	ctx.lr = 0x824A8200;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a8218
	if (ctx.cr0.lt) goto loc_824A8218;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824A8210;
	sub_82468DD8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_824A8218:
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
loc_824A822C:
	// lwz r4,200(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x824a81f8
	goto loc_824A81F8;
}

DEFINE_REX_FUNC(sub_824AAE28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824AAE30;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824aae60
	if (!ctx.cr6.eq) goto loc_824AAE60;
loc_824AAE58:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ab020
	goto loc_824AB020;
loc_824AAE60:
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r11,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824aae8c
	if (ctx.cr6.eq) goto loc_824AAE8C;
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824aae58
	if (!ctx.cr6.eq) goto loc_824AAE58;
loc_824AAE8C:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r29,-1
	r29.s64 = -1;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824aaf10
	if (ctx.cr6.eq) goto loc_824AAF10;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824aaf10
	if (!ctx.cr6.eq) goto loc_824AAF10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824aaf10
	if (!ctx.cr6.eq) goto loc_824AAF10;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824aaf10
	if (ctx.cr6.eq) goto loc_824AAF10;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824AAEEC:
	// lwzx r28,r11,r8
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824aaf00
	if (!ctx.cr6.eq) goto loc_824AAF00;
	// lwz r29,8(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r29,r29,r11
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
loc_824AAF00:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824aaeec
	if (ctx.cr6.lt) goto loc_824AAEEC;
loc_824AAF10:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824aaf90
	if (!ctx.cr6.eq) goto loc_824AAF90;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824aae58
	if (ctx.cr6.eq) goto loc_824AAE58;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824AAF38:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824aaf5c
	if (!ctx.cr6.eq) goto loc_824AAF5C;
	// lwz r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r28,28(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, ctx.xer);
	// bne cr6,0x824aaf5c
	if (!ctx.cr6.eq) goto loc_824AAF5C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_824AAF5C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x824aaf7c
	if (!ctx.cr6.eq) goto loc_824AAF7C;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824aaf7c
	if (!ctx.cr6.eq) goto loc_824AAF7C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_824AAF7C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824aaf38
	if (ctx.cr6.lt) goto loc_824AAF38;
	// b 0x824aafc8
	goto loc_824AAFC8;
loc_824AAF90:
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824aae58
	if (ctx.cr6.eq) goto loc_824AAE58;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824AAFA8:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824aafb8
	if (!ctx.cr6.eq) goto loc_824AAFB8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_824AAFB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824aafa8
	if (ctx.cr6.lt) goto loc_824AAFA8;
loc_824AAFC8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824aae58
	if (ctx.cr6.eq) goto loc_824AAE58;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_824AB020:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824B8E78) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x824B8E80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824b8e90
	if (!ctx.cr6.eq) goto loc_824B8E90;
loc_824B8E88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824b90bc
	goto loc_824B90BC;
loc_824B8E90:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b90b8
	if (ctx.cr0.eq) goto loc_824B90B8;
	// lwz r8,128(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r7,r1,-288
	ctx.r7.s64 = ctx.r1.s64 + -288;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r9,124(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,4(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r26,r1,-288
	r26.s64 = ctx.r1.s64 + -288;
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// stwx r28,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r28.u32);
	// addi r24,r1,-208
	r24.s64 = ctx.r1.s64 + -208;
	// rlwinm r25,r9,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r27,r31,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? r31.u32 / ctx.r10.u32 : 0);
	// addi r23,r1,-288
	r23.s64 = ctx.r1.s64 + -288;
	// stwx r28,r6,r26
	REX_STORE_U32(ctx.r6.u32 + r26.u32, r28.u32);
	// addi r7,r1,-208
	ctx.r7.s64 = ctx.r1.s64 + -208;
	// divwu r9,r30,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// li r31,2
	r31.s64 = 2;
	// li r30,5
	r30.s64 = 5;
	// li r26,3
	r26.s64 = 3;
	// stwx r31,r8,r29
	REX_STORE_U32(ctx.r8.u32 + r29.u32, r31.u32);
	// stwx r30,r6,r24
	REX_STORE_U32(ctx.r6.u32 + r24.u32, r30.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwx r28,r25,r23
	REX_STORE_U32(r25.u32 + r23.u32, r28.u32);
	// add. r21,r9,r27
	r21.u64 = ctx.r9.u64 + r27.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stwx r26,r25,r7
	REX_STORE_U32(r25.u32 + ctx.r7.u32, r26.u32);
	// mr r19,r28
	r19.u64 = r28.u64;
	// mr r18,r28
	r18.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// beq 0x824b90b8
	if (ctx.cr0.eq) goto loc_824B90B8;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// lwz r20,16(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// rlwinm r24,r10,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r9,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r11,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
loc_824B8F4C:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bge cr6,0x824b8f64
	if (!ctx.cr6.lt) goto loc_824B8F64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// b 0x824b8f6c
	goto loc_824B8F6C;
loc_824B8F64:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
loc_824B8F6C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwzx r31,r11,r7
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r20
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// beq cr6,0x824b8ff8
	if (ctx.cr6.eq) goto loc_824B8FF8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_824B8F94:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bge cr6,0x824b8fa8
	if (!ctx.cr6.lt) goto loc_824B8FA8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x824b8fb0
	goto loc_824B8FB0;
loc_824B8FA8:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_824B8FB0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r17,4(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r17.u32, ctx.xer);
	// bne cr6,0x824b8fe4
	if (!ctx.cr6.eq) goto loc_824B8FE4;
	// lwz r17,8(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r16,8(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(r17.u32, r16.u32, ctx.xer);
	// bne cr6,0x824b8fe4
	if (!ctx.cr6.eq) goto loc_824B8FE4;
	// lwz r17,12(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b8ff8
	if (ctx.cr6.eq) goto loc_824B8FF8;
loc_824B8FE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r23,r9
	ctx.r9.u64 = r23.u64 + ctx.r9.u64;
	// add r8,r24,r8
	ctx.r8.u64 = r24.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x824b8f94
	if (ctx.cr6.lt) goto loc_824B8F94;
loc_824B8FF8:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x824b90a4
	if (!ctx.cr6.eq) goto loc_824B90A4;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b9024
	if (!ctx.cr6.eq) goto loc_824B9024;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824b9024
	if (!ctx.cr6.gt) goto loc_824B9024;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bgt cr6,0x824b8e88
	if (ctx.cr6.gt) goto loc_824B8E88;
loc_824B9024:
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824b905c
	if (!ctx.cr6.eq) goto loc_824B905C;
	// lbz r9,111(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 111);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x824b9080
	if (!ctx.cr6.eq) goto loc_824B9080;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x824b9054
	if (!ctx.cr6.eq) goto loc_824B9054;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bgt cr6,0x824b8e88
	if (ctx.cr6.gt) goto loc_824B8E88;
loc_824B9054:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x824b9080
	goto loc_824B9080;
loc_824B905C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b90b8
	if (!ctx.cr0.eq) goto loc_824B90B8;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b907c
	if (ctx.cr0.eq) goto loc_824B907C;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// b 0x824b90a0
	goto loc_824B90A0;
loc_824B907C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_824B9080:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-288
	ctx.r9.s64 = ctx.r1.s64 + -288;
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_824B90A0:
	// bgt cr6,0x824b8e88
	if (ctx.cr6.gt) goto loc_824B8E88;
loc_824B90A4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r26,r26,r23
	r26.u64 = r26.u64 + r23.u64;
	// add r25,r24,r25
	r25.u64 = r24.u64 + r25.u64;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// blt cr6,0x824b8f4c
	if (ctx.cr6.lt) goto loc_824B8F4C;
loc_824B90B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B90BC:
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824C5668) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c56e0
	if (!ctx.cr0.eq) goto loc_824C56E0;
	// lwz r11,92(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c56e0
	if (ctx.cr6.eq) goto loc_824C56E0;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824c56cc
	if (ctx.cr6.eq) goto loc_824C56CC;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_824C56CC:
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_824C56E0:
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x824c55c8
	sub_824C55C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8F78) {
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
	ctx.lr = 0x824C8F80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x824c8fbc
	if (!ctx.cr6.lt) goto loc_824C8FBC;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x824c8e10
	ctx.lr = 0x824C8FA0;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824c8fb4
	if (!ctx.cr6.eq) goto loc_824C8FB4;
loc_824C8FA8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_824C8FB4:
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_824C8FBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x824c9034
	if (!ctx.cr6.gt) goto loc_824C9034;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_824C8FEC:
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x824c9014
	if (!ctx.cr6.lt) goto loc_824C9014;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c8e10
	ctx.lr = 0x824C9004;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c8fa8
	if (ctx.cr6.eq) goto loc_824C8FA8;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_824C9014:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzu r10,4(r30)
	ea = 4 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sraw r11,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x824c8fec
	if (ctx.cr6.gt) goto loc_824C8FEC;
loc_824C9034:
	// stw r4,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// stw r5,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r5.u32);
	// ble cr6,0x824c9078
	if (!ctx.cr6.gt) goto loc_824C9078;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r10,118
	ctx.r10.s64 = 118;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824C906C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_824C9078:
	// addi r10,r31,18
	ctx.r10.s64 = r31.s64 + 18;
	// lwz r9,140(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 140);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,17(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 17);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824D13C0) {
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
	ctx.lr = 0x824D13C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r27,12(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d13f0
	if (!ctx.cr6.gt) goto loc_824D13F0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
loc_824D13F0:
	// subf r30,r28,r11
	r30.u64 = ctx.r11.u64 - r28.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d1404
	if (!ctx.cr6.gt) goto loc_824D1404;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824D1404:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824d141c
	if (ctx.cr6.eq) goto loc_824D141C;
	// addi r10,r26,5
	ctx.r10.s64 = r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r26
	r26.u64 = ctx.r10.u64 & r26.u64;
loc_824D141C:
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d1458
	if (ctx.cr6.eq) goto loc_824D1458;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D1450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_824D1458:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D1468;
	sub_826A1E70(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824d1514
	if (!ctx.cr6.eq) goto loc_824D1514;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r28,40(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824d1490
	if (!ctx.cr6.eq) goto loc_824D1490;
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
loc_824D1490:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// subf r30,r28,r10
	r30.u64 = ctx.r10.u64 - r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d14a8
	if (!ctx.cr6.gt) goto loc_824D14A8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824D14A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824d14c0
	if (ctx.cr6.eq) goto loc_824D14C0;
	// addi r10,r26,5
	ctx.r10.s64 = r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r26
	r26.u64 = ctx.r10.u64 & r26.u64;
loc_824D14C0:
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// stw r10,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d14fc
	if (ctx.cr6.eq) goto loc_824D14FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D14F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_824D14FC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D150C;
	sub_826A1E70(ctx, base);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
loc_824D1514:
	// stw r27,12(r29)
	REX_STORE_U32(r29.u32 + 12, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824D8118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8120;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d819c
	if (!ctx.cr6.gt) goto loc_824D819C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8148
	if (!ctx.cr6.lt) goto loc_824D8148;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8148:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8154;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d816c
	if (!ctx.cr0.eq) goto loc_824D816C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d819c
	goto loc_824D819C;
loc_824D816C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8198
	if (ctx.cr6.eq) goto loc_824D8198;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x824D818C;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824e5b08
	ctx.lr = 0x824D8198;
	sub_824E5B08(ctx, base);
loc_824D8198:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D819C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DAD58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,136(r10)
	REX_STORE_U32(ctx.r10.u32 + 136, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DB608) {
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
	ctx.lr = 0x824DB610;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,19332
	r29.s64 = ctx.r11.s64 + 19332;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// rlwinm. r9,r4,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,19324
	r28.s64 = ctx.r10.s64 + 19324;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db654
	if (!ctx.cr0.eq) goto loc_824DB654;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB654:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22436
	ctx.r4.s64 = ctx.r11.s64 + 22436;
	// bl 0x824db2b0
	ctx.lr = 0x824DB664;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db674
	if (!ctx.cr0.eq) goto loc_824DB674;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB674:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22428
	ctx.r4.s64 = ctx.r11.s64 + 22428;
	// bl 0x824db2b0
	ctx.lr = 0x824DB684;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db694
	if (!ctx.cr0.eq) goto loc_824DB694;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB694:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22420
	ctx.r4.s64 = ctx.r11.s64 + 22420;
	// bl 0x824db2b0
	ctx.lr = 0x824DB6A4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db6b4
	if (!ctx.cr0.eq) goto loc_824DB6B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB6B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22412
	ctx.r4.s64 = ctx.r11.s64 + 22412;
	// bl 0x824db2b0
	ctx.lr = 0x824DB6C4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db6d4
	if (!ctx.cr0.eq) goto loc_824DB6D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB6D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22408
	ctx.r4.s64 = ctx.r11.s64 + 22408;
	// bl 0x824db2b0
	ctx.lr = 0x824DB6E4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db6f4
	if (!ctx.cr0.eq) goto loc_824DB6F4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB6F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22400
	ctx.r4.s64 = ctx.r11.s64 + 22400;
	// bl 0x824db2b0
	ctx.lr = 0x824DB704;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db714
	if (!ctx.cr0.eq) goto loc_824DB714;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB714:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22392
	ctx.r4.s64 = ctx.r11.s64 + 22392;
	// bl 0x824db2b0
	ctx.lr = 0x824DB724;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db734
	if (!ctx.cr0.eq) goto loc_824DB734;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB734:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22376
	ctx.r4.s64 = ctx.r11.s64 + 22376;
	// bl 0x824db2b0
	ctx.lr = 0x824DB744;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db754
	if (!ctx.cr0.eq) goto loc_824DB754;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB754:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x824db2b0
	ctx.lr = 0x824DB764;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db774
	if (!ctx.cr0.eq) goto loc_824DB774;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB774:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22360
	ctx.r4.s64 = ctx.r11.s64 + 22360;
	// bl 0x824db2b0
	ctx.lr = 0x824DB784;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db794
	if (!ctx.cr0.eq) goto loc_824DB794;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB794:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22352
	ctx.r4.s64 = ctx.r11.s64 + 22352;
	// bl 0x824db2b0
	ctx.lr = 0x824DB7A4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db7b4
	if (!ctx.cr0.eq) goto loc_824DB7B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB7B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22332
	ctx.r4.s64 = ctx.r11.s64 + 22332;
	// bl 0x824db2b0
	ctx.lr = 0x824DB7C4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bne 0x824db7d4
	if (!ctx.cr0.eq) goto loc_824DB7D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_824DB7D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22320
	ctx.r4.s64 = ctx.r11.s64 + 22320;
	// bl 0x824db2b0
	ctx.lr = 0x824DB7E4;
	sub_824DB2B0(ctx, base);
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824db800
	if (ctx.cr0.eq) goto loc_824DB800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22308
	ctx.r4.s64 = ctx.r11.s64 + 22308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB800;
	sub_824DB2B0(ctx, base);
loc_824DB800:
	// rlwinm. r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824db81c
	if (ctx.cr0.eq) goto loc_824DB81C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22288
	ctx.r4.s64 = ctx.r11.s64 + 22288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB81C;
	sub_824DB2B0(ctx, base);
loc_824DB81C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm. r10,r27,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,28480
	r30.s64 = ctx.r11.s64 + 28480;
	// beq 0x824db868
	if (ctx.cr0.eq) goto loc_824DB868;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22268
	ctx.r4.s64 = ctx.r11.s64 + 22268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB840;
	sub_824DB2B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824DB854;
	sub_82404168(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22248
	ctx.r4.s64 = ctx.r11.s64 + 22248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB868;
	sub_824DB2B0(ctx, base);
loc_824DB868:
	// rlwinm. r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824db8fc
	if (ctx.cr0.eq) goto loc_824DB8FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22224
	ctx.r4.s64 = ctx.r11.s64 + 22224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB884;
	sub_824DB2B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824DB898;
	sub_82404168(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22204
	ctx.r4.s64 = ctx.r11.s64 + 22204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB8AC;
	sub_824DB2B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824DB8C0;
	sub_82404168(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22184
	ctx.r4.s64 = ctx.r11.s64 + 22184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB8D4;
	sub_824DB2B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824DB8E8;
	sub_82404168(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22164
	ctx.r4.s64 = ctx.r11.s64 + 22164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB8FC;
	sub_824DB2B0(ctx, base);
loc_824DB8FC:
	// rlwinm. r11,r27,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824db92c
	if (ctx.cr0.eq) goto loc_824DB92C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404168
	ctx.lr = 0x824DB918;
	sub_82404168(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22144
	ctx.r4.s64 = ctx.r11.s64 + 22144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB92C;
	sub_824DB2B0(ctx, base);
loc_824DB92C:
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824db948
	if (ctx.cr0.eq) goto loc_824DB948;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22124
	ctx.r4.s64 = ctx.r11.s64 + 22124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824db2b0
	ctx.lr = 0x824DB948;
	sub_824DB2B0(ctx, base);
loc_824DB948:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824EF040) {
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
	ctx.lr = 0x824EF048;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r10,22852
	r27.s64 = ctx.r10.s64 + 22852;
	// addi r26,r11,-26736
	r26.s64 = ctx.r11.s64 + -26736;
	// bne cr6,0x824ef084
	if (!ctx.cr6.eq) goto loc_824EF084;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26220
	ctx.r5.s64 = ctx.r11.s64 + -26220;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF084;
	sub_824EA978(ctx, base);
loc_824EF084:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-26424
	r25.s64 = ctx.r11.s64 + -26424;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef0a0
	if (!ctx.cr6.eq) goto loc_824EF0A0;
	// li r31,0
	r31.s64 = 0;
	// b 0x824ef0ac
	goto loc_824EF0AC;
loc_824EF0A0:
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824ef0c4
	if (!ctx.cr6.eq) goto loc_824EF0C4;
loc_824EF0AC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2284
	ctx.r7.s64 = 2284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF0C4;
	sub_824EA978(ctx, base);
loc_824EF0C4:
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824ef148
	if (ctx.cr6.eq) goto loc_824EF148;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-26208
	r28.s64 = ctx.r11.s64 + -26208;
loc_824EF0D8:
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ef0f0
	if (ctx.cr6.eq) goto loc_824EF0F0;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824ef108
	if (!ctx.cr6.eq) goto loc_824EF108;
loc_824EF0F0:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF108;
	sub_824EA978(ctx, base);
loc_824EF108:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EF110;
	sub_824EE070(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824ef134
	if (!ctx.cr0.eq) goto loc_824EF134;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF130;
	sub_824EA978(ctx, base);
	// b 0x824ef13c
	goto loc_824EF13C;
loc_824EF134:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EF13C;
	sub_825A28C0(ctx, base);
loc_824EF13C:
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824ef0d8
	if (!ctx.cr6.eq) goto loc_824EF0D8;
loc_824EF148:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x824ef158
	if (ctx.cr0.eq) goto loc_824EF158;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EF158;
	sub_825A28C0(ctx, base);
loc_824EF158:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef180
	if (!ctx.cr6.eq) goto loc_824EF180;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x825a2758
	ctx.lr = 0x824EF16C;
	sub_825A2758(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EF180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EF180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F71B8) {
	REX_FUNC_PROLOGUE();
	// addi r10,r5,11
	ctx.r10.s64 = ctx.r5.s64 + 11;
	// addi r11,r4,-84
	ctx.r11.s64 = ctx.r4.s64 + -84;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-22552
	ctx.r12.s64 = ctx.r12.s64 + -22552;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// nop 
	// addi r12,r12,29172
	ctx.r12.s64 = ctx.r12.s64 + 29172;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824F7228;
	case 1:
		goto loc_824F7210;
	case 2:
		goto loc_824F7220;
	case 3:
		goto loc_824F7220;
	case 4:
		goto loc_824F7234;
	case 5:
		goto loc_824F7220;
	case 6:
		goto loc_824F7220;
	case 7:
		goto loc_824F7234;
	case 8:
		goto loc_824F7234;
	case 9:
		goto loc_824F7234;
	case 10:
		goto loc_824F7200;
	case 11:
		goto loc_824F7234;
	case 12:
		goto loc_824F7210;
	case 13:
		goto loc_824F7218;
	case 14:
		goto loc_824F7234;
	case 15:
		goto loc_824F7218;
	case 16:
		goto loc_824F7218;
	case 17:
		goto loc_824F7234;
	case 18:
		goto loc_824F7234;
	case 19:
		goto loc_824F7230;
	case 20:
		goto loc_824F7208;
	case 21:
		goto loc_824F7234;
	case 22:
		goto loc_824F7234;
	case 23:
		goto loc_824F7234;
	case 24:
		goto loc_824F7234;
	case 25:
		goto loc_824F7234;
	case 26:
		goto loc_824F7234;
	case 27:
		goto loc_824F7234;
	case 28:
		goto loc_824F7208;
	case 29:
		goto loc_824F7234;
	case 30:
		goto loc_824F7234;
	case 31:
		goto loc_824F7234;
	case 32:
		goto loc_824F7230;
	case 33:
		goto loc_824F7220;
	case 34:
		goto loc_824F7234;
	case 35:
		goto loc_824F7200;
	case 36:
		goto loc_824F7230;
	case 37:
		goto loc_824F7234;
	case 38:
		goto loc_824F7234;
	case 39:
		goto loc_824F7234;
	case 40:
		goto loc_824F7208;
	case 41:
		goto loc_824F71F4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824F71F4:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_824F7200:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
loc_824F7208:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
loc_824F7210:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
loc_824F7218:
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
loc_824F7220:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
loc_824F7228:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
loc_824F7230:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_824F7234:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FF040) {
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
	ctx.lr = 0x824FF048;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824ff070
	if (!ctx.cr6.eq) goto loc_824FF070;
loc_824FF064:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824ff2fc
	goto loc_824FF2FC;
loc_824FF070:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824ff064
	if (!ctx.cr6.eq) goto loc_824FF064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c91b8
	ctx.lr = 0x824FF094;
	sub_822C91B8(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x824ff0c0
	if (ctx.cr0.eq) goto loc_824FF0C0;
	// stb r4,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r4.u8);
loc_824FF0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824ff170
	if (ctx.cr6.eq) goto loc_824FF170;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ff064
	if (!ctx.cr6.eq) goto loc_824FF064;
	// addi r11,r29,3
	ctx.r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824ff064
	if (ctx.cr6.lt) goto loc_824FF064;
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x824ff064
	if (ctx.cr6.gt) goto loc_824FF064;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824ff064
	if (!ctx.cr0.eq) goto loc_824FF064;
	// cmplwi cr6,r9,24564
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24564, ctx.xer);
	// bgt cr6,0x824ff064
	if (ctx.cr6.gt) goto loc_824FF064;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824ff064
	if (!ctx.cr0.eq) goto loc_824FF064;
	// stb r4,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r4.u8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// b 0x824ff238
	goto loc_824FF238;
loc_824FF170:
	// addi r11,r29,3
	ctx.r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824ff064
	if (ctx.cr6.lt) goto loc_824FF064;
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x824ff064
	if (ctx.cr6.gt) goto loc_824FF064;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824ff064
	if (!ctx.cr0.eq) goto loc_824FF064;
	// cmplwi cr6,r9,24552
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24552, ctx.xer);
	// bgt cr6,0x824ff064
	if (ctx.cr6.gt) goto loc_824FF064;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824ff064
	if (!ctx.cr0.eq) goto loc_824FF064;
	// stb r3,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r3.u8);
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,29,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7C;
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
loc_824FF238:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x824ff064
	if (ctx.cr6.gt) goto loc_824FF064;
	// cntlzw r11,r27
	ctx.r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// lbz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 40);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824ff064
	if (!ctx.cr6.eq) goto loc_824FF064;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ff298
	if (ctx.cr6.eq) goto loc_824FF298;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x824ff29c
	goto loc_824FF29C;
loc_824FF298:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824FF29C:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ff2b4
	if (ctx.cr6.eq) goto loc_824FF2B4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x824ff2b8
	goto loc_824FF2B8;
loc_824FF2B4:
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
loc_824FF2B8:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ff2d0
	if (ctx.cr6.eq) goto loc_824FF2D0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// b 0x824ff2d4
	goto loc_824FF2D4;
loc_824FF2D0:
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_824FF2D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// stw r6,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r6.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r5,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r5.u32);
loc_824FF2FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8251EDA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8251EDB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251e728
	ctx.lr = 0x8251EDD0;
	sub_8251E728(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251edf8
	if (!ctx.cr6.eq) goto loc_8251EDF8;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251edf0
	if (ctx.cr0.eq) goto loc_8251EDF0;
	// li r4,3566
	ctx.r4.s64 = 3566;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824e4368
	ctx.lr = 0x8251EDF0;
	sub_824E4368(ctx, base);
loc_8251EDF0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8251ee30
	goto loc_8251EE30;
loc_8251EDF8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x82503970
	ctx.lr = 0x8251EE08;
	sub_82503970(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	REX_STORE_U64(ctx.r11.u32 + r30.u32, ctx.r10.u64);
loc_8251EE30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82523218) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r8,r11,20016
	ctx.r8.s64 = ctx.r11.s64 + 20016;
loc_82523238:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// b 0x82523254
	goto loc_82523254;
loc_82523244:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8252325c
	if (ctx.cr6.eq) goto loc_8252325C;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82523254:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523244
	if (!ctx.cr6.eq) goto loc_82523244;
loc_8252325C:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523238
	if (!ctx.cr6.eq) goto loc_82523238;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825267F0) {
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
	ctx.lr = 0x825267F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
loc_8252680C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825268b0
	if (ctx.cr6.eq) goto loc_825268B0;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825268a0
	if (!ctx.cr0.eq) goto loc_825268A0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82502110
	ctx.lr = 0x82526838;
	sub_82502110(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252687c
	if (ctx.cr0.eq) goto loc_8252687C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82526860
	goto loc_82526860;
loc_82526850:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825268a8
	if (ctx.cr6.eq) goto loc_825268A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82526860:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82526850
	if (!ctx.cr6.eq) goto loc_82526850;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82526874:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825268a0
	if (!ctx.cr0.eq) goto loc_825268A0;
loc_8252687C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82522878
	ctx.lr = 0x8252688C;
	sub_82522878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825268a0
	if (ctx.cr0.eq) goto loc_825268A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82524df8
	ctx.lr = 0x825268A0;
	sub_82524DF8(ctx, base);
loc_825268A0:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252680c
	goto loc_8252680C;
loc_825268A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82526874
	goto loc_82526874;
loc_825268B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82530898) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r6,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwzx r3,r7,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x825308ec
	if (!ctx.cr0.eq) goto loc_825308EC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82530904
	if (!ctx.cr6.eq) goto loc_82530904;
loc_825308EC:
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82530904:
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r9,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r11,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r9,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825396E8) {
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
	ctx.lr = 0x825396F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,12(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x82503da0
	ctx.lr = 0x82539720;
	sub_82503DA0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82503da0
	ctx.lr = 0x82539734;
	sub_82503DA0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825355f8
	ctx.lr = 0x82539758;
	sub_825355F8(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82539780
	if (ctx.cr6.lt) goto loc_82539780;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82539784
	if (!ctx.cr6.gt) goto loc_82539784;
loc_82539780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82539784:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253979c
	if (ctx.cr0.eq) goto loc_8253979C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad88
	ctx.lr = 0x82539798;
	sub_8250AD88(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8253979C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x825397B8;
	sub_825BB860(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825397FC;
	sub_8250AD28(ctx, base);
	// lwz r23,284(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r22,0
	r22.s64 = 0;
	// bl 0x82533008
	ctx.lr = 0x82539824;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539888
	if (ctx.cr0.eq) goto loc_82539888;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503da0
	ctx.lr = 0x8253983C;
	sub_82503DA0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,12(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503da0
	ctx.lr = 0x82539850;
	sub_82503DA0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825355f8
	ctx.lr = 0x82539874;
	sub_825355F8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r22,1
	r22.s64 = 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_82539888:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825398a0
	if (ctx.cr6.eq) goto loc_825398A0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x825398A0;
	sub_8250B470(ctx, base);
loc_825398A0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825398b4
	goto loc_825398B4;
loc_825398AC:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825398B4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x825398ac
	if (!ctx.cr6.eq) goto loc_825398AC;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r9.u32);
	// bl 0x825c2288
	ctx.lr = 0x825398E0;
	sub_825C2288(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82550580) {
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
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825505b0
	if (ctx.cr6.eq) goto loc_825505B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825504f0
	ctx.lr = 0x825505AC;
	sub_825504F0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_825505B0:
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

DEFINE_REX_FUNC(sub_825515A0) {
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
	ctx.lr = 0x825515A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551670
	if (!ctx.cr0.eq) goto loc_82551670;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82551670
	if (ctx.cr0.eq) goto loc_82551670;
loc_825515D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82551658
	if (!ctx.cr6.eq) goto loc_82551658;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x825515F8;
	sub_8257B1B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82551658
	if (ctx.cr0.eq) goto loc_82551658;
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
loc_82551604:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82551648
	if (ctx.cr6.eq) goto loc_82551648;
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x82551638
	if (ctx.cr6.eq) goto loc_82551638;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x82551630;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82551640
	if (ctx.cr6.eq) goto loc_82551640;
loc_82551638:
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x82551604
	goto loc_82551604;
loc_82551640:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82551658
	if (!ctx.cr6.eq) goto loc_82551658;
loc_82551648:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x82551658;
	sub_8250B470(ctx, base);
loc_82551658:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551670
	if (!ctx.cr0.eq) goto loc_82551670;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825515d0
	if (!ctx.cr6.eq) goto loc_825515D0;
loc_82551670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82554E28) {
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
	ctx.lr = 0x82554E30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554E60;
	sub_825BB860(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554E70;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554E7C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554E8C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554E98;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// stw r3,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82554EC8;
	sub_824FFC30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8255D290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8255D298;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x8255d2f0
	goto loc_8255D2F0;
loc_8255D2E8:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8255D2F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d30c
	if (ctx.cr6.eq) goto loc_8255D30C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bne cr6,0x8255d310
	if (!ctx.cr6.eq) goto loc_8255D310;
loc_8255D30C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8255D310:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255d410
	if (!ctx.cr0.eq) goto loc_8255D410;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255d334
	if (ctx.cr6.eq) goto loc_8255D334;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bne cr6,0x8255d338
	if (!ctx.cr6.eq) goto loc_8255D338;
loc_8255D334:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8255D338:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255d410
	if (!ctx.cr0.eq) goto loc_8255D410;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553778
	ctx.lr = 0x8255D348;
	sub_82553778(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82553778
	ctx.lr = 0x8255D354;
	sub_82553778(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255d408
	if (!ctx.cr6.eq) goto loc_8255D408;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255d408
	if (!ctx.cr6.eq) goto loc_8255D408;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255d2e8
	if (ctx.cr6.eq) goto loc_8255D2E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255d408
	if (!ctx.cr6.eq) goto loc_8255D408;
	// rlwinm. r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// beq 0x8255d3a4
	if (ctx.cr0.eq) goto loc_8255D3A4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8255D3A4:
	// clrlwi. r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255d3b8
	if (ctx.cr0.eq) goto loc_8255D3B8;
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255d3b8
	if (ctx.cr0.eq) goto loc_8255D3B8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8255D3B8:
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255d3cc
	if (!ctx.cr6.eq) goto loc_8255D3CC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8255d2e8
	goto loc_8255D2E8;
loc_8255D3CC:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq 0x8255d3e0
	if (ctx.cr0.eq) goto loc_8255D3E0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8255D3E0:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255d3f4
	if (ctx.cr0.eq) goto loc_8255D3F4;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255d3f4
	if (ctx.cr0.eq) goto loc_8255D3F4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8255D3F4:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8255d408
	if (!ctx.cr6.eq) goto loc_8255D408;
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x8255d2e8
	goto loc_8255D2E8;
loc_8255D408:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255d474
	goto loc_8255D474;
loc_8255D410:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255d46c
	if (ctx.cr6.eq) goto loc_8255D46C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d434
	if (ctx.cr6.eq) goto loc_8255D434;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne cr6,0x8255d438
	if (!ctx.cr6.eq) goto loc_8255D438;
loc_8255D434:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255D438:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d46c
	if (ctx.cr0.eq) goto loc_8255D46C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255d45c
	if (ctx.cr6.eq) goto loc_8255D45C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne cr6,0x8255d460
	if (!ctx.cr6.eq) goto loc_8255D460;
loc_8255D45C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255D460:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8255d470
	if (!ctx.cr0.eq) goto loc_8255D470;
loc_8255D46C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8255D470:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_8255D474:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8257E7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// clrlwi. r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257e810
	if (ctx.cr0.eq) goto loc_8257E810;
	// rlwinm. r11,r11,0,1,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8257e814
	if (ctx.cr0.eq) goto loc_8257E814;
loc_8257E810:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257E814:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257F068) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8257f08c
	if (!ctx.cr6.eq) goto loc_8257F08C;
	// li r4,3609
	ctx.r4.s64 = 3609;
	// bl 0x824e4368
	ctx.lr = 0x8257F08C;
	sub_824E4368(ctx, base);
loc_8257F08C:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257f0e4
	if (!ctx.cr6.eq) goto loc_8257F0E4;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f0ac
	if (ctx.cr6.eq) goto loc_8257F0AC;
	// li r4,3609
	ctx.r4.s64 = 3609;
	// bl 0x824e4368
	ctx.lr = 0x8257F0AC;
	sub_824E4368(ctx, base);
loc_8257F0AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8257eea0
	ctx.lr = 0x8257F0B8;
	sub_8257EEA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257f0cc
	if (!ctx.cr0.eq) goto loc_8257F0CC;
	// li r4,3609
	ctx.r4.s64 = 3609;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F0CC;
	sub_824E4368(ctx, base);
loc_8257F0CC:
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
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
loc_8257F0E4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8257F0EC;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82580110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82580118;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82580130
	if (!ctx.cr6.eq) goto loc_82580130;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x82580130;
	sub_824E4368(ctx, base);
loc_82580130:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82580194
	if (!ctx.cr6.eq) goto loc_82580194;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82580144:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258015c
	if (ctx.cr6.eq) goto loc_8258015C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8257ffd8
	ctx.lr = 0x82580158;
	sub_8257FFD8(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_8258015C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82580174
	if (ctx.cr6.eq) goto loc_82580174;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82580188
	if (!ctx.cr6.eq) goto loc_82580188;
loc_82580174:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82580144
	if (!ctx.cr6.eq) goto loc_82580144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8258019c
	goto loc_8258019C;
loc_82580188:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x82580194;
	sub_824E4368(ctx, base);
loc_82580194:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8257ffd8
	ctx.lr = 0x8258019C;
	sub_8257FFD8(ctx, base);
loc_8258019C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82581CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82581CC8;
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
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581CF0;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581d14
	if (ctx.cr6.eq) goto loc_82581D14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581D10;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581D14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581D1C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82581d40
	if (ctx.cr6.eq) goto loc_82581D40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581D3C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581D40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581D48;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82584838) {
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
	// bgt cr6,0x82584860
	if (ctx.cr6.gt) goto loc_82584860;
	// li r30,10
	r30.s64 = 10;
loc_82584860:
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7d10
	ctx.lr = 0x82584870;
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

DEFINE_REX_FUNC(sub_82586B80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82586B88;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586BB0;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82586BC0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586BCC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586BDC;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586BE8;
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

DEFINE_REX_FUNC(sub_8258BA10) {
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
	ctx.lr = 0x8258BA18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bc40
	if (ctx.cr6.eq) goto loc_8258BC40;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bc40
	if (!ctx.cr6.eq) goto loc_8258BC40;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8258BA50:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bc04
	if (ctx.cr6.eq) goto loc_8258BC04;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bc04
	if (!ctx.cr6.eq) goto loc_8258BC04;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bad0
	if (ctx.cr6.eq) goto loc_8258BAD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8258bad0
	if (ctx.cr6.eq) goto loc_8258BAD0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8258bbf8
	if (!ctx.cr6.eq) goto loc_8258BBF8;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258baac
	if (ctx.cr6.eq) goto loc_8258BAAC;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8258bab0
	goto loc_8258BAB0;
loc_8258BAAC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8258BAB0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258b258
	ctx.lr = 0x8258BACC;
	sub_8258B258(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8258BAD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bae8
	if (ctx.cr6.eq) goto loc_8258BAE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bbec
	if (!ctx.cr6.eq) goto loc_8258BBEC;
loc_8258BAE8:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258ba50
	if (!ctx.cr6.eq) goto loc_8258BA50;
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f360
	ctx.lr = 0x8258BB08;
	sub_8251F360(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bl 0x8255db50
	ctx.lr = 0x8258BB20;
	sub_8255DB50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82584600
	ctx.lr = 0x8258BB2C;
	sub_82584600(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bc34
	if (ctx.cr6.eq) goto loc_8258BC34;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bc34
	if (!ctx.cr6.eq) goto loc_8258BC34;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r26,r31,4
	r26.s64 = r31.s64 + 4;
loc_8258BB50:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bc28
	if (ctx.cr6.eq) goto loc_8258BC28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bc28
	if (!ctx.cr6.eq) goto loc_8258BC28;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bbb0
	if (ctx.cr6.eq) goto loc_8258BBB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8258bbb0
	if (ctx.cr6.eq) goto loc_8258BBB0;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bge cr6,0x8258bc10
	if (!ctx.cr6.lt) goto loc_8258BC10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553828
	ctx.lr = 0x8258BB90;
	sub_82553828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258BB9C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258BBA8;
	sub_8250AD28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
loc_8258BBB0:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bbc8
	if (ctx.cr6.eq) goto loc_8258BBC8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258bc1c
	if (!ctx.cr6.eq) goto loc_8258BC1C;
loc_8258BBC8:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258bb50
	if (!ctx.cr6.eq) goto loc_8258BB50;
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_8258BBEC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BBF8;
	sub_824E4368(ctx, base);
loc_8258BBF8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC04;
	sub_824E4368(ctx, base);
loc_8258BC04:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC10;
	sub_824E4368(ctx, base);
loc_8258BC10:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC1C;
	sub_824E4368(ctx, base);
loc_8258BC1C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC28;
	sub_824E4368(ctx, base);
loc_8258BC28:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC34;
	sub_824E4368(ctx, base);
loc_8258BC34:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC40;
	sub_824E4368(ctx, base);
loc_8258BC40:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BC4C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825A5B98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A5BA0;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-8736
	r28.s64 = ctx.r10.s64 + -8736;
	// bne cr6,0x825a5be0
	if (!ctx.cr6.eq) goto loc_825A5BE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-8752
	ctx.r5.s64 = ctx.r11.s64 + -8752;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,311
	ctx.r7.s64 = 311;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5BE0;
	sub_824EA978(ctx, base);
loc_825A5BE0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a5c24
	if (!ctx.cr6.eq) goto loc_825A5C24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,318
	ctx.r7.s64 = 318;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5C24;
	sub_824EA978(ctx, base);
loc_825A5C24:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eec18
	ctx.lr = 0x825A5C30;
	sub_824EEC18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825AA870) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x825aa9fc
	if (ctx.cr6.lt) goto loc_825AA9FC;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bge cr6,0x825aaab4
	if (!ctx.cr6.lt) goto loc_825AAAB4;
	// li r10,86
	ctx.r10.s64 = 86;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// sth r10,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bne cr6,0x825aa8b0
	if (!ctx.cr6.eq) goto loc_825AA8B0;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r8,r9,17,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
	// b 0x825aa8b8
	goto loc_825AA8B8;
loc_825AA8B0:
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r8,r9,16,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
loc_825AA8B8:
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r8,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,0,10,8
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r8.u64 & 0x400000);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aa910
	if (ctx.cr0.eq) goto loc_825AA910;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AA910:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aa928
	if (ctx.cr0.eq) goto loc_825AA928;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AA928:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,10,8
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r8.u64 & 0x400000);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aa97c
	if (ctx.cr0.eq) goto loc_825AA97C;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AA97C:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aa994
	if (ctx.cr0.eq) goto loc_825AA994;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AA994:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r8,r9,0,10,8
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r8.u64 & 0x400000);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825aa9e8
	if (ctx.cr0.eq) goto loc_825AA9E8;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_825AA9E8:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825aaab4
	if (ctx.cr0.eq) goto loc_825AAAB4;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x825aaaac
	goto loc_825AAAAC;
loc_825AA9FC:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// beq 0x825aaa24
	if (ctx.cr0.eq) goto loc_825AAA24;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AAA24:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aaa3c
	if (ctx.cr0.eq) goto loc_825AAA3C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AAA3C:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aaa60
	if (ctx.cr0.eq) goto loc_825AAA60;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AAA60:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825aaa78
	if (ctx.cr0.eq) goto loc_825AAA78;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825AAA78:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825aaa9c
	if (ctx.cr0.eq) goto loc_825AAA9C;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_825AAA9C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825aaab4
	if (ctx.cr0.eq) goto loc_825AAAB4;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
loc_825AAAAC:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_825AAAB4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B8C48) {
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
	ctx.lr = 0x825B8C50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwzx r27,r11,r3
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8c84
	if (ctx.cr0.eq) goto loc_825B8C84;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_825B8C84:
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r30,r28,7,29,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x7;
	// bl 0x82503ab8
	ctx.lr = 0x825B8C98;
	sub_82503AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8d88
	if (ctx.cr0.eq) goto loc_825B8D88;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r6,r11,31,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq 0x825b8e04
	if (ctx.cr0.eq) goto loc_825B8E04;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B8CB8:
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bge cr6,0x825b8cfc
	if (!ctx.cr6.lt) goto loc_825B8CFC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r28,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0xFF;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf. r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r31,r9,r31
	r31.u64 = ctx.r9.u64 | r31.u64;
	// bne 0x825b8cb8
	if (!ctx.cr0.eq) goto loc_825B8CB8;
loc_825B8CFC:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// subfic r7,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r7.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
loc_825B8D0C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b8e04
	if (ctx.cr6.eq) goto loc_825B8E04;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x825b8d3c
	if (!ctx.cr6.gt) goto loc_825B8D3C;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x825b8d60
	goto loc_825B8D60;
loc_825B8D3C:
	// srw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_825B8D60:
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// andc r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r31,r11,r31
	r31.u64 = ctx.r11.u64 | r31.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// b 0x825b8d0c
	goto loc_825B8D0C;
loc_825B8D88:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825b8dc0
	if (ctx.cr6.eq) goto loc_825B8DC0;
	// rlwinm r9,r28,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0xFF;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B8DA0:
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825b8da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B8DA0;
loc_825B8DC0:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x825b8e04
	if (!ctx.cr6.lt) goto loc_825B8E04;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// subfic r10,r30,4
	ctx.xer.ca = r30.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - r30.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r28,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0xFF;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B8DE8:
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r31,r10,r31
	r31.u64 = ctx.r10.u64 | r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825b8de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B8DE8;
loc_825B8E04:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r31,1,23,30
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE01);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x825b8e30
	if (ctx.cr6.eq) goto loc_825B8E30;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x825b8e34
	if (!ctx.cr6.eq) goto loc_825B8E34;
loc_825B8E30:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825B8E34:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b8e9c
	if (ctx.cr0.eq) goto loc_825B8E9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8e54
	if (ctx.cr0.eq) goto loc_825B8E54;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_825B8E54:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8e84
	if (ctx.cr0.eq) goto loc_825B8E84;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8e84
	if (ctx.cr0.eq) goto loc_825B8E84;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
loc_825B8E84:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r10,r11,26,13,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7F800) | (ctx.r10.u64 & 0xFFFFFFFFFFF807FF);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x825b8ed0
	goto loc_825B8ED0;
loc_825B8E9C:
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// beq 0x825b8eb8
	if (ctx.cr0.eq) goto loc_825B8EB8;
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
loc_825B8EB8:
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b8ec4
	if (ctx.cr0.eq) goto loc_825B8EC4;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_825B8EC4:
	// rlwimi r11,r9,11,13,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7F800) | (ctx.r11.u64 & 0xFFFFFFFFFFF807FF);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_825B8ED0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825CD6C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825CD6C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd6f0
	if (ctx.cr6.eq) goto loc_825CD6F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CD6EC;
	sub_825C7448(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_825CD6F0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x825cd73c
	if (!ctx.cr6.gt) goto loc_825CD73C;
	// addi r10,r6,-16
	ctx.r10.s64 = ctx.r6.s64 + -16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825CD724:
	// lfsu f0,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825cd724
	if (ctx.cr6.lt) goto loc_825CD724;
loc_825CD73C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825CEA90) {
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
	// bge cr6,0x825ceba8
	if (!ctx.cr6.lt) goto loc_825CEBA8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20244(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,20236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20236);
	ctx.f12.f64 = double(temp.f32);
loc_825CEAFC:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,30,2,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825ceafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CEAFC;
loc_825CEBA8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cebc4
	if (ctx.cr6.eq) goto loc_825CEBC4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CEBC4;
	sub_825C73B8(ctx, base);
loc_825CEBC4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cebe0
	if (ctx.cr6.eq) goto loc_825CEBE0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CEBE0;
	sub_825C7788(ctx, base);
loc_825CEBE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D3F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D3F78;
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
	// bne cr6,0x825d3fb4
	if (!ctx.cr6.eq) goto loc_825D3FB4;
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
	// li r7,2576
	ctx.r7.s64 = 2576;
	// bl 0x824ea978
	ctx.lr = 0x825D3FB4;
	sub_824EA978(ctx, base);
loc_825D3FB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825d3fd0
	if (ctx.cr6.eq) goto loc_825D3FD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3FD0;
	sub_824F0950(ctx, base);
loc_825D3FD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d400c
	if (ctx.cr6.eq) goto loc_825D400C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d400c
	if (ctx.cr6.eq) goto loc_825D400C;
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
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,208(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// bctrl 
	ctx.lr = 0x825D400C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D400C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D58C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,20332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D5D48) {
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
	ctx.lr = 0x825D5D50;
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
	// bne cr6,0x825d5d90
	if (!ctx.cr6.eq) goto loc_825D5D90;
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
	// li r7,4293
	ctx.r7.s64 = 4293;
	// bl 0x824ea978
	ctx.lr = 0x825D5D90;
	sub_824EA978(ctx, base);
loc_825D5D90:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6778
	ctx.lr = 0x825D5DA0;
	sub_825A6778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d5de8
	if (ctx.cr6.eq) goto loc_825D5DE8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d5de8
	if (ctx.cr6.eq) goto loc_825D5DE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5DBC;
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
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,260(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// bctrl 
	ctx.lr = 0x825D5DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5DE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DB820) {
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
	ctx.lr = 0x825DB850;
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
	// bl 0x825d1ca8
	ctx.lr = 0x825DB86C;
	sub_825D1CA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825db8a4
	if (ctx.cr6.eq) goto loc_825DB8A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825db8f0
	if (!ctx.cr6.eq) goto loc_825DB8F0;
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
	// li r7,1013
	ctx.r7.s64 = 1013;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DB8A0;
	sub_824EA978(ctx, base);
	// b 0x825db8f0
	goto loc_825DB8F0;
loc_825DB8A4:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DB8BC;
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
	// bl 0x825d1dd8
	ctx.lr = 0x825DB8D8;
	sub_825D1DD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x825db8ec
	if (!ctx.cr6.eq) goto loc_825DB8EC;
	// bl 0x825d8730
	ctx.lr = 0x825DB8E8;
	sub_825D8730(ctx, base);
	// b 0x825db8f0
	goto loc_825DB8F0;
loc_825DB8EC:
	// bl 0x825d8880
	ctx.lr = 0x825DB8F0;
	sub_825D8880(ctx, base);
loc_825DB8F0:
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

DEFINE_REX_FUNC(sub_825E2CA8) {
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
	ctx.lr = 0x825E2CB0;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lwz r30,184(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825e2d00
	if (!ctx.cr6.eq) goto loc_825E2D00;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x825e2d04
	goto loc_825E2D04;
loc_825E2D00:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_825E2D04:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r4,176(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 176);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,1536(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1536);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x825d4430
	ctx.lr = 0x825E2D20;
	sub_825D4430(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 2736);
	// lwz r4,236(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 236);
	// bl 0x82607f18
	ctx.lr = 0x825E2D4C;
	sub_82607F18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,5,21,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x7E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// rlwimi r10,r11,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E2D74;
	sub_82607F18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r9,104(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 104);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r9,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r10,172(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 172);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825e2db8
	if (!ctx.cr6.eq) goto loc_825E2DB8;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x825e2dd0
	goto loc_825E2DD0;
loc_825E2DB8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825e2dc8
	if (!ctx.cr6.eq) goto loc_825E2DC8;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x825e2dd0
	goto loc_825E2DD0;
loc_825E2DC8:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
loc_825E2DD0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 132);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r10,133(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 133);
	// rlwimi r11,r10,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r11,134(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 134);
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x825e2e94
	if (ctx.cr6.eq) goto loc_825E2E94;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x825e2e94
	if (ctx.cr6.eq) goto loc_825E2E94;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x825e2e94
	if (ctx.cr6.eq) goto loc_825E2E94;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x825e2e94
	if (ctx.cr6.eq) goto loc_825E2E94;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 128);
	// bl 0x825e05c8
	ctx.lr = 0x825E2E34;
	sub_825E05C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,129(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 129);
	// bl 0x825e05c8
	ctx.lr = 0x825E2E50;
	sub_825E05C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,130(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 130);
	// bl 0x825e05c8
	ctx.lr = 0x825E2E6C;
	sub_825E05C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,131(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 131);
	// bl 0x825e05c8
	ctx.lr = 0x825E2E88;
	sub_825E05C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825e2e9c
	goto loc_825E2E9C;
loc_825E2E94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_825E2E9C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,3824(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3824);
	f29.f64 = double(temp.f32);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f30,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	f30.f64 = double(temp.f32);
	// addi r27,r10,11616
	r27.s64 = ctx.r10.s64 + 11616;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r11,12,18,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFCFFF);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 2);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// rlwimi r8,r9,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 4);
	// rlwimi r8,r11,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 6);
	// rlwimi r11,r10,18,11,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1C0000) | (ctx.r11.u64 & 0xFFFFFFFFFFE3FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// rlwimi r10,r11,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// rlwimi r11,r10,24,6,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 12);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 14);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwimi r10,r11,29,1,2
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x60000000) | (ctx.r10.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lhz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 20);
	// rlwimi r11,r7,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r10,0,30,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 24);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x825e2fc4
	if (ctx.cr6.eq) goto loc_825E2FC4;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x825e2fc4
	if (ctx.cr6.eq) goto loc_825E2FC4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x825e2fc4
	if (ctx.cr6.eq) goto loc_825E2FC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,12592
	ctx.r5.s64 = ctx.r11.s64 + 12592;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3057
	ctx.r7.s64 = 3057;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2FC4;
	sub_824EA978(ctx, base);
loc_825E2FC4:
	// lhz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x825e3010
	if (ctx.cr6.eq) goto loc_825E3010;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x825e3010
	if (ctx.cr6.eq) goto loc_825E3010;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x825e3010
	if (ctx.cr6.eq) goto loc_825E3010;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,12504
	ctx.r5.s64 = ctx.r11.s64 + 12504;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3059
	ctx.r7.s64 = 3059;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3010;
	sub_824EA978(ctx, base);
loc_825E3010:
	// lhz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 28);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x825e305c
	if (ctx.cr6.eq) goto loc_825E305C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x825e305c
	if (ctx.cr6.eq) goto loc_825E305C;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x825e305c
	if (ctx.cr6.eq) goto loc_825E305C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,12416
	ctx.r5.s64 = ctx.r11.s64 + 12416;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3061
	ctx.r7.s64 = 3061;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E305C;
	sub_824EA978(ctx, base);
loc_825E305C:
	// lhz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,17
	ctx.r11.s64 = 17;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x825e3090
	if (!ctx.cr6.eq) goto loc_825E3090;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,16,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE0FFFF;
	// b 0x825e30b4
	goto loc_825E30B4;
loc_825E3090:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x825e30a4
	if (!ctx.cr6.eq) goto loc_825E30A4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x825e30b4
	goto loc_825E30B4;
loc_825E30A4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x825e30b8
	if (!ctx.cr6.eq) goto loc_825E30B8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
loc_825E30B4:
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_825E30B8:
	// lhz r9,26(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 26);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x825e30e4
	if (!ctx.cr6.eq) goto loc_825E30E4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,11,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC1FFFFF;
	// b 0x825e3108
	goto loc_825E3108;
loc_825E30E4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x825e30f8
	if (!ctx.cr6.eq) goto loc_825E30F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x825e3108
	goto loc_825E3108;
loc_825E30F8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x825e310c
	if (!ctx.cr6.eq) goto loc_825E310C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
loc_825E3108:
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_825E310C:
	// lhz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 28);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x825e3138
	if (!ctx.cr6.eq) goto loc_825E3138;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// b 0x825e3148
	goto loc_825E3148;
loc_825E3138:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x825e3150
	if (!ctx.cr6.eq) goto loc_825E3150;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r10,26,1,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C000000) | (ctx.r11.u64 & 0xFFFFFFFF83FFFFFF);
loc_825E3148:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x825e3164
	goto loc_825E3164;
loc_825E3150:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x825e3164
	if (!ctx.cr6.eq) goto loc_825E3164;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r11,26,1,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7C000000) | (ctx.r10.u64 & 0xFFFFFFFF83FFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_825E3164:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e31c0
	if (ctx.cr6.eq) goto loc_825E31C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825e31b4
	if (ctx.cr6.eq) goto loc_825E31B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825e31a0
	if (ctx.cr6.eq) goto loc_825E31A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3099
	ctx.r7.s64 = 3099;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E319C;
	sub_824EA978(ctx, base);
	// b 0x825e31d8
	goto loc_825E31D8;
loc_825E31A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x825e31d0
	goto loc_825E31D0;
loc_825E31B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x825e31c8
	goto loc_825E31C8;
loc_825E31C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_825E31C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_825E31D0:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_825E31D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8260D738) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8260b890
	sub_8260B890(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260DB98) {
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
	ctx.lr = 0x8260DBA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8260dbc4
	if (!ctx.cr6.eq) goto loc_8260DBC4;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8260DBC4:
	// rlwinm. r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260dbd4
	if (ctx.cr0.eq) goto loc_8260DBD4;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8260DBD4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8260dc90
	if (ctx.cr6.lt) goto loc_8260DC90;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r29,r11,20576
	r29.s64 = ctx.r11.s64 + 20576;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260b4a0
	ctx.lr = 0x8260DBEC;
	sub_8260B4A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8260dc90
	if (ctx.cr0.lt) goto loc_8260DC90;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,16268
	ctx.r4.s64 = 16268;
	// bl 0x8260b5b8
	ctx.lr = 0x8260DC0C;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260dc20
	if (ctx.cr0.eq) goto loc_8260DC20;
	// bl 0x8260d500
	ctx.lr = 0x8260DC18;
	sub_8260D500(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8260dc24
	goto loc_8260DC24;
loc_8260DC20:
	// li r30,0
	r30.s64 = 0;
loc_8260DC24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8260dc38
	if (!ctx.cr6.eq) goto loc_8260DC38;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8260dc88
	goto loc_8260DC88;
loc_8260DC38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260ace0
	ctx.lr = 0x8260DC40;
	sub_8260ACE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8260dc74
	if (ctx.cr0.lt) goto loc_8260DC74;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DC64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8260dc74
	if (ctx.cr0.lt) goto loc_8260DC74;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x8260dc88
	goto loc_8260DC88;
loc_8260DC74:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DC88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260DC88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260b538
	ctx.lr = 0x8260DC90;
	sub_8260B538(ctx, base);
loc_8260DC90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82612EB4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82612FE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82612FE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,472(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82610998
	ctx.lr = 0x8261300C;
	sub_82610998(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82613080
	if (!ctx.cr6.eq) goto loc_82613080;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82613080
	if (ctx.cr0.eq) goto loc_82613080;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826130e0
	if (ctx.cr6.eq) goto loc_826130E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,480(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 480);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8261304C:
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + r29.u64;
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r31,r7,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r31,r31,r10
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// sthx r8,r5,r7
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r8.u16);
	// bdnz 0x8261304c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261304C;
	// b 0x826130e0
	goto loc_826130E0;
loc_82613080:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826130e0
	if (ctx.cr6.eq) goto loc_826130E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,484(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 480);
loc_826130A8:
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + r29.u64;
	// lhz r31,2(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// divwu r30,r11,r9
	r30.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r30,r30,r9
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sthux r31,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r11.u32 = ea;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// bdnz 0x826130a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826130A8;
loc_826130E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826188D0) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-14148
	ctx.r10.s64 = ctx.r11.s64 + -14148;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_826188F4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82618914
	if (!ctx.cr0.eq) goto loc_82618914;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826188f4
	if (!ctx.cr6.eq) goto loc_826188F4;
loc_82618914:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82618944
	if (!ctx.cr0.eq) goto loc_82618944;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// bne cr6,0x8261892c
	if (!ctx.cr6.eq) goto loc_8261892C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261892C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82618940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261894c
	goto loc_8261894C;
loc_82618944:
	// bl 0x82617aa8
	ctx.lr = 0x82618948;
	sub_82617AA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8261894C:
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

DEFINE_REX_FUNC(sub_8261C9C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-13624
	ctx.r8.s64 = ctx.r11.s64 + -13624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,3704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r6,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r8,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626990) {
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
	// bl 0x826166f0
	ctx.lr = 0x826269B0;
	sub_826166F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826269f4
	if (ctx.cr0.eq) goto loc_826269F4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826269e0
	if (ctx.cr6.eq) goto loc_826269E0;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x826269e4
	goto loc_826269E4;
loc_826269E0:
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
loc_826269E4:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_826269F4:
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

DEFINE_REX_FUNC(sub_82628318) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r11,2440
	ctx.r11.s64 = ctx.r11.s64 + 2440;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82628F30) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x821aae70
	sub_821AAE70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82628F50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2496
	ctx.r11.s64 = ctx.r11.s64 + 2496;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826283d0
	ctx.lr = 0x82628F88;
	sub_826283D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82628f98
	if (ctx.cr0.eq) goto loc_82628F98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82628F98;
	sub_8264C3D0(ctx, base);
loc_82628F98:
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

DEFINE_REX_FUNC(sub_8262C710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8262C718;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8262c73c
	if (ctx.cr6.eq) goto loc_8262C73C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8262C73C:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8262c8d8
	if (ctx.cr6.gt) goto loc_8262C8D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8262c780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262C780;
	// bdzf 4*cr6+eq,0x8262c7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262C7A8;
	// bdzf 4*cr6+eq,0x8262c7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262C7DC;
	// bdzf 4*cr6+eq,0x8262c81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262C81C;
	// bne cr6,0x8262c868
	if (!ctx.cr6.eq) goto loc_8262C868;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// b 0x8262c8d0
	goto loc_8262C8D0;
loc_8262C780:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8262c8cc
	goto loc_8262C8CC;
loc_8262C7A8:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8262c8c8
	goto loc_8262C8C8;
loc_8262C7DC:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// b 0x8262c8c4
	goto loc_8262C8C4;
loc_8262C81C:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8262c8c0
	goto loc_8262C8C0;
loc_8262C868:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,140(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f9,-92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// beq cr6,0x8262c8d8
	if (ctx.cr6.eq) goto loc_8262C8D8;
	// lfs f9,140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
loc_8262C8C0:
	// stfs f10,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
loc_8262C8C4:
	// stfs f11,-68(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
loc_8262C8C8:
	// stfs f12,-72(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
loc_8262C8CC:
	// stfs f13,-76(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
loc_8262C8D0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
loc_8262C8D8:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8262ca88
	if (!ctx.cr6.eq) goto loc_8262CA88;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x8262ca20
	if (ctx.cr6.lt) goto loc_8262CA20;
	// addi r3,r29,-3
	ctx.r3.s64 = r29.s64 + -3;
	// addi r9,r28,12
	ctx.r9.s64 = r28.s64 + 12;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// subf r31,r30,r28
	r31.u64 = r28.u64 - r30.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
loc_8262C90C:
	// lfs f0,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8262c930
	if (ctx.cr6.eq) goto loc_8262C930;
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// b 0x8262c934
	goto loc_8262C934;
loc_8262C930:
	// stfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_8262C934:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8262c970
	if (ctx.cr6.eq) goto loc_8262C970;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8262c974
	goto loc_8262C974;
loc_8262C970:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8262C974:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8262c9b0
	if (ctx.cr6.eq) goto loc_8262C9B0;
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x8262c9b4
	goto loc_8262C9B4;
loc_8262C9B0:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_8262C9B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8262c9f0
	if (ctx.cr6.eq) goto loc_8262C9F0;
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x8262c9f4
	goto loc_8262C9F4;
loc_8262C9F0:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8262C9F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// subfc r8,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// blt cr6,0x8262c90c
	if (ctx.cr6.lt) goto loc_8262C90C;
loc_8262CA20:
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// bge cr6,0x8262cc68
	if (!ctx.cr6.lt) goto loc_8262CC68;
	// subf r8,r5,r29
	ctx.r8.u64 = r29.u64 - ctx.r5.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262CA3C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8262ca68
	if (ctx.cr6.eq) goto loc_8262CA68;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8262ca6c
	goto loc_8262CA6C;
loc_8262CA68:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8262CA6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subfc r8,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// bdnz 0x8262ca3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CA3C;
	// b 0x826a1d04
	return;
loc_8262CA88:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x8262cbf4
	if (ctx.cr6.lt) goto loc_8262CBF4;
	// addi r31,r29,-3
	r31.s64 = r29.s64 + -3;
	// addi r8,r28,12
	ctx.r8.s64 = r28.s64 + 12;
	// addi r7,r30,4
	ctx.r7.s64 = r30.s64 + 4;
	// subf r3,r30,r28
	ctx.r3.u64 = r28.u64 - r30.u64;
loc_8262CAA0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsx f11,r10,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// beq cr6,0x8262cadc
	if (ctx.cr6.eq) goto loc_8262CADC;
	// lfs f13,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// b 0x8262cae0
	goto loc_8262CAE0;
loc_8262CADC:
	// stfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
loc_8262CAE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// subfc r9,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsx f11,r11,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x8262cb2c
	if (ctx.cr6.eq) goto loc_8262CB2C;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8262cb30
	goto loc_8262CB30;
loc_8262CB2C:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8262CB30:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// subfc r9,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsx f11,r11,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x8262cb7c
	if (ctx.cr6.eq) goto loc_8262CB7C;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// b 0x8262cb80
	goto loc_8262CB80;
loc_8262CB7C:
	// stfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_8262CB80:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// subfc r9,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsx f11,r11,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x8262cbcc
	if (ctx.cr6.eq) goto loc_8262CBCC;
	// lfs f13,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x8262cbd0
	goto loc_8262CBD0;
loc_8262CBCC:
	// stfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_8262CBD0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// subfc r10,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, ctx.xer);
	// blt cr6,0x8262caa0
	if (ctx.cr6.lt) goto loc_8262CAA0;
loc_8262CBF4:
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// bge cr6,0x8262cc68
	if (!ctx.cr6.lt) goto loc_8262CC68;
	// subf r8,r5,r29
	ctx.r8.u64 = r29.u64 - ctx.r5.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r30,r28
	ctx.r7.u64 = r28.u64 - r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262CC10:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfsx f13,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsx f11,r10,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x8262cc4c
	if (ctx.cr6.eq) goto loc_8262CC4C;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8262cc50
	goto loc_8262CC50;
loc_8262CC4C:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8262CC50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subfc r10,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// bdnz 0x8262cc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262CC10;
loc_8262CC68:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8265A8E8) {
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
	ctx.lr = 0x8265A8F0;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,20(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r3,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r4,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// lis r11,-517
	ctx.r11.s64 = -33882112;
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// ori r11,r11,65530
	ctx.r11.u64 = ctx.r11.u64 | 65530;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a95c
	if (!ctx.cr6.eq) goto loc_8265A95C;
	// lwz r3,420(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265a948
	if (!ctx.cr0.eq) goto loc_8265A948;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265A948:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82660508
	ctx.lr = 0x8265A958;
	sub_82660508(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265A95C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,400(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 400);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8265d7f8
	ctx.lr = 0x8265A970;
	sub_8265D7F8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r21,1
	r21.s64 = 1;
	// blt cr6,0x8265a994
	if (ctx.cr6.lt) goto loc_8265A994;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8265a9ac
	goto loc_8265A9AC;
loc_8265A994:
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// b 0x8265a9ac
	goto loc_8265A9AC;
loc_8265A99C:
	// lwz r26,88(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 88);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
loc_8265A9AC:
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a99c
	if (!ctx.cr6.eq) goto loc_8265A99C;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8265b4e4
	if (ctx.cr6.lt) goto loc_8265B4E4;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8265abf4
	if (ctx.cr6.gt) goto loc_8265ABF4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8265aa6c
	if (ctx.cr6.eq) goto loc_8265AA6C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8265aa6c
	if (ctx.cr6.lt) goto loc_8265AA6C;
	// beq cr6,0x8265b224
	if (ctx.cr6.eq) goto loc_8265B224;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8265b018
	if (ctx.cr6.lt) goto loc_8265B018;
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// lwz r10,428(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 428);
	// addi r11,r19,424
	ctx.r11.s64 = r19.s64 + 424;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ld r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265aa64
	if (ctx.cr6.eq) goto loc_8265AA64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AA64:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AA6C:
	// rlwinm. r11,r10,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265aac4
	if (!ctx.cr0.eq) goto loc_8265AAC4;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8265aa9c
	goto loc_8265AA9C;
loc_8265AA94:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8265AA9C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8265aa94
	if (!ctx.cr0.eq) goto loc_8265AA94;
	// b 0x8265aab4
	goto loc_8265AAB4;
loc_8265AAA8:
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
loc_8265AAB4:
	// lwz r11,396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265aaa8
	if (ctx.cr0.eq) goto loc_8265AAA8;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_8265AAC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r26,280
	ctx.r3.s64 = r26.s64 + 280;
	// addi r31,r26,136
	r31.s64 = r26.s64 + 136;
	// addi r30,r19,380
	r30.s64 = r19.s64 + 380;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8265AAF8:
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265ab50
	if (ctx.cr6.eq) goto loc_8265AB50;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// lwz r25,396(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 396);
	// lbz r24,0(r22)
	r24.u64 = REX_LOAD_U8(r22.u32 + 0);
	// slw r23,r21,r6
	r23.u64 = ctx.r6.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r6,r25,5,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0x1;
	// and. r25,r23,r24
	r25.u64 = r23.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// or r29,r6,r29
	r29.u64 = ctx.r6.u64 | r29.u64;
	// beq 0x8265ab50
	if (ctx.cr0.eq) goto loc_8265AB50;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8265ab50
	if (ctx.cr6.eq) goto loc_8265AB50;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_8265AB50:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265aaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265AAF8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8265abd0
	if (!ctx.cr6.eq) goto loc_8265ABD0;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265AB8C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265abc0
	if (ctx.cr6.eq) goto loc_8265ABC0;
	// lwz r9,396(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8265abc0
	if (ctx.cr0.eq) goto loc_8265ABC0;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8265ABC0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265ab8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265AB8C;
loc_8265ABD0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8265ABD8:
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 12);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265ABF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265ABF4:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8265b224
	if (ctx.cr6.eq) goto loc_8265B224;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8265b018
	if (ctx.cr6.eq) goto loc_8265B018;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// rlwinm r11,r10,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bgt cr6,0x8265ad84
	if (ctx.cr6.gt) goto loc_8265AD84;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x8265ad54
	if (ctx.cr6.eq) goto loc_8265AD54;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265acf8
	if (ctx.cr6.eq) goto loc_8265ACF8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8265acb8
	if (ctx.cr6.eq) goto loc_8265ACB8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8265ac80
	if (ctx.cr6.eq) goto loc_8265AC80;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,396(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 396);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265ac64
	if (ctx.cr6.eq) goto loc_8265AC64;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AC64:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82659f28
	ctx.lr = 0x8265AC7C;
	sub_82659F28(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AC80:
	// lwz r11,396(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 396);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265ac98
	if (ctx.cr6.eq) goto loc_8265AC98;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AC98:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8265acac
	if (ctx.cr6.eq) goto loc_8265ACAC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
loc_8265ACAC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82657c38
	ctx.lr = 0x8265ACB4;
	sub_82657C38(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265ACB8:
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,28(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b4e4
	if (!ctx.cr0.eq) goto loc_8265B4E4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826592b0
	ctx.lr = 0x8265ACF4;
	sub_826592B0(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265ACF8:
	// lwz r11,396(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 396);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,28(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r17,24(r19)
	REX_STORE_U32(r19.u32 + 24, r17.u32);
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r19)
	REX_STORE_U32(r19.u32 + 20, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82659168
	ctx.lr = 0x8265AD50;
	sub_82659168(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AD54:
	// lwz r11,396(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 396);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265ad6c
	if (ctx.cr6.eq) goto loc_8265AD6C;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AD6C:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82655560
	ctx.lr = 0x8265AD80;
	sub_82655560(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AD84:
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// beq cr6,0x8265af8c
	if (ctx.cr6.eq) goto loc_8265AF8C;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x8265af1c
	if (ctx.cr6.eq) goto loc_8265AF1C;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8265b4e4
	if (ctx.cr6.lt) goto loc_8265B4E4;
	// lbz r28,0(r27)
	r28.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bge cr6,0x8265b4e4
	if (!ctx.cr6.lt) goto loc_8265B4E4;
	// addi r11,r28,95
	ctx.r11.s64 = r28.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r30,r17
	r30.u64 = r17.u64;
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x8265ade0
	goto loc_8265ADE0;
loc_8265ADD8:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8265ADE0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8265add8
	if (!ctx.cr0.eq) goto loc_8265ADD8;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_8265ADF0:
	// stwu r31,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, r31.u32);
	r26.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// slw r10,r21,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r3.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r28,255
	ctx.cr6.compare<uint32_t>(r28.u32, 255, ctx.xer);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x8265ae30
	if (!ctx.cr6.eq) goto loc_8265AE30;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8265ae38
	goto loc_8265AE38;
loc_8265AE30:
	// slw r11,r21,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r21.u32 << (r28.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8265AE38:
	// rlwinm r10,r11,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// lbz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 392);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r8,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8265aee8
	if (ctx.cr6.eq) goto loc_8265AEE8;
	// addi r10,r28,4
	ctx.r10.s64 = r28.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x8265ae74
	if (ctx.cr6.eq) goto loc_8265AE74;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8265ae78
	goto loc_8265AE78;
loc_8265AE74:
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
loc_8265AE78:
	// stb r11,392(r31)
	REX_STORE_U8(r31.u32 + 392, ctx.r11.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8265aed8
	if (ctx.cr6.eq) goto loc_8265AED8;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8265AE88:
	// addi r10,r11,95
	ctx.r10.s64 = ctx.r11.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265aec4
	if (ctx.cr6.eq) goto loc_8265AEC4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8265aeac
	if (!ctx.cr6.eq) goto loc_8265AEAC;
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x8265aeb4
	goto loc_8265AEB4;
loc_8265AEAC:
	// slw r10,r21,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8265AEB4:
	// lbz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 392);
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265aed4
	if (ctx.cr0.eq) goto loc_8265AED4;
loc_8265AEC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8265ae88
	if (ctx.cr6.lt) goto loc_8265AE88;
	// b 0x8265aed8
	goto loc_8265AED8;
loc_8265AED4:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
loc_8265AED8:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r30,r21
	r30.u64 = r21.u64;
	// rlwimi r11,r9,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265AEE8:
	// lwz r31,88(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8265adf0
	if (!ctx.cr6.eq) goto loc_8265ADF0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82653a98
	ctx.lr = 0x8265AF18;
	sub_82653A98(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AF1C:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8265b4e4
	if (!ctx.cr6.lt) goto loc_8265B4E4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8265af3c
	if (!ctx.cr6.eq) goto loc_8265AF3C;
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b4e4
	if (!ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AF3C:
	// lwz r11,396(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 396);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265af54
	if (ctx.cr6.eq) goto loc_8265AF54;
	// lwz r11,396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 396);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AF54:
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// ori r4,r4,1226
	ctx.r4.u64 = ctx.r4.u64 | 1226;
	// bl 0x82654028
	ctx.lr = 0x8265AF64;
	sub_82654028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265b4e4
	if (ctx.cr0.lt) goto loc_8265B4E4;
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,740(r19)
	REX_STORE_U32(r19.u32 + 740, ctx.r11.u32);
	// bl 0x82654550
	ctx.lr = 0x8265AF88;
	sub_82654550(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265AF8C:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8265b4e4
	if (!ctx.cr6.lt) goto loc_8265B4E4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8265afb4
	if (!ctx.cr6.eq) goto loc_8265AFB4;
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b4e4
	if (!ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AFB4:
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265b4e4
	if (!ctx.cr0.eq) goto loc_8265B4E4;
	// lwz r10,28(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8265afd4
	if (!ctx.cr6.eq) goto loc_8265AFD4;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
loc_8265AFD4:
	// cmplwi cr6,r8,24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 24, ctx.xer);
	// blt cr6,0x8265b4e4
	if (ctx.cr6.lt) goto loc_8265B4E4;
	// addi r3,r19,108
	ctx.r3.s64 = r19.s64 + 108;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8265AFEC;
	sub_826A1E70(ctx, base);
	// addi r3,r19,116
	ctx.r3.s64 = r19.s64 + 116;
	// addi r4,r26,44
	ctx.r4.s64 = r26.s64 + 44;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x8265AFFC;
	sub_826A1E70(ctx, base);
	// addi r3,r19,152
	ctx.r3.s64 = r19.s64 + 152;
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x8265B00C;
	sub_826A1E70(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8265a750
	ctx.lr = 0x8265B014;
	sub_8265A750(ctx, base);
	// b 0x8265b4e4
	goto loc_8265B4E4;
loc_8265B018:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// ble cr6,0x8265b4e4
	if (!ctx.cr6.gt) goto loc_8265B4E4;
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// addi r24,r8,-5
	r24.s64 = ctx.r8.s64 + -5;
	// lwz r25,0(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r23,r27,5
	r23.s64 = r27.s64 + 5;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8265b4e4
	if (!ctx.cr6.lt) goto loc_8265B4E4;
	// lwz r11,248(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 248);
	// addi r31,r19,248
	r31.s64 = r19.s64 + 248;
	// mr r26,r17
	r26.u64 = r17.u64;
	// b 0x8265b094
	goto loc_8265B094;
loc_8265B048:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r30,r28,-92
	r30.s64 = r28.s64 + -92;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8265b090
	if (!ctx.cr6.eq) goto loc_8265B090;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265b0c0
	if (ctx.cr6.eq) goto loc_8265B0C0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8265b090
	if (!ctx.cr6.eq) goto loc_8265B090;
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b090
	if (ctx.cr0.eq) goto loc_8265B090;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8265B090:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8265B094:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8265b0a8
	if (ctx.cr6.eq) goto loc_8265B0A8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne 0x8265b048
	if (!ctx.cr0.eq) goto loc_8265B048;
loc_8265B0A8:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x8265b108
	goto loc_8265B108;
loc_8265B0C0:
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b108
	if (!ctx.cr0.eq) goto loc_8265B108;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// b 0x8265b0e4
	goto loc_8265B0E4;
loc_8265B0DC:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8265B0E4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8265b0dc
	if (!ctx.cr0.eq) goto loc_8265B0DC;
	// b 0x8265b0fc
	goto loc_8265B0FC;
loc_8265B0F0:
	// lwz r30,88(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
loc_8265B0FC:
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b0f0
	if (ctx.cr0.eq) goto loc_8265B0F0;
loc_8265B108:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r4,r30,280
	ctx.r4.s64 = r30.s64 + 280;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// addi r31,r19,380
	r31.s64 = r19.s64 + 380;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8265B13C:
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265b194
	if (ctx.cr6.eq) goto loc_8265B194;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// lwz r27,396(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 396);
	// lbz r26,0(r22)
	r26.u64 = REX_LOAD_U8(r22.u32 + 0);
	// slw r25,r21,r7
	r25.u64 = ctx.r7.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r7,r27,5,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0x1;
	// and. r27,r25,r26
	r27.u64 = r25.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// or r29,r7,r29
	r29.u64 = ctx.r7.u64 | r29.u64;
	// beq 0x8265b194
	if (ctx.cr0.eq) goto loc_8265B194;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265b194
	if (ctx.cr6.eq) goto loc_8265B194;
	// clrldi r7,r24,32
	ctx.r7.u64 = r24.u64 & 0xFFFFFFFF;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8265B194:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B13C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8265b214
	if (!ctx.cr6.eq) goto loc_8265B214;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265B1D0:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265b204
	if (ctx.cr6.eq) goto loc_8265B204;
	// lwz r9,396(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8265b204
	if (ctx.cr0.eq) goto loc_8265B204;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r8,r24,32
	ctx.r8.u64 = r24.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8265B204:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B1D0;
loc_8265B214:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8265abd8
	goto loc_8265ABD8;
loc_8265B224:
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b238
	if (ctx.cr0.eq) goto loc_8265B238;
	// lwz r14,396(r19)
	r14.u64 = REX_LOAD_U32(r19.u32 + 396);
	// b 0x8265b25c
	goto loc_8265B25C;
loc_8265B238:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r11,r19,380
	ctx.r11.s64 = r19.s64 + 380;
loc_8265B240:
	// lwz r14,0(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// bne cr6,0x8265b264
	if (!ctx.cr6.eq) goto loc_8265B264;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8265b240
	if (ctx.cr6.lt) goto loc_8265B240;
loc_8265B25C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
loc_8265B264:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x8265b4e4
	if (!ctx.cr6.gt) goto loc_8265B4E4;
	// lbz r22,0(r27)
	r22.u64 = REX_LOAD_U8(r27.u32 + 0);
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bgt cr6,0x8265b4e4
	if (ctx.cr6.gt) goto loc_8265B4E4;
	// mulli r11,r22,5
	ctx.r11.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(5));
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8265b4e4
	if (!ctx.cr6.gt) goto loc_8265B4E4;
	// mr r16,r17
	r16.u64 = r17.u64;
	// mr r20,r17
	r20.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// add r15,r11,r10
	r15.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r11,r9
	r29.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8265b410
	if (ctx.cr6.eq) goto loc_8265B410;
	// addi r19,r1,208
	r19.s64 = ctx.r1.s64 + 208;
loc_8265B2B0:
	// lwz r18,0(r21)
	r18.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// lbz r28,4(r21)
	r28.u64 = REX_LOAD_U8(r21.u32 + 4);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// rlwinm. r11,r28,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b4e4
	if (ctx.cr0.eq) goto loc_8265B4E4;
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r25,0
	r25.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// addi r26,r11,248
	r26.s64 = ctx.r11.s64 + 248;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8265b3ac
	if (ctx.cr6.eq) goto loc_8265B3AC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8265b3ac
	if (ctx.cr0.eq) goto loc_8265B3AC;
	// add r10,r27,r20
	ctx.r10.u64 = r27.u64 + r20.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_8265B30C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r31,r24,-92
	r31.s64 = r24.s64 + -92;
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8265b3a4
	if (!ctx.cr6.eq) goto loc_8265B3A4;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265b34c
	if (ctx.cr0.eq) goto loc_8265B34C;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b358
	if (ctx.cr0.eq) goto loc_8265B358;
	// li r16,1
	r16.s64 = 1;
	// b 0x8265b358
	goto loc_8265B358;
loc_8265B34C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8265b358
	if (!ctx.cr6.eq) goto loc_8265B358;
	// mr r23,r31
	r23.u64 = r31.u64;
loc_8265B358:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B36C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & r28.u64;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265b3a4
	if (ctx.cr0.eq) goto loc_8265B3A4;
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// stwu r31,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,1
	r25.s64 = 1;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// beq 0x8265b3ac
	if (ctx.cr0.eq) goto loc_8265B3AC;
loc_8265B3A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8265b30c
	if (!ctx.cr6.eq) goto loc_8265B30C;
loc_8265B3AC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8265b3ec
	if (ctx.cr6.eq) goto loc_8265B3EC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8265b3ec
	if (!ctx.cr6.eq) goto loc_8265B3EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8265b3ec
	if (!ctx.cr6.eq) goto loc_8265B3EC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8265b3ec
	if (ctx.cr6.eq) goto loc_8265B3EC;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r19,4
	ctx.r3.s64 = r19.s64 + 4;
	// bl 0x8269cc20
	ctx.lr = 0x8265B3E0;
	sub_8269CC20(ctx, base);
	// stw r23,0(r19)
	REX_STORE_U32(r19.u32 + 0, r23.u32);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
loc_8265B3EC:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r21,r21,5
	r21.s64 = r21.s64 + 5;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(r17.u32, r22.u32, ctx.xer);
	// blt cr6,0x8265b2b0
	if (ctx.cr6.lt) goto loc_8265B2B0;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,0
	r17.s64 = 0;
	// lwz r31,524(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r19,516(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8265B410:
	// add. r11,r27,r20
	ctx.r11.u64 = r27.u64 + r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b438
	if (!ctx.cr0.eq) goto loc_8265B438;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8265b438
	if (ctx.cr6.eq) goto loc_8265B438;
	// cmplwi cr6,r18,5
	ctx.cr6.compare<uint32_t>(r18.u32, 5, ctx.xer);
	// bne cr6,0x8265b4e4
	if (!ctx.cr6.eq) goto loc_8265B4E4;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x8265b4e4
	if (ctx.cr6.eq) goto loc_8265B4E4;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8265b43c
	goto loc_8265B43C;
loc_8265B438:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
loc_8265B43C:
	// lwz r8,100(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 100);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r8,24(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 24);
	// stb r8,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// beq 0x8265b460
	if (ctx.cr0.eq) goto loc_8265B460;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8265B460:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265b46c
	if (ctx.cr0.eq) goto loc_8265B46C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8265B46C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8265b480
	if (!ctx.cr6.eq) goto loc_8265B480;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x8265b490
	goto loc_8265B490;
loc_8265B480:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265b490
	if (ctx.cr6.eq) goto loc_8265B490;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_8265B490:
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r20.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r15,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r15.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r17,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r17.u32);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// sth r17,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, r17.u16);
	// stb r10,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r10.u8);
	// bl 0x82652bb8
	ctx.lr = 0x8265B4E4;
	sub_82652BB8(ctx, base);
loc_8265B4E4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(__restgprlr_30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(sub_826A2618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826A2620;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// stw r5,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r4,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r5,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x826a3a68
	ctx.lr = 0x826A265C;
	sub_826A3A68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A2674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__savevmx_77) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AE5A8) {
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
	ctx.lr = 0x826AE5B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// bl 0x826a3a68
	ctx.lr = 0x826AE5D0;
	sub_826A3A68(ctx, base);
	// lwz r25,124(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x826a3a68
	ctx.lr = 0x826AE5D8;
	sub_826A3A68(ctx, base);
	// lwz r24,128(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x826a3a68
	ctx.lr = 0x826AE5E0;
	sub_826A3A68(ctx, base);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r30.u32);
	// bl 0x826a3a68
	ctx.lr = 0x826AE5E8;
	sub_826A3A68(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r28,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// bl 0x826b2650
	ctx.lr = 0x826AE618;
	sub_826B2650(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2940
	ctx.lr = 0x826AE624;
	sub_826A2940(ctx, base);
	// bl 0x826a3a68
	ctx.lr = 0x826AE628;
	sub_826A3A68(ctx, base);
	// stw r25,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r25.u32);
	// bl 0x826a3a68
	ctx.lr = 0x826AE630;
	sub_826A3A68(ctx, base);
	// stw r24,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ae660
	if (ctx.cr6.eq) goto loc_826AE660;
	// bl 0x826a28e8
	ctx.lr = 0x826AE644;
	sub_826A28E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826ae660
	if (ctx.cr0.eq) goto loc_826AE660;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ae500
	ctx.lr = 0x826AE658;
	sub_826AE500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AE660:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826B40A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82794354
	ctx.lr = 0x826B40BC;
	__imp__NtCancelTimer(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826b40d0
	if (!ctx.cr0.lt) goto loc_826B40D0;
	// bl 0x823f0020
	ctx.lr = 0x826B40C8;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b40d4
	goto loc_826B40D4;
loc_826B40D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B40D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B5CF8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b5d1c
	if (!ctx.cr6.eq) goto loc_826B5D1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x826b5d48
	goto loc_826B5D48;
loc_826B5D1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
loc_826B5D48:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
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
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,164(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,168(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,188(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,204(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,208(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,224(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,228(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,244(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// bl 0x826b5bf8
	ctx.lr = 0x826B5E9C;
	sub_826B5BF8(ctx, base);
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

DEFINE_REX_FUNC(sub_826C3328) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C3450) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82793e64
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C3528) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x82793e24
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C36E8) {
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
	ctx.lr = 0x826C3714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | r30.u64;
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3734;
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

DEFINE_REX_FUNC(sub_826C75A0) {
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
	ctx.lr = 0x826C75A8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// std r30,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r30.u64);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// mr r23,r30
	r23.u64 = r30.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lbz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 96);
	// bl 0x826c6cf0
	ctx.lr = 0x826C7608;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7878
	if (ctx.cr6.lt) goto loc_826C7878;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c7630
	if (!ctx.cr6.eq) goto loc_826C7630;
loc_826C7620:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C7630:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c76ec
	if (ctx.cr6.eq) goto loc_826C76EC;
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c765c
	if (ctx.cr6.eq) goto loc_826C765C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r30.u32);
	// b 0x826c7660
	goto loc_826C7660;
loc_826C765C:
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
loc_826C7660:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,36(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bctrl 
	ctx.lr = 0x826C768C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7878
	if (ctx.cr6.lt) goto loc_826C7878;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c76c8
	if (ctx.cr6.eq) goto loc_826C76C8;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C76B4;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x826c68d8
	ctx.lr = 0x826C76C8;
	sub_826C68D8(ctx, base);
loc_826C76C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c68d8
	ctx.lr = 0x826C76D8;
	sub_826C68D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826C76EC:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c7620
	if (ctx.cr6.eq) goto loc_826C7620;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C7720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7874
	if (ctx.cr6.lt) goto loc_826C7874;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,1
	r27.s64 = 1;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c7784
	if (ctx.cr6.eq) goto loc_826C7784;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826c7758
	if (!ctx.cr6.eq) goto loc_826C7758;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_826C7758:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C777C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7878
	if (ctx.cr6.lt) goto loc_826C7878;
loc_826C7784:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ld r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r7,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r7.u64);
	// ld r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r6,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r6.u64);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r4.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c77f0
	if (!ctx.cr6.eq) goto loc_826C77F0;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826c77f0
	if (!ctx.cr6.eq) goto loc_826C77F0;
	// stw r27,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r27.u32);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x826c7800
	goto loc_826C7800;
loc_826C77F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_826C7800:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826c7854
	if (!ctx.cr6.eq) goto loc_826C7854;
	// stw r27,0(r20)
	REX_STORE_U32(r20.u32 + 0, r27.u32);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// lbz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 96);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// slw r4,r27,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C7854:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826c7878
	if (!ctx.cr6.eq) goto loc_826C7878;
	// stw r27,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C7874:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_826C7878:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826DF058) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826DF060;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x826de4e0
	ctx.lr = 0x826DF08C;
	sub_826DE4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df15c
	if (ctx.cr6.lt) goto loc_826DF15C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826df0b0
	if (!ctx.cr6.eq) goto loc_826DF0B0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_826DF0B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826df0e8
	if (!ctx.cr6.gt) goto loc_826DF0E8;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r29,r11,1
	r29.u64 = ctx.r11.u64 | 1;
loc_826DF0C4:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826deeb8
	ctx.lr = 0x826DF0D8;
	sub_826DEEB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df15c
	if (ctx.cr6.lt) goto loc_826DF15C;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bne cr6,0x826df0c4
	if (!ctx.cr6.eq) goto loc_826DF0C4;
loc_826DF0E8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd358
	ctx.lr = 0x826DF0FC;
	sub_826DD358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df15c
	if (ctx.cr6.lt) goto loc_826DF15C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826df120
	if (!ctx.cr6.eq) goto loc_826DF120;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_826DF120:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826de310
	ctx.lr = 0x826DF148;
	sub_826DE310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df15c
	if (ctx.cr6.lt) goto loc_826DF15C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826de610
	ctx.lr = 0x826DF15C;
	sub_826DE610(ctx, base);
loc_826DF15C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826E3960) {
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
	ctx.lr = 0x826E3968;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,428(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r26,56(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e39a0
	if (!ctx.cr6.gt) goto loc_826E39A0;
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826e39b8
	if (ctx.cr6.gt) goto loc_826E39B8;
loc_826E39A0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_826E39B8:
	// lhz r10,730(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 730);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r11,308(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 308);
	// lwz r8,304(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 304);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e39d4
	if (ctx.cr6.lt) goto loc_826E39D4;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_826E39D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826e3b30
	if (!ctx.cr6.gt) goto loc_826E3B30;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// subfic r27,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	r27.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f30,10608(r10)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// clrlwi r21,r5,24
	r21.u64 = ctx.r5.u32 & 0xFF;
	// lfs f31,8516(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8516);
	f31.f64 = double(temp.f32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r22,r11,15784
	r22.s64 = ctx.r11.s64 + 15784;
loc_826E3A04:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r31,r23
	r31.u64 = r23.u64;
	// lwz r30,-4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + -4);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e3a1c
	if (ctx.cr6.lt) goto loc_826E3A1C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_826E3A1C:
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r8,436(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 436);
	// beq cr6,0x826e3a34
	if (ctx.cr6.eq) goto loc_826E3A34;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x826e3a38
	goto loc_826E3A38;
loc_826E3A34:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_826E3A38:
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// lwzx r7,r9,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lbz r9,180(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 180);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r10,296(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 296);
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x826e3a70
	if (ctx.cr0.lt) goto loc_826E3A70;
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bge cr6,0x826e3a70
	if (!ctx.cr6.lt) goto loc_826E3A70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826e3a94
	goto loc_826E3A94;
loc_826E3A70:
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
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x8269f778
	ctx.lr = 0x826E3A90;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_826E3A94:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bge cr6,0x826e3b24
	if (!ctx.cr6.lt) goto loc_826E3B24;
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x826e3af8
	if (ctx.cr6.lt) goto loc_826E3AF8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-3
	ctx.r9.s64 = r31.s64 + -3;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_826E3ABC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x826e3abc
	if (ctx.cr6.lt) goto loc_826E3ABC;
loc_826E3AF8:
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bge cr6,0x826e3b24
	if (!ctx.cr6.lt) goto loc_826E3B24;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826E3B14:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826e3b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E3B14;
loc_826E3B24:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x826e3a04
	if (!ctx.cr0.eq) goto loc_826E3A04;
loc_826E3B30:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826F79B8) {
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
	ctx.lr = 0x826F79C0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// ble cr6,0x826f7a40
	if (!ctx.cr6.gt) goto loc_826F7A40;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r28,r10,r6
	r28.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_826F79DC:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826f7a40
	if (!ctx.cr6.lt) goto loc_826F7A40;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// blt cr6,0x826f7a30
	if (ctx.cr6.lt) goto loc_826F7A30;
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_826F7A04:
	// lwzu r31,-4(r10)
	ea = -4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r26,r31
	r26.s64 = r31.s32;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// mulld r30,r26,r30
	r30.s64 = static_cast<int64_t>(r26.u64 * r30.u64);
	// sradi r30,r30,30
	ctx.xer.ca = (r30.s64 < 0) & ((r30.u64 & 0x3FFFFFFF) != 0);
	r30.s64 = r30.s64 >> 30;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bdnz 0x826f7a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F7A04;
loc_826F7A30:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f79dc
	if (ctx.cr6.lt) goto loc_826F79DC;
loc_826F7A40:
	// add r28,r5,r7
	r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f7ac0
	if (!ctx.cr6.lt) goto loc_826F7AC0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r3,r6
	r30.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r29,r5,r10
	r29.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_826F7A6C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// ble cr6,0x826f7ab4
	if (!ctx.cr6.gt) goto loc_826F7AB4;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_826F7A88:
	// lwzu r6,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r6,r6,r3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x826f7a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F7A88;
loc_826F7AB4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x826f7a6c
	if (!ctx.cr0.eq) goto loc_826F7A6C;
loc_826F7AC0:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x826f7b1c
	if (!ctx.cr0.gt) goto loc_826F7B1C;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_826F7AE4:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826f7ae4
	if (ctx.cr6.lt) goto loc_826F7AE4;
loc_826F7B1C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r5,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8270C158) {
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
	ctx.lr = 0x8270C160;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,2
	r25.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8270c234
	if (!ctx.cr6.eq) goto loc_8270C234;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// bge cr6,0x8270c1f4
	if (!ctx.cr6.lt) goto loc_8270C1F4;
loc_8270C19C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c1f4
	if (ctx.cr6.eq) goto loc_8270C1F4;
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
	// bge 0x8270c1e4
	if (!ctx.cr0.lt) goto loc_8270C1E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C1E4;
	sub_82725E38(ctx, base);
loc_8270C1E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c19c
	if (ctx.cr6.gt) goto loc_8270C19C;
loc_8270C1F4:
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
	// bge 0x8270c22c
	if (!ctx.cr0.lt) goto loc_8270C22C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C22C;
	sub_82725E38(ctx, base);
loc_8270C22C:
	// stw r30,448(r28)
	REX_STORE_U32(r28.u32 + 448, r30.u32);
	// b 0x8270c314
	goto loc_8270C314;
loc_8270C234:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270c298
	if (!ctx.cr6.lt) goto loc_8270C298;
loc_8270C240:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c298
	if (ctx.cr6.eq) goto loc_8270C298;
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
	// bge 0x8270c288
	if (!ctx.cr0.lt) goto loc_8270C288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C288;
	sub_82725E38(ctx, base);
loc_8270C288:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c240
	if (ctx.cr6.gt) goto loc_8270C240;
loc_8270C298:
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
	// bge 0x8270c2d0
	if (!ctx.cr0.lt) goto loc_8270C2D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C2D0;
	sub_82725E38(ctx, base);
loc_8270C2D0:
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,448(r28)
	REX_STORE_U32(r28.u32 + 448, r27.u32);
	// bne cr6,0x8270c2e8
	if (!ctx.cr6.eq) goto loc_8270C2E8;
	// stw r26,448(r28)
	REX_STORE_U32(r28.u32 + 448, r26.u32);
	// b 0x8270c314
	goto loc_8270C314;
loc_8270C2E8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8270c2f8
	if (!ctx.cr6.eq) goto loc_8270C2F8;
	// stw r26,3968(r28)
	REX_STORE_U32(r28.u32 + 3968, r26.u32);
	// b 0x8270c30c
	goto loc_8270C30C;
loc_8270C2F8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8270c308
	if (!ctx.cr6.eq) goto loc_8270C308;
	// stw r27,3968(r28)
	REX_STORE_U32(r28.u32 + 3968, r27.u32);
	// b 0x8270c30c
	goto loc_8270C30C;
loc_8270C308:
	// stw r25,3968(r28)
	REX_STORE_U32(r28.u32 + 3968, r25.u32);
loc_8270C30C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82707288
	ctx.lr = 0x8270C314;
	sub_82707288(ctx, base);
loc_8270C314:
	// lwz r11,440(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270c774
	if (ctx.cr6.eq) goto loc_8270C774;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bgt cr6,0x8270c49c
	if (ctx.cr6.gt) goto loc_8270C49C;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c3a0
	if (!ctx.cr6.lt) goto loc_8270C3A0;
loc_8270C348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c3a0
	if (ctx.cr6.eq) goto loc_8270C3A0;
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
	// bge 0x8270c390
	if (!ctx.cr0.lt) goto loc_8270C390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C390;
	sub_82725E38(ctx, base);
loc_8270C390:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c348
	if (ctx.cr6.gt) goto loc_8270C348;
loc_8270C3A0:
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
	// bge 0x8270c3d8
	if (!ctx.cr0.lt) goto loc_8270C3D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C3D8;
	sub_82725E38(ctx, base);
loc_8270C3D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8270c76c
	if (ctx.cr6.eq) goto loc_8270C76C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c454
	if (!ctx.cr6.lt) goto loc_8270C454;
loc_8270C3FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c454
	if (ctx.cr6.eq) goto loc_8270C454;
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
	// bge 0x8270c444
	if (!ctx.cr0.lt) goto loc_8270C444;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C444;
	sub_82725E38(ctx, base);
loc_8270C444:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c3fc
	if (ctx.cr6.gt) goto loc_8270C3FC;
loc_8270C454:
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
	// bge 0x8270c48c
	if (!ctx.cr0.lt) goto loc_8270C48C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C48C;
	sub_82725E38(ctx, base);
loc_8270C48C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8270c548
	if (!ctx.cr6.eq) goto loc_8270C548;
	// addi r11,r28,2192
	ctx.r11.s64 = r28.s64 + 2192;
	// b 0x8270c770
	goto loc_8270C770;
loc_8270C49C:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x8270c60c
	if (ctx.cr6.gt) goto loc_8270C60C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c508
	if (!ctx.cr6.lt) goto loc_8270C508;
loc_8270C4B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c508
	if (ctx.cr6.eq) goto loc_8270C508;
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
	// bge 0x8270c4f8
	if (!ctx.cr0.lt) goto loc_8270C4F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C4F8;
	sub_82725E38(ctx, base);
loc_8270C4F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c4b0
	if (ctx.cr6.gt) goto loc_8270C4B0;
loc_8270C508:
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
	// bge 0x8270c540
	if (!ctx.cr0.lt) goto loc_8270C540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C540;
	sub_82725E38(ctx, base);
loc_8270C540:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8270c550
	if (!ctx.cr6.eq) goto loc_8270C550;
loc_8270C548:
	// addi r11,r28,2180
	ctx.r11.s64 = r28.s64 + 2180;
	// b 0x8270c770
	goto loc_8270C770;
loc_8270C550:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c5c4
	if (!ctx.cr6.lt) goto loc_8270C5C4;
loc_8270C56C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c5c4
	if (ctx.cr6.eq) goto loc_8270C5C4;
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
	// bge 0x8270c5b4
	if (!ctx.cr0.lt) goto loc_8270C5B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C5B4;
	sub_82725E38(ctx, base);
loc_8270C5B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c56c
	if (ctx.cr6.gt) goto loc_8270C56C;
loc_8270C5C4:
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
	// bge 0x8270c5fc
	if (!ctx.cr0.lt) goto loc_8270C5FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C5FC;
	sub_82725E38(ctx, base);
loc_8270C5FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8270c76c
	if (ctx.cr6.eq) goto loc_8270C76C;
	// addi r11,r28,2192
	ctx.r11.s64 = r28.s64 + 2192;
	// b 0x8270c770
	goto loc_8270C770;
loc_8270C60C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c66c
	if (!ctx.cr6.lt) goto loc_8270C66C;
loc_8270C614:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c66c
	if (ctx.cr6.eq) goto loc_8270C66C;
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
	// bge 0x8270c65c
	if (!ctx.cr0.lt) goto loc_8270C65C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C65C;
	sub_82725E38(ctx, base);
loc_8270C65C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c614
	if (ctx.cr6.gt) goto loc_8270C614;
loc_8270C66C:
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
	// bge 0x8270c6a4
	if (!ctx.cr0.lt) goto loc_8270C6A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C6A4;
	sub_82725E38(ctx, base);
loc_8270C6A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8270c6b4
	if (!ctx.cr6.eq) goto loc_8270C6B4;
	// addi r11,r28,2192
	ctx.r11.s64 = r28.s64 + 2192;
	// b 0x8270c770
	goto loc_8270C770;
loc_8270C6B4:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c728
	if (!ctx.cr6.lt) goto loc_8270C728;
loc_8270C6D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c728
	if (ctx.cr6.eq) goto loc_8270C728;
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
	// bge 0x8270c718
	if (!ctx.cr0.lt) goto loc_8270C718;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C718;
	sub_82725E38(ctx, base);
loc_8270C718:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c6d0
	if (ctx.cr6.gt) goto loc_8270C6D0;
loc_8270C728:
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
	// bge 0x8270c760
	if (!ctx.cr0.lt) goto loc_8270C760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C760;
	sub_82725E38(ctx, base);
loc_8270C760:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r28,2180
	ctx.r11.s64 = r28.s64 + 2180;
	// beq cr6,0x8270c770
	if (ctx.cr6.eq) goto loc_8270C770;
loc_8270C76C:
	// addi r11,r28,2168
	ctx.r11.s64 = r28.s64 + 2168;
loc_8270C770:
	// stw r11,2164(r28)
	REX_STORE_U32(r28.u32 + 2164, ctx.r11.u32);
loc_8270C774:
	// lwz r11,3912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270c830
	if (ctx.cr6.eq) goto loc_8270C830;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c7f4
	if (!ctx.cr6.lt) goto loc_8270C7F4;
loc_8270C79C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c7f4
	if (ctx.cr6.eq) goto loc_8270C7F4;
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
	// bge 0x8270c7e4
	if (!ctx.cr0.lt) goto loc_8270C7E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C7E4;
	sub_82725E38(ctx, base);
loc_8270C7E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c79c
	if (ctx.cr6.gt) goto loc_8270C79C;
loc_8270C7F4:
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
	// bge 0x8270c82c
	if (!ctx.cr0.lt) goto loc_8270C82C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C82C;
	sub_82725E38(ctx, base);
loc_8270C82C:
	// stw r30,452(r28)
	REX_STORE_U32(r28.u32 + 452, r30.u32);
loc_8270C830:
	// lwz r11,436(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270c8f8
	if (ctx.cr6.eq) goto loc_8270C8F8;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270c864
	if (!ctx.cr0.lt) goto loc_8270C864;
	// bl 0x82725e38
	ctx.lr = 0x8270C864;
	sub_82725E38(ctx, base);
loc_8270C864:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bne cr6,0x8270c8f4
	if (!ctx.cr6.eq) goto loc_8270C8F4;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// stw r26,328(r28)
	REX_STORE_U32(r28.u32 + 328, r26.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8270c898
	if (!ctx.cr0.lt) goto loc_8270C898;
	// bl 0x82725e38
	ctx.lr = 0x8270C898;
	sub_82725E38(ctx, base);
loc_8270C898:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270c8ac
	if (!ctx.cr6.eq) goto loc_8270C8AC;
	// stw r26,336(r28)
	REX_STORE_U32(r28.u32 + 336, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270C8AC:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270c8d4
	if (!ctx.cr0.lt) goto loc_8270C8D4;
	// bl 0x82725e38
	ctx.lr = 0x8270C8D4;
	sub_82725E38(ctx, base);
loc_8270C8D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270c8e8
	if (!ctx.cr6.eq) goto loc_8270C8E8;
	// stw r27,336(r28)
	REX_STORE_U32(r28.u32 + 336, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270C8E8:
	// stw r25,336(r28)
	REX_STORE_U32(r28.u32 + 336, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270C8F4:
	// stw r27,328(r28)
	REX_STORE_U32(r28.u32 + 328, r27.u32);
loc_8270C8F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82749728) {
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
	ctx.lr = 0x82749730;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r25,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r25.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// subfic r24,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	r24.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfic r23,r4,-2
	ctx.xer.ca = ctx.r4.u32 <= 4294967294;
	r23.u64 = static_cast<uint64_t>(-2) - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r22,r4,-3
	ctx.xer.ca = ctx.r4.u32 <= 4294967293;
	r22.u64 = static_cast<uint64_t>(-3) - ctx.r4.u64;
	// subfic r21,r4,-4
	ctx.xer.ca = ctx.r4.u32 <= 4294967292;
	r21.u64 = static_cast<uint64_t>(-4) - ctx.r4.u64;
	// subfic r20,r4,-5
	ctx.xer.ca = ctx.r4.u32 <= 4294967291;
	r20.u64 = static_cast<uint64_t>(-5) - ctx.r4.u64;
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subfic r6,r4,-6
	ctx.xer.ca = ctx.r4.u32 <= 4294967290;
	ctx.r6.u64 = static_cast<uint64_t>(-6) - ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// stw r6,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r19,r4,1
	r19.s64 = ctx.r4.s64 + 1;
	// addi r18,r4,-1
	r18.s64 = ctx.r4.s64 + -1;
	// addi r17,r4,-2
	r17.s64 = ctx.r4.s64 + -2;
	// addi r16,r4,-3
	r16.s64 = ctx.r4.s64 + -3;
	// addi r15,r4,-4
	r15.s64 = ctx.r4.s64 + -4;
	// addi r14,r4,-5
	r14.s64 = ctx.r4.s64 + -5;
	// addi r5,r4,-6
	ctx.r5.s64 = ctx.r4.s64 + -6;
	// b 0x827497a8
	goto loc_827497A8;
loc_827497A4:
	// lwz r6,-160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_827497A8:
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r31,r20,r11
	r31.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// lbzx r30,r21,r11
	r30.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// lbz r3,-5(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r6,-6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbzx r29,r22,r11
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r30,-4(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lbzx r29,r17,r11
	r29.u64 = REX_LOAD_U8(r17.u32 + ctx.r11.u32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// lbzx r3,r16,r11
	ctx.r3.u64 = REX_LOAD_U8(r16.u32 + ctx.r11.u32);
	// lbzx r30,r23,r11
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// lbz r28,-3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbzx r29,r18,r11
	r29.u64 = REX_LOAD_U8(r18.u32 + ctx.r11.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// lbz r28,-5(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// lbz r30,-6(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// lbzx r27,r24,r11
	r27.u64 = REX_LOAD_U8(r24.u32 + ctx.r11.u32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// lbz r29,-2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbzx r28,r19,r11
	r28.u64 = REX_LOAD_U8(r19.u32 + ctx.r11.u32);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// lbz r27,-4(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// lbzx r29,r25,r11
	r29.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbz r28,-1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lbzx r27,r5,r11
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r28,r6,r28
	r28.u64 = ctx.r6.u64 + r28.u64;
	// lbz r29,-3(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// lbzux r6,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// lbz r26,1(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r27,r11,r4
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lbz r6,-2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// lbzx r31,r14,r11
	r31.u64 = REX_LOAD_U8(r14.u32 + ctx.r11.u32);
	// lbz r27,-1(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lbzx r29,r15,r11
	r29.u64 = REX_LOAD_U8(r15.u32 + ctx.r11.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x827497a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827497A4;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8274F288) {
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
	ctx.lr = 0x8274F290;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,268(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8274f344
	if (!ctx.cr6.gt) goto loc_8274F344;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_8274F2B0:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8274f334
	if (!ctx.cr6.gt) goto loc_8274F334;
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8274F2C4:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r5,r31,-10
	ctx.r5.s64 = r31.s64 + -10;
	// cntlzw r9,r30
	ctx.r9.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r10,r31,14
	ctx.r10.s64 = r31.s64 + 14;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r6,r6,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274a200
	ctx.lr = 0x8274F320;
	sub_8274A200(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8274f2c4
	if (ctx.cr6.lt) goto loc_8274F2C4;
loc_8274F334:
	// lwz r10,140(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 140);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8274f2b0
	if (ctx.cr6.lt) goto loc_8274F2B0;
loc_8274F344:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82759D70) {
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
	ctx.lr = 0x82759D78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14668
	ctx.r3.s64 = 14668;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8271b190
	ctx.lr = 0x82759D98;
	sub_8271B190(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82759db4
	if (!ctx.cr6.eq) goto loc_82759DB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82759DB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82789128
	ctx.lr = 0x82759DBC;
	sub_82789128(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82788f90
	ctx.lr = 0x82759DD4;
	sub_82788F90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82759dec
	if (ctx.cr6.eq) goto loc_82759DEC;
	// bl 0x8271b1a0
	ctx.lr = 0x82759DE8;
	sub_8271B1A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82759DEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8275BCB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8275BCC0;
	// addi r31,r5,2
	r31.s64 = ctx.r5.s64 + 2;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// li r28,16
	r28.s64 = 16;
loc_8275BCCC:
	// li r30,4
	r30.s64 = 4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r3,-9
	ctx.r11.s64 = ctx.r3.s64 + -9;
	// addi r5,r31,-3
	ctx.r5.s64 = r31.s64 + -3;
	// subf r29,r6,r7
	r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8275BCE4:
	// lbz r30,1(r5)
	r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r30,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r30.u8);
	// lbz r30,2(r5)
	r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// stb r30,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r30.u8);
	// lbz r30,3(r5)
	r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r30,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, r30.u8);
	// lbzu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r30,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, r30.u8);
	// lbz r30,0(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r30,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, r30.u8);
	// stb r30,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, r30.u8);
	// lbzx r30,r29,r4
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r30,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, r30.u8);
	// stbu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8275bce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275BCE4;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bne 0x8275bccc
	if (!ctx.cr0.eq) goto loc_8275BCCC;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8275DD78) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275DE38) {
	REX_FUNC_PROLOGUE();
loc_8275DE38:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8275de38
	if (!ctx.cr0.lt) goto loc_8275DE38;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275DE60) {
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
	ctx.lr = 0x8275DE68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8275dee8
	if (!ctx.cr6.lt) goto loc_8275DEE8;
loc_8275DE90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275dee8
	if (ctx.cr6.eq) goto loc_8275DEE8;
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
	// bge 0x8275ded8
	if (!ctx.cr0.lt) goto loc_8275DED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275DED8;
	sub_82725E38(ctx, base);
loc_8275DED8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8275de90
	if (ctx.cr6.gt) goto loc_8275DE90;
loc_8275DEE8:
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
	// bge 0x8275df20
	if (!ctx.cr0.lt) goto loc_8275DF20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275DF20;
	sub_82725E38(ctx, base);
loc_8275DF20:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x8275dfdc
	if (!ctx.cr6.eq) goto loc_8275DFDC;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x8275df9c
	if (!ctx.cr6.lt) goto loc_8275DF9C;
loc_8275DF44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275df9c
	if (ctx.cr6.eq) goto loc_8275DF9C;
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
	// bge 0x8275df8c
	if (!ctx.cr0.lt) goto loc_8275DF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275DF8C;
	sub_82725E38(ctx, base);
loc_8275DF8C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8275df44
	if (ctx.cr6.gt) goto loc_8275DF44;
loc_8275DF9C:
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
	// bge 0x8275dfd4
	if (!ctx.cr0.lt) goto loc_8275DFD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275DFD4;
	sub_82725E38(ctx, base);
loc_8275DFD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8275dfe8
	goto loc_8275DFE8;
loc_8275DFDC:
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
loc_8275DFE8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8275dff8
	if (!ctx.cr6.eq) goto loc_8275DFF8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8275DFF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8276A070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	ctx.lr = 0x8276A078;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,24
	ctx.r5.s64 = 24;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// li r7,56
	ctx.r7.s64 = 56;
	// vspltisw128 v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x3)));
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r31,72
	r31.s64 = 72;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v51,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvrx128 v52,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r5,64
	ctx.r5.s64 = 64;
	// lvlx128 v50,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v49,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v57,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lvlx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvrx128 v55,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v47,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v53,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v45,v50,v47
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vupkhsb128 v43,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// lvrx128 v35,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r11,-25584
	ctx.r7.s64 = ctx.r11.s64 + -25584;
	// vupkhsb128 v48,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// lvrx128 v44,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v46,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// lvrx128 v42,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v39,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// vcsxwfp128 v37,v43,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// lvlx128 v41,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v33,v63,v44
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vcsxwfp128 v13,v48,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// lvrx128 v38,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vcsxwfp128 v40,v46,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvlx128 v36,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v39,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvlx128 v34,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// li r5,-176
	ctx.r5.s64 = -176;
	// vor128 v32,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// li r4,-160
	ctx.r4.s64 = -160;
	// vor128 v60,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// li r31,-128
	r31.s64 = -128;
	// li r30,-112
	r30.s64 = -112;
	// vupkhsb128 v58,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// li r29,-96
	r29.s64 = -96;
	// vupkhsb128 v55,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16))));
	// li r28,-48
	r28.s64 = -48;
	// vupkhsb128 v57,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16))));
	// vupkhsb128 v54,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v62,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v58,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v63,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v52,v62,v37
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v37.f32)));
	// lvx128 v61,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v63,v13
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v53,v62,v40
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v40.f32)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vmulfp128 v50,v63,v12
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v62,r7,r30
	ea = (ctx.r7.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r7,r29
	ea = (ctx.r7.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v56,v13,v40
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v40.f32)));
	// lvx128 v63,r7,r28
	ea = (ctx.r7.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v61,v40
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vcsxwfp128 v48,v57,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// li r3,-192
	ctx.r3.s64 = -192;
	// vcsxwfp128 v47,v55,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// li r6,-144
	ctx.r6.s64 = -144;
	// vmulfp128 v46,v61,v37
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v37.f32)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// vcsxwfp128 v9,v54,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// li r4,-16
	ctx.r4.s64 = -16;
	// vaddfp128 v45,v12,v37
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v8,v62,v56
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v56.f32)));
	// li r31,-80
	r31.s64 = -80;
	// vmulfp128 v44,v63,v56
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v11,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v5,v6,v11,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v7,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v48,v11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v61,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v63,v45
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// lvx128 v60,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v41,v6,v47
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmulfp128 v40,v60,v9
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v9.f32)));
	// li r3,128
	ctx.r3.s64 = 128;
	// vmulfp128 v11,v61,v47
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v47.f32)));
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// vmaddfp v4,v7,v13,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v62,v45
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v39,v8,v49
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vsubfp128 v38,v44,v51
	simde_mm_store_ps(ctx.v38.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v35,v5,v42
	simde_mm_store_ps(ctx.v35.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v34,v5,v42
	simde_mm_store_ps(ctx.v34.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v33,v41,v40
	simde_mm_store_ps(ctx.v33.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmaddfp v11,v6,v9,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v37,v44,v53
	simde_mm_store_ps(ctx.v37.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v36,v4,v43
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vmaddfp v12,v7,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v32,v39,v43
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v63,v38,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v60,v34,v33
	simde_mm_store_ps(ctx.v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vaddfp128 v58,v35,v11
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v57,v35,v11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp128 v56,v34,v33
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v62,v36,v50
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v61,v37,v12
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v55,v32,v52
	simde_mm_store_ps(ctx.v55.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsubfp128 v54,v63,v46
	simde_mm_store_ps(ctx.v54.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v8,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v7,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// vcfpsxws128 v6,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v5,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v11,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vcfpsxws128 v13,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vcfpsxws128 v9,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v55.f32)));
	// vcfpsxws128 v12,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// vaddsws v4,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v7,v11
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v2,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v30,v8,v12
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v12.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v12.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v12.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v12.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v29,v6,v9
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v9.s32[0]);
	v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v9.s32[1]);
	v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v9.s32[2]);
	v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v9.s32[3]);
	v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v28,v5,v13
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v13.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v13.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v13.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v13.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v53,v4,v59
	ctx.v53.s32[0] = ctx.v4.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v53.s32[1] = ctx.v4.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v53.s32[2] = ctx.v4.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v53.s32[3] = ctx.v4.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v52,v2,v59
	ctx.v52.s32[0] = ctx.v2.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v2.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v2.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v2.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v51,v31,v59
	ctx.v51.s32[0] = v31.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v51.s32[1] = v31.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v51.s32[2] = v31.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v51.s32[3] = v31.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v50,v1,v59
	ctx.v50.s32[0] = ctx.v1.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v50.s32[1] = ctx.v1.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v50.s32[2] = ctx.v1.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v50.s32[3] = ctx.v1.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v49,v29,v59
	ctx.v49.s32[0] = v29.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v49.s32[1] = v29.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v49.s32[2] = v29.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v49.s32[3] = v29.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v48,v28,v59
	ctx.v48.s32[0] = v28.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v48.s32[1] = v28.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v48.s32[2] = v28.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v48.s32[3] = v28.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v47,v30,v59
	ctx.v47.s32[0] = v30.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v47.s32[1] = v30.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v47.s32[2] = v30.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v47.s32[3] = v30.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vmrghw128 v46,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vsraw128 v45,v3,v59
	ctx.v45.s32[0] = ctx.v3.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v45.s32[1] = ctx.v3.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v45.s32[2] = ctx.v3.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v45.s32[3] = ctx.v3.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vmrghw128 v44,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrglw128 v43,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v42,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v41,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrghw128 v40,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrglw128 v39,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v38,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v37,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v36,v42,v40
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmrghw128 v35,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrghw128 v34,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v33,v37,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrglw128 v32,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v62,v36,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrglw128 v61,v42,v40
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vcsxwfp128 v60,v35,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmrglw128 v59,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v57,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v58,v34,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vcsxwfp128 v56,v32,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v63,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v9,v61,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v12,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v59,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvx128 v13,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v57,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vsubfp128 v7,v33,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v5,v60,v33
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v6,v62,v58
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v4,v58,v62
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v54,v11,v56
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v53,v63,v8
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v31,v63,v55
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v52,v11,v55
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v30,v63,v56
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v51,v63,v9
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v3,v13,v7,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v13,v5,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v50,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v49,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v2,v13,v6,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v4,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v48,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v47,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v12,v11,v8,v31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v31.f32)));
	// vsubfp128 v46,v53,v52
	simde_mm_store_ps(ctx.v46.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmaddfp v11,v11,v9,v30
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(v30.f32)));
	// vsubfp128 v45,v51,v54
	simde_mm_store_ps(ctx.v45.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v44,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v43,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v42,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v41,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vpkswss128 v27,v50,v48
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vpkswss128 v26,v49,v47
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// vcfpsxws128 v40,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v39,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v38,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vsrah v25,v27,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v37,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsrah v24,v26,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v23,v44,v42
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// vpkswss128 v13,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vadduhm v11,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v13,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vpkswss128 v12,v40,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// vpkswss128 v10,v39,v37
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vadduhm v22,v13,v12
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsubuhm v21,v13,v12
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v20,v11,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v19,v11,v10
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v18,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827B38D0) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x827B38D8;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x827b1d48
	ctx.lr = 0x827B38F8;
	sub_827B1D48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lvx128 v7,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// vslh v5,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// vslh v4,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,432
	r29.s64 = ctx.r1.s64 + 432;
	// vslh v2,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v5,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	r28.s64 = 1104;
	// lvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v10
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v27,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v9
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v25,v12,v63,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v5,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v24,v11,v62,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vslh v28,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v23,v10,v61,2
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v22,v9,v60,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v19,v27,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v21,v8,v59,2
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vaddshs v17,v2,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v20,v7,v58,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v16,v1,v6
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v18,v6,v57,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v56,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r28
	ea = (r30.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	r27.s64 = 48;
	// li r26,96
	r26.s64 = 96;
	// vsldoi128 v15,v5,v56,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// li r3,144
	ctx.r3.s64 = 144;
	// vaddshs v14,v28,v5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// li r11,192
	ctx.r11.s64 = 192;
	// vaddshs v12,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// li r10,240
	ctx.r10.s64 = 240;
	// vaddshs v11,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// li r9,288
	ctx.r9.s64 = 288;
	// vaddshs v10,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// li r8,336
	ctx.r8.s64 = 336;
	// vaddshs v9,v26,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v8,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v7,v17,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v6,v16,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v5,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v4,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v2,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v1,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v31,v8,v0
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v30,v7,v0
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v29,v6,v0
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v28,v5,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
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
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v24,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827BC338) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827BC340;
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
	ctx.lr = 0x827BC38C;
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
	// bl 0x827b93f0
	ctx.lr = 0x827BC3B0;
	sub_827B93F0(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BD888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1144(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1144);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b5200
	ctx.lr = 0x827BD8CC;
	sub_827B5200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827BFE68) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cac
	ctx.lr = 0x827BFE70;
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
	// lwz r8,1148(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
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
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
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
	ctx.lr = 0x827BFEE8;
	sub_827AF878(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x827bffd4
	if (!ctx.cr6.eq) goto loc_827BFFD4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827c00cc
	if (!ctx.cr6.gt) goto loc_827C00CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BFF48:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vadduhm v25,v29,v31
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
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
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827bff48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BFF48;
	// b 0x827c00cc
	goto loc_827C00CC;
loc_827BFFD4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827c00cc
	if (!ctx.cr6.gt) goto loc_827C00CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BFFEC:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v12,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v27
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v12,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v29,v7,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v28,v7,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v30,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v31,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v0
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v22,v26,v0
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v59,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v8,v60,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827bffec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BFFEC;
loc_827C00CC:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
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

