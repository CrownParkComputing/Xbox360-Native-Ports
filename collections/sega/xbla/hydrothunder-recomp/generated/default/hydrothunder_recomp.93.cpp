#include "hydrothunder_funcs.93.h"

DEFINE_REX_FUNC(sub_82125888) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x823ecc50
	ctx.lr = 0x821258A4;
	sub_823ECC50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821258b8
	if (ctx.cr0.eq) goto loc_821258B8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821258B8:
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

DEFINE_REX_FUNC(sub_82127618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82127620;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821276a0
	if (ctx.cr6.eq) goto loc_821276A0;
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// bne 0x821276a0
	if (!ctx.cr0.eq) goto loc_821276A0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82127650;
	sub_8212E8B0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r30,r29,84
	r30.s64 = r29.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8213c958
	ctx.lr = 0x8212766C;
	sub_8213C958(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82127688
	if (ctx.cr6.eq) goto loc_82127688;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8212a468
	ctx.lr = 0x82127688;
	sub_8212A468(ctx, base);
loc_82127688:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821276A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821276A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212CDF0) {
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
	ctx.lr = 0x8212CDF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x822f6280
	ctx.lr = 0x8212CE14;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8212cef4
	if (ctx.cr0.eq) goto loc_8212CEF4;
	// addic. r26,r28,8
	ctx.xer.ca = r28.u32 > 4294967287;
	r26.s64 = r28.s64 + 8;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r24,0(r28)
	REX_STORE_U32(r28.u32 + 0, r24.u32);
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// beq 0x8212ce9c
	if (ctx.cr0.eq) goto loc_8212CE9C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120d70
	ctx.lr = 0x8212CE38;
	sub_82120D70(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,32(r26)
	REX_STORE_U32(r26.u32 + 32, r30.u32);
	// addi r31,r26,28
	r31.s64 = r26.s64 + 28;
	// bl 0x822f6280
	ctx.lr = 0x8212CE4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212cec0
	if (ctx.cr0.eq) goto loc_8212CEC0;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,28(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8212ce8c
	goto loc_8212CE8C;
loc_8212CE78:
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82207a70
	ctx.lr = 0x8212CE88;
	sub_82207A70(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8212CE8C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8212ce78
	if (!ctx.cr6.eq) goto loc_8212CE78;
	// lbz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 40);
	// stb r11,40(r26)
	REX_STORE_U8(r26.u32 + 40, ctx.r11.u8);
loc_8212CE9C:
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// ori r10,r10,29788
	ctx.r10.u64 = ctx.r10.u64 | 29788;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8212ced8
	if (!ctx.cr6.lt) goto loc_8212CED8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8212CEC0;
	sub_822F6020(ctx, base);
loc_8212CEC0:
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
	ctx.lr = 0x8212CED8;
	sub_82120018(ctx, base);
loc_8212CED8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r11.u32);
	// stw r28,4(r24)
	REX_STORE_U32(r24.u32 + 4, r28.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_8212CEF4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8212CF10;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82135730) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823fca88
	ctx.lr = 0x8213574C;
	sub_823FCA88(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8213575C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8213575c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213575C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x82135778;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82135788:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82135788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82135788;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r31,-8
	ctx.r9.s64 = r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821357A4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821357a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821357A4;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A818) {
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
	// addi r11,r11,-18828
	ctx.r11.s64 = ctx.r11.s64 + -18828;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213a844
	if (ctx.cr0.eq) goto loc_8213A844;
	// bl 0x8269ce98
	ctx.lr = 0x8213A844;
	sub_8269CE98(ctx, base);
loc_8213A844:
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

DEFINE_REX_FUNC(sub_8213BED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213BEE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8213c8b8
	ctx.lr = 0x8213BF04;
	sub_8213C8B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8213bf28
	if (ctx.cr6.eq) goto loc_8213BF28;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-18332
	ctx.r4.s64 = ctx.r11.s64 + -18332;
	// addi r3,r10,-18200
	ctx.r3.s64 = ctx.r10.s64 + -18200;
	// li r5,75
	ctx.r5.s64 = 75;
	// bl 0x821231d0
	ctx.lr = 0x8213BF28;
	sub_821231D0(ctx, base);
loc_8213BF28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// bl 0x822f6280
	ctx.lr = 0x8213BF38;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213bf8c
	if (ctx.cr0.eq) goto loc_8213BF8C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r3,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	ctx.r3.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// beq 0x8213bf74
	if (ctx.cr0.eq) goto loc_8213BF74;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x8213BF74;
	sub_82120D70(ctx, base);
loc_8213BF74:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213ca00
	ctx.lr = 0x8213BF84;
	sub_8213CA00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8213BF8C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8213BFA8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82144680) {
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
	ctx.lr = 0x82144688;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addi r30,r4,5
	r30.s64 = ctx.r4.s64 + 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,81(r1)
	REX_STORE_U32(ctx.r1.u32 + 81, ctx.r9.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821446e4
	if (!ctx.cr6.gt) goto loc_821446E4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x821446C4;
	sub_8269D1D0(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821446D4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821446DC;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821446E4:
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,5
	ctx.r4.s64 = r30.s64 + 5;
	// bl 0x82125c20
	ctx.lr = 0x821446F4;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125c98
	ctx.lr = 0x82144700;
	sub_82125C98(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82144710:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82144710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82144710;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x8214472C;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125c98
	ctx.lr = 0x82144738;
	sub_82125C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82144744;
	sub_826A1E70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82149F18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82149F20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,6164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82149f60
	if (ctx.cr0.eq) goto loc_82149F60;
	// lwz r3,6164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82149F60:
	// lwz r3,28(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214a024
	if (ctx.cr0.eq) goto loc_8214A024;
	// bl 0x8216d9e8
	ctx.lr = 0x82149F74;
	sub_8216D9E8(ctx, base);
	// b 0x8214a024
	goto loc_8214A024;
loc_82149F78:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r28,252(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82186288
	ctx.lr = 0x82149F90;
	sub_82186288(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// stw r11,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r11.u32);
	// stw r10,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r10.u32);
	// stw r9,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r9.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a024
	if (ctx.cr6.eq) goto loc_8214A024;
loc_82149FD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82149fec
	if (ctx.cr6.eq) goto loc_82149FEC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149fd0
	if (!ctx.cr6.eq) goto loc_82149FD0;
loc_82149FEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a024
	if (ctx.cr6.eq) goto loc_8214A024;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8214a008
	if (ctx.cr6.eq) goto loc_8214A008;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// b 0x8214a00c
	goto loc_8214A00C;
loc_8214A008:
	// stw r10,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r10.u32);
loc_8214A00C:
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
loc_8214A024:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149f78
	if (!ctx.cr6.eq) goto loc_82149F78;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82151DB0) {
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
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151DEC;
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

DEFINE_REX_FUNC(sub_821549E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82154B10) {
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
	ctx.lr = 0x82154B34;
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
	ctx.lr = 0x82154B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6196(r10)
	REX_STORE_U32(ctx.r10.u32 + 6196, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82156988) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82156990;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821569B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821569e0
	if (ctx.cr6.eq) goto loc_821569E0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// bne cr6,0x821569e0
	if (!ctx.cr6.eq) goto loc_821569E0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 | 1;
	// b 0x821569ec
	goto loc_821569EC;
loc_821569E0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821569EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed280
	ctx.lr = 0x821569F4;
	sub_823ED280(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215A1B0) {
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
	ctx.lr = 0x8215A1B8;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5248(r1)
	ea = -5248 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a21c
	if (ctx.cr6.eq) goto loc_8215A21C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-24572
	ctx.r4.s64 = ctx.r10.s64 + -24572;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8215a208
	if (!ctx.cr6.eq) goto loc_8215A208;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8215a20c
	goto loc_8215A20C;
loc_8215A208:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215A20C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a21c
	if (ctx.cr0.eq) goto loc_8215A21C;
loc_8215A214:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215a534
	goto loc_8215A534;
loc_8215A21C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215a230
	if (!ctx.cr0.eq) goto loc_8215A230;
	// lbz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215a214
	if (ctx.cr0.eq) goto loc_8215A214;
loc_8215A230:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// li r21,60
	r21.s64 = 60;
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// addi r29,r23,12
	r29.s64 = r23.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8215a298
	if (!ctx.cr0.gt) goto loc_8215A298;
	// li r31,0
	r31.s64 = 0;
loc_8215A254:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8215a26c
	if (ctx.cr6.lt) goto loc_8215A26C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8215A26C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823edd68
	ctx.lr = 0x8215A278;
	sub_823EDD68(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215a254
	if (ctx.cr6.lt) goto loc_8215A254;
loc_8215A298:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823edd78
	ctx.lr = 0x8215A2B8;
	sub_823EDD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a2c8
	if (ctx.cr0.eq) goto loc_8215A2C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215a534
	goto loc_8215A534;
loc_8215A2C8:
	// li r5,4928
	ctx.r5.s64 = 4928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r19,1
	r19.s64 = 1;
	// bl 0x826a2e60
	ctx.lr = 0x8215A2DC;
	sub_826A2E60(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4928
	ctx.r5.s64 = 4928;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x823ede50
	ctx.lr = 0x8215A2F4;
	sub_823EDE50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823ede68
	ctx.lr = 0x8215A300;
	sub_823EDE68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8215a528
	if (!ctx.cr6.eq) goto loc_8215A528;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215a528
	if (!ctx.cr6.gt) goto loc_8215A528;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r1,456
	r26.s64 = ctx.r1.s64 + 456;
	// addi r22,r11,-8580
	r22.s64 = ctx.r11.s64 + -8580;
loc_8215A324:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r5,r26,-264
	ctx.r5.s64 = r26.s64 + -264;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823ede10
	ctx.lr = 0x8215A344;
	sub_823EDE10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a4f4
	if (!ctx.cr0.eq) goto loc_8215A4F4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw. r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8215a404
	if (!ctx.cr0.gt) goto loc_8215A404;
	// li r27,0
	r27.s64 = 0;
loc_8215A36C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215a404
	if (!ctx.cr0.eq) goto loc_8215A404;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r31,r27,r11
	r31.u64 = r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8215A388;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a3e4
	if (!ctx.cr0.eq) goto loc_8215A3E4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,1
	r24.s64 = 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215a3e4
	if (ctx.cr6.eq) goto loc_8215A3E4;
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
loc_8215A3B8:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215a3b8
	if (!ctx.cr6.eq) goto loc_8215A3B8;
loc_8215A3E4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,60
	r27.s64 = r27.s64 + 60;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215a36c
	if (ctx.cr6.lt) goto loc_8215A36C;
loc_8215A404:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215a514
	if (!ctx.cr0.eq) goto loc_8215A514;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8215A41C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82120ac0
	ctx.lr = 0x8215A42C;
	sub_82120AC0(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8215A430:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215a430
	if (!ctx.cr6.eq) goto loc_8215A430;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x8215A458;
	sub_82120C08(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82121610
	ctx.lr = 0x8215A468;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82120700
	ctx.lr = 0x8215A474;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8215A484;
	sub_82120AC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x8215a5d0
	ctx.lr = 0x8215A498;
	sub_8215A5D0(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215a4c8
	goto loc_8215A4C8;
loc_8215A4A4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8215A4C8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215a4a4
	if (!ctx.cr6.eq) goto loc_8215A4A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82120ac0
	ctx.lr = 0x8215A4E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8215A4F0;
	sub_82120AC0(ctx, base);
	// b 0x8215a514
	goto loc_8215A514;
loc_8215A4F4:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8215a514
	if (ctx.cr6.eq) goto loc_8215A514;
	// cmpwi cr6,r3,1317
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1317, ctx.xer);
	// beq cr6,0x8215a514
	if (ctx.cr6.eq) goto loc_8215A514;
	// addi r11,r3,-183
	ctx.r11.s64 = ctx.r3.s64 + -183;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r11,r19
	r19.u64 = ctx.r11.u64 & r19.u64;
loc_8215A514:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r26,r26,308
	r26.s64 = r26.s64 + 308;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215a324
	if (ctx.cr6.lt) goto loc_8215A324;
loc_8215A528:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stb r11,8(r23)
	REX_STORE_U8(r23.u32 + 8, ctx.r11.u8);
loc_8215A534:
	// addi r1,r1,5248
	ctx.r1.s64 = ctx.r1.s64 + 5248;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82176050) {
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
	ctx.lr = 0x82176058;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217609C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fdivs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217618C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821761B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821761C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821761DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821761F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217620C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821842F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821842F8;
	// lfs f13,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// lfs f6,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// mfcr r29
	r29.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r29.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r29.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r29.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r29.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r29.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r29.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r29.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r29.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r29.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r29.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r29.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r29.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r29.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r29.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r29.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r29.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r29.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r29.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r29.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r29.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r29.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r29.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r29.u64 |= ctx.cr5.so ? 0x100 : 0;
	r29.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r29.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r29.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r29.u64 |= ctx.cr6.so ? 0x10 : 0;
	r29.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r29.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r29.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r29.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r28,r29,27,29,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x4;
	// rlwinm r29,r29,30,29,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x4;
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// lfsx f5,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f13,f5,f11,f13
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f10,-80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fsubs f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f10,-76(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f10,-72(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r31,0(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r31,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r31.u64);
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,-76(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// ld r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// lfs f11,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f8,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lfsx f7,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// fsel f13,f7,f12,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// stfs f9,-80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82193BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	// li r12,-32
	ctx.r12.s64 = -32;
	// lwz r11,6060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r6,r10,-4416
	ctx.r6.s64 = ctx.r10.s64 + -4416;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r10,104(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 104);
	// ld r31,104(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// std r10,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r10.u64);
	// bl 0x8212dc68
	ctx.lr = 0x82193C20;
	sub_8212DC68(ctx, base);
	// li r12,31
	ctx.r12.s64 = 31;
	// ld r10,104(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 104);
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r31,r12
	ctx.r11.u64 = r31.u64 & ctx.r12.u64;
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r11.u64);
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82196EE0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f31,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f31.f64 = double(temp.f32);
	// bl 0x8215f0f0
	ctx.lr = 0x82196F08;
	sub_8215F0F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8219A958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8219A960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219aa00
	ctx.lr = 0x8219A980;
	sub_8219AA00(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r11,73(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8219a9ec
	if (!ctx.cr0.eq) goto loc_8219A9EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8219a9b0
	goto loc_8219A9B0;
loc_8219A9A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8219A9B0:
	// lbz r8,73(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8219a9a8
	if (ctx.cr0.eq) goto loc_8219A9A8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8219a9d8
	goto loc_8219A9D8;
loc_8219A9D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8219A9D8:
	// lbz r8,73(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8219a9d0
	if (ctx.cr0.eq) goto loc_8219A9D0;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8219a9f8
	goto loc_8219A9F8;
loc_8219A9EC:
	// stw r9,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_8219A9F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219E228) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F628) {
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
	ctx.lr = 0x8219F630;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// bl 0x8219e378
	ctx.lr = 0x8219F648;
	sub_8219E378(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,96
	ctx.r3.s64 = 96;
	// addi r11,r11,-28848
	ctx.r11.s64 = ctx.r11.s64 + -28848;
	// addi r30,r29,192
	r30.s64 = r29.s64 + 192;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stfs f0,192(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 192, temp.u32);
	// addi r28,r29,208
	r28.s64 = r29.s64 + 208;
	// stfs f0,196(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 196, temp.u32);
	// addi r26,r29,224
	r26.s64 = r29.s64 + 224;
	// stfs f0,200(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 200, temp.u32);
	// addi r25,r29,240
	r25.s64 = r29.s64 + 240;
	// stfs f0,208(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 208, temp.u32);
	// stfs f0,212(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 212, temp.u32);
	// stfs f0,216(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 216, temp.u32);
	// stfs f0,224(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 224, temp.u32);
	// stfs f0,228(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 228, temp.u32);
	// stfs f0,232(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 232, temp.u32);
	// stfs f0,240(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 240, temp.u32);
	// stfs f0,244(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 244, temp.u32);
	// stfs f0,248(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 248, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x8219F6A4;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8219f6d8
	if (ctx.cr0.eq) goto loc_8219F6D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29172
	ctx.r4.s64 = ctx.r11.s64 + -29172;
	// bl 0x82120600
	ctx.lr = 0x8219F6BC;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x8219e240
	ctx.lr = 0x8219F6D0;
	sub_8219E240(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219f6dc
	goto loc_8219F6DC;
loc_8219F6D8:
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8219F6DC:
	// addi r27,r29,28
	r27.s64 = r29.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219F6EC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219f708
	if (ctx.cr0.eq) goto loc_8219F708;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8219F708;
	sub_82120AC0(ctx, base);
loc_8219F708:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219F710;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8219f744
	if (ctx.cr0.eq) goto loc_8219F744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29156
	ctx.r4.s64 = ctx.r11.s64 + -29156;
	// bl 0x82120600
	ctx.lr = 0x8219F728;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x8219e240
	ctx.lr = 0x8219F73C;
	sub_8219E240(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219f748
	goto loc_8219F748;
loc_8219F744:
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8219F748:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219F754;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219f770
	if (ctx.cr0.eq) goto loc_8219F770;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8219F770;
	sub_82120AC0(ctx, base);
loc_8219F770:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219F778;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8219f7ac
	if (ctx.cr0.eq) goto loc_8219F7AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-29140
	ctx.r4.s64 = ctx.r11.s64 + -29140;
	// bl 0x82120600
	ctx.lr = 0x8219F790;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x8219e240
	ctx.lr = 0x8219F7A4;
	sub_8219E240(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219f7b0
	goto loc_8219F7B0;
loc_8219F7AC:
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8219F7B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219F7BC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219f7d8
	if (ctx.cr0.eq) goto loc_8219F7D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8219F7D8;
	sub_82120AC0(ctx, base);
loc_8219F7D8:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219F7E0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8219f814
	if (ctx.cr0.eq) goto loc_8219F814;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-29116
	ctx.r4.s64 = ctx.r11.s64 + -29116;
	// bl 0x82120600
	ctx.lr = 0x8219F7F8;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x8219e240
	ctx.lr = 0x8219F80C;
	sub_8219E240(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219f818
	goto loc_8219F818;
loc_8219F814:
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8219F818:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219F824;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219f83c
	if (ctx.cr0.eq) goto loc_8219F83C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8219F83C;
	sub_82120AC0(ctx, base);
loc_8219F83C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821ADB08) {
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
	ctx.lr = 0x821ADB10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r26,36
	r26.s64 = 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divw. r10,r10,r26
	ctx.r10.u64 = uint32_t((r26.s32 && !(ctx.r10.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r10.s32 / r26.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821adb98
	if (!ctx.cr0.gt) goto loc_821ADB98;
	// addi r28,r3,140
	r28.s64 = ctx.r3.s64 + 140;
	// li r29,0
	r29.s64 = 0;
loc_821ADB44:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822434c8
	ctx.lr = 0x821ADB50;
	sub_822434C8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// bl 0x8228ca78
	ctx.lr = 0x821ADB60;
	sub_8228CA78(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divw r10,r10,r26
	ctx.r10.u64 = uint32_t((r26.s32 && !(ctx.r10.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r10.s32 / r26.s32 : 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821adb44
	if (ctx.cr6.lt) goto loc_821ADB44;
loc_821ADB98:
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ADBAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821B2E40) {
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
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x822f6280
	ctx.lr = 0x821B2E54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2e64
	if (ctx.cr0.eq) goto loc_821B2E64;
	// bl 0x821b2e78
	ctx.lr = 0x821B2E60;
	sub_821B2E78(ctx, base);
	// b 0x821b2e68
	goto loc_821B2E68;
loc_821B2E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B2E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B4CF0) {
	REX_FUNC_PROLOGUE();
	// b 0x821b4f00
	sub_821B4F00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B4DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r9.u64);
	// lfs f13,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f13,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f13,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f13,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f13,148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// std r9,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,16(r5)
	REX_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// lfs f0,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f0,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f0,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f0,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f0,148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f0,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF6E8) {
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
	ctx.lr = 0x821BF6FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf70c
	if (ctx.cr0.eq) goto loc_821BF70C;
	// bl 0x821bf720
	ctx.lr = 0x821BF708;
	sub_821BF720(ctx, base);
	// b 0x821bf710
	goto loc_821BF710;
loc_821BF70C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0828) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c0d10
	ctx.lr = 0x821C0848;
	sub_821C0D10(ctx, base);
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

DEFINE_REX_FUNC(sub_821C30A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821C38D8) {
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
	ctx.lr = 0x821C38E0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x823fbf60
	ctx.lr = 0x821C3900;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C3910:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c3910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C3910;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c39a4
	if (ctx.cr6.eq) goto loc_821C39A4;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c39a4
	if (ctx.cr6.eq) goto loc_821C39A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_821C3948:
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821C3954;
	sub_8212DD28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821C3964;
	sub_826A1E70(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// addi r7,r11,14816
	ctx.r7.s64 = ctx.r11.s64 + 14816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,64(r25)
	REX_STORE_U32(r25.u32 + 64, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,108(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82139b18
	ctx.lr = 0x821C3994;
	sub_82139B18(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c3948
	if (!ctx.cr6.eq) goto loc_821C3948;
loc_821C39A4:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821c39cc
	goto loc_821C39CC;
loc_821C39B0:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821c38d8
	ctx.lr = 0x821C39C4;
	sub_821C38D8(ctx, base);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821C39CC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c39b0
	if (!ctx.cr6.eq) goto loc_821C39B0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821CC528) {
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822f6280
	ctx.lr = 0x821CC53C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc54c
	if (ctx.cr0.eq) goto loc_821CC54C;
	// bl 0x821cc560
	ctx.lr = 0x821CC548;
	sub_821CC560(ctx, base);
	// b 0x821cc550
	goto loc_821CC550;
loc_821CC54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CC550:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CDE90) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cdec0
	if (ctx.cr6.eq) goto loc_821CDEC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821cdd90
	ctx.lr = 0x821CDEC0;
	sub_821CDD90(ctx, base);
loc_821CDEC0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0278) {
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
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-13640
	ctx.r11.s64 = ctx.r11.s64 + -13640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821d02c4
	if (ctx.cr6.eq) goto loc_821D02C4;
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
	ctx.lr = 0x821D02C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D02C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821D02CC;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d02dc
	if (ctx.cr0.eq) goto loc_821D02DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D02DC;
	sub_8269CE98(ctx, base);
loc_821D02DC:
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

DEFINE_REX_FUNC(sub_821D5518) {
	REX_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D5A20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,132(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d5a54
	if (ctx.cr6.eq) goto loc_821D5A54;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D5A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_821D5A54:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D5A74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5a9c
	if (ctx.cr0.eq) goto loc_821D5A9C;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D5A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
loc_821D5A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821D9A90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D9A98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821626c0
	ctx.lr = 0x821D9AB0;
	sub_821626C0(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821626c0
	ctx.lr = 0x821D9ABC;
	sub_821626C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x82125c20
	ctx.lr = 0x821D9ACC;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821D9AD8;
	sub_82125C98(ctx, base);
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,73(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 73);
	// stb r11,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// lbz r11,75(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 75);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x821626c0
	ctx.lr = 0x821D9B08;
	sub_821626C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821D9B20;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821D9B2C;
	sub_82125C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D9B38;
	sub_826A1E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DD350) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821dd380
	if (!ctx.cr6.eq) goto loc_821DD380;
loc_821DD378:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dd3c4
	goto loc_821DD3C4;
loc_821DD380:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x821fd140
	ctx.lr = 0x821DD38C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd378
	if (ctx.cr0.eq) goto loc_821DD378;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x821dd3b0
	goto loc_821DD3B0;
loc_821DD3A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// beq cr6,0x821dd3b8
	if (ctx.cr6.eq) goto loc_821DD3B8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821DD3B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821dd3a0
	if (!ctx.cr6.eq) goto loc_821DD3A0;
loc_821DD3B8:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821DD3C4:
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

DEFINE_REX_FUNC(sub_821E0338) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
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

DEFINE_REX_FUNC(sub_821E0610) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x822c5c60
	ctx.lr = 0x821E0630;
	sub_822C5C60(ctx, base);
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

DEFINE_REX_FUNC(sub_821E2700) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13876
	ctx.r11.s64 = ctx.r11.s64 + 13876;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821E2738;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120ac0
	ctx.lr = 0x821E2748;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82120ac0
	ctx.lr = 0x821E2758;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120ac0
	ctx.lr = 0x821E2768;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// li r10,255
	ctx.r10.s64 = 255;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,119(r31)
	REX_STORE_U8(r31.u32 + 119, ctx.r10.u8);
	// stb r10,118(r31)
	REX_STORE_U8(r31.u32 + 118, ctx.r10.u8);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,117(r31)
	REX_STORE_U8(r31.u32 + 117, ctx.r10.u8);
	// lfs f13,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r10.u8);
	// lfs f12,172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r7,-14036
	ctx.r8.s64 = ctx.r7.s64 + -14036;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stb r11,144(r31)
	REX_STORE_U8(r31.u32 + 144, ctx.r11.u8);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stb r30,152(r31)
	REX_STORE_U8(r31.u32 + 152, r30.u8);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// addi r9,r31,176
	ctx.r9.s64 = r31.s64 + 176;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// addi r9,r31,208
	ctx.r9.s64 = r31.s64 + 208;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stw r8,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stb r10,203(r31)
	REX_STORE_U8(r31.u32 + 203, ctx.r10.u8);
	// stb r10,202(r31)
	REX_STORE_U8(r31.u32 + 202, ctx.r10.u8);
	// stb r10,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r10.u8);
	// stb r10,200(r31)
	REX_STORE_U8(r31.u32 + 200, ctx.r10.u8);
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stw r8,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stb r10,235(r31)
	REX_STORE_U8(r31.u32 + 235, ctx.r10.u8);
	// stb r10,234(r31)
	REX_STORE_U8(r31.u32 + 234, ctx.r10.u8);
	// stb r10,233(r31)
	REX_STORE_U8(r31.u32 + 233, ctx.r10.u8);
	// stb r10,232(r31)
	REX_STORE_U8(r31.u32 + 232, ctx.r10.u8);
	// stb r11,236(r31)
	REX_STORE_U8(r31.u32 + 236, ctx.r11.u8);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stw r8,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r8.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stb r10,267(r31)
	REX_STORE_U8(r31.u32 + 267, ctx.r10.u8);
	// stb r10,266(r31)
	REX_STORE_U8(r31.u32 + 266, ctx.r10.u8);
	// stb r10,265(r31)
	REX_STORE_U8(r31.u32 + 265, ctx.r10.u8);
	// addi r9,r31,240
	ctx.r9.s64 = r31.s64 + 240;
	// stb r10,264(r31)
	REX_STORE_U8(r31.u32 + 264, ctx.r10.u8);
	// addi r9,r31,272
	ctx.r9.s64 = r31.s64 + 272;
	// stb r11,268(r31)
	REX_STORE_U8(r31.u32 + 268, ctx.r11.u8);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r8,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// stb r10,299(r31)
	REX_STORE_U8(r31.u32 + 299, ctx.r10.u8);
	// stb r10,298(r31)
	REX_STORE_U8(r31.u32 + 298, ctx.r10.u8);
	// stb r10,297(r31)
	REX_STORE_U8(r31.u32 + 297, ctx.r10.u8);
	// stb r10,296(r31)
	REX_STORE_U8(r31.u32 + 296, ctx.r10.u8);
	// stb r11,300(r31)
	REX_STORE_U8(r31.u32 + 300, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821F4550) {
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
	ctx.lr = 0x821F4574;
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
	ctx.lr = 0x821F458C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6252(r10)
	REX_STORE_U32(ctx.r10.u32 + 6252, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821F5970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F5978;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq cr6,0x821f59ac
	if (ctx.cr6.eq) goto loc_821F59AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x821231d0
	ctx.lr = 0x821F59AC;
	sub_821231D0(ctx, base);
loc_821F59AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F59C0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23284
	ctx.r4.s64 = ctx.r11.s64 + 23284;
	// bl 0x8215f338
	ctx.lr = 0x821F59CC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F59D8;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F84C8) {
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
	ctx.lr = 0x821F84D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f853c
	if (!ctx.cr6.gt) goto loc_821F853C;
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
	// bgt cr6,0x821f8508
	if (ctx.cr6.gt) goto loc_821F8508;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821F8508:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f853c
	if (!ctx.cr6.gt) goto loc_821F853C;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821F851C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F852C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F8534;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821F853C:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F854C;
	sub_8228CA78(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FC388) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC620) {
	REX_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC800) {
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
	ctx.lr = 0x821FC808;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FC83C;
	sub_8215F670(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc850
	if (ctx.cr6.lt) goto loc_821FC850;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x821fc854
	goto loc_821FC854;
loc_821FC850:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821FC854:
	// bl 0x8215fbf8
	ctx.lr = 0x821FC858;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25888
	ctx.r4.s64 = ctx.r11.s64 + 25888;
	// bl 0x8215f670
	ctx.lr = 0x821FC880;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC888;
	sub_8215F0F0(ctx, base);
	// li r29,2
	r29.s64 = 2;
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC8A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25900
	ctx.r4.s64 = ctx.r11.s64 + 25900;
	// bl 0x8215f670
	ctx.lr = 0x821FC8BC;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC8C4;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// lbz r28,40(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 40);
	// bl 0x8215f670
	ctx.lr = 0x821FC8E0;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC8E8;
	sub_8215F0F0(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r3,6192(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x821FC910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x821FC924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25932
	ctx.r4.s64 = ctx.r11.s64 + 25932;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FC938;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC940;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r3,6192(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x821FC960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x821FC974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25952
	ctx.r4.s64 = ctx.r11.s64 + 25952;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FC988;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC990;
	sub_8215F0F0(ctx, base);
	// lwz r3,6192(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6192);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25968
	ctx.r4.s64 = ctx.r11.s64 + 25968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FC9D8;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FC9E0;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r3,6192(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x821FCA00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x821FCA14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,25988
	ctx.r4.s64 = ctx.r11.s64 + 25988;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FCA28;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fca3c
	if (ctx.cr6.lt) goto loc_821FCA3C;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821fca40
	goto loc_821FCA40;
loc_821FCA3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821FCA40:
	// bl 0x8215fbf8
	ctx.lr = 0x821FCA44;
	sub_8215FBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8220BA40) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x8220BA70;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x8220BA84;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ba94
	if (ctx.cr0.eq) goto loc_8220BA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220BA94;
	sub_8269CE98(ctx, base);
loc_8220BA94:
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

DEFINE_REX_FUNC(sub_8220DFA0) {
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
	ctx.lr = 0x8220DFA8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// li r31,0
	r31.s64 = 0;
	// addi r27,r3,260
	r27.s64 = ctx.r3.s64 + 260;
	// stw r31,276(r3)
	REX_STORE_U32(ctx.r3.u32 + 276, r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220dfcc
	if (ctx.cr6.lt) goto loc_8220DFCC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x8220dfd0
	goto loc_8220DFD0;
loc_8220DFCC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8220DFD0:
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8220e088
	if (!ctx.cr0.gt) goto loc_8220E088;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r11,-31020
	r26.s64 = ctx.r11.s64 + -31020;
loc_8220DFFC:
	// lwz r30,6040(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220e02c
	if (ctx.cr6.lt) goto loc_8220E02C;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8220e030
	goto loc_8220E030;
loc_8220E02C:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8220E030:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0568
	ctx.lr = 0x8220E05C;
	sub_826A0568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82121928
	ctx.lr = 0x8220E068;
	sub_82121928(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8220dffc
	if (ctx.cr6.lt) goto loc_8220DFFC;
loc_8220E088:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822178E0) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82217900;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8221790C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217928
	if (!ctx.cr6.eq) goto loc_82217928;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-27036
	ctx.r3.s64 = ctx.r11.s64 + -27036;
	// bl 0x82219430
	ctx.lr = 0x82217928;
	sub_82219430(ctx, base);
loc_82217928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8221AFAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221afac
	if (!ctx.cr6.eq) goto loc_8221AFAC;
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
	ctx.lr = 0x8221AFD8;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26432
	ctx.r4.s64 = ctx.r11.s64 + -26432;
	// bl 0x82120600
	ctx.lr = 0x8221AFE8;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221AFF4;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
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
	ctx.lr = 0x8221B014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8221B024;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_82221F00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,760(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82221f14
	if (!ctx.cr6.gt) goto loc_82221F14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,760(r4)
	REX_STORE_U32(ctx.r4.u32 + 760, ctx.r11.u32);
loc_82221F14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82222908) {
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
	// li r3,1016
	ctx.r3.s64 = 1016;
	// bl 0x822f6280
	ctx.lr = 0x8222291C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222292c
	if (ctx.cr0.eq) goto loc_8222292C;
	// bl 0x82222940
	ctx.lr = 0x82222928;
	sub_82222940(ctx, base);
	// b 0x82222930
	goto loc_82222930;
loc_8222292C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82222930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82225A78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13972
	ctx.r3.s64 = ctx.r11.s64 + -13972;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82225FD8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x82225FE0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca4
	ctx.lr = 0x82225FE8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r30,255
	r30.s64 = 255;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f27,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f27.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f28,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	f28.f64 = double(temp.f32);
	// lfs f31,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f29,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f29.f64 = double(temp.f32);
loc_82226024:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82226038
	if (!ctx.cr6.lt) goto loc_82226038;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x8222603c
	goto loc_8222603C;
loc_82226038:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
loc_8222603C:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822260f0
	if (ctx.cr0.eq) goto loc_822260F0;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822260f0
	if (ctx.cr6.eq) goto loc_822260F0;
	// lwa r10,12(r5)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 12));
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lwa r11,16(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 16));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// fmuls f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f10,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f28,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, f29.f64)));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82136128
	ctx.lr = 0x822260F0;
	sub_82136128(ctx, base);
loc_822260F0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(r29.s32, 10, ctx.xer);
	// blt cr6,0x82226024
	if (ctx.cr6.lt) goto loc_82226024;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf0
	ctx.lr = 0x82226110;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222CB28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13644
	ctx.r3.s64 = ctx.r11.s64 + -13644;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222CE88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13636
	ctx.r3.s64 = ctx.r11.s64 + -13636;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222D528) {
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
	ctx.lr = 0x8222D530;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82236190
	ctx.lr = 0x8222D544;
	sub_82236190(ctx, base);
	// lwz r10,708(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 708);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r31,448
	ctx.r11.s64 = r31.s64 + 448;
	// sth r9,660(r31)
	REX_STORE_U16(r31.u32 + 660, ctx.r9.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222d570
	if (ctx.cr6.eq) goto loc_8222D570;
	// lwz r8,200(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 200);
	// sth r9,714(r10)
	REX_STORE_U16(ctx.r10.u32 + 714, ctx.r9.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222d570
	if (ctx.cr6.eq) goto loc_8222D570;
	// sth r9,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r9.u16);
loc_8222D570:
	// lwz r9,664(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 664);
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r9.u32);
	// beq cr6,0x8222d58c
	if (ctx.cr6.eq) goto loc_8222D58C;
	// stw r9,720(r10)
	REX_STORE_U32(ctx.r10.u32 + 720, ctx.r9.u32);
loc_8222D58C:
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x8222D594;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222d5f0
	if (ctx.cr0.eq) goto loc_8222D5F0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,880
	r30.s64 = r31.s64 + 880;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82178a50
	ctx.lr = 0x8222D5B0;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x8222D5BC;
	sub_8213BC98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f2,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217f8a0
	ctx.lr = 0x8222D5E8;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222d5f4
	goto loc_8222D5F4;
loc_8222D5F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222D5F4:
	// stw r4,884(r31)
	REX_STORE_U32(r31.u32 + 884, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8222D600;
	sub_821D3988(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d618
	if (ctx.cr0.eq) goto loc_8222D618;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222D618;
	sub_82120AC0(ctx, base);
loc_8222D618:
	// lwz r11,884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 884);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x8222D630;
	sub_82120B20(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82235200) {
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
	ctx.lr = 0x82235208;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bl 0x822355d0
	ctx.lr = 0x82235220;
	sub_822355D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r27,880(r31)
	REX_STORE_U32(r31.u32 + 880, r27.u32);
	// addi r11,r11,-19252
	ctx.r11.s64 = ctx.r11.s64 + -19252;
	// addi r10,r10,-19192
	ctx.r10.s64 = ctx.r10.s64 + -19192;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r11,r8,-19172
	ctx.r11.s64 = ctx.r8.s64 + -19172;
	// addi r9,r9,-19180
	ctx.r9.s64 = ctx.r9.s64 + -19180;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,884(r31)
	REX_STORE_U32(r31.u32 + 884, ctx.r10.u32);
	// addi r30,r31,880
	r30.s64 = r31.s64 + 880;
	// bl 0x822f6280
	ctx.lr = 0x82235268;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82235298
	if (ctx.cr0.eq) goto loc_82235298;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19320
	ctx.r4.s64 = ctx.r11.s64 + -19320;
	// bl 0x82120600
	ctx.lr = 0x82235280;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x82235294;
	sub_82197628(ctx, base);
	// b 0x8223529c
	goto loc_8223529C;
loc_82235298:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8223529C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822352AC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822352c4
	if (ctx.cr0.eq) goto loc_822352C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822352C4;
	sub_82120AC0(ctx, base);
loc_822352C4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,21288
	ctx.r11.s64 = ctx.r11.s64 + 21288;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822352DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82235304
	if (ctx.cr0.eq) goto loc_82235304;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-12728
	ctx.r10.s64 = ctx.r10.s64 + -12728;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82235308
	goto loc_82235308;
loc_82235304:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82235308:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,17116
	ctx.r5.s64 = ctx.r11.s64 + 17116;
	// bl 0x8216be80
	ctx.lr = 0x82235318;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223E2D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,3848(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3848);
	// lwz r3,304(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223E8D8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,3776
	ctx.r3.s64 = ctx.r3.s64 + 3776;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8226ca98
	ctx.lr = 0x8223E8F8;
	sub_8226CA98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e904
	if (ctx.cr0.eq) goto loc_8223E904;
	// li r31,1
	r31.s64 = 1;
loc_8223E904:
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

DEFINE_REX_FUNC(sub_82240BB0) {
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
	ctx.lr = 0x82240BB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x821b2d80
	ctx.lr = 0x82240BD4;
	sub_821B2D80(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// blt 0x82240bfc
	if (ctx.cr0.lt) goto loc_82240BFC;
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240BF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82240c14
	if (ctx.cr6.lt) goto loc_82240C14;
loc_82240BFC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-16588
	ctx.r4.s64 = ctx.r11.s64 + -16588;
	// addi r3,r10,-17904
	ctx.r3.s64 = ctx.r10.s64 + -17904;
	// li r5,362
	ctx.r5.s64 = 362;
	// bl 0x821231d0
	ctx.lr = 0x82240C14;
	sub_821231D0(ctx, base);
loc_82240C14:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,3864
	r29.s64 = r30.s64 + 3864;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82158750
	ctx.lr = 0x82240C70;
	sub_82158750(ctx, base);
	// addi r28,r30,3880
	r28.s64 = r30.s64 + 3880;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82158750
	ctx.lr = 0x82240C80;
	sub_82158750(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82240cb0
	if (!ctx.cr6.gt) goto loc_82240CB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82240C94:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82240c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240C94;
loc_82240CB0:
	// lwz r11,3848(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3848);
	// mr r31,r27
	r31.u64 = r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82240cf0
	if (!ctx.cr6.lt) goto loc_82240CF0;
	// mulli r29,r27,304
	r29.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(304));
loc_82240CC8:
	// lwz r11,3856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3856);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// addi r4,r3,304
	ctx.r4.s64 = ctx.r3.s64 + 304;
	// bl 0x82239150
	ctx.lr = 0x82240CD8;
	sub_82239150(ctx, base);
	// lwz r11,3848(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3848);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,304
	r29.s64 = r29.s64 + 304;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82240cc8
	if (ctx.cr6.lt) goto loc_82240CC8;
loc_82240CF0:
	// lwz r11,3848(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3848);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,3856(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3856);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r11,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(304));
	// stw r11,3848(r30)
	REX_STORE_U32(r30.u32 + 3848, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8224BFD8) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c07c
	if (ctx.cr0.eq) goto loc_8224C07C;
	// lbz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 604);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224c07c
	if (!ctx.cr0.eq) goto loc_8224C07C;
	// lwz r11,616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224c07c
	if (!ctx.cr6.eq) goto loc_8224C07C;
	// lwz r11,480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 480);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8224c044
	if (ctx.cr6.eq) goto loc_8224C044;
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// addi r11,r3,292
	ctx.r11.s64 = ctx.r3.s64 + 292;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224c038
	if (ctx.cr6.lt) goto loc_8224C038;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224C038:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224df90
	ctx.lr = 0x8224C044;
	sub_8224DF90(ctx, base);
loc_8224C044:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8224c07c
	if (ctx.cr6.gt) goto loc_8224C07C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-13428
	ctx.r5.s64 = ctx.r10.s64 + -13428;
	// lwz r3,6296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C07C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224C07C:
	// stb r30,604(r31)
	REX_STORE_U8(r31.u32 + 604, r30.u8);
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

DEFINE_REX_FUNC(sub_82250B50) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x82250B74;
	sub_8215F338(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8215fba8
	ctx.lr = 0x82250B7C;
	sub_8215FBA8(ctx, base);
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

DEFINE_REX_FUNC(sub_822526C0) {
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
	ctx.lr = 0x822526F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252720
	if (ctx.cr6.eq) goto loc_82252720;
	// bl 0x82179fd8
	ctx.lr = 0x82252704;
	sub_82179FD8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82252720:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x82252748;
	sub_8212D668(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82252784
	if (ctx.cr6.eq) goto loc_82252784;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216bb58
	ctx.lr = 0x8225277C;
	sub_8216BB58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82252784;
	sub_8269CE98(ctx, base);
loc_82252784:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// li r30,2
	r30.s64 = 2;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 & r30.u64;
	// bl 0x821ea168
	ctx.lr = 0x822527A0;
	sub_821EA168(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 & r30.u64;
	// bl 0x821ea168
	ctx.lr = 0x822527B8;
	sub_821EA168(ctx, base);
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

DEFINE_REX_FUNC(sub_82257AF0) {
	REX_FUNC_PROLOGUE();
	// b 0x822899e0
	sub_822899E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82257BA0) {
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
	// bl 0x82289310
	ctx.lr = 0x82257BC0;
	sub_82289310(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257bd0
	if (ctx.cr0.eq) goto loc_82257BD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82257BD0;
	sub_8269CE98(ctx, base);
loc_82257BD0:
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

DEFINE_REX_FUNC(sub_8225AA00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8225AA08;
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
	// beq cr6,0x8225aa7c
	if (ctx.cr6.eq) goto loc_8225AA7C;
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
	ctx.lr = 0x8225AA34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x8225aa7c
	if (!ctx.cr6.eq) goto loc_8225AA7C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x8225b1c8
	ctx.lr = 0x8225AA7C;
	sub_8225B1C8(ctx, base);
loc_8225AA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82260B98) {
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
	ctx.lr = 0x82260BA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x821b2d80
	ctx.lr = 0x82260BBC;
	sub_821B2D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82260BC8;
	sub_8216B740(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82260BD4;
	sub_8216B740(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	r31.s64 = 0;
	// ble cr6,0x82260c08
	if (!ctx.cr6.gt) goto loc_82260C08;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82260c08
	if (!ctx.cr6.eq) goto loc_82260C08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x82260C00;
	sub_821B2D80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82260C08:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82260c30
	if (!ctx.cr6.gt) goto loc_82260C30;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82260c30
	if (!ctx.cr6.eq) goto loc_82260C30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208568
	ctx.lr = 0x82260C2C;
	sub_82208568(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82260C30:
	// lwz r11,1596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82260c54
	if (!ctx.cr6.eq) goto loc_82260C54;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82288100
	ctx.lr = 0x82260C54;
	sub_82288100(ctx, base);
loc_82260C54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82264E20) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-6944
	ctx.r11.s64 = ctx.r11.s64 + -6944;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82264e58
	if (ctx.cr6.eq) goto loc_82264E58;
	// bl 0x8269ce98
	ctx.lr = 0x82264E58;
	sub_8269CE98(ctx, base);
loc_82264E58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82264e74
	if (ctx.cr0.eq) goto loc_82264E74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82264E74;
	sub_8269CE98(ctx, base);
loc_82264E74:
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

DEFINE_REX_FUNC(sub_82267B50) {
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
	ctx.lr = 0x82267B58;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82267e04
	if (ctx.cr6.lt) goto loc_82267E04;
	// li r26,0
	r26.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x82267B7C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82267e0c
	if (ctx.cr0.eq) goto loc_82267E0C;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r31,25
	r31.s64 = 25;
loc_82267B9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6a80
	ctx.lr = 0x82267BA4;
	sub_821A6A80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bge 0x82267b9c
	if (!ctx.cr0.lt) goto loc_82267B9C;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r27,0
	r27.s64 = 0;
	// ori r25,r10,65534
	r25.u64 = ctx.r10.u64 | 65534;
	// b 0x82267d00
	goto loc_82267D00;
loc_82267BC0:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x82267bfc
	if (ctx.cr6.eq) goto loc_82267BFC;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82267d84
	if (ctx.cr6.lt) goto loc_82267D84;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r8,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r8.u32);
loc_82267BFC:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82267cbc
	if (ctx.cr6.eq) goto loc_82267CBC;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
loc_82267C3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82267c9c
	if (ctx.cr6.eq) goto loc_82267C9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82267e28
	ctx.lr = 0x82267C54;
	sub_82267E28(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82267c84
	if (ctx.cr6.eq) goto loc_82267C84;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r26,4(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// b 0x82267c8c
	goto loc_82267C8C;
loc_82267C84:
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82267C8C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x82267c3c
	if (ctx.cr6.lt) goto loc_82267C3C;
loc_82267C9C:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(r30.u32, 25, ctx.xer);
	// bne cr6,0x82267cbc
	if (!ctx.cr6.eq) goto loc_82267CBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82267e28
	ctx.lr = 0x82267CB0;
	sub_82267E28(ctx, base);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82267d00
	goto loc_82267D00;
loc_82267CBC:
	// mulli r10,r30,12
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82267cf4
	if (ctx.cr6.eq) goto loc_82267CF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82267CF4:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x82267d00
	if (!ctx.cr6.eq) goto loc_82267D00;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82267D00:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267bc0
	if (!ctx.cr6.eq) goto loc_82267BC0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// ble cr6,0x82267d34
	if (!ctx.cr6.gt) goto loc_82267D34;
	// addi r31,r1,124
	r31.s64 = ctx.r1.s64 + 124;
	// addi r30,r27,-1
	r30.s64 = r27.s64 + -1;
loc_82267D1C:
	// addi r4,r31,-12
	ctx.r4.s64 = r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82267e28
	ctx.lr = 0x82267D28;
	sub_82267E28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x82267d1c
	if (!ctx.cr0.eq) goto loc_82267D1C;
loc_82267D34:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r10,r27,12
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(12));
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82267dd0
	if (ctx.cr6.eq) goto loc_82267DD0;
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82267dd0
	if (ctx.cr6.eq) goto loc_82267DD0;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r5,r6,r25
	ctx.r5.u64 = r25.u64 - ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82267d90
	if (!ctx.cr6.lt) goto loc_82267D90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82267D84;
	sub_822F6020(ctx, base);
loc_82267D84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82267D90;
	sub_822F6020(ctx, base);
loc_82267D90:
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r8,r8,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r8.u64;
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82267DD0:
	// addi r31,r1,424
	r31.s64 = ctx.r1.s64 + 424;
	// li r30,25
	r30.s64 = 25;
loc_82267DD8:
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a6af8
	ctx.lr = 0x82267DE4;
	sub_821A6AF8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82267DEC;
	sub_8269CE98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82267dd8
	if (!ctx.cr0.lt) goto loc_82267DD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a6af8
	ctx.lr = 0x82267DFC;
	sub_821A6AF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269ce98
	ctx.lr = 0x82267E04;
	sub_8269CE98(ctx, base);
loc_82267E04:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cfc
	return;
loc_82267E0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82267E28;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8227D2E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8227D2E8;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227d31c
	if (!ctx.cr6.eq) goto loc_8227D31C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-492
	ctx.r3.s64 = ctx.r10.s64 + -492;
	// li r5,289
	ctx.r5.s64 = 289;
	// bl 0x821231d0
	ctx.lr = 0x8227D31C;
	sub_821231D0(ctx, base);
loc_8227D31C:
	// li r4,32767
	ctx.r4.s64 = 32767;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D328;
	sub_8217F4B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x8227D334;
	sub_8213BC98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r11.u32);
	// bl 0x8213bc98
	ctx.lr = 0x8227D34C;
	sub_8213BC98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r11,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82280F80) {
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
	ctx.lr = 0x82280F88;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,436(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82281168
	if (!ctx.cr6.gt) goto loc_82281168;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,658(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 658);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82281168
	if (!ctx.cr0.eq) goto loc_82281168;
	// lwz r30,468(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x821c3de8
	ctx.lr = 0x82280FFC;
	sub_821C3DE8(ctx, base);
	// lfs f0,328(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f7,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,324(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,320(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmsubs f11,f13,f31,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f10.f64)));
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f11,f11,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fmsubs f10,f0,f9,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fmsubs f9,f8,f12,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f5.f64)));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f10,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f8.f64)));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x822810e4
	if (!ctx.cr6.gt) goto loc_822810E4;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f6,120(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f12,f12,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f7.f64)));
	// fdivs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f31,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_822810E4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbd18
	ctx.lr = 0x822810F4;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmsubs f13,f13,f29,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, -ctx.f10.f64)));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f12,f12,f31,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -ctx.f11.f64)));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f0,f0,f30,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, -ctx.f9.f64)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
loc_82281168:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-72(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82293850) {
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
	ctx.lr = 0x82293858;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82293870
	if (ctx.cr6.eq) goto loc_82293870;
	// bl 0x82293220
	ctx.lr = 0x82293870;
	sub_82293220(ctx, base);
loc_82293870:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822938a0
	if (ctx.cr6.eq) goto loc_822938A0;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + -19400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822938A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822938A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822938ec
	if (ctx.cr6.eq) goto loc_822938EC;
	// lbz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822938e8
	if (ctx.cr0.eq) goto loc_822938E8;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + -19400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822938E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822938E8:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
loc_822938EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stb r11,16(r30)
	REX_STORE_U8(r30.u32 + 16, ctx.r11.u8);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r28,16(r29)
	REX_STORE_U32(r29.u32 + 16, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8229CBD0) {
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
	ctx.lr = 0x8229CBD8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca8
	ctx.lr = 0x8229CBE0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229CBFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 16);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U64(r28.u32 + 24);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ble 0x8229d0ec
	if (!ctx.cr0.gt) goto loc_8229D0EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f30.f64 = double(temp.f32);
	// lfs f29,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f29.f64 = double(temp.f32);
	// lfs f28,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f28.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_8229CC30:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229CC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229cec8
	if (ctx.cr6.lt) goto loc_8229CEC8;
	// bne cr6,0x8229d0c8
	if (!ctx.cr6.eq) goto loc_8229D0C8;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8229cdac
	if (ctx.cr6.eq) goto loc_8229CDAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8229d0c8
	if (!ctx.cr6.eq) goto loc_8229D0C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d0c8
	if (!ctx.cr6.gt) goto loc_8229D0C8;
loc_8229CCA0:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f0,16(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// lfd f13,8(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,0(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f13,16(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// lfd f12,8(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f0,0(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f12,8(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bctrl 
	ctx.lr = 0x8229CD98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229cca0
	if (ctx.cr6.lt) goto loc_8229CCA0;
	// b 0x8229d0c8
	goto loc_8229D0C8;
loc_8229CDAC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d0c8
	if (!ctx.cr6.gt) goto loc_8229D0C8;
loc_8229CDBC:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f0,16(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// lfd f13,8(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,0(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f13,0(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f12,8(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f0,16(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f12,8(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bctrl 
	ctx.lr = 0x8229CEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229cdbc
	if (ctx.cr6.lt) goto loc_8229CDBC;
	// b 0x8229d0c8
	goto loc_8229D0C8;
loc_8229CEC8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8229cfd4
	if (ctx.cr6.eq) goto loc_8229CFD4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8229d0c8
	if (!ctx.cr6.eq) goto loc_8229D0C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d0c8
	if (!ctx.cr6.gt) goto loc_8229D0C8;
loc_8229CEEC:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bctrl 
	ctx.lr = 0x8229CFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229ceec
	if (ctx.cr6.lt) goto loc_8229CEEC;
	// b 0x8229d0c8
	goto loc_8229D0C8;
loc_8229CFD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d0c8
	if (!ctx.cr6.gt) goto loc_8229D0C8;
loc_8229CFE4:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bctrl 
	ctx.lr = 0x8229D0B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229cfe4
	if (ctx.cr6.lt) goto loc_8229CFE4;
loc_8229D0C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x8229cc30
	if (ctx.cr6.lt) goto loc_8229CC30;
loc_8229D0EC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x8229D0F8;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822C3C60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C3C68;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lbz r9,12100(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12100);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,7984
	ctx.r8.s64 = ctx.r8.s64 + 7984;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x400) | (r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x180000) | (r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// lbz r9,12178(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12178);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CC898) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cc914
	if (ctx.cr0.eq) goto loc_822CC914;
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cc914
	if (ctx.cr0.eq) goto loc_822CC914;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r9,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822cb6d0
	ctx.lr = 0x822CC904;
	sub_822CB6D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb780
	ctx.lr = 0x822CC914;
	sub_822CB780(ctx, base);
loc_822CC914:
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

DEFINE_REX_FUNC(sub_822CEA50) {
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
	ctx.lr = 0x822CEA58;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x822cea94
	if (ctx.cr0.eq) goto loc_822CEA94;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822ce6f0
	ctx.lr = 0x822CEA90;
	sub_822CE6F0(ctx, base);
	// b 0x822cebbc
	goto loc_822CEBBC;
loc_822CEA94:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r25,r27
	r25.u64 = r27.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822cebbc
	if (ctx.cr6.eq) goto loc_822CEBBC;
	// lwz r24,324(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// clrlwi r20,r30,31
	r20.u64 = r30.u32 & 0x1;
loc_822CEAB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_822CEAE8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x822ceb18
	if (ctx.cr6.eq) goto loc_822CEB18;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// divwu r11,r21,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r21.u32 / ctx.r11.u32 : 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x822CEB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cebbc
	if (ctx.cr0.lt) goto loc_822CEBBC;
loc_822CEB18:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ceb64
	if (ctx.cr0.eq) goto loc_822CEB64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce560
	ctx.lr = 0x822CEB5C;
	sub_822CE560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cebbc
	if (ctx.cr0.lt) goto loc_822CEBBC;
loc_822CEB64:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// blt cr6,0x822ceae8
	if (ctx.cr6.lt) goto loc_822CEAE8;
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ceba8
	if (!ctx.cr0.eq) goto loc_822CEBA8;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r7,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
loc_822CEBA8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r21,r21,12
	r21.s64 = r21.s64 + 12;
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ceab0
	if (ctx.cr6.lt) goto loc_822CEAB0;
loc_822CEBBC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822DA7B0) {
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
	ctx.lr = 0x822DA7B8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r10,r11,-23608
	ctx.r10.s64 = ctx.r11.s64 + -23608;
	// addi r9,r9,-23592
	ctx.r9.s64 = ctx.r9.s64 + -23592;
	// bl 0x822da3c8
	ctx.lr = 0x822DA7DC;
	sub_822DA3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,3878
	ctx.r3.s64 = 3878;
	// bl 0x822da3c8
	ctx.lr = 0x822DA7E8;
	sub_822DA3C8(ctx, base);
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x822da3c8
	ctx.lr = 0x822DA7F0;
	sub_822DA3C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,1403
	ctx.r3.s64 = 1403;
	// bl 0x822da3c8
	ctx.lr = 0x822DA7FC;
	sub_822DA3C8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r3,1404
	ctx.r3.s64 = 1404;
	// bl 0x822da3c8
	ctx.lr = 0x822DA808;
	sub_822DA3C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,1405
	ctx.r3.s64 = 1405;
	// bl 0x822da3c8
	ctx.lr = 0x822DA814;
	sub_822DA3C8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,1402
	ctx.r3.s64 = 1402;
	// bl 0x822da3c8
	ctx.lr = 0x822DA820;
	sub_822DA3C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3200
	ctx.r3.s64 = 3200;
	// bl 0x822da3d8
	ctx.lr = 0x822DA830;
	sub_822DA3D8(ctx, base);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// bl 0x822da3c8
	ctx.lr = 0x822DA838;
	sub_822DA3C8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,3201
	ctx.r3.s64 = 3201;
	// bl 0x822da3c8
	ctx.lr = 0x822DA844;
	sub_822DA3C8(ctx, base);
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// bl 0x822da3c8
	ctx.lr = 0x822DA850;
	sub_822DA3C8(ctx, base);
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// bl 0x822da3c8
	ctx.lr = 0x822DA85C;
	sub_822DA3C8(ctx, base);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// bl 0x822da3c8
	ctx.lr = 0x822DA868;
	sub_822DA3C8(ctx, base);
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// beq cr6,0x822da8fc
	if (ctx.cr6.eq) goto loc_822DA8FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,9996
	ctx.r4.s64 = ctx.r11.s64 + 9996;
	// bl 0x822da3f0
	ctx.lr = 0x822DA894;
	sub_822DA3F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,16772(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16772);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r10,9988
	ctx.r7.s64 = ctx.r10.s64 + 9988;
	// addi r4,r8,10028
	ctx.r4.s64 = ctx.r8.s64 + 10028;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11164
	ctx.r5.s64 = 11164;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,2252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2252);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x822da3f0
	ctx.lr = 0x822DA8C4;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r7,10900(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,10896(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r4,r11,10072
	ctx.r4.s64 = ctx.r11.s64 + 10072;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da3f0
	ctx.lr = 0x822DA8E0;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,10908(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// addi r4,r11,10120
	ctx.r4.s64 = ctx.r11.s64 + 10120;
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822da3f0
	ctx.lr = 0x822DA8FC;
	sub_822DA3F0(ctx, base);
loc_822DA8FC:
	// lis r11,-32763
	ctx.r11.s64 = -2147155968;
	// ori r11,r11,272
	ctx.r11.u64 = ctx.r11.u64 | 272;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822da940
	if (!ctx.cr6.eq) goto loc_822DA940;
	// lis r11,2989
	ctx.r11.s64 = 195887104;
	// ori r11,r11,61453
	ctx.r11.u64 = ctx.r11.u64 | 61453;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822da940
	if (ctx.cr6.eq) goto loc_822DA940;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822da940
	if (ctx.cr6.eq) goto loc_822DA940;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,10160
	ctx.r4.s64 = ctx.r11.s64 + 10160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da3f0
	ctx.lr = 0x822DA93C;
	sub_822DA3F0(ctx, base);
	// b 0x822daaf8
	goto loc_822DAAF8;
loc_822DA940:
	// rlwinm r11,r26,0,0,4
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xF8000000;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822da990
	if (!ctx.cr6.eq) goto loc_822DA990;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822da984
	if (ctx.cr6.eq) goto loc_822DA984;
	// lwz r11,24208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da984
	if (ctx.cr6.eq) goto loc_822DA984;
	// rlwinm r10,r26,4,22,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0x3F0;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,10320
	ctx.r4.s64 = ctx.r9.s64 + 10320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x822da3f0
	ctx.lr = 0x822DA980;
	sub_822DA3F0(ctx, base);
	// b 0x822daaf8
	goto loc_822DAAF8;
loc_822DA984:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// b 0x822daaf0
	goto loc_822DAAF0;
loc_822DA990:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da470
	ctx.lr = 0x822DA998;
	sub_822DA470(ctx, base);
	// lis r12,32763
	ctx.r12.s64 = 2147155968;
	// lis r11,1025
	ctx.r11.s64 = 67174400;
	// ori r12,r12,61664
	ctx.r12.u64 = ctx.r12.u64 | 61664;
	// and r31,r30,r12
	r31.u64 = r30.u64 & ctx.r12.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822da9d4
	if (!ctx.cr6.eq) goto loc_822DA9D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10656
	ctx.r4.s64 = ctx.r11.s64 + 10656;
	// bl 0x822da3f0
	ctx.lr = 0x822DA9C0;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10792
	ctx.r4.s64 = ctx.r11.s64 + 10792;
	// bl 0x822da3f0
	ctx.lr = 0x822DA9D0;
	sub_822DA3F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_822DA9D4:
	// rlwinm. r11,r24,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822daa24
	if (ctx.cr0.eq) goto loc_822DAA24;
	// rlwinm. r11,r24,0,21,25
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x7C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822daa24
	if (!ctx.cr0.eq) goto loc_822DAA24;
	// rlwinm r11,r24,21,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 21) & 0xC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,5,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822daa24
	if (!ctx.cr6.eq) goto loc_822DAA24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10944
	ctx.r4.s64 = ctx.r11.s64 + 10944;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA10;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11080
	ctx.r4.s64 = ctx.r11.s64 + 11080;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA20;
	sub_822DA3F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_822DAA24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822daa60
	if (!ctx.cr6.eq) goto loc_822DAA60;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11256
	ctx.r4.s64 = ctx.r11.s64 + 11256;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA3C;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11400
	ctx.r4.s64 = ctx.r11.s64 + 11400;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA4C;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11552
	ctx.r4.s64 = ctx.r11.s64 + 11552;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA5C;
	sub_822DA3F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_822DAA60:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// rlwinm r10,r31,0,9,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x7FFFE0;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r10,0,26,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0003F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822daaac
	if (!ctx.cr6.eq) goto loc_822DAAAC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11600
	ctx.r4.s64 = ctx.r11.s64 + 11600;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA88;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x822da3f0
	ctx.lr = 0x822DAA98;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11920
	ctx.r4.s64 = ctx.r11.s64 + 11920;
	// bl 0x822da3f0
	ctx.lr = 0x822DAAA8;
	sub_822DA3F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_822DAAAC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822daad4
	if (ctx.cr6.eq) goto loc_822DAAD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r11,9280
	ctx.r4.s64 = ctx.r11.s64 + 9280;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da3f0
	ctx.lr = 0x822DAAC8;
	sub_822DA3F0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da6d8
	ctx.lr = 0x822DAAD4;
	sub_822DA6D8(ctx, base);
loc_822DAAD4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822daae8
	if (ctx.cr6.eq) goto loc_822DAAE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12104
	ctx.r4.s64 = ctx.r11.s64 + 12104;
	// b 0x822daaf0
	goto loc_822DAAF0;
loc_822DAAE8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
loc_822DAAF0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da3f0
	ctx.lr = 0x822DAAF8;
	sub_822DA3F0(ctx, base);
loc_822DAAF8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822EF018) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12868
	ctx.r3.s64 = ctx.r11.s64 + -12868;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EF410) {
	REX_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ef424
	if (ctx.cr0.eq) goto loc_822EF424;
loc_822EF41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EF424:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ef41c
	if (!ctx.cr6.eq) goto loc_822EF41C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EFD98) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,15476
	ctx.r11.s64 = ctx.r11.s64 + 15476;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821eced8
	ctx.lr = 0x822EFDC4;
	sub_821ECED8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x821eced8
	ctx.lr = 0x822EFDCC;
	sub_821ECED8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822efe14
	if (ctx.cr6.eq) goto loc_822EFE14;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822efe10
	if (ctx.cr0.eq) goto loc_822EFE10;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
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
	ctx.lr = 0x822EFE10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EFE10:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_822EFE14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822F5A40) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9365
	ctx.r4.s64 = 613744640;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F5F38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2544
	ctx.r10.s64 = ctx.r10.s64 + 2544;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x822f5e58
	ctx.lr = 0x822F5F68;
	sub_822F5E58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,2544
	ctx.r11.s64 = ctx.r11.s64 + 2544;
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

DEFINE_REX_FUNC(sub_822F6830) {
	REX_FUNC_PROLOGUE();
	// b 0x822f6728
	sub_822F6728(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F69B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822F69B8;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x822F69D0;
	sub_822F66B0(ctx, base);
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f6a24
	if (ctx.cr6.eq) goto loc_822F6A24;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F69E0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f6a1c
	if (ctx.cr6.eq) goto loc_822F6A1C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8215cee0
	ctx.lr = 0x822F6A00;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f6a1c
	if (ctx.cr0.eq) goto loc_822F6A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F6A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F6A1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822f69e0
	if (!ctx.cr6.eq) goto loc_822F69E0;
loc_822F6A24:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x8269d770
	ctx.lr = 0x822F6A2C;
	sub_8269D770(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f6700
	ctx.lr = 0x822F6A34;
	sub_822F6700(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822FA630) {
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
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fa680
	if (!ctx.cr0.eq) goto loc_822FA680;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa660
	if (ctx.cr6.eq) goto loc_822FA660;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fa664
	goto loc_822FA664;
loc_822FA660:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FA664:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa680
	if (ctx.cr6.eq) goto loc_822FA680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa67c
	if (ctx.cr6.eq) goto loc_822FA67C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fa680
	goto loc_822FA680;
loc_822FA67C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FA680:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822fa970
	if (ctx.cr6.lt) goto loc_822FA970;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fa970
	if (ctx.cr6.eq) goto loc_822FA970;
	// cmplwi cr6,r4,47
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 47, ctx.xer);
	// bgt cr6,0x822fa95c
	if (ctx.cr6.gt) goto loc_822FA95C;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,3560
	ctx.r12.s64 = ctx.r12.s64 + 3560;
	// lbzx r0,r12,r4
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32208
	ctx.r12.s64 = -2110783488;
	// nop 
	// addi r12,r12,-22848
	ctx.r12.s64 = ctx.r12.s64 + -22848;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_822FA6C0;
	case 1:
		goto loc_822FA6D0;
	case 2:
		goto loc_822FA74C;
	case 3:
		goto loc_822FA6DC;
	case 4:
		goto loc_822FA6E4;
	case 5:
		goto loc_822FA708;
	case 6:
		goto loc_822FA710;
	case 7:
		goto loc_822FA718;
	case 8:
		goto loc_822FA720;
	case 9:
		goto loc_822FA734;
	case 10:
		goto loc_822FA740;
	case 11:
		goto loc_822FA754;
	case 12:
		goto loc_822FA760;
	case 13:
		goto loc_822FA7A8;
	case 14:
		goto loc_822FA804;
	case 15:
		goto loc_822FA810;
	case 16:
		goto loc_822FA81C;
	case 17:
		goto loc_822FA828;
	case 18:
		goto loc_822FA830;
	case 19:
		goto loc_822FA838;
	case 20:
		goto loc_822FA84C;
	case 21:
		goto loc_822FA854;
	case 22:
		goto loc_822FA85C;
	case 23:
		goto loc_822FA864;
	case 24:
		goto loc_822FA86C;
	case 25:
		goto loc_822FA874;
	case 26:
		goto loc_822FA87C;
	case 27:
		goto loc_822FA884;
	case 28:
		goto loc_822FA88C;
	case 29:
		goto loc_822FA894;
	case 30:
		goto loc_822FA89C;
	case 31:
		goto loc_822FA8A4;
	case 32:
		goto loc_822FA8AC;
	case 33:
		goto loc_822FA8B4;
	case 34:
		goto loc_822FA8BC;
	case 35:
		goto loc_822FA8CC;
	case 36:
		goto loc_822FA8D8;
	case 37:
		goto loc_822FA8E0;
	case 38:
		goto loc_822FA8C4;
	case 39:
		goto loc_822FA8E8;
	case 40:
		goto loc_822FA8F0;
	case 41:
		goto loc_822FA8F8;
	case 42:
		goto loc_822FA900;
	case 43:
		goto loc_822FA844;
	case 44:
		goto loc_822FA920;
	case 45:
		goto loc_822FA7FC;
	case 46:
		goto loc_822FA930;
	case 47:
		goto loc_822FA940;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822FA6C0:
	// bl 0x822f7130
	ctx.lr = 0x822FA6C4;
	sub_822F7130(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822FA6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822fa974
	goto loc_822FA974;
loc_822FA6D0:
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_822FA6D4:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x822fa6c8
	goto loc_822FA6C8;
loc_822FA6DC:
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA6E4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_822FA6E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_822FA6F4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FA6FC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fa6c8
	if (ctx.cr0.eq) goto loc_822FA6C8;
	// b 0x822fa974
	goto loc_822FA974;
loc_822FA708:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x822fa6e8
	goto loc_822FA6E8;
loc_822FA710:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x822fa6e8
	goto loc_822FA6E8;
loc_822FA718:
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA720:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3048);
	ctx.f0.f64 = double(temp.f32);
loc_822FA728:
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA734:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3808);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa728
	goto loc_822FA728;
loc_822FA740:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa728
	goto loc_822FA728;
loc_822FA74C:
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA754:
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_822FA758:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822fa6c8
	goto loc_822FA6C8;
loc_822FA760:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa774
	if (ctx.cr6.eq) goto loc_822FA774;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fa778
	goto loc_822FA778;
loc_822FA774:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FA778:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa79c
	if (ctx.cr6.eq) goto loc_822FA79C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa790
	if (ctx.cr6.eq) goto loc_822FA790;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fa794
	goto loc_822FA794;
loc_822FA790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FA794:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x822fa7a0
	goto loc_822FA7A0;
loc_822FA79C:
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
loc_822FA7A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA7A8:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fa7bc
	if (ctx.cr0.eq) goto loc_822FA7BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA7BC:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fa7cc
	if (ctx.cr0.eq) goto loc_822FA7CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA7CC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fa7dc
	if (ctx.cr0.eq) goto loc_822FA7DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA7DC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fa7ec
	if (ctx.cr0.eq) goto loc_822FA7EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA7EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r10,r11,11,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822fa6c8
	goto loc_822FA6C8;
loc_822FA7FC:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA804:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA810:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA81C:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// andis. r11,r11,1072
	ctx.r11.u64 = ctx.r11.u64 & 70254592;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA828:
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA830:
	// lfs f0,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA838:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,0,12,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA844:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA84C:
	// lfs f0,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA854:
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA85C:
	// lfs f0,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA864:
	// lfs f0,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA86C:
	// lfs f0,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA874:
	// lfs f0,276(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA87C:
	// lfs f0,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA884:
	// lfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA88C:
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA894:
	// lfs f0,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA89C:
	// lfs f0,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8A4:
	// lfs f0,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8AC:
	// lfs f0,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8B4:
	// lfs f0,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8BC:
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8C4:
	// lfs f0,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8CC:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA8D8:
	// lha r11,164(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 164));
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA8E0:
	// lha r11,166(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 166));
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA8E8:
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8F0:
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA8F8:
	// lfs f0,156(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fa6d4
	goto loc_822FA6D4;
loc_822FA900:
	// lha r11,100(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 100));
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fa918
	if (ctx.cr0.eq) goto loc_822FA918;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA918:
	// li r11,88
	ctx.r11.s64 = 88;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA920:
	// lha r11,100(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 100));
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA930:
	// lha r11,100(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 100));
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// b 0x822fa758
	goto loc_822FA758;
loc_822FA940:
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fa6fc
	goto loc_822FA6FC;
loc_822FA95C:
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x822fa6f4
	goto loc_822FA6F4;
loc_822FA970:
	// li r3,37
	ctx.r3.s64 = 37;
loc_822FA974:
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

DEFINE_REX_FUNC(sub_82315DD8) {
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
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r4,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82315e00
	if (!ctx.cr6.lt) goto loc_82315E00;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
loc_82315E00:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82315e14
	if (!ctx.cr6.eq) goto loc_82315E14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82315e24
	goto loc_82315E24;
loc_82315E14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f3d8
	ctx.lr = 0x82315E1C;
	sub_8233F3D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82315E24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82315e50
	if (ctx.cr0.eq) goto loc_82315E50;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233ec00
	ctx.lr = 0x82315E48;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315e54
	if (!ctx.cr0.eq) goto loc_82315E54;
loc_82315E50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315E54:
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

DEFINE_REX_FUNC(sub_823190B0) {
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
	// lwz r3,-10776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319108
	if (ctx.cr6.eq) goto loc_82319108;
	// bl 0x82318f60
	ctx.lr = 0x823190D4;
	sub_82318F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231910c
	if (!ctx.cr0.eq) goto loc_8231910C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10776);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1352
	ctx.r6.s64 = 1352;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82319100;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10776(r31)
	REX_STORE_U32(r31.u32 + -10776, ctx.r11.u32);
loc_82319108:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231910C:
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

DEFINE_REX_FUNC(sub_8231D360) {
	REX_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d370
	if (ctx.cr6.eq) goto loc_8231D370;
	// b 0x82350f88
	sub_82350F88(ctx, base);
	return;
loc_8231D370:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231DFF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8231E000;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8231e018
	if (!ctx.cr6.eq) goto loc_8231E018;
loc_8231E010:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231e108
	goto loc_8231E108;
loc_8231E018:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8231E030:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8231e04c
	goto loc_8231E04C;
loc_8231E03C:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8231e054
	if (ctx.cr6.eq) goto loc_8231E054;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_8231E04C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231e03c
	if (!ctx.cr0.eq) goto loc_8231E03C;
loc_8231E054:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8231e06c
	if (ctx.cr0.eq) goto loc_8231E06C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8231E06C:
	// bl 0x82331888
	ctx.lr = 0x8231E070;
	sub_82331888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8231e010
	if (ctx.cr0.lt) goto loc_8231E010;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// beq cr6,0x8231e0b4
	if (ctx.cr6.eq) goto loc_8231E0B4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231e0e8
	if (ctx.cr6.eq) goto loc_8231E0E8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8231e0dc
	if (!ctx.cr6.gt) goto loc_8231E0DC;
loc_8231E0A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231e0e8
	if (ctx.cr6.eq) goto loc_8231E0E8;
	// bdnz 0x8231e0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231E0A0;
	// b 0x8231e0dc
	goto loc_8231E0DC;
loc_8231E0B4:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231e0e8
	if (ctx.cr6.eq) goto loc_8231E0E8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8231e0dc
	if (!ctx.cr6.gt) goto loc_8231E0DC;
loc_8231E0CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231e0e8
	if (ctx.cr6.eq) goto loc_8231E0E8;
	// bdnz 0x8231e0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231E0CC;
loc_8231E0DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8231e0ec
	if (!ctx.cr6.eq) goto loc_8231E0EC;
loc_8231E0E8:
	// li r31,0
	r31.s64 = 0;
loc_8231E0EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8231e104
	if (ctx.cr6.eq) goto loc_8231E104;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231e030
	if (!ctx.cr0.eq) goto loc_8231E030;
loc_8231E104:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8231E108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82328ED8) {
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
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82328f40
	if (ctx.cr6.eq) goto loc_82328F40;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,7904
	ctx.r5.s64 = ctx.r10.s64 + 7904;
	// li r6,220
	ctx.r6.s64 = 220;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82328F30;
	sub_82330E40(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,44
	ctx.r3.s64 = 44;
	// beq 0x82328f44
	if (ctx.cr0.eq) goto loc_82328F44;
loc_82328F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82328F44:
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

DEFINE_REX_FUNC(sub_8232B1A8) {
	REX_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232BE90) {
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
	ctx.lr = 0x8232BE98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232bf20
	if (ctx.cr6.eq) goto loc_8232BF20;
	// lwz r31,64(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// li r27,0
	r27.s64 = 0;
	// b 0x8232bef8
	goto loc_8232BEF8;
loc_8232BEBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// bne cr6,0x8232becc
	if (!ctx.cr6.eq) goto loc_8232BECC;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8232BECC:
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232bef0
	if (ctx.cr6.eq) goto loc_8232BEF0;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bef0
	if (!ctx.cr6.eq) goto loc_8232BEF0;
	// bl 0x8232fc60
	ctx.lr = 0x8232BEE8;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232bf24
	if (!ctx.cr0.eq) goto loc_8232BF24;
loc_8232BEF0:
	// stw r27,28(r30)
	REX_STORE_U32(r30.u32 + 28, r27.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232BEF8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8232bebc
	if (!ctx.cr6.eq) goto loc_8232BEBC;
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232bf1c
	if (ctx.cr6.eq) goto loc_8232BF1C;
	// bl 0x82330040
	ctx.lr = 0x8232BF10;
	sub_82330040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232bf24
	if (!ctx.cr0.eq) goto loc_8232BF24;
	// stw r27,44(r28)
	REX_STORE_U32(r28.u32 + 44, r27.u32);
loc_8232BF1C:
	// stw r27,40(r28)
	REX_STORE_U32(r28.u32 + 40, r27.u32);
loc_8232BF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232BF24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8232F718) {
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
	ctx.lr = 0x8232F720;
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
	ctx.lr = 0x8232F740;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f764
	if (!ctx.cr6.eq) goto loc_8232F764;
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
	// bl 0x82333c30
	ctx.lr = 0x8232F764;
	sub_82333C30(ctx, base);
loc_8232F764:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823306B8) {
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
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823306e8
	if (!ctx.cr6.eq) goto loc_823306E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e398
	ctx.lr = 0x823306E4;
	sub_8233E398(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823306E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r31,164
	ctx.r11.s64 = r31.s64 + 164;
loc_823306F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330744
	if (ctx.cr6.eq) goto loc_82330744;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82330728
	if (ctx.cr6.eq) goto loc_82330728;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// blt cr6,0x823306f0
	if (ctx.cr6.lt) goto loc_823306F0;
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
loc_82330728:
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r9,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r9.u32);
	// stwx r6,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r6.u32);
loc_82330744:
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

DEFINE_REX_FUNC(sub_8233E1C0) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233e1e8
	if (!ctx.cr6.eq) goto loc_8233E1E8;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8233E1E8:
	// bl 0x823ed360
	ctx.lr = 0x8233E1EC;
	sub_823ED360(ctx, base);
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

DEFINE_REX_FUNC(sub_8233EBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233EBD4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ebec
	if (!ctx.cr6.eq) goto loc_8233EBEC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234be00
	ctx.lr = 0x8233EBEC;
	sub_8234BE00(ctx, base);
loc_8233EBEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_8233F608) {
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
	// bl 0x8235ace0
	ctx.lr = 0x8233F62C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f66c
	if (!ctx.cr6.eq) goto loc_8233F66C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233f654
	if (ctx.cr6.eq) goto loc_8233F654;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233f654
	if (ctx.cr6.eq) goto loc_8233F654;
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x8233f66c
	goto loc_8233F66C;
loc_8233F654:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233F66C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F66C:
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

DEFINE_REX_FUNC(sub_82342238) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823422C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823422d8
	if (ctx.cr6.eq) goto loc_823422D8;
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_823422D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823422e8
	if (ctx.cr6.eq) goto loc_823422E8;
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_823422E8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823422f8
	if (ctx.cr6.eq) goto loc_823422F8;
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_823422F8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82342308
	if (ctx.cr6.eq) goto loc_82342308;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82342308:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82348F28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82348F30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82348f54
	if (!ctx.cr6.eq) goto loc_82348F54;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349044
	if (ctx.cr6.eq) goto loc_82349044;
loc_82348F54:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x82348F60;
	sub_8233E7E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r3,20848
	ctx.r11.s64 = ctx.r3.s64 + 20848;
	// lwz r10,20848(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20848);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82348f88
	if (!ctx.cr6.eq) goto loc_82348F88;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82348f8c
	if (ctx.cr6.eq) goto loc_82348F8C;
loc_82348F88:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82348F8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348fa0
	if (ctx.cr6.eq) goto loc_82348FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82334ca0
	ctx.lr = 0x82348FA0;
	sub_82334CA0(ctx, base);
loc_82348FA0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r11,20848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20848);
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
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,20816
	ctx.r10.s64 = ctx.r10.s64 + 20816;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// beq cr6,0x82349024
	if (ctx.cr6.eq) goto loc_82349024;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82349010
	if (ctx.cr6.eq) goto loc_82349010;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82349028
	goto loc_82349028;
loc_82349010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82349024
	if (ctx.cr6.eq) goto loc_82349024;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82349038
	goto loc_82349038;
loc_82349024:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82349028:
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// ori r8,r9,256
	ctx.r8.u64 = ctx.r9.u64 | 256;
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
loc_82349038:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x82349044;
	sub_8233E820(ctx, base);
loc_82349044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234F680) {
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
	ctx.lr = 0x8234F688;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r22,r3,76
	r22.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f6bc
	if (!ctx.cr6.eq) goto loc_8234F6BC;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8234F6BC:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234fce8
	if (ctx.cr6.eq) goto loc_8234FCE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r31,1
	r31.s64 = 65536;
	// li r25,36
	r25.s64 = 36;
	// lis r30,2
	r30.s64 = 131072;
	// lwz r28,168(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lis r29,4
	r29.s64 = 262144;
	// lfs f31,4104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	f31.f64 = double(temp.f32);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// beq cr6,0x8234f74c
	if (ctx.cr6.eq) goto loc_8234F74C;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// beq cr6,0x8234f74c
	if (ctx.cr6.eq) goto loc_8234F74C;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// beq cr6,0x8234f74c
	if (ctx.cr6.eq) goto loc_8234F74C;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234f74c
	if (ctx.cr6.eq) goto loc_8234F74C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234fd48
	if (!ctx.cr6.eq) goto loc_8234FD48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234fa9c
	if (ctx.cr6.lt) goto loc_8234FA9C;
loc_8234F73C:
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8234F74C:
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f768
	if (!ctx.cr6.eq) goto loc_8234F768;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8234F768:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234f78c
	if (!ctx.cr6.eq) goto loc_8234F78C;
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234f73c
	if (!ctx.cr6.lt) goto loc_8234F73C;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// li r26,2
	r26.s64 = 2;
	// li r24,0
	r24.s64 = 0;
	// b 0x8234f7b0
	goto loc_8234F7B0;
loc_8234F78C:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F7A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234fd48
	if (!ctx.cr6.eq) goto loc_8234FD48;
loc_8234F7B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bne cr6,0x8234f7d0
	if (!ctx.cr6.eq) goto loc_8234F7D0;
	// li r26,1
	r26.s64 = 1;
	// b 0x8234f7ec
	goto loc_8234F7EC;
loc_8234F7D0:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bne cr6,0x8234f7e0
	if (!ctx.cr6.eq) goto loc_8234F7E0;
	// li r26,2
	r26.s64 = 2;
	// b 0x8234f7ec
	goto loc_8234F7EC;
loc_8234F7E0:
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// bne cr6,0x8234f7ec
	if (!ctx.cr6.eq) goto loc_8234F7EC;
	// li r26,4
	r26.s64 = 4;
loc_8234F7EC:
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f9c4
	if (ctx.cr6.eq) goto loc_8234F9C4;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8234f80c
	if (!ctx.cr6.eq) goto loc_8234F80C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234F80C:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F81C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8234f874
	if (!ctx.cr6.eq) goto loc_8234F874;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// clrldi r10,r24,32
	ctx.r10.u64 = r24.u64 & 0xFFFFFFFF;
	// li r26,2
	r26.s64 = 2;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F874:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bne cr6,0x8234f9bc
	if (!ctx.cr6.eq) goto loc_8234F9BC;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234f9bc
	if (ctx.cr6.eq) goto loc_8234F9BC;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8234f9bc
	if (ctx.cr6.gt) goto loc_8234F9BC;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1876
	ctx.r12.s64 = ctx.r12.s64 + -1876;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8234F920;
	case 1:
		goto loc_8234F8DC;
	case 2:
		goto loc_8234F8E4;
	case 3:
		goto loc_8234F8EC;
	case 4:
		goto loc_8234F8F4;
	case 5:
		goto loc_8234F8F4;
	case 6:
		goto loc_8234F920;
	case 7:
		goto loc_8234F920;
	case 8:
		goto loc_8234F920;
	case 9:
		goto loc_8234F920;
	case 10:
		goto loc_8234F920;
	case 11:
		goto loc_8234F920;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234F8DC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234f8f8
	goto loc_8234F8F8;
loc_8234F8E4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234f8f8
	goto loc_8234F8F8;
loc_8234F8EC:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234f8f8
	goto loc_8234F8F8;
loc_8234F8F4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234F8F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r24,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(r24.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r26,2
	r26.s64 = 2;
	// divwu r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F920:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1736
	ctx.r12.s64 = ctx.r12.s64 + -1736;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8234F9B0;
	case 1:
		goto loc_8234F9BC;
	case 2:
		goto loc_8234F9BC;
	case 3:
		goto loc_8234F9BC;
	case 4:
		goto loc_8234F9BC;
	case 5:
		goto loc_8234F9BC;
	case 6:
		goto loc_8234F968;
	case 7:
		goto loc_8234F980;
	case 8:
		goto loc_8234F998;
	case 9:
		goto loc_8234F9BC;
	case 10:
		goto loc_8234F9BC;
	case 11:
		goto loc_8234F9BC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234F968:
	// mulli r11,r24,14
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r26,2
	r26.s64 = 2;
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F980:
	// rlwinm r11,r24,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// li r26,2
	r26.s64 = 2;
	// divwu r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F998:
	// mulli r11,r24,28
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r26,2
	r26.s64 = 2;
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F9B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
loc_8234F9BC:
	// li r26,2
	r26.s64 = 2;
	// b 0x8234f9f0
	goto loc_8234F9F0;
loc_8234F9C4:
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234F9E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234fd48
	if (!ctx.cr6.eq) goto loc_8234FD48;
loc_8234F9F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234f73c
	if (!ctx.cr6.lt) goto loc_8234F73C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fa9c
	if (ctx.cr6.eq) goto loc_8234FA9C;
	// li r31,0
	r31.s64 = 0;
loc_8234FA10:
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fa54
	if (ctx.cr6.eq) goto loc_8234FA54;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8234fa30
	if (!ctx.cr6.eq) goto loc_8234FA30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234FA30:
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8234FA48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,368(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x8234fa80
	goto loc_8234FA80;
loc_8234FA54:
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,136(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,92(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234FA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234FA80:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// blt cr6,0x8234fa10
	if (ctx.cr6.lt) goto loc_8234FA10;
loc_8234FA9C:
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fce8
	if (ctx.cr6.eq) goto loc_8234FCE8;
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fce8
	if (ctx.cr6.eq) goto loc_8234FCE8;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x8234faf4
	if (!ctx.cr6.eq) goto loc_8234FAF4;
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8234fc14
	goto loc_8234FC14;
loc_8234FAF4:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bne cr6,0x8234fc14
	if (!ctx.cr6.eq) goto loc_8234FC14;
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 72);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234fc14
	if (ctx.cr6.eq) goto loc_8234FC14;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8234fc14
	if (ctx.cr6.gt) goto loc_8234FC14;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1236
	ctx.r12.s64 = ctx.r12.s64 + -1236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8234FB94;
	case 1:
		goto loc_8234FB5C;
	case 2:
		goto loc_8234FB64;
	case 3:
		goto loc_8234FB6C;
	case 4:
		goto loc_8234FB74;
	case 5:
		goto loc_8234FB74;
	case 6:
		goto loc_8234FB94;
	case 7:
		goto loc_8234FB94;
	case 8:
		goto loc_8234FB94;
	case 9:
		goto loc_8234FB94;
	case 10:
		goto loc_8234FB94;
	case 11:
		goto loc_8234FB94;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234FB5C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234fb78
	goto loc_8234FB78;
loc_8234FB64:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234fb78
	goto loc_8234FB78;
loc_8234FB6C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234fb78
	goto loc_8234FB78;
loc_8234FB74:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234FB78:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r24,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(r24.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x8234fc0c
	goto loc_8234FC0C;
loc_8234FB94:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1108
	ctx.r12.s64 = ctx.r12.s64 + -1108;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8234FC08;
	case 1:
		goto loc_8234FC14;
	case 2:
		goto loc_8234FC14;
	case 3:
		goto loc_8234FC14;
	case 4:
		goto loc_8234FC14;
	case 5:
		goto loc_8234FC14;
	case 6:
		goto loc_8234FBDC;
	case 7:
		goto loc_8234FBE8;
	case 8:
		goto loc_8234FBF4;
	case 9:
		goto loc_8234FC00;
	case 10:
		goto loc_8234FC00;
	case 11:
		goto loc_8234FC00;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234FBDC:
	// mulli r11,r24,14
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8234fc0c
	goto loc_8234FC0C;
loc_8234FBE8:
	// rlwinm r11,r24,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// b 0x8234fc0c
	goto loc_8234FC0C;
loc_8234FBF4:
	// mulli r11,r24,28
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x8234fc0c
	goto loc_8234FC0C;
loc_8234FC00:
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x8234fc14
	goto loc_8234FC14;
loc_8234FC08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234FC0C:
	// divwu r29,r11,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8234FC14:
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234fce8
	if (!ctx.cr6.gt) goto loc_8234FCE8;
	// li r31,0
	r31.s64 = 0;
loc_8234FC28:
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fca4
	if (ctx.cr6.eq) goto loc_8234FCA4;
	// lwz r9,140(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 140);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234fc88
	if (ctx.cr6.eq) goto loc_8234FC88;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8234fc64
	if (!ctx.cr6.eq) goto loc_8234FC64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234FC64:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234FC78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234fd48
	if (!ctx.cr6.eq) goto loc_8234FD48;
	// lwz r11,368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// b 0x8234fc8c
	goto loc_8234FC8C;
loc_8234FC88:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
loc_8234FC8C:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8234fca0
	if (ctx.cr6.lt) goto loc_8234FCA0;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234fcbc
	if (ctx.cr6.lt) goto loc_8234FCBC;
loc_8234FCA0:
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
loc_8234FCA4:
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234fc28
	if (ctx.cr6.lt) goto loc_8234FC28;
	// b 0x8234fce8
	goto loc_8234FCE8;
loc_8234FCBC:
	// lwz r10,72(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234fce8
	if (!ctx.cr6.gt) goto loc_8234FCE8;
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
loc_8234FCD0:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, r30.u32);
	// lwz r9,72(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 72);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234fcd0
	if (ctx.cr6.lt) goto loc_8234FCD0;
loc_8234FCE8:
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234fd3c
	if (!ctx.cr6.gt) goto loc_8234FD3C;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8234FCFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FD18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234fd28
	if (ctx.cr6.eq) goto loc_8234FD28;
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// bne cr6,0x8234fd48
	if (!ctx.cr6.eq) goto loc_8234FD48;
loc_8234FD28:
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234fcfc
	if (ctx.cr6.lt) goto loc_8234FCFC;
loc_8234FD3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8234d998
	ctx.lr = 0x8234FD48;
	sub_8234D998(ctx, base);
loc_8234FD48:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82388690) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,30952
	ctx.r10.s64 = ctx.r11.s64 + 30952;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x823886dc
	if (!ctx.cr6.lt) goto loc_823886DC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823886dc
	if (ctx.cr6.eq) goto loc_823886DC;
	// lwz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r8,r9,r5
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_823886DC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mullw r7,r8,r5
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// srawi r5,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 7;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238F6E8) {
	REX_FUNC_PROLOGUE();
	// lbz r10,678(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 678);
	// lbz r11,646(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 646);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8238f78c
	if (ctx.cr6.gt) goto loc_8238F78C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238f72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238F72C;
	// bdzf 4*cr6+eq,0x8238f750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238F750;
	// bne cr6,0x8238f758
	if (!ctx.cr6.eq) goto loc_8238F758;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r11,30660
	ctx.r9.s64 = ctx.r11.s64 + 30660;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8238f790
	goto loc_8238F790;
loc_8238F72C:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r11,r9,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8238f748
	if (!ctx.cr6.lt) goto loc_8238F748;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_8238F748:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238f790
	goto loc_8238F790;
loc_8238F750:
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8238f790
	goto loc_8238F790;
loc_8238F758:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r6,104(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addis r4,r5,39
	ctx.r4.s64 = ctx.r5.s64 + 2555904;
	// addi r4,r4,-24893
	ctx.r4.s64 = ctx.r4.s64 + -24893;
	// stw r4,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lhz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 104);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238f790
	goto loc_8238F790;
loc_8238F78C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238F790:
	// lbz r10,648(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 648);
	// lbz r9,646(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 646);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// rlwinm r11,r6,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// blt cr6,0x8238f7b0
	if (ctx.cr6.lt) goto loc_8238F7B0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8238F7B0:
	// stw r11,480(r8)
	REX_STORE_U32(ctx.r8.u32 + 480, ctx.r11.u32);
	// lbz r11,646(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 646);
	// lbz r10,647(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 647);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stb r7,646(r3)
	REX_STORE_U8(ctx.r3.u32 + 646, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x8238f7dc
	if (!ctx.cr6.gt) goto loc_8238F7DC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,646(r3)
	REX_STORE_U8(ctx.r3.u32 + 646, ctx.r10.u8);
loc_8238F7DC:
	// lbz r11,460(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,460(r8)
	REX_STORE_U8(ctx.r8.u32 + 460, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82398320) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82398330
	if (!ctx.cr6.eq) goto loc_82398330;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82398330:
	// b 0x82397260
	sub_82397260(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239A7A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A7C8;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239A7E0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8239a7fc
	if (ctx.cr6.eq) goto loc_8239A7FC;
loc_8239A7F4:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8239aaf0
	goto loc_8239AAF0;
loc_8239A7FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A804;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a838
	if (ctx.cr6.eq) goto loc_8239A838;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A814;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239A838;
	sub_8239E6B0(ctx, base);
loc_8239A838:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A848;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239A860;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bne cr6,0x8239a7f4
	if (!ctx.cr6.eq) goto loc_8239A7F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A87C;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a8b0
	if (ctx.cr6.eq) goto loc_8239A8B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A88C;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,20424
	ctx.r5.s64 = ctx.r11.s64 + 20424;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239A8B0;
	sub_8239E6B0(ctx, base);
loc_8239A8B0:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A8C0;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239A8D8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bne cr6,0x8239a7f4
	if (!ctx.cr6.eq) goto loc_8239A7F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A8F4;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a928
	if (ctx.cr6.eq) goto loc_8239A928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A904;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,20416
	ctx.r5.s64 = ctx.r11.s64 + 20416;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239A928;
	sub_8239E6B0(ctx, base);
loc_8239A928:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A938;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239A950;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8239a7f4
	if (!ctx.cr6.eq) goto loc_8239A7F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A96C;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a9a0
	if (ctx.cr6.eq) goto loc_8239A9A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A97C;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,20408
	ctx.r5.s64 = ctx.r11.s64 + 20408;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239A9A0;
	sub_8239E6B0(ctx, base);
loc_8239A9A0:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A9B0;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239A9C8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bne cr6,0x8239a7f4
	if (!ctx.cr6.eq) goto loc_8239A7F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A9E4;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239aa18
	if (ctx.cr6.eq) goto loc_8239AA18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331458
	ctx.lr = 0x8239A9F4;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,20400
	ctx.r5.s64 = ctx.r11.s64 + 20400;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239AA18;
	sub_8239E6B0(ctx, base);
loc_8239AA18:
	// lbz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 124);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,28480
	r30.s64 = ctx.r11.s64 + 28480;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239aa74
	if (!ctx.cr6.eq) goto loc_8239AA74;
	// lbz r11,125(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 125);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239aa74
	if (ctx.cr6.eq) goto loc_8239AA74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a0568
	ctx.lr = 0x8239AA48;
	sub_826A0568(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331458
	ctx.lr = 0x8239AA50;
	sub_82331458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,20392
	ctx.r5.s64 = ctx.r11.s64 + 20392;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239AA74;
	sub_8239E6B0(ctx, base);
loc_8239AA74:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8239AA84;
	sub_823EF5F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8239AA9C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aaf0
	if (!ctx.cr6.eq) goto loc_8239AAF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239a7f4
	if (!ctx.cr6.eq) goto loc_8239A7F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a0568
	ctx.lr = 0x8239AAC0;
	sub_826A0568(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331458
	ctx.lr = 0x8239AAC8;
	sub_82331458(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r5,r10,20384
	ctx.r5.s64 = ctx.r10.s64 + 20384;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8239e6b0
	ctx.lr = 0x8239AAEC;
	sub_8239E6B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239AAF0:
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

DEFINE_REX_FUNC(sub_823AADA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AADB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823aadbc
	goto loc_823AADBC;
loc_823AADBC:
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 784);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823a6a40
	ctx.lr = 0x823AADC8;
	sub_823A6A40(ctx, base);
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

DEFINE_REX_FUNC(sub_823AC9E0) {
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
	ctx.lr = 0x823AC9E8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x823d1878
	ctx.lr = 0x823AC9F8;
	sub_823D1878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// stw r29,780(r31)
	REX_STORE_U32(r31.u32 + 780, r29.u32);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823ACA2C;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,22104
	ctx.r4.s64 = ctx.r9.s64 + 22104;
	// bl 0x82331480
	ctx.lr = 0x823ACA3C;
	sub_82331480(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// ori r6,r8,256
	ctx.r6.u64 = ctx.r8.u64 | 256;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// addi r30,r31,768
	r30.s64 = r31.s64 + 768;
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82336400
	ctx.lr = 0x823ACA6C;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x823496b8
	ctx.lr = 0x823ACA80;
	sub_823496B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,80(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lfs f0,260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823ACAB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x82348e28
	ctx.lr = 0x823ACADC;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acb04
	if (ctx.cr6.eq) goto loc_823ACB04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823ACAFC;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
loc_823ACB04:
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acb24
	if (ctx.cr6.eq) goto loc_823ACB24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823ACB1C;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
loc_823ACB24:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823ACB3C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82348ca0
	ctx.lr = 0x823ACB5C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r31,784
	ctx.r7.s64 = r31.s64 + 784;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,32(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82348ca0
	ctx.lr = 0x823ACB84;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r4.u32);
	// bl 0x823ac2f0
	ctx.lr = 0x823ACB9C;
	sub_823AC2F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acc68
	if (!ctx.cr6.eq) goto loc_823ACC68;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,-2
	ctx.r10.s64 = -2;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r8,400(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r9,392(r11)
	REX_STORE_U32(ctx.r11.u32 + 392, ctx.r9.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r7,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r7.u32);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r6,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r6.u32);
	// lwz r5,400(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r4,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r3,400(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,400(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r29.u32);
	// lwz r7,400(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r29.u32);
	// lwz r6,400(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r5,400(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, r29.u32);
	// lwz r4,400(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, r29.u32);
	// lwz r3,400(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acc28
	if (ctx.cr6.eq) goto loc_823ACC28;
	// stw r29,332(r11)
	REX_STORE_U32(ctx.r11.u32 + 332, r29.u32);
loc_823ACC28:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8235f3c0
	ctx.lr = 0x823ACC48;
	sub_8235F3C0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,284(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r6,284(r8)
	REX_STORE_U32(ctx.r8.u32 + 284, ctx.r6.u32);
	// lwz r5,284(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 284);
	// rlwinm r4,r5,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r4,284(r28)
	REX_STORE_U32(r28.u32 + 284, ctx.r4.u32);
loc_823ACC68:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823C8940) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823c8950
	if (!ctx.cr6.eq) goto loc_823C8950;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823C8950:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x823c8aa4
	if (ctx.cr6.gt) goto loc_823C8AA4;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30348
	ctx.r12.s64 = ctx.r12.s64 + -30348;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823C8AA4;
	case 1:
		goto loc_823C89B4;
	case 2:
		goto loc_823C89C4;
	case 3:
		goto loc_823C89D4;
	case 4:
		goto loc_823C89E4;
	case 5:
		goto loc_823C89F4;
	case 6:
		goto loc_823C8A04;
	case 7:
		goto loc_823C8A14;
	case 8:
		goto loc_823C8A24;
	case 9:
		goto loc_823C8A34;
	case 10:
		goto loc_823C8A44;
	case 11:
		goto loc_823C8A54;
	case 12:
		goto loc_823C8A64;
	case 13:
		goto loc_823C8A74;
	case 14:
		goto loc_823C8A84;
	case 15:
		goto loc_823C8A94;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823C89B4:
	// li r11,8413
	ctx.r11.s64 = 8413;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C89C4:
	// li r11,8463
	ctx.r11.s64 = 8463;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C89D4:
	// li r11,8529
	ctx.r11.s64 = 8529;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C89E4:
	// li r11,8581
	ctx.r11.s64 = 8581;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C89F4:
	// li r11,8651
	ctx.r11.s64 = 8651;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A04:
	// li r11,8723
	ctx.r11.s64 = 8723;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A14:
	// li r11,8757
	ctx.r11.s64 = 8757;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A24:
	// li r11,7895
	ctx.r11.s64 = 7895;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A34:
	// li r11,7941
	ctx.r11.s64 = 7941;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A44:
	// li r11,7985
	ctx.r11.s64 = 7985;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A54:
	// li r11,8046
	ctx.r11.s64 = 8046;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A64:
	// li r11,8107
	ctx.r11.s64 = 8107;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A74:
	// li r11,8169
	ctx.r11.s64 = 8169;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A84:
	// li r11,8232
	ctx.r11.s64 = 8232;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8A94:
	// li r11,8280
	ctx.r11.s64 = 8280;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8AA4:
	// li r11,8363
	ctx.r11.s64 = 8363;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CCE78) {
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
	ctx.lr = 0x823CCE80;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// ld r29,6128(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 6128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cceb8
	if (ctx.cr6.eq) goto loc_823CCEB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r28,304(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 304);
	// b 0x823ccebc
	goto loc_823CCEBC;
loc_823CCEB8:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_823CCEBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,252(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r8,272(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r4,276(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r7,284(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// lwz r6,280(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// beq cr6,0x823ccef4
	if (ctx.cr6.eq) goto loc_823CCEF4;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r9,448
	ctx.r3.s64 = ctx.r9.s64 + 448;
	// b 0x823ccef8
	goto loc_823CCEF8;
loc_823CCEF4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823CCEF8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ccf08
	if (!ctx.cr6.eq) goto loc_823CCF08;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,292(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 292);
loc_823CCF08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ccf18
	if (!ctx.cr6.eq) goto loc_823CCF18;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
loc_823CCF18:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ccf30
	if (ctx.cr6.eq) goto loc_823CCF30;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// b 0x823ccf5c
	goto loc_823CCF5C;
loc_823CCF30:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823ccf50
	if (!ctx.cr6.eq) goto loc_823CCF50;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ccf50
	if (ctx.cr6.eq) goto loc_823CCF50;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x823ccf58
	goto loc_823CCF58;
loc_823CCF50:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,9,3,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FFFFE00;
loc_823CCF58:
	// addi r27,r11,64
	r27.s64 = ctx.r11.s64 + 64;
loc_823CCF5C:
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// mr r25,r23
	r25.u64 = r23.u64;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// mr r26,r28
	r26.u64 = r28.u64;
	// bgt cr6,0x823ccf78
	if (ctx.cr6.gt) goto loc_823CCF78;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_823CCF78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd0ac
	if (ctx.cr6.eq) goto loc_823CD0AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ld r7,-4400(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + -4400);
	// blt 0x823cd01c
	if (ctx.cr0.lt) goto loc_823CD01C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823CCFB4:
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r10,r7
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x823ccfe4
	if (ctx.cr6.eq) goto loc_823CCFE4;
	// lwz r20,16(r9)
	r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x823ccfe4
	if (ctx.cr6.eq) goto loc_823CCFE4;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// ble cr6,0x823ccfdc
	if (!ctx.cr6.gt) goto loc_823CCFDC;
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r28.u64, ctx.xer);
	// bge cr6,0x823ccfe4
	if (!ctx.cr6.lt) goto loc_823CCFE4;
loc_823CCFDC:
	// cmpld cr6,r10,r24
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r24.u64, ctx.xer);
	// ble cr6,0x823ccff4
	if (!ctx.cr6.gt) goto loc_823CCFF4;
loc_823CCFE4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// bge 0x823ccfb4
	if (!ctx.cr0.lt) goto loc_823CCFB4;
	// b 0x823cd01c
	goto loc_823CD01C;
loc_823CCFF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cd01c
	if (ctx.cr6.lt) goto loc_823CD01C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r31,0(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
loc_823CD01C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823cd06c
	if (!ctx.cr6.gt) goto loc_823CD06C;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_823CD02C:
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r10,r7
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x823cd05c
	if (ctx.cr6.eq) goto loc_823CD05C;
	// lwz r20,16(r9)
	r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x823cd05c
	if (ctx.cr6.eq) goto loc_823CD05C;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// ble cr6,0x823cd054
	if (!ctx.cr6.gt) goto loc_823CD054;
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r28.u64, ctx.xer);
	// bge cr6,0x823cd05c
	if (!ctx.cr6.lt) goto loc_823CD05C;
loc_823CD054:
	// cmpld cr6,r10,r24
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r24.u64, ctx.xer);
	// bgt cr6,0x823cd06c
	if (ctx.cr6.gt) goto loc_823CD06C;
loc_823CD05C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823cd02c
	if (ctx.cr6.lt) goto loc_823CD02C;
loc_823CD06C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823cd094
	if (!ctx.cr6.lt) goto loc_823CD094;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + r29.u64;
loc_823CD094:
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// blt cr6,0x823cd0ac
	if (ctx.cr6.lt) goto loc_823CD0AC;
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// mr r25,r31
	r25.u64 = r31.u64;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
loc_823CD0AC:
	// cmpld cr6,r26,r25
	ctx.cr6.compare<uint64_t>(r26.u64, r25.u64, ctx.xer);
	// bne cr6,0x823cd0b8
	if (!ctx.cr6.eq) goto loc_823CD0B8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_823CD0B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpld cr6,r25,r26
	ctx.cr6.compare<uint64_t>(r25.u64, r26.u64, ctx.xer);
	// std r24,6136(r11)
	REX_STORE_U64(ctx.r11.u32 + 6136, r24.u64);
	// bge cr6,0x823cd32c
	if (!ctx.cr6.lt) goto loc_823CD32C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r28,2
	r28.s64 = 2;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r29,3
	r29.s64 = 3;
loc_823CD0D8:
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x823cd32c
	if (ctx.cr6.gt) goto loc_823CD32C;
	// subf r7,r25,r24
	ctx.r7.u64 = r24.u64 - r25.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// subf r9,r25,r26
	ctx.r9.u64 = r26.u64 - r25.u64;
	// clrldi r6,r27,32
	ctx.r6.u64 = r27.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fdiv f8,f11,f10
	ctx.f8.f64 = ctx.f11.f64 / ctx.f10.f64;
	// fmul f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64;
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f6.u64);
	// ld r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x823cd13c
	if (ctx.cr6.lt) goto loc_823CD13C;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
loc_823CD13C:
	// cmpd cr6,r31,r10
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x823cd148
	if (!ctx.cr6.lt) goto loc_823CD148;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823CD148:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CD164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cd32c
	if (!ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// std r23,240(r11)
	REX_STORE_U64(ctx.r11.u32 + 240, r23.u64);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r23,3616(r10)
	REX_STORE_U32(ctx.r10.u32 + 3616, r23.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,60(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x823dcb08
	ctx.lr = 0x823CD188;
	sub_823DCB08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd344
	if (ctx.cr6.eq) goto loc_823CD344;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r23,6144(r10)
	REX_STORE_U32(ctx.r10.u32 + 6144, r23.u32);
	// bl 0x823ccd88
	ctx.lr = 0x823CD1AC;
	sub_823CCD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,3624(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cd358
	if (ctx.cr6.eq) goto loc_823CD358;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r9,240(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 240);
	// ld r11,3768(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 3768);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823cd304
	if (ctx.cr6.eq) goto loc_823CD304;
	// lwz r10,3744(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3744);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r26.u64, ctx.xer);
	// blt cr6,0x823cd1f0
	if (ctx.cr6.lt) goto loc_823CD1F0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823cd304
	if (ctx.cr6.eq) goto loc_823CD304;
loc_823CD1F0:
	// mr r22,r23
	r22.u64 = r23.u64;
	// cmpld cr6,r11,r25
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r25.u64, ctx.xer);
	// blt cr6,0x823cd32c
	if (ctx.cr6.lt) goto loc_823CD32C;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(r24.u64, ctx.r11.u64, ctx.xer);
	// lwz r10,3744(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 3744);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// bge cr6,0x823cd28c
	if (!ctx.cr6.lt) goto loc_823CD28C;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CD238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cd32c
	if (!ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbc8
	ctx.lr = 0x823CD24C;
	sub_823DCBC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbf0
	ctx.lr = 0x823CD260;
	sub_823DCBF0(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r3,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - r31.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rldicr r6,r7,1,62
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// divdu r5,r6,r29
	ctx.r5.u64 = r29.u64 ? ctx.r6.u64 / r29.u64 : 0;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r27,r9,16
	r27.s64 = ctx.r9.s64 + 16;
	// b 0x823cd324
	goto loc_823CD324;
loc_823CD28C:
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CD2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cd32c
	if (!ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbc8
	ctx.lr = 0x823CD2C8;
	sub_823DCBC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbf0
	ctx.lr = 0x823CD2DC;
	sub_823DCBF0(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r9,r3,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - r31.u64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// divdu r6,r7,r29
	ctx.r6.u64 = r29.u64 ? ctx.r7.u64 / r29.u64 : 0;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r27,r9,16
	r27.s64 = ctx.r9.s64 + 16;
	// b 0x823cd320
	goto loc_823CD320;
loc_823CD304:
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r31,r10
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r10.s64, ctx.xer);
	// beq cr6,0x823cd32c
	if (ctx.cr6.eq) goto loc_823CD32C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823cd320
	if (!ctx.cr6.eq) goto loc_823CD320;
	// li r27,16
	r27.s64 = 16;
loc_823CD320:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_823CD324:
	// cmpld cr6,r25,r26
	ctx.cr6.compare<uint64_t>(r25.u64, r26.u64, ctx.xer);
	// blt cr6,0x823cd0d8
	if (ctx.cr6.lt) goto loc_823CD0D8;
loc_823CD32C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
loc_823CD344:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
loc_823CD358:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823E8460) {
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
	ctx.lr = 0x823E8468;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// li r20,1
	r20.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r23,r4,2
	r23.s64 = ctx.r4.s64 + 2;
	// stw r20,4(r19)
	REX_STORE_U32(r19.u32 + 4, r20.u32);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// mr r31,r20
	r31.u64 = r20.u64;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x823e8590
	if (!ctx.cr6.gt) goto loc_823E8590;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bgt cr6,0x823e8590
	if (ctx.cr6.gt) goto loc_823E8590;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r24,3
	r24.s64 = 3;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(r23.u32, 3, ctx.xer);
	// mr r25,r30
	r25.u64 = r30.u64;
	// stw r30,8(r19)
	REX_STORE_U32(r19.u32 + 8, r30.u32);
	// ble cr6,0x823e8600
	if (!ctx.cr6.gt) goto loc_823E8600;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r22,2
	r22.s64 = 2;
	// li r28,2
	r28.s64 = 2;
	// addi r29,r19,8
	r29.s64 = r19.s64 + 8;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// addi r21,r11,7680
	r21.s64 = ctx.r11.s64 + 7680;
loc_823E84D8:
	// xor r3,r27,r28
	ctx.r3.u64 = r27.u64 ^ r28.u64;
	// bl 0x823e9178
	ctx.lr = 0x823E84E0;
	sub_823E9178(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// sraw r6,r26,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r26.s32 < 0) & (((r26.s32 >> temp.u32) << temp.u32) != r26.s32);
	ctx.r6.s64 = r26.s32 >> temp.u32;
	// slw r9,r20,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// srw r5,r30,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// and r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 & r30.u64;
	// and r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 & r31.u64;
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// srw r4,r31,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r8,r5,r25
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r24,1
	ctx.r11.s64 = r24.s64 + 1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r7,r26,1
	ctx.r7.s64 = r26.s64 + 1;
	// lwzx r5,r8,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r21.u32);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r10,r22,1
	ctx.r10.s64 = r22.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bge cr6,0x823e8600
	if (!ctx.cr6.lt) goto loc_823E8600;
	// rlwinm r6,r10,1,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// mullw r5,r25,r31
	ctx.r5.s64 = int64_t(r25.s32) * int64_t(r31.s32);
	// lwzx r4,r6,r21
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r21.u32);
	// subf r3,r30,r5
	ctx.r3.u64 = ctx.r5.u64 - r30.u64;
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stwu r30,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r30.u32);
	r29.u32 = ea;
	// addi r27,r8,1
	r27.s64 = ctx.r8.s64 + 1;
	// addi r26,r7,1
	r26.s64 = ctx.r7.s64 + 1;
	// addi r22,r10,1
	r22.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// blt cr6,0x823e84d8
	if (ctx.cr6.lt) goto loc_823E84D8;
	// b 0x823e8600
	goto loc_823E8600;
loc_823E8590:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r19,4
	ctx.r9.s64 = r19.s64 + 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_823E859C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// blt cr6,0x823e859c
	if (ctx.cr6.lt) goto loc_823E859C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x823e8600
	if (!ctx.cr6.gt) goto loc_823E8600;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// addi r6,r18,1
	ctx.r6.s64 = r18.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E85C4:
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
loc_823E85D0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blt cr6,0x823e85d0
	if (ctx.cr6.lt) goto loc_823E85D0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// bdnz 0x823e85c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E85C4;
loc_823E8600:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823EE288) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x823ee2f4
	if (!ctx.cr6.eq) goto loc_823EE2F4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ee2d4
	if (ctx.cr6.eq) goto loc_823EE2D4;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee2c8
	if (ctx.cr6.eq) goto loc_823EE2C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823EE2C8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823eeb10
	ctx.lr = 0x823EE2D0;
	sub_823EEB10(ctx, base);
	// b 0x823ee2d8
	goto loc_823EE2D8;
loc_823EE2D4:
	// li r3,258
	ctx.r3.s64 = 258;
loc_823EE2D8:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x823ee2ec
	if (!ctx.cr6.eq) goto loc_823EE2EC;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x823f0188
	ctx.lr = 0x823EE2E8;
	sub_823F0188(ctx, base);
	// b 0x823ee314
	goto loc_823EE314;
loc_823EE2EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ee314
	if (!ctx.cr6.eq) goto loc_823EE314;
loc_823EE2F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ee310
	if (ctx.cr6.lt) goto loc_823EE310;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ee318
	goto loc_823EE318;
loc_823EE310:
	// bl 0x823f0020
	ctx.lr = 0x823EE314;
	sub_823F0020(ctx, base);
loc_823EE314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EE318:
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

DEFINE_REX_FUNC(sub_823F01E0) {
	REX_FUNC_PROLOGUE();
	// b 0x823f5168
	sub_823F5168(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F02B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823F02C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0330
	if (ctx.cr0.eq) goto loc_823F0330;
	// rlwinm. r11,r4,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f02e4
	if (!ctx.cr0.eq) goto loc_823F02E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r31,r11,26,4,7
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF000000) | (r31.u64 & 0xFFFFFFFFF0FFFFFF);
loc_823F02E4:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r10,r31,6,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xC;
	// addi r11,r11,-30820
	ctx.r11.s64 = ctx.r11.s64 + -30820;
	// rlwinm r9,r31,8,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xF;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// slw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823ed608
	ctx.lr = 0x823F030C;
	sub_823ED608(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x823f0340
	if (ctx.cr0.eq) goto loc_823F0340;
	// rlwinm. r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0340
	if (ctx.cr0.eq) goto loc_823F0340;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F032C;
	sub_826A2E60(ctx, base);
	// b 0x823f0340
	goto loc_823F0340;
loc_823F0330:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r3,r31,8,25,25
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0x40;
	// bl 0x823f51c8
	ctx.lr = 0x823F033C;
	sub_823F51C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823F0340:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823F6480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F6488;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,2148(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2148);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,2418(r3)
	REX_STORE_U8(ctx.r3.u32 + 2418, r29.u8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823f64c0
	if (!ctx.cr6.lt) goto loc_823F64C0;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x823f64c4
	goto loc_823F64C4;
loc_823F64C0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_823F64C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,17184(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823f6580
	if (ctx.cr6.gt) goto loc_823F6580;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f9770
	ctx.lr = 0x823F64F8;
	sub_823F9770(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f9418
	ctx.lr = 0x823F650C;
	sub_823F9418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7b18
	ctx.lr = 0x823F6518;
	sub_823F7B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7ca8
	ctx.lr = 0x823F6520;
	sub_823F7CA8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826a2e60
	ctx.lr = 0x823F6530;
	sub_826A2E60(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x826a2e60
	ctx.lr = 0x823F6540;
	sub_826A2E60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,2144(r31)
	REX_STORE_U32(r31.u32 + 2144, r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stb r11,2419(r31)
	REX_STORE_U8(r31.u32 + 2419, ctx.r11.u8);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,9504(r31)
	REX_STORE_U32(r31.u32 + 9504, ctx.r11.u32);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x823f6584
	goto loc_823F6584;
loc_823F6580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823FBF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb0
	ctx.lr = 0x823FBF68;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,63
	ctx.r8.s64 = 63;
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsr v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v63,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,8
	ctx.r6.s64 = 8;
	// lvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,12
	r31.s64 = 12;
	// vperm128 v59,v61,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v58,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v62,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v55,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vperm128 v63,v63,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltw128 v54,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// lvx128 v59,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v13,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v61,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v53,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// li r8,20
	ctx.r8.s64 = 20;
	// vspltw128 v57,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// li r5,24
	ctx.r5.s64 = 24;
	// vmulfp128 v28,v54,v56
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v31,v55,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xAA));
	// vspltw128 v29,v58,1
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xAA));
	// li r4,28
	ctx.r4.s64 = 28;
	// vmulfp128 v26,v53,v56
	simde_mm_store_ps(v26.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vperm128 v12,v60,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmulfp128 v30,v57,v56
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v57,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v27,v62,1
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// li r30,36
	r30.s64 = 36;
	// vspltw128 v3,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0x55));
	// li r29,40
	r29.s64 = 40;
	// vspltw128 v1,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// li r28,44
	r28.s64 = 44;
	// vmulfp128 v2,v57,v56
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v4,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x55));
	// vperm128 v0,v59,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r27,52
	r27.s64 = 52;
	// vspltw128 v5,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// li r26,56
	r26.s64 = 56;
	// vspltw128 v11,v55,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0x0));
	// vspltw128 v7,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v8,v58,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x0));
	// vspltw128 v9,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v10,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v31,v31,v13,v30
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v30.f32)));
	// vmaddfp v30,v29,v13,v28
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v28.f32)));
	// vmaddfp v29,v27,v13,v26
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v26.f32)));
	// vmaddfp v2,v1,v13,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v3,v3,v12,v31
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v4,v4,v12,v30
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(v30.f32)));
	// vmaddfp v13,v5,v12,v29
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(v29.f32)));
	// vmaddfp v7,v7,v12,v2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v11,v11,v0,v3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v12,v8,v0,v4
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v9,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vperm128 v63,v11,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v62,v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v61,v13,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,60
	ctx.r7.s64 = 60;
	// stvewx128 v63,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r27
	ea = (ctx.r3.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r26
	ea = (ctx.r3.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824110A0) {
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
	// bge cr6,0x82411144
	if (!ctx.cr6.lt) goto loc_82411144;
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
loc_824110FC:
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
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
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x824110fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824110FC;
loc_82411144:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411160
	if (ctx.cr6.eq) goto loc_82411160;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411160;
	sub_825C73B8(ctx, base);
loc_82411160:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241117c
	if (ctx.cr6.eq) goto loc_8241117C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x8241117C;
	sub_82409820(ctx, base);
loc_8241117C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82414398) {
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
	// bl 0x82413818
	ctx.lr = 0x824143B8;
	sub_82413818(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824143cc
	if (ctx.cr0.eq) goto loc_824143CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824143CC;
	sub_823F0350(ctx, base);
loc_824143CC:
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

DEFINE_REX_FUNC(sub_824154D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824154D8;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_824154E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415504
	if (ctx.cr0.eq) goto loc_82415504;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824154e0
	if (ctx.cr6.eq) goto loc_824154E0;
loc_82415504:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241576c
	if (!ctx.cr0.eq) goto loc_8241576C;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,4(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82415544
	if (ctx.cr0.eq) goto loc_82415544;
loc_82415524:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241553c
	if (ctx.cr6.eq) goto loc_8241553C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82415524
	if (!ctx.cr6.eq) goto loc_82415524;
loc_8241553C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
loc_82415544:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x82415758
	goto loc_82415758;
loc_82415558:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241576c
	if (ctx.cr6.eq) goto loc_8241576C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82415744
	if (ctx.cr6.gt) goto loc_82415744;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,23104
	ctx.r12.s64 = ctx.r12.s64 + 23104;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32191
	ctx.r12.s64 = -2109669376;
	// nop 
	// addi r12,r12,21920
	ctx.r12.s64 = ctx.r12.s64 + 21920;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824155A0;
	case 1:
		goto loc_824155B8;
	case 2:
		goto loc_824155A0;
	case 3:
		goto loc_824155A0;
	case 4:
		goto loc_824155A0;
	case 5:
		goto loc_824155FC;
	case 6:
		goto loc_824155FC;
	case 7:
		goto loc_824155FC;
	case 8:
		goto loc_824155FC;
	case 9:
		goto loc_8241560C;
	case 10:
		goto loc_82415714;
	case 11:
		goto loc_82415714;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824155A0:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_824155AC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
loc_824155B0:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82415748
	goto loc_82415748;
loc_824155B8:
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// lbz r11,25(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r10,25(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// lbz r11,26(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r10,26(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// lbz r11,27(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 27);
	// lbz r10,27(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 27);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_824155F4:
	// bne cr6,0x8241576c
	if (!ctx.cr6.eq) goto loc_8241576C;
	// b 0x82415750
	goto loc_82415750;
loc_824155FC:
	// lfd f0,24(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// lfd f13,24(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x824155f4
	goto loc_824155F4;
loc_8241560C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82415670
	if (ctx.cr0.eq) goto loc_82415670;
	// lwz r6,24(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_82415624:
	// lwz r10,24(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8241562C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - r29.u64;
	// beq 0x82415650
	if (ctx.cr0.eq) goto loc_82415650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241562c
	if (ctx.cr6.eq) goto loc_8241562C;
loc_82415650:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241566c
	if (ctx.cr0.eq) goto loc_8241566C;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82415624
	if (!ctx.cr6.eq) goto loc_82415624;
	// b 0x82415670
	goto loc_82415670;
loc_8241566C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82415670:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824156d0
	if (ctx.cr0.eq) goto loc_824156D0;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_82415684:
	// lwz r10,24(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8241568C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - r29.u64;
	// beq 0x824156b0
	if (ctx.cr0.eq) goto loc_824156B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241568c
	if (ctx.cr6.eq) goto loc_8241568C;
loc_824156B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824156cc
	if (ctx.cr0.eq) goto loc_824156CC;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82415684
	if (!ctx.cr6.eq) goto loc_82415684;
	// b 0x824156d0
	goto loc_824156D0;
loc_824156CC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_824156D0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824156e0
	if (ctx.cr6.eq) goto loc_824156E0;
	// addi r11,r6,0
	ctx.r11.s64 = ctx.r6.s64 + 0;
	// b 0x824155ac
	goto loc_824155AC;
loc_824156E0:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_824156E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241570c
	if (ctx.cr0.eq) goto loc_8241570C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824156e8
	if (ctx.cr6.eq) goto loc_824156E8;
loc_8241570C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// b 0x824155b0
	goto loc_824155B0;
loc_82415714:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_8241571C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241570c
	if (ctx.cr0.eq) goto loc_8241570C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241571c
	if (ctx.cr6.eq) goto loc_8241571C;
	// b 0x8241570c
	goto loc_8241570C;
loc_82415744:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82415748:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241576c
	if (ctx.cr6.eq) goto loc_8241576C;
loc_82415750:
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_82415758:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82415558
	if (!ctx.cr6.eq) goto loc_82415558;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82415770
	if (ctx.cr6.eq) goto loc_82415770;
loc_8241576C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82415770:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82437CC0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9108
	ctx.lr = 0x82437CD4;
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

DEFINE_REX_FUNC(sub_82437FE0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9160
	ctx.lr = 0x82437FF4;
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

DEFINE_REX_FUNC(sub_82438190) {
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
	// beq 0x824381d0
	if (ctx.cr0.eq) goto loc_824381D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_824381B0:
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
	// bdnz 0x824381b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824381B0;
loc_824381D0:
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
	// bl 0x822c8f70
	ctx.lr = 0x82438200;
	sub_822C8F70(ctx, base);
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

DEFINE_REX_FUNC(sub_8243E4D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8243E4E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// blt cr6,0x8243e5b0
	if (ctx.cr6.lt) goto loc_8243E5B0;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8243e5b0
	if (!ctx.cr6.eq) goto loc_8243E5B0;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bne cr6,0x8243e5b0
	if (!ctx.cr6.eq) goto loc_8243E5B0;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x8243e5b0
	if (!ctx.cr6.eq) goto loc_8243E5B0;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// bne cr6,0x8243e5b0
	if (!ctx.cr6.eq) goto loc_8243E5B0;
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// bne cr6,0x8243e5b0
	if (!ctx.cr6.eq) goto loc_8243E5B0;
	// lbz r8,9(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// li r30,76
	r30.s64 = 76;
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r29,11(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r29,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r29.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8243E59C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,300(r31)
	REX_STORE_U8(r31.u32 + 300, r29.u8);
	// stw r4,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8243E5B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,78
	ctx.r10.s64 = 78;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243E5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824444E0) {
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
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-30784(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82444524
	if (ctx.cr6.eq) goto loc_82444524;
	// bl 0x824438e0
	ctx.lr = 0x82444508;
	sub_824438E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82444528
	if (ctx.cr0.lt) goto loc_82444528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f5488
	ctx.lr = 0x82444518;
	sub_825F5488(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82444528
	goto loc_82444528;
loc_82444524:
	// bl 0x824438e0
	ctx.lr = 0x82444528;
	sub_824438E0(ctx, base);
loc_82444528:
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

DEFINE_REX_FUNC(sub_824448B0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824448c8
	if (!ctx.cr6.eq) goto loc_824448C8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_824448C8:
	// addi r11,r1,20
	ctx.r11.s64 = ctx.r1.s64 + 20;
loc_824448CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824448cc
	if (!ctx.cr6.eq) goto loc_824448CC;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824453F8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r10,-8032
	ctx.r10.s64 = ctx.r10.s64 + -8032;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r6,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824462C8) {
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
	ctx.lr = 0x824462E4;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82444608
	ctx.lr = 0x824462F4;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446340
	if (ctx.cr0.eq) goto loc_82446340;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// b 0x82446344
	goto loc_82446344;
loc_82446340:
	// li r31,0
	r31.s64 = 0;
loc_82446344:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82446354
	if (!ctx.cr6.eq) goto loc_82446354;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824463b0
	goto loc_824463B0;
loc_82446354:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824463ac
	if (ctx.cr6.eq) goto loc_824463AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244639C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x824463b0
	if (ctx.cr0.eq) goto loc_824463B0;
loc_824463AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824463B0:
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

DEFINE_REX_FUNC(sub_8244A580) {
	REX_FUNC_PROLOGUE();
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-28408
	ctx.r9.s64 = ctx.r9.s64 + -28408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lbzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r3,36(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// beq cr6,0x8244a62c
	if (ctx.cr6.eq) goto loc_8244A62C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8244a618
	if (ctx.cr6.eq) goto loc_8244A618;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r10,r4,25
	ctx.r10.s64 = ctx.r4.s64 + 25;
	// clrlwi r7,r3,30
	ctx.r7.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a5f4
	if (ctx.cr6.eq) goto loc_8244A5F4;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8244a5ec
	if (!ctx.cr6.eq) goto loc_8244A5EC;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8244A5EC:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
loc_8244A5F4:
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r7,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r10,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
loc_8244A618:
	// rlwinm r11,r3,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// rlwinm r10,r3,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xC0;
	// mulli r11,r11,21
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(21));
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
loc_8244A62C:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// mulli r3,r11,85
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(85));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82454988) {
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
	ctx.lr = 0x82454990;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824549b8
	if (ctx.cr6.eq) goto loc_824549B8;
	// lis r24,15
	r24.s64 = 983040;
	// b 0x82454a6c
	goto loc_82454A6C;
loc_824549B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824549d8
	if (ctx.cr0.eq) goto loc_824549D8;
	// lis r24,16
	r24.s64 = 1048576;
loc_824549D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82454a6c
	if (ctx.cr6.eq) goto loc_82454A6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r27,r11,13120
	r27.s64 = ctx.r11.s64 + 13120;
loc_824549F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82454a38
	if (ctx.cr6.lt) goto loc_82454A38;
	// beq cr6,0x82454a30
	if (ctx.cr6.eq) goto loc_82454A30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82454a28
	if (ctx.cr6.lt) goto loc_82454A28;
	// bne cr6,0x82454a3c
	if (!ctx.cr6.eq) goto loc_82454A3C;
	// lis r31,8
	r31.s64 = 524288;
	// b 0x82454a3c
	goto loc_82454A3C;
loc_82454A28:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x82454a3c
	goto loc_82454A3C;
loc_82454A30:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x82454a3c
	goto loc_82454A3C;
loc_82454A38:
	// lis r31,1
	r31.s64 = 65536;
loc_82454A3C:
	// and. r11,r31,r24
	ctx.r11.u64 = r31.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82454a5c
	if (ctx.cr0.eq) goto loc_82454A5C;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x82454A5C;
	sub_82489C30(ctx, base);
loc_82454A5C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// or r24,r31,r24
	r24.u64 = r31.u64 | r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824549f0
	if (!ctx.cr0.eq) goto loc_824549F0;
loc_82454A6C:
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454b00
	if (!ctx.cr0.eq) goto loc_82454B00;
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82454afc
	if (!ctx.cr0.eq) goto loc_82454AFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82454af4
	if (ctx.cr6.eq) goto loc_82454AF4;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82454A98:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82454ae4
	if (!ctx.cr0.eq) goto loc_82454AE4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82454af4
	if (ctx.cr0.eq) goto loc_82454AF4;
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82454af4
	if (ctx.cr6.eq) goto loc_82454AF4;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82454af4
	if (!ctx.cr6.eq) goto loc_82454AF4;
loc_82454AE4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// blt cr6,0x82454a98
	if (ctx.cr6.lt) goto loc_82454A98;
loc_82454AF4:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bne cr6,0x82454b00
	if (!ctx.cr6.eq) goto loc_82454B00;
loc_82454AFC:
	// oris r24,r24,32
	r24.u64 = r24.u64 | 2097152;
loc_82454B00:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82454b54
	if (ctx.cr0.eq) goto loc_82454B54;
	// lwz r11,296(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82454b54
	if (ctx.cr6.eq) goto loc_82454B54;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82454b54
	if (ctx.cr6.eq) goto loc_82454B54;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
loc_82454B2C:
	// lwz r8,300(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 300);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r8,r8,6
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(6));
	// lwz r7,296(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 296);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x82454b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82454B2C;
loc_82454B54:
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82462F20) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x82462F28;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r20,-1
	r20.s64 = -1;
	// li r18,0
	r18.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r20.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r20,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r20.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r20,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r20.u32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// beq cr6,0x82462f88
	if (ctx.cr6.eq) goto loc_82462F88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82463554
	goto loc_82463554;
loc_82462F88:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82462F90;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82462fa4
	if (ctx.cr0.eq) goto loc_82462FA4;
	// bl 0x824773d0
	ctx.lr = 0x82462F9C;
	sub_824773D0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82462fa8
	goto loc_82462FA8;
loc_82462FA4:
	// mr r23,r18
	r23.u64 = r18.u64;
loc_82462FA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82462fbc
	if (!ctx.cr6.eq) goto loc_82462FBC;
loc_82462FB0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82463554
	goto loc_82463554;
loc_82462FBC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 260);
	// bl 0x82477e80
	ctx.lr = 0x82462FC8;
	sub_82477E80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82462fe8
	if (!ctx.cr0.lt) goto loc_82462FE8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82130e88
	ctx.lr = 0x82462FD8;
	sub_82130E88(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82477b20
	ctx.lr = 0x82462FE0;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82463554
	goto loc_82463554;
loc_82462FE8:
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// li r17,1
	r17.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r17,12(r23)
	REX_STORE_U32(r23.u32 + 12, r17.u32);
	// stw r10,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82463550
	if (ctx.cr6.eq) goto loc_82463550;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r10,26568
	ctx.r10.s64 = ctx.r10.s64 + 26568;
	// lfd f31,-3744(r9)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// mr r16,r18
	r16.u64 = r18.u64;
	// lfd f30,3728(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// rlwinm r15,r28,2,0,29
	r15.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r14,4096
	r14.s64 = 268435456;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r19,r11,25912
	r19.s64 = ctx.r11.s64 + 25912;
loc_82463040:
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8246308C;
	sub_826A2E60(ctx, base);
	// addi r5,r19,-512
	ctx.r5.s64 = r19.s64 + -512;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245f158
	ctx.lr = 0x824630B8;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824630f0
	if (ctx.cr0.eq) goto loc_824630F0;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r5,r19,-320
	ctx.r5.s64 = r19.s64 + -320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245f158
	ctx.lr = 0x824630E8;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82463534
	if (!ctx.cr0.eq) goto loc_82463534;
loc_824630F0:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r31,160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82463534
	if (!ctx.cr6.eq) goto loc_82463534;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r5,r19,-96
	ctx.r5.s64 = r19.s64 + -96;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245f158
	ctx.lr = 0x8246312C;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246315c
	if (ctx.cr0.eq) goto loc_8246315C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245f158
	ctx.lr = 0x8246315C;
	sub_8245F158(ctx, base);
loc_8246315C:
	// lwz r11,432(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r21,448(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82463174
	if (ctx.cr6.eq) goto loc_82463174;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
loc_82463174:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(r21.s32, -1, ctx.xer);
	// beq cr6,0x82463534
	if (ctx.cr6.eq) goto loc_82463534;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r30,20(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82463534
	if (ctx.cr6.eq) goto loc_82463534;
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82463534
	if (ctx.cr6.eq) goto loc_82463534;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4368
	ctx.r9.s64 = 286261248;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwzx r22,r11,r4
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82463534
	if (!ctx.cr6.eq) goto loc_82463534;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82463264
	goto loc_82463264;
loc_824631F8:
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82463270
	if (!ctx.cr6.eq) goto loc_82463270;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x82463270
	if (!ctx.cr6.eq) goto loc_82463270;
	// clrlwi. r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// beq 0x82463270
	if (ctx.cr0.eq) goto loc_82463270;
	// lwz r6,16(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82463230:
	// lwzx r31,r6,r11
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82463250
	if (ctx.cr6.eq) goto loc_82463250;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82463230
	if (ctx.cr6.lt) goto loc_82463230;
	// b 0x82463270
	goto loc_82463270;
loc_82463250:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
loc_82463264:
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824631f8
	if (!ctx.cr6.eq) goto loc_824631F8;
loc_82463270:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82463534
	if (ctx.cr0.eq) goto loc_82463534;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82463534
	if (ctx.cr0.eq) goto loc_82463534;
	// lfd f0,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82463534
	if (!ctx.cr6.eq) goto loc_82463534;
	// lfd f0,32(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82463534
	if (!ctx.cr6.eq) goto loc_82463534;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwzx r25,r11,r30
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r27,84(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82463534
	if (ctx.cr6.gt) goto loc_82463534;
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_824632DC:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r30,r11,r24
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246341c
	if (ctx.cr6.eq) goto loc_8246341C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r26,r18
	r26.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246341c
	if (!ctx.cr6.gt) goto loc_8246341C;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_82463304:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824633a0
	if (ctx.cr6.eq) goto loc_824633A0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82463404
	if (ctx.cr6.eq) goto loc_82463404;
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x8246339c
	if (!ctx.cr6.eq) goto loc_8246339C;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// beq 0x824633a0
	if (ctx.cr0.eq) goto loc_824633A0;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8246336C:
	// lwzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8246338c
	if (ctx.cr6.eq) goto loc_8246338C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8246336c
	if (ctx.cr6.lt) goto loc_8246336C;
	// b 0x824633a0
	goto loc_824633A0;
loc_8246338C:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x824633a0
	goto loc_824633A0;
loc_8246339C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_824633A0:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, ctx.xer);
	// bne cr6,0x82463404
	if (!ctx.cr6.eq) goto loc_82463404;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824633e4
	if (!ctx.cr6.eq) goto loc_824633E4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824786b8
	ctx.lr = 0x824633C8;
	sub_824786B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82478758
	ctx.lr = 0x824633E0;
	sub_82478758(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824633E4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82463404
	if (ctx.cr6.eq) goto loc_82463404;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_82463404:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82463304
	if (ctx.cr6.lt) goto loc_82463304;
	// lwz r28,108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8246341C:
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824632dc
	if (!ctx.cr6.gt) goto loc_824632DC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82463534
	if (ctx.cr6.eq) goto loc_82463534;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82463440;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82463454
	if (ctx.cr0.eq) goto loc_82463454;
	// bl 0x824773d0
	ctx.lr = 0x8246344C;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82463458
	goto loc_82463458;
loc_82463454:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82463458:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82462fb0
	if (ctx.cr6.eq) goto loc_82462FB0;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x8246347C;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x82463564
	if (ctx.cr0.lt) goto loc_82463564;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82477420
	ctx.lr = 0x82463490;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82463578
	if (ctx.cr0.lt) goto loc_82463578;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82478758
	ctx.lr = 0x824634E4;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82478758
	ctx.lr = 0x82463504;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82477e80
	ctx.lr = 0x82463518;
	sub_82477E80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82463524;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x8246352C;
	sub_82477B20(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82463570
	if (ctx.cr6.lt) goto loc_82463570;
loc_82463534:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// blt cr6,0x82463040
	if (ctx.cr6.lt) goto loc_82463040;
loc_82463550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82463554:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_82463564:
	// bl 0x82130e88
	ctx.lr = 0x82463568;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82463570;
	sub_82477B20(ctx, base);
loc_82463570:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82463554
	goto loc_82463554;
loc_82463578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82463564
	goto loc_82463564;
}

DEFINE_REX_FUNC(sub_82495180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82495188;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824951c4
	if (!ctx.cr6.eq) goto loc_824951C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12332
	ctx.r6.s64 = ctx.r11.s64 + -12332;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82494e30
	ctx.lr = 0x824951B8;
	sub_82494E30(ctx, base);
loc_824951B8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8249535c
	goto loc_8249535C;
loc_824951C4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493608
	ctx.lr = 0x824951D4;
	sub_82493608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82495210
	if (ctx.cr0.eq) goto loc_82495210;
loc_824951DC:
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82495204
	if (!ctx.cr6.eq) goto loc_82495204;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8249525c
	if (!ctx.cr6.eq) goto loc_8249525C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8249525c
	if (!ctx.cr6.eq) goto loc_8249525C;
loc_82495204:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824951dc
	if (!ctx.cr6.eq) goto loc_824951DC;
loc_82495210:
	// lwz r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249529c
	if (ctx.cr6.eq) goto loc_8249529C;
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8249529c
	if (!ctx.cr6.eq) goto loc_8249529C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8249529c
	if (!ctx.cr6.eq) goto loc_8249529C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493608
	ctx.lr = 0x82495244;
	sub_82493608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249529c
	if (ctx.cr0.eq) goto loc_8249529C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3036
	ctx.r5.s64 = 3036;
	// addi r6,r11,-12372
	ctx.r6.s64 = ctx.r11.s64 + -12372;
	// b 0x82495288
	goto loc_82495288;
loc_8249525C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8249527c
	if (ctx.cr6.eq) goto loc_8249527C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82444868
	ctx.lr = 0x8249526C;
	sub_82444868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249527c
	if (ctx.cr0.eq) goto loc_8249527C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249535c
	goto loc_8249535C;
loc_8249527C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3003
	ctx.r5.s64 = 3003;
	// addi r6,r11,-12396
	ctx.r6.s64 = ctx.r11.s64 + -12396;
loc_82495288:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x82495298;
	sub_82494D48(ctx, base);
	// b 0x824951b8
	goto loc_824951B8;
loc_8249529C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824952A4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824952c8
	if (ctx.cr0.eq) goto loc_824952C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-13100
	ctx.r6.s64 = ctx.r11.s64 + -13100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824952C0;
	sub_82444918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824952cc
	goto loc_824952CC;
loc_824952C8:
	// li r30,0
	r30.s64 = 0;
loc_824952CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824952e0
	if (!ctx.cr6.eq) goto loc_824952E0;
loc_824952D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8249535c
	goto loc_8249535C;
loc_824952E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82444890
	ctx.lr = 0x824952E8;
	sub_82444890(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq 0x824952d4
	if (ctx.cr0.eq) goto loc_824952D4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x824933b0
	ctx.lr = 0x82495354;
	sub_824933B0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8249535C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824A7E18) {
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
	ctx.lr = 0x824A7E20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r26,r10,12
	r26.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824a7e90
	if (!ctx.cr6.eq) goto loc_824A7E90;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824a7eac
	if (ctx.cr6.eq) goto loc_824A7EAC;
loc_824A7E90:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a7f94
	if (!ctx.cr6.eq) goto loc_824A7F94;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a7f94
	if (!ctx.cr6.eq) goto loc_824A7F94;
loc_824A7EAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a7fcc
	if (ctx.cr0.lt) goto loc_824A7FCC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824a7f20
	if (ctx.cr6.eq) goto loc_824A7F20;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
loc_824A7EF8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824a7ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7EF8;
loc_824A7F20:
	// li r31,0
	r31.s64 = 0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A7F5C;
	sub_82471828(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A7F90;
	sub_82471828(ctx, base);
	// b 0x824a7fcc
	goto loc_824A7FCC;
loc_824A7F94:
	// li r31,0
	r31.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824A7FCC;
	sub_82471828(ctx, base);
loc_824A7FCC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824B1940) {
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
	ctx.lr = 0x824B1948;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824B1970;
	sub_826A2E60(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x824B1980;
	sub_826A2E60(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r22,0
	r22.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r10,25328
	ctx.r4.s64 = ctx.r10.s64 + 25328;
	// std r22,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r22.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r22,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r22.u64);
	// li r5,785
	ctx.r5.s64 = 785;
	// std r22,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r22.u64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r22,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r22.u64);
	// bl 0x824786b8
	ctx.lr = 0x824B19B4;
	sub_824786B8(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r16,1
	r16.s64 = 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824b1a58
	if (ctx.cr6.eq) goto loc_824B1A58;
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_824B19D0:
	// lwzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b1a48
	if (!ctx.cr0.eq) goto loc_824B1A48;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r6,r10,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824b1a48
	if (ctx.cr0.eq) goto loc_824B1A48;
	// rlwinm. r10,r10,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x180;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b1a48
	if (!ctx.cr0.eq) goto loc_824B1A48;
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 56);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824b1aa4
	if (ctx.cr6.gt) goto loc_824B1AA4;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// stwx r16,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, r16.u32);
	// stwx r16,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r16.u32);
	// stwx r16,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, r16.u32);
	// stwx r16,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, r16.u32);
	// stwx r16,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r16.u32);
loc_824B1A48:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x824b19d0
	if (ctx.cr6.lt) goto loc_824B19D0;
loc_824B1A58:
	// lwz r7,552(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 552);
	// mr r17,r22
	r17.u64 = r22.u64;
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// add. r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b1f9c
	if (ctx.cr0.eq) goto loc_824B1F9C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r14,r22
	r14.u64 = r22.u64;
	// addi r10,r10,1072
	ctx.r10.s64 = ctx.r10.s64 + 1072;
	// lfs f30,3788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	f30.f64 = double(temp.f32);
	// lis r15,20480
	r15.s64 = 1342177280;
	// lfs f31,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_824B1A90:
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824b1ac8
	if (!ctx.cr6.lt) goto loc_824B1AC8;
	// lwz r10,560(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 560);
	// lwzx r26,r10,r14
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + r14.u32);
	// b 0x824b1ad8
	goto loc_824B1AD8;
loc_824B1AA4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,1036
	ctx.r6.s64 = ctx.r11.s64 + 1036;
loc_824B1AAC:
	// li r5,4507
	ctx.r5.s64 = 4507;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B1ABC;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b1fe4
	goto loc_824B1FE4;
loc_824B1AC8:
	// subf r10,r11,r17
	ctx.r10.u64 = r17.u64 - ctx.r11.u64;
	// lwz r9,564(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 564);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r9
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_824B1AD8:
	// mr r18,r22
	r18.u64 = r22.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824b1f80
	if (ctx.cr6.eq) goto loc_824B1F80;
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b1f80
	if (ctx.cr6.eq) goto loc_824B1F80;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824b1f80
	if (ctx.cr6.eq) goto loc_824B1F80;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r8,r5,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824b1f80
	if (ctx.cr0.eq) goto loc_824B1F80;
	// lwz r6,20(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824b1bd0
	if (ctx.cr6.eq) goto loc_824B1BD0;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x824b1bd0
	if (ctx.cr6.eq) goto loc_824B1BD0;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b1bd0
	if (ctx.cr6.lt) goto loc_824B1BD0;
	// subf r10,r11,r17
	ctx.r10.u64 = r17.u64 - ctx.r11.u64;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824b1b88
	if (!ctx.cr6.lt) goto loc_824B1B88;
	// subf r10,r11,r17
	ctx.r10.u64 = r17.u64 - ctx.r11.u64;
	// lwz r8,564(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 564);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824B1B54:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824b1b74
	if (ctx.cr6.eq) goto loc_824B1B74;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b1b88
	if (!ctx.cr0.eq) goto loc_824B1B88;
loc_824B1B74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b1b54
	if (ctx.cr6.lt) goto loc_824B1B54;
loc_824B1B88:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824b1bd0
	if (!ctx.cr6.lt) goto loc_824B1BD0;
	// lwz r10,564(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r11,r10
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824b1bcc
	if (!ctx.cr6.eq) goto loc_824B1BCC;
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824b1bd0
	if (ctx.cr6.eq) goto loc_824B1BD0;
loc_824B1BCC:
	// mr r18,r22
	r18.u64 = r22.u64;
loc_824B1BD0:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r25,r5,12
	r25.u64 = ctx.r5.u32 & 0xFFFFF;
	// mr r21,r22
	r21.u64 = r22.u64;
	// divwu. r20,r11,r25
	r20.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x824b1f80
	if (ctx.cr0.eq) goto loc_824B1F80;
	// mr r24,r22
	r24.u64 = r22.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// rlwinm r19,r25,2,0,29
	r19.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_824B1BF4:
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r11,r23,r8
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r8.u32);
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r22.u64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r22.u64);
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b1f68
	if (ctx.cr0.eq) goto loc_824B1F68;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824b1f68
	if (!ctx.cr6.lt) goto loc_824B1F68;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824b1cb8
	if (ctx.cr6.eq) goto loc_824B1CB8;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// rlwinm r6,r9,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
loc_824B1C58:
	// cmplw cr6,r6,r15
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r15.u32, ctx.xer);
	// bne cr6,0x824b1c68
	if (!ctx.cr6.eq) goto loc_824B1C68;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x824b1c7c
	goto loc_824B1C7C;
loc_824B1C68:
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_824B1C7C:
	// add r5,r24,r10
	ctx.r5.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r16.u32);
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lfd f0,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x824b1c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B1C58;
loc_824B1CB8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824b1d28
	if (ctx.cr6.eq) goto loc_824B1D28;
	// lwz r5,4(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 4);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b1d28
	if (ctx.cr6.eq) goto loc_824B1D28;
	// lwz r8,8(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_824B1CD8:
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b1d18
	if (ctx.cr0.eq) goto loc_824B1D18;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824b1d18
	if (!ctx.cr6.lt) goto loc_824B1D18;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_824B1D18:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824b1cd8
	if (ctx.cr6.lt) goto loc_824B1CD8;
loc_824B1D28:
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_824B1D30:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b1dac
	if (!ctx.cr6.eq) goto loc_824B1DAC;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824B1D54:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824b1d98
	if (ctx.cr6.eq) goto loc_824B1D98;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x824b1d98
	if (ctx.cr6.eq) goto loc_824B1D98;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_824B1D98:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824b1d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B1D54;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824b1dbc
	if (!ctx.cr6.eq) goto loc_824B1DBC;
loc_824B1DAC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// blt cr6,0x824b1d30
	if (ctx.cr6.lt) goto loc_824B1D30;
loc_824B1DBC:
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(r28.u32, 8, ctx.xer);
	// beq cr6,0x824b1ff4
	if (ctx.cr6.eq) goto loc_824B1FF4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824B1DD8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824b1e20
	if (ctx.cr6.eq) goto loc_824B1E20;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// stwx r16,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, r16.u32);
	// stfsx f0,r9,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// bgt cr6,0x824b1e1c
	if (ctx.cr6.gt) goto loc_824B1E1C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824b1e20
	if (!ctx.cr6.lt) goto loc_824B1E20;
loc_824B1E1C:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
loc_824B1E20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824b1dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B1DD8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824b1e48
	if (ctx.cr6.eq) goto loc_824B1E48;
	// li r5,4704
	ctx.r5.s64 = 4704;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,60(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 60);
	// bl 0x82489ce8
	ctx.lr = 0x824B1E48;
	sub_82489CE8(ctx, base);
loc_824B1E48:
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824b1edc
	if (ctx.cr6.eq) goto loc_824B1EDC;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_824B1E58:
	// add r10,r24,r31
	ctx.r10.u64 = r24.u64 + r31.u64;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// lwzx r10,r29,r9
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfd f1,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// bne cr6,0x824b1e9c
	if (!ctx.cr6.eq) goto loc_824B1E9C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x824b1eb0
	goto loc_824B1EB0;
loc_824B1E9C:
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_824B1EB0:
	// bl 0x82478758
	ctx.lr = 0x824B1EB4;
	sub_82478758(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r22.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// blt cr6,0x824b1e58
	if (ctx.cr6.lt) goto loc_824B1E58;
loc_824B1EDC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824b1f68
	if (ctx.cr6.eq) goto loc_824B1F68;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b1f68
	if (!ctx.cr6.gt) goto loc_824B1F68;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_824B1EF8:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824b1f54
	if (ctx.cr0.eq) goto loc_824B1F54;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824b1f54
	if (!ctx.cr6.lt) goto loc_824B1F54;
	// li r6,3
	ctx.r6.s64 = 3;
	// lfd f1,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x824B1F4C;
	sub_82478758(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_824B1F54:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b1ef8
	if (ctx.cr6.lt) goto loc_824B1EF8;
loc_824B1F68:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// add r24,r24,r25
	r24.u64 = r24.u64 + r25.u64;
	// add r23,r19,r23
	r23.u64 = r19.u64 + r23.u64;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// blt cr6,0x824b1bf4
	if (ctx.cr6.lt) goto loc_824B1BF4;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824B1F80:
	// lwz r7,552(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 552);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b1a90
	if (ctx.cr6.lt) goto loc_824B1A90;
loc_824B1F9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824b1fe0
	if (ctx.cr6.eq) goto loc_824B1FE0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_824B1FAC:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824b1fd8
	if (ctx.cr0.eq) goto loc_824B1FD8;
	// lwz r9,116(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 116);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_824B1FD8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824b1fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B1FAC;
loc_824B1FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B1FE4:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_824B1FF4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,976
	ctx.r6.s64 = ctx.r11.s64 + 976;
	// b 0x824b1aac
	goto loc_824B1AAC;
}

DEFINE_REX_FUNC(sub_824DB2B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DB2B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824db304
	if (ctx.cr6.lt) goto loc_824DB304;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8244a6e0
	ctx.lr = 0x824DB2E4;
	sub_8244A6E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8244a6e0
	ctx.lr = 0x824DB2F4;
	sub_8244A6E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x824dabe0
	ctx.lr = 0x824DB304;
	sub_824DABE0(ctx, base);
loc_824DB304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DC320) {
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
	ctx.lr = 0x824DC328;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dc424
	if (ctx.cr6.lt) goto loc_824DC424;
	// lwz r31,120(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc38c
	if (ctx.cr6.gt) goto loc_824DC38C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc37c
	if (!ctx.cr6.gt) goto loc_824DC37C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7ff8
	ctx.lr = 0x824DC37C;
	sub_824D7FF8(ctx, base);
loc_824DC37C:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dc424
	if (ctx.cr6.lt) goto loc_824DC424;
loc_824DC38C:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824dc3e0
	if (ctx.cr6.gt) goto loc_824DC3E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc3d0
	if (!ctx.cr6.gt) goto loc_824DC3D0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d83e8
	ctx.lr = 0x824DC3D0;
	sub_824D83E8(ctx, base);
loc_824DC3D0:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dc424
	if (ctx.cr6.lt) goto loc_824DC424;
loc_824DC3E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r27,28
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824dc420
	if (ctx.cr6.gt) goto loc_824DC420;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824dc41c
	if (!ctx.cr6.gt) goto loc_824DC41C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d82c8
	ctx.lr = 0x824DC41C;
	sub_824D82C8(ctx, base);
loc_824DC41C:
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
loc_824DC420:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_824DC424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824E3400) {
	REX_FUNC_PROLOGUE();
	// b 0x824e32a8
	sub_824E32A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E3D88) {
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
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	r31.s64 = 2;
	// lwz r30,212(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x824e3ab0
	ctx.lr = 0x824E3DB8;
	sub_824E3AB0(ctx, base);
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

DEFINE_REX_FUNC(sub_824E4458) {
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
	// addi r31,r3,152
	r31.s64 = ctx.r3.s64 + 152;
loc_824E446C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e44b0
	if (!ctx.cr0.eq) goto loc_824E44B0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824e44b0
	if (ctx.cr0.eq) goto loc_824E44B0;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
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
	// bl 0x823f0350
	ctx.lr = 0x824E44AC;
	sub_823F0350(ctx, base);
	// b 0x824e446c
	goto loc_824E446C;
loc_824E44B0:
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

DEFINE_REX_FUNC(sub_824E8590) {
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
	ctx.lr = 0x824E8598;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e85bc
	if (!ctx.cr6.eq) goto loc_824E85BC;
	// li r25,0
	r25.s64 = 0;
	// b 0x824e85c8
	goto loc_824E85C8;
loc_824E85BC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824E85C8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e85dc
	if (ctx.cr6.lt) goto loc_824E85DC;
	// bl 0x826b40a0
	ctx.lr = 0x824E85DC;
	sub_826B40A0(ctx, base);
loc_824E85DC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r28,0(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// clrlwi r29,r31,21
	r29.u64 = r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwzu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// addi r22,r11,4
	r22.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// beq cr6,0x824e8610
	if (ctx.cr6.eq) goto loc_824E8610;
	// bl 0x826b40a0
	ctx.lr = 0x824E8610;
	sub_826B40A0(ctx, base);
loc_824E8610:
	// rlwimi r29,r25,8,23,23
	r29.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0x100) | (r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = r29.u32 & 0x1FF;
	// addi r9,r28,4
	ctx.r9.s64 = r28.s64 + 4;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E863C;
	sub_824E6318(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824e8654
	if (ctx.cr6.eq) goto loc_824E8654;
	// bl 0x826b40a0
	ctx.lr = 0x824E8654;
	sub_826B40A0(ctx, base);
loc_824E8654:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E8664;
	sub_824E6198(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// bl 0x824e5b18
	ctx.lr = 0x824E8670;
	sub_824E5B18(ctx, base);
	// rlwinm r31,r30,0,8,15
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e86d4
	if (ctx.cr6.eq) goto loc_824E86D4;
	// bl 0x826b40a0
	ctx.lr = 0x824E8688;
	sub_826B40A0(ctx, base);
	// rlwinm r11,r31,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x3FFF;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-19960
	ctx.r10.s64 = ctx.r10.s64 + -19960;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r31,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x824e86d8
	goto loc_824E86D8;
loc_824E86D4:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_824E86D8:
	// cmplwi cr6,r26,82
	ctx.cr6.compare<uint32_t>(r26.u32, 82, ctx.xer);
	// bne cr6,0x824e870c
	if (!ctx.cr6.eq) goto loc_824E870C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824e870c
	if (!ctx.cr6.eq) goto loc_824E870C;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x824e870c
	if (!ctx.cr6.eq) goto loc_824E870C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r10,16,10,15
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824e8768
	goto loc_824E8768;
loc_824E870C:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r29,16
	ctx.r7.u64 = r29.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplwi cr6,r26,69
	ctx.cr6.compare<uint32_t>(r26.u32, 69, ctx.xer);
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x824e8748
	if (!ctx.cr6.eq) goto loc_824E8748;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x824e875c
	goto loc_824E875C;
loc_824E8748:
	// cmplwi cr6,r26,70
	ctx.cr6.compare<uint32_t>(r26.u32, 70, ctx.xer);
	// bne cr6,0x824e875c
	if (!ctx.cr6.eq) goto loc_824E875C;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_824E875C:
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | r30.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824E8768:
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	REX_STORE_U32(r24.u32 + 0, r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824F7170) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7188
	if (ctx.cr6.eq) goto loc_824F7188;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f71a4
	if (!ctx.cr0.eq) goto loc_824F71A4;
loc_824F7188:
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f71ac
	if (ctx.cr0.eq) goto loc_824F71AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f71a4
	if (ctx.cr6.eq) goto loc_824F71A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f71ac
	if (!ctx.cr0.eq) goto loc_824F71AC;
loc_824F71A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f71b0
	goto loc_824F71B0;
loc_824F71AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F71B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F8950) {
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
	ctx.lr = 0x824F8958;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824f8998
	if (!ctx.cr6.lt) goto loc_824F8998;
loc_824F897C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x824f8998
	if (ctx.cr0.eq) goto loc_824F8998;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824f897c
	if (ctx.cr6.lt) goto loc_824F897C;
loc_824F8998:
	// lwz r10,784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824f89f0
	if (!ctx.cr6.eq) goto loc_824F89F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// bl 0x823f02b8
	ctx.lr = 0x824F89B0;
	sub_823F02B8(ctx, base);
	// stw r3,784(r31)
	REX_STORE_U32(r31.u32 + 784, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824f89d4
	if (!ctx.cr0.eq) goto loc_824F89D4;
loc_824F89BC:
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
	// b 0x824f8b1c
	goto loc_824F8B1C;
loc_824F89D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F89E0;
	sub_826A1E70(ctx, base);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stbx r25,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, r25.u8);
	// b 0x824f8a5c
	goto loc_824F8A5C;
loc_824F89F0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824F89F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824f89f4
	if (!ctx.cr6.eq) goto loc_824F89F4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r28,r27,r29
	r28.u64 = r27.u64 + r29.u64;
	// addi r3,r28,1
	ctx.r3.s64 = r28.s64 + 1;
	// bl 0x823f02b8
	ctx.lr = 0x824F8A20;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824f89bc
	if (ctx.cr0.eq) goto loc_824F89BC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 784);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F8A38;
	sub_826A1E70(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F8A48;
	sub_826A1E70(ctx, base);
	// stbx r25,r30,r28
	REX_STORE_U8(r30.u32 + r28.u32, r25.u8);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 784);
	// bl 0x823f0350
	ctx.lr = 0x824F8A58;
	sub_823F0350(ctx, base);
	// stw r30,784(r31)
	REX_STORE_U32(r31.u32 + 784, r30.u32);
loc_824F8A5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,-16844
	r26.s64 = ctx.r11.s64 + -16844;
loc_824F8A64:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 784);
	// bl 0x8269cce0
	ctx.lr = 0x824F8A70;
	sub_8269CCE0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824f8b18
	if (ctx.cr0.eq) goto loc_824F8B18;
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// mr r30,r25
	r30.u64 = r25.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic. r28,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r28.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
	// beq 0x824f8ac4
	if (ctx.cr0.eq) goto loc_824F8AC4;
	// addi r27,r28,1
	r27.s64 = r28.s64 + 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824F8AAC;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824f8b24
	if (ctx.cr0.eq) goto loc_824F8B24;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F8AC4;
	sub_826A1E70(ctx, base);
loc_824F8AC4:
	// lwz r27,784(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 784);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r25,0(r29)
	REX_STORE_U8(r29.u32 + 0, r25.u8);
	// stw r30,784(r31)
	REX_STORE_U32(r31.u32 + 784, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824f85f8
	ctx.lr = 0x824F8ADC;
	sub_824F85F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8af4
	if (ctx.cr0.eq) goto loc_824F8AF4;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,780(r31)
	REX_STORE_U32(r31.u32 + 780, ctx.r11.u32);
	// b 0x824f8b00
	goto loc_824F8B00;
loc_824F8AF4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a2f48
	ctx.lr = 0x824F8B00;
	sub_826A2F48(ctx, base);
loc_824F8B00:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x824F8B0C;
	sub_823F0350(ctx, base);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f8a64
	if (!ctx.cr6.eq) goto loc_824F8A64;
loc_824F8B18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F8B1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_824F8B24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824f8b1c
	goto loc_824F8B1C;
}

DEFINE_REX_FUNC(sub_8250A7B0) {
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
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rlwinm. r10,r10,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x8250a860
	if (ctx.cr0.eq) goto loc_8250A860;
	// lwz r3,44(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
loc_8250A7E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba3a0
	ctx.lr = 0x8250A808;
	sub_825BA3A0(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8250a820
	if (!ctx.cr6.eq) goto loc_8250A820;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8250a888
	if (ctx.cr6.eq) goto loc_8250A888;
loc_8250A820:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8250a880
	if (!ctx.cr6.eq) goto loc_8250A880;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a88c
	if (!ctx.cr0.eq) goto loc_8250A88C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825be1f8
	ctx.lr = 0x8250A84C;
	sub_825BE1F8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825be088
	ctx.lr = 0x8250A85C;
	sub_825BE088(ctx, base);
	// b 0x8250a88c
	goto loc_8250A88C;
loc_8250A860:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8250A864:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8250a880
	if (ctx.cr6.eq) goto loc_8250A880;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a7e8
	if (!ctx.cr0.eq) goto loc_8250A7E8;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8250a864
	goto loc_8250A864;
loc_8250A880:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250a88c
	goto loc_8250A88C;
loc_8250A888:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8250A88C:
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

DEFINE_REX_FUNC(sub_82516850) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82516878:
	// ldx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x82516878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82516878;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82519470) {
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
	ctx.lr = 0x82519478;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r6,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bl 0x82518c38
	ctx.lr = 0x825194C4;
	sub_82518C38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,2
	r25.s64 = 2;
	// rlwinm. r10,r11,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r29,-1
	r29.s64 = -1;
	// bne 0x825195d4
	if (!ctx.cr0.eq) goto loc_825195D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825194ec
	if (ctx.cr6.eq) goto loc_825194EC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x825194EC;
	sub_824E4368(ctx, base);
loc_825194EC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825195a8
	if (ctx.cr6.eq) goto loc_825195A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82519514:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r8,r1,220
	ctx.r8.s64 = ctx.r1.s64 + 220;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// slw r3,r29,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r8,27
	ctx.r3.u64 = ctx.r8.u32 & 0x1F;
	// srw r8,r4,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// lwzx r4,r10,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// slw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r8,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r4,r29,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	// slw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x82519514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82519514;
loc_825195A8:
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// bl 0x82518c38
	ctx.lr = 0x825195CC;
	sub_82518C38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825195D4:
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm r30,r11,16,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// b 0x8251961c
	goto loc_8251961C;
loc_825195E4:
	// lwz r11,672(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x825195F8;
	sub_824F7DC0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_8251961C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x825195e4
	if (ctx.cr6.lt) goto loc_825195E4;
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825196a8
	if (ctx.cr0.eq) goto loc_825196A8;
	// li r30,0
	r30.s64 = 0;
loc_82519638:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519690
	if (!ctx.cr0.eq) goto loc_82519690;
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r7,r29,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srw r5,r11,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82516dd0
	ctx.lr = 0x82519690;
	sub_82516DD0(ctx, base);
loc_82519690:
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82519638
	if (ctx.cr6.lt) goto loc_82519638;
loc_825196A8:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825196bc
	if (!ctx.cr0.eq) goto loc_825196BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82517168
	ctx.lr = 0x825196BC;
	sub_82517168(ctx, base);
loc_825196BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82530F20) {
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
	ctx.lr = 0x82530F28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82530F5C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82530f80
	if (ctx.cr6.eq) goto loc_82530F80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530F7C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530F80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530F88;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82530fac
	if (ctx.cr6.eq) goto loc_82530FAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530FA8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530FAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530FB4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82530fd8
	if (ctx.cr6.eq) goto loc_82530FD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530FD4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530FD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530FE0;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
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
	ctx.lr = 0x82531010;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82542E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82542E88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542f0c
	if (!ctx.cr0.eq) goto loc_82542F0C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8252f568
	ctx.lr = 0x82542EB4;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542f0c
	if (!ctx.cr0.eq) goto loc_82542F0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82542e20
	ctx.lr = 0x82542ED4;
	sub_82542E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82542f0c
	if (!ctx.cr0.eq) goto loc_82542F0C;
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 664);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82542f04
	if (ctx.cr6.gt) goto loc_82542F04;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825398f0
	ctx.lr = 0x82542F00;
	sub_825398F0(ctx, base);
	// b 0x82542f10
	goto loc_82542F10;
loc_82542F04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825336b8
	ctx.lr = 0x82542F0C;
	sub_825336B8(ctx, base);
loc_82542F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82542F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825498E0) {
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
	ctx.lr = 0x825498E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x82549910;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549934
	if (ctx.cr6.eq) goto loc_82549934;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82549930;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82549934:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254993C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82549960
	if (ctx.cr6.eq) goto loc_82549960;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8254995C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82549960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82549968;
	sub_8250AD28(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82550318) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x82550364
	if (ctx.cr6.eq) goto loc_82550364;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x82550364
	if (ctx.cr6.eq) goto loc_82550364;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x82550364
	if (ctx.cr6.eq) goto loc_82550364;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bne cr6,0x82550354
	if (!ctx.cr6.eq) goto loc_82550354;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82550358
	if (ctx.cr6.gt) goto loc_82550358;
loc_82550354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82550358:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82550368
	if (ctx.cr0.eq) goto loc_82550368;
loc_82550364:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82550368:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82551458) {
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
	ctx.lr = 0x82551460;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551594
	if (!ctx.cr0.eq) goto loc_82551594;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82551594
	if (ctx.cr0.eq) goto loc_82551594;
	// li r27,0
	r27.s64 = 0;
loc_8255148C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82551578
	if (!ctx.cr6.eq) goto loc_82551578;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825514b8
	if (ctx.cr6.eq) goto loc_825514B8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825514bc
	if (!ctx.cr6.eq) goto loc_825514BC;
loc_825514B8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_825514BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551578
	if (ctx.cr0.eq) goto loc_82551578;
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825514dc
	if (ctx.cr0.eq) goto loc_825514DC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x825514D8;
	sub_8257DFD8(ctx, base);
	// stb r27,0(r24)
	REX_STORE_U8(r24.u32 + 0, r27.u8);
loc_825514DC:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_825514E0:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82551578
	if (ctx.cr6.eq) goto loc_82551578;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stb r27,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r27.u8);
	// lwz r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8);
	// bl 0x825c6880
	ctx.lr = 0x8255150C;
	sub_825C6880(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ff888
	ctx.lr = 0x82551514;
	sub_824FF888(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82551554
	if (ctx.cr0.eq) goto loc_82551554;
loc_8255151C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x82551534;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8255154c
	if (ctx.cr6.eq) goto loc_8255154C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ff888
	ctx.lr = 0x82551544;
	sub_824FF888(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8255151c
	if (!ctx.cr0.eq) goto loc_8255151C;
loc_8255154C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82551564
	if (!ctx.cr6.eq) goto loc_82551564;
loc_82551554:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x82551564;
	sub_8250B470(ctx, base);
loc_82551564:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825514e0
	if (!ctx.cr6.eq) goto loc_825514E0;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// b 0x825514e0
	goto loc_825514E0;
loc_82551578:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82551594
	if (!ctx.cr0.eq) goto loc_82551594;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255148c
	if (!ctx.cr6.eq) goto loc_8255148C;
loc_82551594:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8255A0B0) {
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
	ctx.lr = 0x8255A0B8;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r18,1
	r18.s64 = 1;
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a0f4
	if (ctx.cr0.eq) goto loc_8255A0F4;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a0f4
	if (ctx.cr6.eq) goto loc_8255A0F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne 0x8255a0f8
	if (!ctx.cr0.eq) goto loc_8255A0F8;
loc_8255A0F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255A0F8:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8255a130
	if (ctx.cr0.eq) goto loc_8255A130;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a120
	if (ctx.cr6.eq) goto loc_8255A120;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne 0x8255a124
	if (!ctx.cr0.eq) goto loc_8255A124;
loc_8255A120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255A124:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne 0x8255a134
	if (!ctx.cr0.eq) goto loc_8255A134;
loc_8255A130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255A134:
	// clrlwi. r22,r10,24
	r22.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// clrlwi r20,r11,24
	r20.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x8255a14c
	if (!ctx.cr0.eq) goto loc_8255A14C;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8255a150
	if (ctx.cr0.eq) goto loc_8255A150;
loc_8255A14C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8255A150:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// clrlwi r23,r11,24
	r23.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-1
	r29.s64 = -65536;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8255a188
	if (!ctx.cr6.eq) goto loc_8255A188;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r6,r11,-20936
	ctx.r6.s64 = ctx.r11.s64 + -20936;
	// b 0x8255a194
	goto loc_8255A194;
loc_8255A188:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r6,r11,-20944
	ctx.r6.s64 = ctx.r11.s64 + -20944;
loc_8255A194:
	// bl 0x825c1600
	ctx.lr = 0x8255A198;
	sub_825C1600(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r17,0
	r17.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8255a1d4
	if (!ctx.cr6.eq) goto loc_8255A1D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r6,r11,-29320
	ctx.r6.s64 = ctx.r11.s64 + -29320;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c1600
	ctx.lr = 0x8255A1D0;
	sub_825C1600(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_8255A1D4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x8255a1e4
	if (!ctx.cr6.eq) goto loc_8255A1E4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8255a5e4
	if (ctx.cr6.eq) goto loc_8255A5E4;
loc_8255A1E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255a5e4
	if (!ctx.cr0.eq) goto loc_8255A5E4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255a5e4
	if (ctx.cr0.eq) goto loc_8255A5E4;
	// li r24,57
	r24.s64 = 57;
loc_8255A200:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a21c
	if (ctx.cr0.eq) goto loc_8255A21C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255a228
	if (!ctx.cr0.eq) goto loc_8255A228;
loc_8255A21C:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a3e0
	if (ctx.cr0.eq) goto loc_8255A3E0;
loc_8255A228:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb908
	ctx.lr = 0x8255A234;
	sub_825BB908(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8255a270
	if (!ctx.cr6.eq) goto loc_8255A270;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb908
	ctx.lr = 0x8255A25C;
	sub_825BB908(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb908
	ctx.lr = 0x8255A26C;
	sub_825BB908(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8255A270:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mr r30,r25
	r30.u64 = r25.u64;
	// b 0x8255a2bc
	goto loc_8255A2BC;
loc_8255A27C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255a298
	if (ctx.cr6.eq) goto loc_8255A298;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8255a29c
	if (!ctx.cr6.eq) goto loc_8255A29C;
loc_8255A298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255A29C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255a5cc
	if (!ctx.cr0.eq) goto loc_8255A5CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255a5d8
	if (ctx.cr6.eq) goto loc_8255A5D8;
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255a5d8
	if (ctx.cr6.eq) goto loc_8255A5D8;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
loc_8255A2BC:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a27c
	if (ctx.cr0.eq) goto loc_8255A27C;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A2E4;
	sub_825BB860(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A2F8;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A304;
	sub_8250AD28(ctx, base);
	// stw r3,44(r21)
	REX_STORE_U32(r21.u32 + 44, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255A314;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A320;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255a5a8
	if (!ctx.cr6.eq) goto loc_8255A5A8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8255a5a8
	if (ctx.cr6.eq) goto loc_8255A5A8;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A364;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255A374;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255A38C;
	sub_8250A620(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r24,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255A3A4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A3B8;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A3C4;
	sub_8250AD28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A3D4;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8255a5a4
	goto loc_8255A5A4;
loc_8255A3E0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a5a8
	if (ctx.cr0.eq) goto loc_8255A5A8;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255a5a8
	if (!ctx.cr0.eq) goto loc_8255A5A8;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a5a8
	if (ctx.cr0.eq) goto loc_8255A5A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8255a5a8
	if (!ctx.cr6.eq) goto loc_8255A5A8;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a42c
	if (ctx.cr6.eq) goto loc_8255A42C;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8255A42C:
	// addi r28,r30,24
	r28.s64 = r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A44C;
	sub_825BB860(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A460;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A46C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r3.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255a4fc
	if (!ctx.cr6.eq) goto loc_8255A4FC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8255a4fc
	if (ctx.cr6.eq) goto loc_8255A4FC;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A4B8;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255A4C8;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255A4E0;
	sub_8250A620(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwimi r11,r24,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255A4F8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
loc_8255A4FC:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255a5a8
	if (!ctx.cr0.eq) goto loc_8255A5A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// addi r5,r25,24
	ctx.r5.s64 = r25.s64 + 24;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A520;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x824f71b8
	ctx.lr = 0x8255A544;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8255A568;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A574;
	sub_8250AD28(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255a5a8
	if (!ctx.cr6.eq) goto loc_8255A5A8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8255a5a8
	if (ctx.cr6.eq) goto loc_8255A5A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255A59C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8255A5A4:
	// bl 0x8250ad28
	ctx.lr = 0x8255A5A8;
	sub_8250AD28(ctx, base);
loc_8255A5A8:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255a5e4
	if (!ctx.cr0.eq) goto loc_8255A5E4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a5e4
	if (ctx.cr6.eq) goto loc_8255A5E4;
	// lis r29,-1
	r29.s64 = -65536;
	// b 0x8255a200
	goto loc_8255A200;
loc_8255A5CC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255A5D8;
	sub_824E4368(ctx, base);
loc_8255A5D8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255A5E4;
	sub_824E4368(ctx, base);
loc_8255A5E4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b9c8
	if (ctx.cr0.eq) goto loc_8255B9C8;
	// li r21,0
	r21.s64 = 0;
	// li r19,40
	r19.s64 = 40;
	// li r15,0
	r15.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8255a6c4
	if (ctx.cr6.eq) goto loc_8255A6C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20968
	ctx.r6.s64 = ctx.r11.s64 + -20968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bc628
	ctx.lr = 0x8255A618;
	sub_825BC628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r18,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// rlwimi r11,r18,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lhz r8,56(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 56);
	// rlwimi r10,r8,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r18,1,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r10,r18,2,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r10,r18,3,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x825802f8
	ctx.lr = 0x8255A6A0;
	sub_825802F8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x8255A6C0;
	sub_825BDBE8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8255A6C4:
	// clrlwi. r20,r20,24
	r20.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8255a790
	if (ctx.cr0.eq) goto loc_8255A790;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20996
	ctx.r6.s64 = ctx.r11.s64 + -20996;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bc628
	ctx.lr = 0x8255A6E4;
	sub_825BC628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwimi r10,r18,5,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 5) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// rlwimi r10,r18,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lhz r8,58(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 58);
	// rlwimi r11,r8,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r18,1,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r10,r18,2,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r10,r18,3,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x825802f8
	ctx.lr = 0x8255A76C;
	sub_825802F8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x8255A78C;
	sub_825BDBE8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
loc_8255A790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfs f30,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8255A7BC;
	sub_825C1A18(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8255ad40
	if (ctx.cr6.eq) goto loc_8255AD40;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ad40
	if (!ctx.cr0.eq) goto loc_8255AD40;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x8255ad40
	if (ctx.cr0.eq) goto loc_8255AD40;
loc_8255A7E0:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ad28
	if (ctx.cr0.eq) goto loc_8255AD28;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a7fc
	if (ctx.cr6.eq) goto loc_8255A7FC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8255A7FC:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b1a4
	if (!ctx.cr0.eq) goto loc_8255B1A4;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255b1a4
	if (ctx.cr0.eq) goto loc_8255B1A4;
loc_8255A814:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x8255a85c
	if (!ctx.cr6.eq) goto loc_8255A85C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255A838;
	sub_824F71B8(ctx, base);
	// addi r11,r22,-16
	ctx.r11.s64 = r22.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8255a85c
	if (!ctx.cr6.eq) goto loc_8255A85C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8255a878
	if (ctx.cr6.eq) goto loc_8255A878;
loc_8255A85C:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b1a4
	if (!ctx.cr0.eq) goto loc_8255B1A4;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255a814
	if (!ctx.cr6.eq) goto loc_8255A814;
loc_8255A878:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8255b1a4
	if (ctx.cr6.eq) goto loc_8255B1A4;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a894
	if (ctx.cr0.eq) goto loc_8255A894;
	// li r23,0
	r23.s64 = 0;
	// b 0x8255a8a0
	goto loc_8255A8A0;
loc_8255A894:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r23,r11,-40
	r23.s64 = ctx.r11.s64 + -40;
loc_8255A8A0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r24,0
	r24.s64 = 0;
	// stw r29,564(r31)
	REX_STORE_U32(r31.u32 + 564, r29.u32);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a938
	if (ctx.cr0.eq) goto loc_8255A938;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255a8d0
	if (ctx.cr0.eq) goto loc_8255A8D0;
	// li r26,0
	r26.s64 = 0;
	// b 0x8255a8dc
	goto loc_8255A8DC;
loc_8255A8D0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r26,r11,-40
	r26.s64 = ctx.r11.s64 + -40;
loc_8255A8DC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255a9a8
	if (!ctx.cr6.eq) goto loc_8255A9A8;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r26
	r24.u64 = r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255a90c
	if (ctx.cr0.eq) goto loc_8255A90C;
	// li r25,0
	r25.s64 = 0;
	// b 0x8255a914
	goto loc_8255A914;
loc_8255A90C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r25,r11,-40
	r25.s64 = ctx.r11.s64 + -40;
loc_8255A914:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255a92c
	if (ctx.cr0.eq) goto loc_8255A92C;
	// li r26,0
	r26.s64 = 0;
	// b 0x8255a9a8
	goto loc_8255A9A8;
loc_8255A92C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r26,r11,-40
	r26.s64 = ctx.r11.s64 + -40;
	// b 0x8255a9a8
	goto loc_8255A9A8;
loc_8255A938:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r26,r16
	r26.u64 = r16.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255a9a8
	if (!ctx.cr6.eq) goto loc_8255A9A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb908
	ctx.lr = 0x8255A95C;
	sub_825BB908(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A970;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A97C;
	sub_8250AD28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb908
	ctx.lr = 0x8255A988;
	sub_825BB908(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255A99C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255A9A8;
	sub_8250AD28(ctx, base);
loc_8255A9A8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82557028
	ctx.lr = 0x8255A9B8;
	sub_82557028(ctx, base);
	// addi r28,r29,24
	r28.s64 = r29.s64 + 24;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255A9DC;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255A9F4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-12
	ctx.r11.s64 = r30.s64 + -12;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255aa28
	if (ctx.cr6.eq) goto loc_8255AA28;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255AA28;
	sub_8250B4D8(ctx, base);
loc_8255AA28:
	// stw r30,100(r29)
	REX_STORE_U32(r29.u32 + 100, r30.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255AA54;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255AA64;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255AA7C;
	sub_8250A620(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r18,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255AA94;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255AAA4;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255AABC;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255AAD4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255AAE4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255AAF0;
	sub_8250AD28(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255AB00;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,527
	ctx.r5.s64 = 527;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x825bd768
	ctx.lr = 0x8255AB18;
	sub_825BD768(ctx, base);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255ab38
	if (ctx.cr6.eq) goto loc_8255AB38;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255AB38;
	sub_8250B4D8(ctx, base);
loc_8255AB38:
	// stw r30,100(r29)
	REX_STORE_U32(r29.u32 + 100, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255AB5C;
	sub_824F71B8(ctx, base);
	// addi r11,r22,-8
	ctx.r11.s64 = r22.s64 + -8;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x825c1a18
	ctx.lr = 0x8255AB8C;
	sub_825C1A18(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r22,-1
	r22.s64 = -65536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8255ac24
	if (!ctx.cr6.eq) goto loc_8255AC24;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x825bb9c8
	ctx.lr = 0x8255ABB8;
	sub_825BB9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255ABCC;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255ABD8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255ABEC;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255ABF8;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255AC0C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255AC18;
	sub_8250AD28(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8255ac74
	goto loc_8255AC74;
loc_8255AC24:
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x825bb9c8
	ctx.lr = 0x8255AC2C;
	sub_825BB9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255AC40;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255AC4C;
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
	ctx.lr = 0x8255AC60;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255AC6C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8255AC74:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r30,r11,528
	r30.u64 = ctx.r11.u64 | 528;
	// bl 0x8250ab60
	ctx.lr = 0x8255AC88;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x825bd768
	ctx.lr = 0x8255ACA0;
	sub_825BD768(ctx, base);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255accc
	if (ctx.cr6.eq) goto loc_8255ACCC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255ACCC;
	sub_8250B4D8(ctx, base);
loc_8255ACCC:
	// stw r30,100(r29)
	REX_STORE_U32(r29.u32 + 100, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8255ad18
	if (!ctx.cr6.eq) goto loc_8255AD18;
	// lwz r5,92(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255ad08
	if (ctx.cr6.eq) goto loc_8255AD08;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255AD08;
	sub_8250B4D8(ctx, base);
loc_8255AD08:
	// stw r30,92(r29)
	REX_STORE_U32(r29.u32 + 92, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8255AD18:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8255AD28:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ad40
	if (!ctx.cr0.eq) goto loc_8255AD40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8255a7e0
	if (!ctx.cr6.eq) goto loc_8255A7E0;
loc_8255AD40:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8255b9c8
	if (ctx.cr6.eq) goto loc_8255B9C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255ad70
	if (ctx.cr6.eq) goto loc_8255AD70;
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8255AD70:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825c6828
	ctx.lr = 0x8255AD88;
	sub_825C6828(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255ad98
	if (!ctx.cr6.eq) goto loc_8255AD98;
	// stw r18,36(r31)
	REX_STORE_U32(r31.u32 + 36, r18.u32);
loc_8255AD98:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x824ffcc0
	ctx.lr = 0x8255ADB0;
	sub_824FFCC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r3,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// bl 0x824ffcc0
	ctx.lr = 0x8255ADFC;
	sub_824FFCC0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
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
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255AE50;
	sub_825C69A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255AE60;
	sub_825C69A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255AE70;
	sub_825C69A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255AE80;
	sub_825C69A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,-21020
	ctx.r6.s64 = ctx.r11.s64 + -21020;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bc628
	ctx.lr = 0x8255AE98;
	sub_825BC628(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r20,-1
	r20.s64 = -65536;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
	// rlwinm r11,r10,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lhz r9,62(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 62);
	// rlwimi r10,r9,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, ctx.xer);
	// bne cr6,0x8255aeec
	if (!ctx.cr6.eq) goto loc_8255AEEC;
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// addis r9,r9,2048
	ctx.r9.s64 = ctx.r9.s64 + 134217728;
	// rlwimi r9,r10,0,12,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE00FFFFF) | (ctx.r9.u64 & 0x1FF00000);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8255AEEC:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwimi r11,r18,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r18,18,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 18) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,12,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825802f8
	ctx.lr = 0x8255AF38;
	sub_825802F8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x825bdbe8
	ctx.lr = 0x8255AF58;
	sub_825BDBE8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255AF68;
	sub_8250AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,24
	ctx.r5.s64 = r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554508
	ctx.lr = 0x8255AF7C;
	sub_82554508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x8255AF8C;
	sub_82503400(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,32
	ctx.r5.s64 = r28.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554748
	ctx.lr = 0x8255AFA0;
	sub_82554748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r11,r18,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255AFC4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// stwx r27,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8255AFD4;
	sub_8257DFD8(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82557028
	ctx.lr = 0x8255AFE4;
	sub_82557028(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r6,r11,-21040
	ctx.r6.s64 = ctx.r11.s64 + -21040;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bc628
	ctx.lr = 0x8255B000;
	sub_825BC628(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rlwimi r9,r18,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// rlwimi r10,r11,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x825802f8
	ctx.lr = 0x8255B05C;
	sub_825802F8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x825bdbe8
	ctx.lr = 0x8255B07C;
	sub_825BDBE8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255B09C;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B0AC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B0B8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B0C8;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B0D4;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255B0F0;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = r30.s64 + -20;
	// li r10,265
	ctx.r10.s64 = 265;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// ori r8,r8,255
	ctx.r8.u64 = ctx.r8.u64 | 255;
	// stb r18,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, r18.u8);
	// oris r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 524288;
	// rlwimi r9,r10,13,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x825bb908
	ctx.lr = 0x8255B134;
	sub_825BB908(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B144;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B150;
	sub_8250AD28(ctx, base);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r29,r30,31
	r29.u64 = r30.u32 & 0x1;
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// beq 0x8255b1b0
	if (ctx.cr0.eq) goto loc_8255B1B0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// addi r23,r11,24
	r23.s64 = ctx.r11.s64 + 24;
	// b 0x8255b1d4
	goto loc_8255B1D4;
loc_8255B1A4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255B1B0;
	sub_824E4368(ctx, base);
loc_8255B1B0:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// addi r23,r11,16
	r23.s64 = ctx.r11.s64 + 16;
loc_8255B1D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8255b2f0
	if (ctx.cr6.eq) goto loc_8255B2F0;
loc_8255B1DC:
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
loc_8255B1E0:
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8255b244
	if (ctx.cr6.eq) goto loc_8255B244;
	// lwz r26,16(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8255b23c
	if (ctx.cr6.eq) goto loc_8255B23C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8255b23c
	if (!ctx.cr6.eq) goto loc_8255B23C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255B21C;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-8
	ctx.r11.s64 = r26.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255b23c
	if (ctx.cr0.eq) goto loc_8255B23C;
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255b2a4
	if (ctx.cr6.eq) goto loc_8255B2A4;
loc_8255B23C:
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// b 0x8255b1e0
	goto loc_8255B1E0;
loc_8255B244:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b260
	if (!ctx.cr0.eq) goto loc_8255B260;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b1dc
	if (!ctx.cr6.eq) goto loc_8255B1DC;
loc_8255B260:
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255b2f0
	if (ctx.cr6.eq) goto loc_8255B2F0;
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// addi r23,r11,24
	r23.s64 = ctx.r11.s64 + 24;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b2f0
	if (!ctx.cr0.eq) goto loc_8255B2F0;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8255b1dc
	if (!ctx.cr0.eq) goto loc_8255B1DC;
	// b 0x8255b2f0
	goto loc_8255B2F0;
loc_8255B2A4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8255b2b8
	goto loc_8255B2B8;
loc_8255B2B0:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8255B2B8:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8255b2b0
	if (!ctx.cr6.eq) goto loc_8255B2B0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// stw r25,16(r27)
	REX_STORE_U32(r27.u32 + 16, r25.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8255B2E4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B2F0;
	sub_8250AD28(ctx, base);
loc_8255B2F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b9c8
	if (!ctx.cr0.eq) goto loc_8255B9C8;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255b9c8
	if (ctx.cr0.eq) goto loc_8255B9C8;
loc_8255B308:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255b368
	if (!ctx.cr0.eq) goto loc_8255B368;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b368
	if (ctx.cr0.eq) goto loc_8255B368;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8255b368
	if (!ctx.cr6.eq) goto loc_8255B368;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b348
	if (ctx.cr6.eq) goto loc_8255B348;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8255B348:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8255B34C:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82557228
	ctx.lr = 0x8255B364;
	sub_82557228(ctx, base);
	// b 0x8255b9ac
	goto loc_8255B9AC;
loc_8255B368:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b390
	if (ctx.cr0.eq) goto loc_8255B390;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b388
	if (ctx.cr6.eq) goto loc_8255B388;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8255B388:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8255b34c
	goto loc_8255B34C;
loc_8255B390:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b9ac
	if (ctx.cr0.eq) goto loc_8255B9AC;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b9ac
	if (!ctx.cr0.eq) goto loc_8255B9AC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255b9ac
	if (ctx.cr0.eq) goto loc_8255B9AC;
loc_8255B3B8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12032, ctx.xer);
	// bne cr6,0x8255b990
	if (!ctx.cr6.eq) goto loc_8255B990;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255B3DC;
	sub_824F71B8(ctx, base);
	// addi r11,r24,-8
	ctx.r11.s64 = r24.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b990
	if (ctx.cr6.eq) goto loc_8255B990;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x8255b438
	goto loc_8255B438;
loc_8255B3F8:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255b414
	if (ctx.cr6.eq) goto loc_8255B414;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8255b418
	if (!ctx.cr6.eq) goto loc_8255B418;
loc_8255B414:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255B418:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ba1c
	if (!ctx.cr0.eq) goto loc_8255BA1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255ba28
	if (ctx.cr6.eq) goto loc_8255BA28;
	// lwz r27,4(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8255ba28
	if (ctx.cr6.eq) goto loc_8255BA28;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
loc_8255B438:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b3f8
	if (ctx.cr0.eq) goto loc_8255B3F8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8255b598
	if (!ctx.cr6.eq) goto loc_8255B598;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b45c
	if (ctx.cr6.eq) goto loc_8255B45C;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8255B45C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8255B464;
	sub_824FFCC0(ctx, base);
	// lwz r7,76(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,76(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwinm r8,r25,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwimi r9,r7,0,0,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF80000) | (ctx.r9.u64 & 0xFFFFFFFF0007FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bl 0x8250c898
	ctx.lr = 0x8255B4AC;
	sub_8250C898(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b4dc
	if (!ctx.cr0.eq) goto loc_8255B4DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255b4dc
	if (ctx.cr0.eq) goto loc_8255B4DC;
loc_8255B4C0:
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r28.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b4dc
	if (!ctx.cr0.eq) goto loc_8255B4DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b4c0
	if (!ctx.cr6.eq) goto loc_8255B4C0;
loc_8255B4DC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B4E8;
	sub_8250AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,24
	ctx.r5.s64 = r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554508
	ctx.lr = 0x8255B4FC;
	sub_82554508(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x8255B510;
	sub_82503400(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,32
	ctx.r5.s64 = r28.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554748
	ctx.lr = 0x8255B524;
	sub_82554748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r11,r18,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255B548;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stwx r29,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c6828
	ctx.lr = 0x8255B560;
	sub_825C6828(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255B570;
	sub_825C69A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255B580;
	sub_825C69A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255B590;
	sub_825C69A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8255B598;
	sub_8257DFD8(ctx, base);
loc_8255B598:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255ba34
	if (!ctx.cr0.eq) goto loc_8255BA34;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ba34
	if (ctx.cr0.eq) goto loc_8255BA34;
loc_8255B5B0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13312, ctx.xer);
	// bne cr6,0x8255b5f0
	if (!ctx.cr6.eq) goto loc_8255B5F0;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255B5D8;
	sub_824F71B8(ctx, base);
	// addi r11,r26,-8
	ctx.r11.s64 = r26.s64 + -8;
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255b60c
	if (ctx.cr6.eq) goto loc_8255B60C;
loc_8255B5F0:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255ba34
	if (!ctx.cr0.eq) goto loc_8255BA34;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b5b0
	if (!ctx.cr6.eq) goto loc_8255B5B0;
loc_8255B60C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8255ba34
	if (ctx.cr6.eq) goto loc_8255BA34;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825505d0
	ctx.lr = 0x8255B620;
	sub_825505D0(ctx, base);
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8255B62C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b654
	if (ctx.cr6.eq) goto loc_8255B654;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255b64c
	if (ctx.cr6.eq) goto loc_8255B64C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b654
	if (!ctx.cr0.eq) goto loc_8255B654;
loc_8255B64C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8255b62c
	goto loc_8255B62C;
loc_8255B654:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r19,16(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8255B674;
	sub_825C1A18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r4,28(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 28);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,105
	ctx.r6.s64 = 105;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255B694;
	sub_825BB860(ctx, base);
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8255B6DC;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255B6F4;
	sub_8250A620(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r18,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255B70C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B71C;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8255B734;
	sub_8250A620(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8255B74C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B75C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B768;
	sub_8250AD28(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// stw r25,564(r31)
	REX_STORE_U32(r31.u32 + 564, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B77C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,527
	ctx.r5.s64 = 527;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x825bd768
	ctx.lr = 0x8255B794;
	sub_825BD768(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8255b7ac
	goto loc_8255B7AC;
loc_8255B7A4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8255B7AC:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x8255b7a4
	if (!ctx.cr6.eq) goto loc_8255B7A4;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r30,12(r27)
	REX_STORE_U32(r27.u32 + 12, r30.u32);
	// bl 0x8250b4d8
	ctx.lr = 0x8255B7E0;
	sub_8250B4D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8255B7FC;
	sub_825C1A18(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b810
	if (ctx.cr0.eq) goto loc_8255B810;
	// li r30,0
	r30.s64 = 0;
	// b 0x8255b81c
	goto loc_8255B81C;
loc_8255B810:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_8255B81C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8255b854
	if (!ctx.cr6.eq) goto loc_8255B854;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255b84c
	if (ctx.cr0.eq) goto loc_8255B84C;
	// li r30,0
	r30.s64 = 0;
	// b 0x8255b854
	goto loc_8255B854;
loc_8255B84C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_8255B854:
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8255B864;
	sub_82503DA0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwimi r11,r18,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// lwz r4,28(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x8255B888;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
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
	ctx.lr = 0x8255B8CC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r17)
	REX_STORE_U32(r17.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255B8E0;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B8EC;
	sub_8250AD28(ctx, base);
	// stw r3,48(r17)
	REX_STORE_U32(r17.u32 + 48, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255B900;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B90C;
	sub_8250AD28(ctx, base);
	// stw r3,52(r17)
	REX_STORE_U32(r17.u32 + 52, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8255B920;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B92C;
	sub_8250AD28(ctx, base);
	// stw r3,56(r17)
	REX_STORE_U32(r17.u32 + 56, ctx.r3.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B93C;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x8255B950;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B95C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8255B96C;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x8255B980;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255B98C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_8255B990:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b9ac
	if (!ctx.cr0.eq) goto loc_8255B9AC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b3b8
	if (!ctx.cr6.eq) goto loc_8255B3B8;
loc_8255B9AC:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255b9c8
	if (!ctx.cr0.eq) goto loc_8255B9C8;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b308
	if (!ctx.cr6.eq) goto loc_8255B308;
loc_8255B9C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255baf0
	if (!ctx.cr0.eq) goto loc_8255BAF0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255baf0
	if (ctx.cr0.eq) goto loc_8255BAF0;
loc_8255B9E0:
	// lwz r11,68(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b9fc
	if (ctx.cr0.eq) goto loc_8255B9FC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ba08
	if (!ctx.cr0.eq) goto loc_8255BA08;
loc_8255B9FC:
	// lwz r11,76(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255bad4
	if (ctx.cr0.eq) goto loc_8255BAD4;
loc_8255BA08:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_8255BA0C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255bad4
	if (ctx.cr6.eq) goto loc_8255BAD4;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8255ba7c
	goto loc_8255BA7C;
loc_8255BA1C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255BA28;
	sub_824E4368(ctx, base);
loc_8255BA28:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255BA34;
	sub_824E4368(ctx, base);
loc_8255BA34:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255BA40;
	sub_824E4368(ctx, base);
loc_8255BA40:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255ba5c
	if (ctx.cr6.eq) goto loc_8255BA5C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8255ba60
	if (!ctx.cr6.eq) goto loc_8255BA60;
loc_8255BA5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255BA60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255bb08
	if (!ctx.cr0.eq) goto loc_8255BB08;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255bb14
	if (ctx.cr6.eq) goto loc_8255BB14;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255bb14
	if (ctx.cr6.eq) goto loc_8255BB14;
loc_8255BA7C:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255ba40
	if (ctx.cr0.eq) goto loc_8255BA40;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255bacc
	if (!ctx.cr0.eq) goto loc_8255BACC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255bacc
	if (ctx.cr0.eq) goto loc_8255BACC;
loc_8255BA9C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r7,13312
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13312, ctx.xer);
	// bne cr6,0x8255bab4
	if (!ctx.cr6.eq) goto loc_8255BAB4;
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8255BAB4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255bacc
	if (!ctx.cr0.eq) goto loc_8255BACC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255ba9c
	if (!ctx.cr6.eq) goto loc_8255BA9C;
loc_8255BACC:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8255ba0c
	goto loc_8255BA0C;
loc_8255BAD4:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255baf0
	if (!ctx.cr0.eq) goto loc_8255BAF0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255b9e0
	if (!ctx.cr6.eq) goto loc_8255B9E0;
loc_8255BAF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8255BB08:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255BB14;
	sub_824E4368(ctx, base);
loc_8255BB14:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255BB20;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82619CE0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x82619CE8;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261a1e8
	if (ctx.cr6.eq) goto loc_8261A1E8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8261a1e8
	if (ctx.cr6.eq) goto loc_8261A1E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82619d3c
	if (ctx.cr6.eq) goto loc_82619D3C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82619D24:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82619d24
	if (!ctx.cr0.eq) goto loc_82619D24;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8261a1e8
	if (!ctx.cr6.eq) goto loc_8261A1E8;
loc_82619D3C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82619d64
	if (ctx.cr6.eq) goto loc_82619D64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82619D4C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82619d4c
	if (!ctx.cr0.eq) goto loc_82619D4C;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8261a1e8
	if (!ctx.cr6.eq) goto loc_8261A1E8;
loc_82619D64:
	// cmplwi cr6,r21,63
	ctx.cr6.compare<uint32_t>(r21.u32, 63, ctx.xer);
	// beq cr6,0x82619d74
	if (ctx.cr6.eq) goto loc_82619D74;
	// cmplwi cr6,r21,1551
	ctx.cr6.compare<uint32_t>(r21.u32, 1551, ctx.xer);
	// bne cr6,0x82619d84
	if (!ctx.cr6.eq) goto loc_82619D84;
loc_82619D74:
	// cmplwi cr6,r20,63
	ctx.cr6.compare<uint32_t>(r20.u32, 63, ctx.xer);
	// beq cr6,0x82619d8c
	if (ctx.cr6.eq) goto loc_82619D8C;
	// cmplwi cr6,r20,1551
	ctx.cr6.compare<uint32_t>(r20.u32, 1551, ctx.xer);
	// beq cr6,0x82619d8c
	if (ctx.cr6.eq) goto loc_82619D8C;
loc_82619D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82619d90
	goto loc_82619D90;
loc_82619D8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82619D90:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82619da0
	if (ctx.cr6.eq) goto loc_82619DA0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82619da4
	if (!ctx.cr6.eq) goto loc_82619DA4;
loc_82619DA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82619DA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82619e08
	if (ctx.cr6.eq) goto loc_82619E08;
	// mullw r11,r25,r24
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82619DC0;
	sub_826A2E60(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(r24.s32, r25.s32, ctx.xer);
	// bge cr6,0x82619dd0
	if (!ctx.cr6.lt) goto loc_82619DD0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82619DD0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82619e00
	if (!ctx.cr6.gt) goto loc_82619E00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r25,1
	ctx.r9.s64 = r25.s64 + 1;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_82619DEC:
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// bdnz 0x82619dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619DEC;
loc_82619E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261a1f0
	goto loc_8261A1F0;
loc_82619E08:
	// cmplwi cr6,r21,4
	ctx.cr6.compare<uint32_t>(r21.u32, 4, ctx.xer);
	// bne cr6,0x82619e54
	if (!ctx.cr6.eq) goto loc_82619E54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// ble cr6,0x82619e00
	if (!ctx.cr6.gt) goto loc_82619E00;
	// stfs f0,4(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// ble cr6,0x82619e00
	if (!ctx.cr6.gt) goto loc_82619E00;
	// addi r10,r22,8
	ctx.r10.s64 = r22.s64 + 8;
	// addic. r11,r24,-2
	ctx.xer.ca = r24.u32 > 1;
	ctx.r11.s64 = r24.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619e00
	if (ctx.cr0.eq) goto loc_82619E00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82619E48:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619E48;
	// b 0x82619e00
	goto loc_82619E00;
loc_82619E54:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f0,-13792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13792);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32352);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-13796(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -13796);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,-13800(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -13800);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,-13804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -13804);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,16383
	ctx.r6.s64 = 1073676288;
	// lfs f9,-13808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13808);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20240(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20240);
	ctx.f8.f64 = double(temp.f32);
	// li r28,-1
	r28.s64 = -1;
	// ori r31,r6,65535
	r31.u64 = ctx.r6.u64 | 65535;
	// lfs f7,3792(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,6784(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6784);
	ctx.f6.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f5,19440(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19440);
	ctx.f5.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r26,1
	r26.s64 = 1;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ble cr6,0x82619f00
	if (!ctx.cr6.gt) goto loc_82619F00;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82619F00:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r30,r11,20576
	r30.s64 = ctx.r11.s64 + 20576;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x82619F1C;
	sub_8260B5B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x82619f30
	if (!ctx.cr0.eq) goto loc_82619F30;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8261a1e0
	goto loc_8261A1E0;
loc_82619F30:
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(r24.u32, r31.u32, ctx.xer);
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82619f40
	if (!ctx.cr6.gt) goto loc_82619F40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82619F40:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// bl 0x8260b5b8
	ctx.lr = 0x82619F54;
	sub_8260B5B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82619f68
	if (!ctx.cr0.eq) goto loc_82619F68;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8261a1c8
	goto loc_8261A1C8;
loc_82619F68:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r8,r23,-4
	ctx.r8.s64 = r23.s64 + -4;
loc_82619F78:
	// and. r7,r26,r21
	ctx.r7.u64 = r26.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82619f94
	if (ctx.cr0.eq) goto loc_82619F94;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// beq cr6,0x8261a0f4
	if (ctx.cr6.eq) goto loc_8261A0F4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
loc_82619F94:
	// and. r7,r26,r20
	ctx.r7.u64 = r26.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82619fb0
	if (ctx.cr0.eq) goto loc_82619FB0;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// beq cr6,0x8261a0f4
	if (ctx.cr6.eq) goto loc_8261A0F4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
loc_82619FB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r26,r26,1,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// blt cr6,0x82619f78
	if (ctx.cr6.lt) goto loc_82619F78;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// bge cr6,0x82619ff0
	if (!ctx.cr6.lt) goto loc_82619FF0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r29,r25
	ctx.r11.u64 = r25.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x82619ff0
	if (ctx.cr0.eq) goto loc_82619FF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82619FE8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619FE8;
loc_82619FF0:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// bge cr6,0x8261a01c
	if (!ctx.cr6.lt) goto loc_8261A01C;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r27,r24
	ctx.r11.u64 = r24.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x8261a01c
	if (ctx.cr0.eq) goto loc_8261A01C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8261A014:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261a014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261A014;
loc_8261A01C:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82619740
	ctx.lr = 0x8261A034;
	sub_82619740(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8261a1c8
	if (ctx.cr0.lt) goto loc_8261A1C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// bge cr6,0x8261a06c
	if (!ctx.cr6.lt) goto loc_8261A06C;
loc_8261A060:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8261a190
	if (!ctx.cr6.lt) goto loc_8261A190;
loc_8261A06C:
	// and. r11,r7,r21
	ctx.r11.u64 = ctx.r7.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a088
	if (ctx.cr0.eq) goto loc_8261A088;
	// and. r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8261a088
	if (ctx.cr0.eq) goto loc_8261A088;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r10,r22
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + r22.u32, temp.u32);
loc_8261A088:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261a0a8
	if (!ctx.cr6.eq) goto loc_8261A0A8;
	// and. r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8261a0a0
	if (ctx.cr0.eq) goto loc_8261A0A0;
	// rlwinm. r10,r7,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8261a1c0
	if (ctx.cr0.eq) goto loc_8261A1C0;
loc_8261A0A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a190
	if (ctx.cr6.eq) goto loc_8261A190;
loc_8261A0A8:
	// and. r11,r7,r20
	ctx.r11.u64 = ctx.r7.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8261a190
	if (!ctx.cr0.eq) goto loc_8261A190;
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a1c0
	if (ctx.cr0.eq) goto loc_8261A1C0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8261a100
	if (!ctx.cr6.eq) goto loc_8261A100;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8261a190
	if (!ctx.cr6.gt) goto loc_8261A190;
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
loc_8261A0E8:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8261a0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261A0E8;
	// b 0x8261a190
	goto loc_8261A190;
loc_8261A0F4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8261a1c8
	goto loc_8261A1C8;
loc_8261A100:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// ble cr6,0x8261a190
	if (!ctx.cr6.gt) goto loc_8261A190;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_8261A12C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8261a184
	if (!ctx.cr6.gt) goto loc_8261A184;
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_8261A154:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8261a16c
	if (!ctx.cr6.eq) goto loc_8261A16C;
	// fdivs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x8261a178
	goto loc_8261A178;
loc_8261A16C:
	// lfsx f10,r10,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_8261A178:
	// stfsx f10,r10,r22
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + r22.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8261a154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261A154;
loc_8261A184:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// bne 0x8261a12c
	if (!ctx.cr0.eq) goto loc_8261A12C;
loc_8261A190:
	// and. r11,r7,r21
	ctx.r11.u64 = ctx.r7.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a19c
	if (ctx.cr0.eq) goto loc_8261A19C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8261A19C:
	// and. r11,r7,r20
	ctx.r11.u64 = ctx.r7.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a1a8
	if (ctx.cr0.eq) goto loc_8261A1A8;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + r25.u64;
loc_8261A1A8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// blt cr6,0x8261a060
	if (ctx.cr6.lt) goto loc_8261A060;
	// b 0x8261a1c8
	goto loc_8261A1C8;
loc_8261A1C0:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16385
	r31.u64 = r31.u64 | 16385;
loc_8261A1C8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A1D0;
	sub_8264C3D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8261a1e0
	if (ctx.cr6.eq) goto loc_8261A1E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A1E0;
	sub_8264C3D0(ctx, base);
loc_8261A1E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8261a1f0
	goto loc_8261A1F0;
loc_8261A1E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8261A1F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82642908) {
	REX_FUNC_PROLOGUE();
	// stw r4,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642A98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642ab8
	if (!ctx.cr6.eq) goto loc_82642AB8;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82642ad0
	goto loc_82642AD0;
loc_82642AB8:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642acc
	if (ctx.cr6.eq) goto loc_82642ACC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82642ad0
	goto loc_82642AD0;
loc_82642ACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82642AD0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82643B20) {
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
	ctx.lr = 0x82643B28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bne cr6,0x82643b70
	if (!ctx.cr6.eq) goto loc_82643B70;
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// b 0x82643b78
	goto loc_82643B78;
loc_82643B70:
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
loc_82643B78:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643b9c
	if (ctx.cr6.eq) goto loc_82643B9C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643B9C:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82642e68
	ctx.lr = 0x82643BB8;
	sub_82642E68(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82643bf4
	if (ctx.cr0.lt) goto loc_82643BF4;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643be8
	if (ctx.cr6.eq) goto loc_82643BE8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643BE8:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82643c40
	if (!ctx.cr6.lt) goto loc_82643C40;
loc_82643BF4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643c24
	if (ctx.cr6.eq) goto loc_82643C24;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643C24:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82642e68
	ctx.lr = 0x82643C40;
	sub_82642E68(ctx, base);
loc_82643C40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8264CE90) {
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
	// b 0x82794094
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D050) {
	REX_FUNC_PROLOGUE();
	// b 0x82794154
	__imp__NetDll_WSAGetLastError(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8264D090;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r3,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r5,756(r1)
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x8264ca58
	ctx.lr = 0x8264D0C4;
	sub_8264CA58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d1b4
	if (ctx.cr0.lt) goto loc_8264D1B4;
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
	ctx.lr = 0x8264D0EC;
	sub_8264CAE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d1b4
	if (ctx.cr0.lt) goto loc_8264D1B4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82794034
	ctx.lr = 0x8264D104;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d1b4
	if (ctx.cr0.lt) goto loc_8264D1B4;
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
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8264cbb8
	ctx.lr = 0x8264D150;
	sub_8264CBB8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264d1b4
	if (ctx.cr0.lt) goto loc_8264D1B4;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D164;
	sub_8264D058(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D170;
	sub_8264D058(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D17C;
	sub_8264D058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D188;
	sub_8264D058(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8264d058
	ctx.lr = 0x8264D194;
	sub_8264D058(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82793744
	ctx.lr = 0x8264D1AC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8264d1d4
	if (!ctx.cr0.lt) goto loc_8264D1D4;
loc_8264D1B4:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1c4
	if (ctx.cr6.eq) goto loc_8264D1C4;
	// bl 0x82794024
	ctx.lr = 0x8264D1C4;
	__imp__XamFree(ctx, base);
loc_8264D1C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0188
	ctx.lr = 0x8264D1CC;
	sub_823F0188(ctx, base);
	// li r30,1627
	r30.s64 = 1627;
	// b 0x8264d1dc
	goto loc_8264D1DC;
loc_8264D1D4:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82794024
	ctx.lr = 0x8264D1DC;
	__imp__XamFree(ctx, base);
loc_8264D1DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82652238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82652240;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,248(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,248
	r30.s64 = ctx.r3.s64 + 248;
	// b 0x82652294
	goto loc_82652294;
loc_82652258:
	// lwz r4,100(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82652278
	if (!ctx.cr6.eq) goto loc_82652278;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r10,-68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x8265228c
	goto loc_8265228C;
loc_82652278:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 400);
	// bl 0x8265d758
	ctx.lr = 0x82652284;
	sub_8265D758(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8265228C:
	// blt cr6,0x826522c8
	if (ctx.cr6.lt) goto loc_826522C8;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82652294:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x826522a4
	if (ctx.cr6.eq) goto loc_826522A4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x82652258
	if (!ctx.cr0.eq) goto loc_82652258;
loc_826522A4:
	// stw r30,92(r29)
	REX_STORE_U32(r29.u32 + 92, r30.u32);
	// addi r11,r29,92
	ctx.r11.s64 = r29.s64 + 92;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_826522C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826522C8:
	// stw r31,92(r29)
	REX_STORE_U32(r29.u32 + 92, r31.u32);
	// addi r11,r29,92
	ctx.r11.s64 = r29.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x826522c0
	goto loc_826522C0;
}

DEFINE_REX_FUNC(sub_826586C8) {
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
	ctx.lr = 0x826586D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826586f4
	if (!ctx.cr0.eq) goto loc_826586F4;
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,1314
	r27.u64 = r27.u64 | 1314;
	// b 0x826587b4
	goto loc_826587B4;
loc_826586F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826587ac
	if (ctx.cr6.lt) goto loc_826587AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x826587ac
	if (ctx.cr6.gt) goto loc_826587AC;
	// addi r30,r31,228
	r30.s64 = r31.s64 + 228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265cd40
	ctx.lr = 0x82658718;
	sub_8265CD40(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x826587b4
	if (ctx.cr0.lt) goto loc_826587B4;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// beq cr6,0x826587b4
	if (ctx.cr6.eq) goto loc_826587B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8265d088
	ctx.lr = 0x82658734;
	sub_8265D088(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,380
	r28.s64 = r31.s64 + 380;
loc_82658740:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265875c
	if (ctx.cr6.eq) goto loc_8265875C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c940
	ctx.lr = 0x8265875C;
	sub_8265C940(ctx, base);
loc_8265875C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82658740
	if (ctx.cr6.lt) goto loc_82658740;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658790
	if (ctx.cr6.eq) goto loc_82658790;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656c50
	ctx.lr = 0x82658788;
	sub_82656C50(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x826587b4
	if (ctx.cr0.lt) goto loc_826587B4;
loc_82658790:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826587A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826587b4
	goto loc_826587B4;
loc_826587AC:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,1609
	r27.u64 = r27.u64 | 1609;
loc_826587B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8265D868) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8265d8a0
	if (ctx.cr6.eq) goto loc_8265D8A0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D8A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D8A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8265F020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f040
	if (!ctx.cr6.eq) goto loc_8265F040;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265f040
	if (!ctx.cr0.eq) goto loc_8265F040;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265F040:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x8265f050
	if (!ctx.cr6.eq) goto loc_8265F050;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8265f05c
	goto loc_8265F05C;
loc_8265F050:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8265F05C:
	// lbz r10,392(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 392);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_826609A0) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826609cc
	if (ctx.cr6.eq) goto loc_826609CC;
	// bl 0x8264ce68
	ctx.lr = 0x826609C4;
	sub_8264CE68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_826609CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82661120
	ctx.lr = 0x826609D4;
	sub_82661120(ctx, base);
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

DEFINE_REX_FUNC(sub_826627A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826627B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x826627e4
	if (ctx.cr6.eq) goto loc_826627E4;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// bl 0x82661458
	ctx.lr = 0x826627D8;
	sub_82661458(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826628bc
	if (!ctx.cr6.eq) goto loc_826628BC;
loc_826627E4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82662804
	if (!ctx.cr6.eq) goto loc_82662804;
	// lis r6,4626
	ctx.r6.s64 = 303169536;
	// li r30,0
	r30.s64 = 0;
	// ori r6,r6,4626
	ctx.r6.u64 = ctx.r6.u64 | 4626;
	// b 0x82662854
	goto loc_82662854;
loc_82662804:
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
	// bne 0x82662804
	if (!ctx.cr0.eq) goto loc_82662804;
	// lbz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 292);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82662838
	if (ctx.cr0.eq) goto loc_82662838;
	// lis r6,-32646
	ctx.r6.s64 = -2139488256;
	// ori r6,r6,4113
	ctx.r6.u64 = ctx.r6.u64 | 4113;
	// b 0x82662840
	goto loc_82662840;
loc_82662838:
	// lis r6,4626
	ctx.r6.s64 = 303169536;
	// ori r6,r6,4626
	ctx.r6.u64 = ctx.r6.u64 | 4626;
loc_82662840:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x82662854
	if (ctx.cr6.eq) goto loc_82662854;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r11.u32);
loc_82662854:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82673978
	ctx.lr = 0x82662868;
	sub_82673978(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x826628d8
	if (!ctx.cr0.lt) goto loc_826628D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826628dc
	if (ctx.cr6.eq) goto loc_826628DC;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x8266288c
	if (ctx.cr6.eq) goto loc_8266288C;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r11.u32);
loc_8266288C:
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
	// bne 0x8266288c
	if (!ctx.cr0.eq) goto loc_8266288C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826628dc
	if (!ctx.cr6.eq) goto loc_826628DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82670cd8
	ctx.lr = 0x826628B8;
	sub_82670CD8(ctx, base);
	// b 0x826628dc
	goto loc_826628DC;
loc_826628BC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,60(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82673db0
	ctx.lr = 0x826628D0;
	sub_82673DB0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x826628dc
	if (ctx.cr0.lt) goto loc_826628DC;
loc_826628D8:
	// li r31,0
	r31.s64 = 0;
loc_826628DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8266D310) {
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
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10920
	ctx.r12.s64 = ctx.r12.s64 + -10920;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// nop 
	// addi r12,r12,-11432
	ctx.r12.s64 = ctx.r12.s64 + -11432;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8266D388;
	case 1:
		goto loc_8266D388;
	case 2:
		goto loc_8266D388;
	case 3:
		goto loc_8266D388;
	case 4:
		sub_8266D460(ctx, base);
		return;
	case 5:
		goto loc_8266D388;
	case 6:
		goto loc_8266D388;
	case 7:
		goto loc_8266D388;
	case 8:
		goto loc_8266D388;
	case 9:
		goto loc_8266D358;
	case 10:
		goto loc_8266D388;
	case 11:
		goto loc_8266D388;
	case 12:
		goto loc_8266D358;
	case 13:
		goto loc_8266D358;
	case 14:
		goto loc_8266D358;
	case 15:
		goto loc_8266D358;
	case 16:
		goto loc_8266D3D4;
	case 17:
		goto loc_8266D3EC;
	case 18:
		goto loc_8266D404;
	case 19:
		goto loc_8266D41C;
	case 20:
		goto loc_8266D43C;
	case 21:
		goto loc_8266D454;
	case 22:
		goto loc_8266D46C;
	case 23:
		goto loc_8266D484;
	case 24:
		goto loc_8266D49C;
	case 25:
		goto loc_8266D4CC;
	case 26:
		goto loc_8266D4E4;
	case 27:
		goto loc_8266D4FC;
	case 28:
		goto loc_8266D514;
	case 29:
		goto loc_8266D52C;
	case 30:
		goto loc_8266D544;
	case 31:
		goto loc_8266D55C;
	case 32:
		goto loc_8266D574;
	case 33:
		goto loc_8266D358;
	case 34:
		goto loc_8266D358;
	case 35:
		goto loc_8266D358;
	case 36:
		goto loc_8266D358;
	case 37:
		goto loc_8266D358;
	case 38:
		goto loc_8266D358;
	case 39:
		goto loc_8266D358;
	case 40:
		goto loc_8266D560;
	case 41:
		goto loc_8266D4F0;
	case 42:
		goto loc_8266D3DC;
	case 43:
		goto loc_8266D6D8;
	case 44:
		goto loc_8266D560;
	case 45:
		goto loc_8266D4F0;
	case 46:
		goto loc_8266D730;
	case 47:
		goto loc_8266D6F8;
	case 48:
		goto loc_8266D560;
	case 49:
		goto loc_8266D4F0;
	case 50:
		goto loc_8266D590;
	case 51:
		goto loc_8266D5B8;
	case 52:
		goto loc_8266D560;
	case 53:
		goto loc_8266D4F0;
	case 54:
		goto loc_8266D3E4;
	case 55:
		goto loc_8266D3F8;
	case 56:
		goto loc_8266D560;
	case 57:
		goto loc_8266D4F0;
	case 58:
		goto loc_8266D3E8;
	case 59:
		goto loc_8266D6D8;
	case 60:
		goto loc_8266D560;
	case 61:
		goto loc_8266D4F0;
	case 62:
		goto loc_8266D3F0;
	case 63:
		goto loc_8266D598;
	case 64:
		goto loc_8266D560;
	case 65:
		goto loc_8266D4F0;
	case 66:
		goto loc_8266D5A8;
	case 67:
		goto loc_8266D538;
	case 68:
		goto loc_8266D560;
	case 69:
		goto loc_8266D4F0;
	case 70:
		goto loc_8266D734;
	case 71:
		goto loc_8266D598;
	case 72:
		goto loc_8266D560;
	case 73:
		goto loc_8266D4F0;
	case 74:
		goto loc_8266D734;
	case 75:
		goto loc_8266D6D8;
	case 76:
		goto loc_8266D560;
	case 77:
		goto loc_8266D4F0;
	case 78:
		goto loc_8266D738;
	case 79:
		goto loc_8266D418;
	case 80:
		goto loc_8266D560;
	case 81:
		goto loc_8266D4F0;
	case 82:
		goto loc_8266D3F4;
	case 83:
		goto loc_8266D5F8;
	case 84:
		goto loc_8266D560;
	case 85:
		goto loc_8266D4F0;
	case 86:
		goto loc_8266D3F8;
	case 87:
		goto loc_8266D6F8;
	case 88:
		goto loc_8266D560;
	case 89:
		goto loc_8266D4F0;
	case 90:
		goto loc_8266D3FC;
	case 91:
		goto loc_8266D738;
	case 92:
		goto loc_8266D560;
	case 93:
		goto loc_8266D4F0;
	case 94:
		goto loc_8266D400;
	case 95:
		goto loc_8266D438;
	case 96:
		goto loc_8266D560;
	case 97:
		goto loc_8266D4F0;
	case 98:
		goto loc_8266D404;
	case 99:
		goto loc_8266D538;
	case 100:
		goto loc_8266D560;
	case 101:
		goto loc_8266D4F0;
	case 102:
		goto loc_8266D664;
	case 103:
		goto loc_8266D478;
	case 104:
		goto loc_8266D560;
	case 105:
		goto loc_8266D4F0;
	case 106:
		goto loc_8266D738;
	case 107:
		goto loc_8266D558;
	case 108:
		goto loc_8266D560;
	case 109:
		goto loc_8266D4F0;
	case 110:
		goto loc_8266D72C;
	case 111:
		goto loc_8266D398;
	case 112:
		goto loc_8266D560;
	case 113:
		goto loc_8266D4F0;
	case 114:
		goto loc_8266D3DC;
	case 115:
		goto loc_8266D6B8;
	case 116:
		goto loc_8266D560;
	case 117:
		goto loc_8266D4F4;
	case 118:
		goto loc_8266D364;
	case 119:
		goto loc_8266D378;
	case 120:
		goto loc_8266D560;
	case 121:
		goto loc_8266D4F4;
	case 122:
		goto loc_8266D364;
	case 123:
		goto loc_8266D3D8;
	case 124:
		goto loc_8266D560;
	case 125:
		goto loc_8266D4FC;
	case 126:
		goto loc_8266D698;
	case 127:
		goto loc_8266D418;
	case 128:
		goto loc_8266D560;
	case 129:
		goto loc_8266D4FC;
	case 130:
		goto loc_8266D698;
	case 131:
		goto loc_8266D418;
	case 132:
		goto loc_8266D560;
	case 133:
		goto loc_8266D4FC;
	case 134:
		goto loc_8266D698;
	case 135:
		goto loc_8266D418;
	case 136:
		goto loc_8266D560;
	case 137:
		goto loc_8266D4FC;
	case 138:
		goto loc_8266D698;
	case 139:
		goto loc_8266D418;
	case 140:
		goto loc_8266D560;
	case 141:
		goto loc_8266D4FC;
	case 142:
		goto loc_8266D698;
	case 143:
		goto loc_8266D418;
	case 144:
		goto loc_8266D560;
	case 145:
		goto loc_8266D4F4;
	case 146:
		goto loc_8266D3F0;
	case 147:
		goto loc_8266D638;
	case 148:
		goto loc_8266D560;
	case 149:
		goto loc_8266D4F4;
	case 150:
		goto loc_8266D3DC;
	case 151:
		goto loc_8266D538;
	case 152:
		goto loc_8266D560;
	case 153:
		goto loc_8266D4F4;
	case 154:
		goto loc_8266D3E0;
	case 155:
		goto loc_8266D4D8;
	case 156:
		goto loc_8266D560;
	case 157:
		goto loc_8266D4F4;
	case 158:
		goto loc_8266D3E0;
	case 159:
		goto loc_8266D698;
	case 160:
		goto loc_8266D560;
	case 161:
		goto loc_8266D4F4;
	case 162:
		goto loc_8266D3E0;
	case 163:
		goto loc_8266D6D8;
	case 164:
		goto loc_8266D358;
	case 165:
		goto loc_8266D358;
	case 166:
		goto loc_8266D358;
	case 167:
		goto loc_8266D358;
	case 168:
		goto loc_8266D560;
	case 169:
		goto loc_8266D4FC;
	case 170:
		goto loc_8266D698;
	case 171:
		goto loc_8266D418;
	case 172:
		goto loc_8266D560;
	case 173:
		goto loc_8266D4FC;
	case 174:
		goto loc_8266D698;
	case 175:
		goto loc_8266D418;
	case 176:
		goto loc_8266D560;
	case 177:
		goto loc_8266D4FC;
	case 178:
		goto loc_8266D698;
	case 179:
		goto loc_8266D418;
	case 180:
		goto loc_8266D560;
	case 181:
		goto loc_8266D4FC;
	case 182:
		goto loc_8266D698;
	case 183:
		goto loc_8266D418;
	case 184:
		goto loc_8266D560;
	case 185:
		goto loc_8266D4FC;
	case 186:
		goto loc_8266D698;
	case 187:
		goto loc_8266D418;
	case 188:
		goto loc_8266D560;
	case 189:
		goto loc_8266D4FC;
	case 190:
		goto loc_8266D698;
	case 191:
		goto loc_8266D418;
	case 192:
		goto loc_8266D560;
	case 193:
		goto loc_8266D4FC;
	case 194:
		goto loc_8266D698;
	case 195:
		goto loc_8266D418;
	case 196:
		goto loc_8266D560;
	case 197:
		goto loc_8266D4FC;
	case 198:
		goto loc_8266D698;
	case 199:
		goto loc_8266D418;
	case 200:
		goto loc_8266D560;
	case 201:
		goto loc_8266D4FC;
	case 202:
		goto loc_8266D698;
	case 203:
		goto loc_8266D418;
	case 204:
		goto loc_8266D560;
	case 205:
		goto loc_8266D4FC;
	case 206:
		goto loc_8266D698;
	case 207:
		goto loc_8266D418;
	case 208:
		goto loc_8266D560;
	case 209:
		goto loc_8266D4FC;
	case 210:
		goto loc_8266D698;
	case 211:
		goto loc_8266D418;
	case 212:
		goto loc_8266D560;
	case 213:
		goto loc_8266D4FC;
	case 214:
		goto loc_8266D698;
	case 215:
		goto loc_8266D418;
	case 216:
		goto loc_8266D560;
	case 217:
		goto loc_8266D4FC;
	case 218:
		goto loc_8266D698;
	case 219:
		goto loc_8266D418;
	case 220:
		goto loc_8266D560;
	case 221:
		goto loc_8266D4FC;
	case 222:
		goto loc_8266D698;
	case 223:
		goto loc_8266D418;
	case 224:
		goto loc_8266D560;
	case 225:
		goto loc_8266D4FC;
	case 226:
		goto loc_8266D698;
	case 227:
		goto loc_8266D418;
	case 228:
		goto loc_8266D560;
	case 229:
		goto loc_8266D4FC;
	case 230:
		goto loc_8266D698;
	case 231:
		goto loc_8266D418;
	case 232:
		goto loc_8266D560;
	case 233:
		goto loc_8266D4FC;
	case 234:
		goto loc_8266D698;
	case 235:
		goto loc_8266D418;
	case 236:
		goto loc_8266D560;
	case 237:
		goto loc_8266D4F4;
	case 238:
		goto loc_8266D4D4;
	case 239:
		goto loc_8266D6B8;
	case 240:
		goto loc_8266D560;
	case 241:
		goto loc_8266D4F4;
	case 242:
		goto loc_8266D4CC;
	case 243:
		goto loc_8266D678;
	case 244:
		goto loc_8266D560;
	case 245:
		goto loc_8266D4F4;
	case 246:
		goto loc_8266D4CC;
	case 247:
		goto loc_8266D738;
	case 248:
		goto loc_8266D560;
	case 249:
		goto loc_8266D4F4;
	case 250:
		goto loc_8266D4D0;
	case 251:
		goto loc_8266D4D8;
	case 252:
		goto loc_8266D560;
	case 253:
		goto loc_8266D4F4;
	case 254:
		goto loc_8266D4D0;
	case 255:
		goto loc_8266D518;
	case 256:
		goto loc_8266D358;
	case 257:
		goto loc_8266D388;
	case 258:
		goto loc_8266D388;
	case 259:
		goto loc_8266D358;
	case 260:
		goto loc_8266D358;
	case 261:
		goto loc_8266D358;
	case 262:
		goto loc_8266D3A8;
	case 263:
		goto loc_8266D3C8;
	case 264:
		goto loc_8266D388;
	case 265:
		goto loc_8266D388;
	case 266:
		goto loc_8266D3E8;
	case 267:
		goto loc_8266D358;
	case 268:
		goto loc_8266D560;
	case 269:
		goto loc_8266D4F4;
	case 270:
		goto loc_8266D4DC;
	case 271:
		goto loc_8266D578;
	case 272:
		goto loc_8266D560;
	case 273:
		goto loc_8266D4F4;
	case 274:
		goto loc_8266D4D8;
	case 275:
		goto loc_8266D398;
	case 276:
		goto loc_8266D560;
	case 277:
		goto loc_8266D4F4;
	case 278:
		goto loc_8266D4D8;
	case 279:
		goto loc_8266D438;
	case 280:
		goto loc_8266D560;
	case 281:
		goto loc_8266D4F4;
	case 282:
		goto loc_8266D4D8;
	case 283:
		goto loc_8266D3F8;
	case 284:
		goto loc_8266D560;
	case 285:
		goto loc_8266D3A4;
	case 286:
		goto loc_8266D390;
	case 287:
		goto loc_8266D578;
	case 288:
		goto loc_8266D358;
	case 289:
		goto loc_8266D628;
	case 290:
		goto loc_8266D3A8;
	case 291:
		goto loc_8266D3F8;
	case 292:
		goto loc_8266D448;
	case 293:
		goto loc_8266D498;
	case 294:
		goto loc_8266D4E8;
	case 295:
		goto loc_8266D538;
	case 296:
		goto loc_8266D588;
	case 297:
		goto loc_8266D5D8;
	case 298:
		goto loc_8266D358;
	case 299:
		goto loc_8266D358;
	case 300:
		goto loc_8266D358;
	case 301:
		goto loc_8266D358;
	case 302:
		goto loc_8266D358;
	case 303:
		goto loc_8266D358;
	case 304:
		goto loc_8266D358;
	case 305:
		goto loc_8266D388;
	case 306:
		goto loc_8266D39C;
	case 307:
		goto loc_8266D3B0;
	case 308:
		goto loc_8266D3C4;
	case 309:
		goto loc_8266D3D8;
	case 310:
		goto loc_8266D3EC;
	case 311:
		goto loc_8266D400;
	case 312:
		goto loc_8266D414;
	case 313:
		goto loc_8266D428;
	case 314:
		goto loc_8266D43C;
	case 315:
		goto loc_8266D450;
	case 316:
		goto loc_8266D464;
	case 317:
		goto loc_8266D478;
	case 318:
		goto loc_8266D48C;
	case 319:
		goto loc_8266D4A0;
	case 320:
		goto loc_8266D4B4;
	case 321:
		goto loc_8266D4C8;
	case 322:
		goto loc_8266D4DC;
	case 323:
		goto loc_8266D4F0;
	case 324:
		goto loc_8266D504;
	case 325:
		goto loc_8266D518;
	case 326:
		goto loc_8266D52C;
	case 327:
		goto loc_8266D540;
	case 328:
		goto loc_8266D554;
	case 329:
		goto loc_8266D568;
	case 330:
		goto loc_8266D580;
	case 331:
		goto loc_8266D594;
	case 332:
		goto loc_8266D358;
	case 333:
		goto loc_8266D358;
	case 334:
		goto loc_8266D358;
	case 335:
		goto loc_8266D358;
	case 336:
		goto loc_8266D358;
	case 337:
		goto loc_8266D598;
	case 338:
		goto loc_8266D398;
	case 339:
		goto loc_8266D3D8;
	case 340:
		goto loc_8266D418;
	case 341:
		goto loc_8266D458;
	case 342:
		goto loc_8266D498;
	case 343:
		goto loc_8266D4D8;
	case 344:
		goto loc_8266D518;
	case 345:
		goto loc_8266D558;
	case 346:
		goto loc_8266D358;
	case 347:
		goto loc_8266D358;
	case 348:
		goto loc_8266D358;
	case 349:
		goto loc_8266D358;
	case 350:
		goto loc_8266D358;
	case 351:
		goto loc_8266D358;
	case 352:
		goto loc_8266D358;
	case 353:
		goto loc_8266D378;
	case 354:
		goto loc_8266D394;
	case 355:
		goto loc_8266D3A0;
	case 356:
		goto loc_8266D3B0;
	case 357:
		goto loc_8266D3C0;
	case 358:
		goto loc_8266D3D0;
	case 359:
		goto loc_8266D3E0;
	case 360:
		goto loc_8266D3F0;
	case 361:
		goto loc_8266D400;
	case 362:
		goto loc_8266D410;
	case 363:
		goto loc_8266D420;
	case 364:
		goto loc_8266D430;
	case 365:
		goto loc_8266D440;
	case 366:
		goto loc_8266D450;
	case 367:
		sub_8266D460(ctx, base);
		return;
	case 368:
		goto loc_8266D470;
	case 369:
		goto loc_8266D480;
	case 370:
		goto loc_8266D490;
	case 371:
		goto loc_8266D4A0;
	case 372:
		goto loc_8266D4B0;
	case 373:
		goto loc_8266D54C;
	case 374:
		goto loc_8266D55C;
	case 375:
		goto loc_8266D56C;
	case 376:
		goto loc_8266D57C;
	case 377:
		goto loc_8266D58C;
	case 378:
		goto loc_8266D5D4;
	case 379:
		goto loc_8266D5E4;
	case 380:
		goto loc_8266D560;
	case 381:
		goto loc_8266D4F0;
	case 382:
		goto loc_8266D3DC;
	case 383:
		goto loc_8266D6B8;
	case 384:
		goto loc_8266D560;
	case 385:
		goto loc_8266D4F4;
	case 386:
		goto loc_8266D578;
	case 387:
		goto loc_8266D478;
	case 388:
		goto loc_8266D560;
	case 389:
		goto loc_8266D4F4;
	case 390:
		goto loc_8266D550;
	case 391:
		goto loc_8266D3B8;
	case 392:
		goto loc_8266D560;
	case 393:
		goto loc_8266D3D8;
	case 394:
		goto loc_8266D4AC;
	case 395:
		goto loc_8266D3B8;
	case 396:
		goto loc_8266D560;
	case 397:
		goto loc_8266D4F4;
	case 398:
		goto loc_8266D568;
	case 399:
		goto loc_8266D678;
	case 400:
		goto loc_8266D560;
	case 401:
		goto loc_8266D3C0;
	case 402:
		goto loc_8266D610;
	case 403:
		goto loc_8266D518;
	case 404:
		goto loc_8266D560;
	case 405:
		goto loc_8266D4F4;
	case 406:
		goto loc_8266D550;
	case 407:
		goto loc_8266D4F8;
	case 408:
		goto loc_8266D358;
	case 409:
		goto loc_8266D398;
	case 410:
		goto loc_8266D3B8;
	case 411:
		goto loc_8266D3F8;
	case 412:
		goto loc_8266D458;
	case 413:
		goto loc_8266D478;
	case 414:
		goto loc_8266D498;
	case 415:
		goto loc_8266D4B8;
	case 416:
		goto loc_8266D4D8;
	case 417:
		goto loc_8266D4F8;
	case 418:
		goto loc_8266D358;
	case 419:
		goto loc_8266D358;
	case 420:
		goto loc_8266D358;
	case 421:
		goto loc_8266D358;
	case 422:
		goto loc_8266D358;
	case 423:
		goto loc_8266D358;
	case 424:
		goto loc_8266D358;
	case 425:
		goto loc_8266D388;
	case 426:
		goto loc_8266D714;
	case 427:
		goto loc_8266D39C;
	case 428:
		goto loc_8266D40C;
	case 429:
		goto loc_8266D420;
	case 430:
		goto loc_8266D714;
	case 431:
		goto loc_8266D714;
	case 432:
		goto loc_8266D434;
	case 433:
		goto loc_8266D448;
	case 434:
		goto loc_8266D45C;
	case 435:
		goto loc_8266D470;
	case 436:
		goto loc_8266D484;
	case 437:
		goto loc_8266D498;
	case 438:
		goto loc_8266D714;
	case 439:
		goto loc_8266D4AC;
	case 440:
		goto loc_8266D4C0;
	case 441:
		goto loc_8266D4D4;
	case 442:
		goto loc_8266D524;
	case 443:
		goto loc_8266D574;
	case 444:
		goto loc_8266D714;
	case 445:
		goto loc_8266D588;
	case 446:
		goto loc_8266D59C;
	case 447:
		goto loc_8266D5B0;
	case 448:
		goto loc_8266D5C4;
	case 449:
		goto loc_8266D5D8;
	case 450:
		goto loc_8266D5F0;
	case 451:
		goto loc_8266D604;
	case 452:
		goto loc_8266D358;
	case 453:
		goto loc_8266D358;
	case 454:
		goto loc_8266D358;
	case 455:
		goto loc_8266D358;
	case 456:
		goto loc_8266D358;
	case 457:
		goto loc_8266D36C;
	case 458:
		goto loc_8266D5D0;
	case 459:
		goto loc_8266D380;
	case 460:
		goto loc_8266D3E4;
	case 461:
		goto loc_8266D3F8;
	case 462:
		goto loc_8266D5D0;
	case 463:
		goto loc_8266D5D0;
	case 464:
		goto loc_8266D40C;
	case 465:
		goto loc_8266D5D0;
	case 466:
		goto loc_8266D5D0;
	case 467:
		goto loc_8266D5D0;
	case 468:
		goto loc_8266D5D0;
	case 469:
		goto loc_8266D418;
	case 470:
		goto loc_8266D5D0;
	case 471:
		goto loc_8266D5D0;
	case 472:
		goto loc_8266D5D0;
	case 473:
		goto loc_8266D424;
	case 474:
		goto loc_8266D47C;
	case 475:
		goto loc_8266D4D4;
	case 476:
		goto loc_8266D5D0;
	case 477:
		goto loc_8266D4E0;
	case 478:
		goto loc_8266D4EC;
	case 479:
		goto loc_8266D4F8;
	case 480:
		goto loc_8266D504;
	case 481:
		goto loc_8266D510;
	case 482:
		goto loc_8266D56C;
	case 483:
		goto loc_8266D578;
	case 484:
		goto loc_8266D560;
	case 485:
		goto loc_8266D4F8;
	case 486:
		goto loc_8266D400;
	case 487:
		goto loc_8266D718;
	case 488:
		goto loc_8266D560;
	case 489:
		goto loc_8266D4F0;
	case 490:
		goto loc_8266D3DC;
	case 491:
		goto loc_8266D6B8;
	case 492:
		goto loc_8266D560;
	case 493:
		goto loc_8266D4F4;
	case 494:
		goto loc_8266D710;
	case 495:
		goto loc_8266D5F8;
	case 496:
		goto loc_8266D560;
	case 497:
		goto loc_8266D504;
	case 498:
		goto loc_8266D518;
	case 499:
		goto loc_8266D358;
	case 500:
		goto loc_8266D560;
	case 501:
		goto loc_8266D4F4;
	case 502:
		goto loc_8266D580;
	case 503:
		goto loc_8266D6D8;
	case 504:
		goto loc_8266D560;
	case 505:
		goto loc_8266D3D8;
	case 506:
		goto loc_8266D4AC;
	case 507:
		goto loc_8266D3B8;
	case 508:
		goto loc_8266D560;
	case 509:
		goto loc_8266D4F4;
	case 510:
		goto loc_8266D580;
	case 511:
		goto loc_8266D698;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8266D358:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x8266c148
	ctx.lr = 0x8266D364;
	sub_8266C148(ctx, base);
loc_8266D364:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
loc_8266D36C:
	// bne cr6,0x8266d388
	if (!ctx.cr6.eq) goto loc_8266D388;
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
loc_8266D378:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266d388
	if (!ctx.cr6.eq) goto loc_8266D388;
loc_8266D380:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826757a0
	ctx.lr = 0x8266D388;
	sub_826757A0(ctx, base);
loc_8266D388:
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r30,0
	r30.s64 = 0;
loc_8266D390:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_8266D394:
	// beq cr6,0x8266d3a0
	if (ctx.cr6.eq) goto loc_8266D3A0;
loc_8266D398:
	// bl 0x82675ad0
	ctx.lr = 0x8266D39C;
	sub_82675AD0(ctx, base);
loc_8266D39C:
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
loc_8266D3A0:
	// lwz r4,340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 340);
loc_8266D3A4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
loc_8266D3A8:
	// beq cr6,0x8266d400
	if (ctx.cr6.eq) goto loc_8266D400;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
loc_8266D3B0:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266d3c8
	if (!ctx.cr0.eq) goto loc_8266D3C8;
loc_8266D3B8:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266d3c8
	if (!ctx.cr0.eq) goto loc_8266D3C8;
loc_8266D3C0:
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8266D3C4:
	// beq 0x8266d3d0
	if (ctx.cr0.eq) goto loc_8266D3D0;
loc_8266D3C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663030
	ctx.lr = 0x8266D3D0;
	sub_82663030(ctx, base);
loc_8266D3D0:
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
loc_8266D3D4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
loc_8266D3D8:
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
loc_8266D3DC:
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
loc_8266D3E0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8266D3E4:
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
loc_8266D3E8:
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8266D3EC:
	// bne 0x8266d3d4
	if (!ctx.cr0.eq) goto loc_8266D3D4;
loc_8266D3F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8266D3F4:
	// bne cr6,0x8266d3fc
	if (!ctx.cr6.eq) goto loc_8266D3FC;
loc_8266D3F8:
	// bl 0x82670cd8
	ctx.lr = 0x8266D3FC;
	sub_82670CD8(ctx, base);
loc_8266D3FC:
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
loc_8266D400:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
loc_8266D404:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266d43c
	if (ctx.cr6.eq) goto loc_8266D43C;
loc_8266D40C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
loc_8266D410:
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
loc_8266D414:
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
loc_8266D418:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8266D41C:
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
loc_8266D420:
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8266D424:
	// bne 0x8266d40c
	if (!ctx.cr0.eq) goto loc_8266D40C;
loc_8266D428:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266d438
	if (!ctx.cr6.eq) goto loc_8266D438;
loc_8266D430:
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8266D434:
	// bl 0x8265d850
	ctx.lr = 0x8266D438;
	sub_8265D850(ctx, base);
loc_8266D438:
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
loc_8266D43C:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
loc_8266D440:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
loc_8266D448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
loc_8266D450:
	// mtlr r12
	ctx.lr = ctx.r12.u64;
loc_8266D454:
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
loc_8266D458:
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8266D45C:
	// blr 
	return;
loc_8266D464:
	// bl 0x826a1c84
	ctx.lr = 0x8266D468;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8266D46C:
	// lwz r11,428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
loc_8266D470:
	// li r15,0
	r15.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8266D478:
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
loc_8266D47C:
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
loc_8266D480:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_8266D484:
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r15
	r26.u64 = r15.u64;
loc_8266D48C:
	// mr r16,r15
	r16.u64 = r15.u64;
loc_8266D490:
	// bne 0x8266d4a0
	if (!ctx.cr0.eq) goto loc_8266D4A0;
loc_8266D494:
	// lis r30,-32646
	r30.s64 = -2139488256;
loc_8266D498:
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
loc_8266D49C:
	// b 0x8266da28
	goto loc_8266DA28;
loc_8266D4A0:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266d494
	if (!ctx.cr6.eq) goto loc_8266D494;
loc_8266D4AC:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
loc_8266D4B0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
loc_8266D4B4:
	// beq cr6,0x8266d958
	if (ctx.cr6.eq) goto loc_8266D958;
loc_8266D4B8:
	// cmplwi cr6,r6,42
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 42, ctx.xer);
	// blt cr6,0x8266d494
	if (ctx.cr6.lt) goto loc_8266D494;
loc_8266D4C0:
	// lwz r17,1(r28)
	r17.u64 = REX_LOAD_U32(r28.u32 + 1);
	// addi r9,r6,-42
	ctx.r9.s64 = ctx.r6.s64 + -42;
loc_8266D4C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
loc_8266D4CC:
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
loc_8266D4D0:
	// lwz r18,5(r28)
	r18.u64 = REX_LOAD_U32(r28.u32 + 5);
loc_8266D4D4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
loc_8266D4D8:
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
loc_8266D4DC:
	// lwz r19,9(r28)
	r19.u64 = REX_LOAD_U32(r28.u32 + 9);
loc_8266D4E0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
loc_8266D4E4:
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
loc_8266D4E8:
	// cmplw cr6,r18,r19
	ctx.cr6.compare<uint32_t>(r18.u32, r19.u32, ctx.xer);
loc_8266D4EC:
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
loc_8266D4F0:
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
loc_8266D4F4:
	// lbz r24,13(r28)
	r24.u64 = REX_LOAD_U8(r28.u32 + 13);
loc_8266D4F8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8266D4FC:
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
loc_8266D504:
	// mulli r11,r24,42
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(42));
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
loc_8266D510:
	// lwz r20,14(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 14);
loc_8266D514:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8266D518:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266d494
	if (!ctx.cr6.eq) goto loc_8266D494;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
loc_8266D524:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266d494
	if (ctx.cr6.gt) goto loc_8266D494;
loc_8266D52C:
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
loc_8266D538:
	// bge cr6,0x8266d494
	if (!ctx.cr6.lt) goto loc_8266D494;
	// addi r29,r31,360
	r29.s64 = r31.s64 + 360;
loc_8266D540:
	// addi r4,r28,18
	ctx.r4.s64 = r28.s64 + 18;
loc_8266D544:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8266D54C:
	// bl 0x826a1e70
	ctx.lr = 0x8266D550;
	sub_826A1E70(ctx, base);
loc_8266D550:
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
loc_8266D554:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_8266D558:
	// lwz r3,72(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 72);
loc_8266D55C:
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
loc_8266D560:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r11,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8266D568:
	// bl 0x82675b48
	ctx.lr = 0x8266D56C;
	sub_82675B48(ctx, base);
loc_8266D56C:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
loc_8266D574:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
loc_8266D578:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8266D57C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8266D580:
	// bl 0x8264c828
	ctx.lr = 0x8266D584;
	sub_8264C828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8266D588:
	// bne 0x8266d5f4
	if (!ctx.cr0.eq) goto loc_8266D5F4;
loc_8266D58C:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
loc_8266D590:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
loc_8266D594:
	// beq cr6,0x8266d608
	if (ctx.cr6.eq) goto loc_8266D608;
loc_8266D598:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
loc_8266D59C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r8,r29,8
	ctx.r8.s64 = r29.s64 + 8;
loc_8266D5A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
loc_8266D5A8:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_8266D5B0:
	// bne 0x8266d5c4
	if (!ctx.cr0.eq) goto loc_8266D5C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8266D5B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8266d5a4
	if (!ctx.cr6.eq) goto loc_8266D5A4;
loc_8266D5C4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8266d608
	if (ctx.cr0.eq) goto loc_8266D608;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
loc_8266D5D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8266D5D4:
	// bl 0x8264c800
	ctx.lr = 0x8266D5D8;
	sub_8264C800(ctx, base);
loc_8266D5D8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d5f4
	if (!ctx.cr0.eq) goto loc_8266D5F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8266D5E4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826b49d0
	ctx.lr = 0x8266D5EC;
	sub_826B49D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8266D5F0:
	// beq 0x8266d600
	if (ctx.cr0.eq) goto loc_8266D600;
loc_8266D5F4:
	// lis r30,-32646
	r30.s64 = -2139488256;
loc_8266D5F8:
	// ori r30,r30,4107
	r30.u64 = r30.u64 | 4107;
	// b 0x8266d968
	goto loc_8266D968;
loc_8266D600:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
loc_8266D604:
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
loc_8266D608:
	// addi r27,r31,432
	r27.s64 = r31.s64 + 432;
loc_8266D60C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
loc_8266D610:
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r22
	ea = r22.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r22
	ea = r22.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d60c
	if (!ctx.cr0.eq) goto loc_8266D60C;
loc_8266D628:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,2
	r21.s64 = 2;
	// li r16,1
	r16.s64 = 1;
	// addi r28,r28,42
	r28.s64 = r28.s64 + 42;
loc_8266D638:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r22,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, r22.u32);
	// lwz r11,292(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 292);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,292(r22)
	REX_STORE_U32(r22.u32 + 292, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x8266d830
	if (ctx.cr6.eq) goto loc_8266D830;
loc_8266D664:
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
loc_8266D668:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266d960
	if (ctx.cr6.eq) goto loc_8266D960;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
loc_8266D678:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266d960
	if (!ctx.cr6.eq) goto loc_8266D960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_8266D698:
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8266D6A4;
	sub_826A1E70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82670c20
	ctx.lr = 0x8266D6B4;
	sub_82670C20(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
loc_8266D6B8:
	// beq 0x8266d85c
	if (ctx.cr0.eq) goto loc_8266D85C;
	// lwz r11,292(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 292);
	// stw r30,60(r26)
	REX_STORE_U32(r26.u32 + 60, r30.u32);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,292(r26)
	REX_STORE_U32(r26.u32 + 292, ctx.r11.u32);
loc_8266D6CC:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
loc_8266D6D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d6cc
	if (!ctx.cr0.eq) goto loc_8266D6CC;
	// stwx r26,r29,r27
	REX_STORE_U32(r29.u32 + r27.u32, r26.u32);
	// subf r11,r19,r30
	ctx.r11.u64 = r30.u64 - r19.u64;
	// lwz r10,292(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 292);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
loc_8266D6F8:
	// stw r10,292(r26)
	REX_STORE_U32(r26.u32 + 292, ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
loc_8266D710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8266D714:
	// or r23,r11,r23
	r23.u64 = ctx.r11.u64 | r23.u64;
loc_8266D718:
	// bl 0x82661668
	ctx.lr = 0x8266D71C;
	sub_82661668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r10,257
	ctx.r10.s64 = 257;
loc_8266D72C:
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
loc_8266D730:
	// lhz r8,384(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 384);
loc_8266D734:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_8266D738:
	// stb r21,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r21.u8);
	// sth r10,113(r1)
	REX_STORE_U16(ctx.r1.u32 + 113, ctx.r10.u16);
	// stw r18,117(r1)
	REX_STORE_U32(ctx.r1.u32 + 117, r18.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// sth r8,115(r1)
	REX_STORE_U16(ctx.r1.u32 + 115, ctx.r8.u16);
	// ble cr6,0x8266d758
	if (!ctx.cr6.gt) goto loc_8266D758;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x8266d75c
	goto loc_8266D75C;
loc_8266D758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8266D75C:
	// stb r11,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d778
	if (ctx.cr6.eq) goto loc_8266D778;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r11.u32);
	// b 0x8266d77c
	goto loc_8266D77C;
loc_8266D778:
	// stw r15,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, r15.u32);
loc_8266D77C:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82675a60
	ctx.lr = 0x8266D79C;
	sub_82675A60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8266d968
	if (ctx.cr0.lt) goto loc_8266D968;
loc_8266D7A4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d7a4
	if (!ctx.cr0.eq) goto loc_8266D7A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,72(r26)
	REX_STORE_U32(r26.u32 + 72, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d7ec
	if (ctx.cr6.eq) goto loc_8266D7EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661c08
	ctx.lr = 0x8266D7E4;
	sub_82661C08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
loc_8266D7EC:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r9,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r9.u32);
	// addi r28,r28,42
	r28.s64 = r28.s64 + 42;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// addi r25,r25,42
	r25.s64 = r25.s64 + 42;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// mr r26,r15
	r26.u64 = r15.u64;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// bne 0x8266d668
	if (!ctx.cr0.eq) goto loc_8266D668;
loc_8266D830:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8266d960
	if (ctx.cr6.eq) goto loc_8266D960;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266d88c
	if (ctx.cr6.eq) goto loc_8266D88C;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,258
	ctx.r3.s64 = 258;
	// bl 0x82663958
	ctx.lr = 0x8266D850;
	sub_82663958(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// bne 0x8266d868
	if (!ctx.cr0.eq) goto loc_8266D868;
loc_8266D85C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8266d968
	goto loc_8266D968;
loc_8266D868:
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
	// bne 0x8266d868
	if (!ctx.cr0.eq) goto loc_8266D868;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_8266D88C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82670d68
	ctx.lr = 0x8266D894;
	sub_82670D68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// bl 0x82675a58
	ctx.lr = 0x8266D8A0;
	sub_82675A58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8266d968
	if (ctx.cr0.lt) goto loc_8266D968;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8266d8dc
	if (!ctx.cr6.gt) goto loc_8266D8DC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8266D8BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266d8dc
	if (ctx.cr6.eq) goto loc_8266D8DC;
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8266d8bc
	if (ctx.cr6.lt) goto loc_8266D8BC;
loc_8266D8DC:
	// clrlwi r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266d960
	if (!ctx.cr6.eq) goto loc_8266D960;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,196(r31)
	REX_STORE_U32(r31.u32 + 196, r17.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// stw r17,264(r31)
	REX_STORE_U32(r31.u32 + 264, r17.u32);
	// bl 0x826726c0
	ctx.lr = 0x8266D914;
	sub_826726C0(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266d928
	if (!ctx.cr6.eq) goto loc_8266D928;
	// stw r22,32(r31)
	REX_STORE_U32(r31.u32 + 32, r22.u32);
loc_8266D928:
	// stw r21,180(r31)
	REX_STORE_U32(r31.u32 + 180, r21.u32);
	// lwz r11,292(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 292);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,292(r22)
	REX_STORE_U32(r22.u32 + 292, ctx.r11.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// bne 0x8266d958
	if (!ctx.cr0.eq) goto loc_8266D958;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bb58
	ctx.lr = 0x8266D950;
	sub_8266BB58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
loc_8266D958:
	// mr r30,r15
	r30.u64 = r15.u64;
	// b 0x8266da28
	goto loc_8266DA28;
loc_8266D960:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
loc_8266D968:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d998
	if (ctx.cr6.eq) goto loc_8266D998;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266D988;
	sub_8266BFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8266d9cc
	if (ctx.cr0.lt) goto loc_8266D9CC;
	// mr r30,r15
	r30.u64 = r15.u64;
	// b 0x8266d9cc
	goto loc_8266D9CC;
loc_8266D998:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8266d9cc
	if (ctx.cr6.eq) goto loc_8266D9CC;
loc_8266D9A0:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d9a0
	if (!ctx.cr0.eq) goto loc_8266D9A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266d9cc
	if (!ctx.cr6.eq) goto loc_8266D9CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266D9CC;
	sub_82670CD8(ctx, base);
loc_8266D9CC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x8266da28
	if (ctx.cr6.eq) goto loc_8266DA28;
	// lwz r29,240(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r28,r31,240
	r28.s64 = r31.s64 + 240;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x8266da1c
	if (ctx.cr6.eq) goto loc_8266DA1C;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x8266da1c
	if (ctx.cr0.eq) goto loc_8266DA1C;
loc_8266D9EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r4,r22
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r22.u32, ctx.xer);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8266da14
	if (ctx.cr6.eq) goto loc_8266DA14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266DA14;
	sub_8266C148(ctx, base);
loc_8266DA14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8266d9ec
	if (!ctx.cr6.eq) goto loc_8266D9EC;
loc_8266DA1C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826652d0
	ctx.lr = 0x8266DA28;
	sub_826652D0(ctx, base);
loc_8266DA28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_826D9280) {
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
	ctx.lr = 0x826D9288;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// bctrl 
	ctx.lr = 0x826D92C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// bge cr6,0x826d92f0
	if (!ctx.cr6.lt) goto loc_826D92F0;
loc_826D92DC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826D92F0:
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
	ctx.lr = 0x826D9308;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r23,2
	r23.s64 = 2;
	// bl 0x826c6880
	ctx.lr = 0x826D932C;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// stw r11,108(r9)
	REX_STORE_U32(ctx.r9.u32 + 108, ctx.r11.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// beq cr6,0x826d9430
	if (ctx.cr6.eq) goto loc_826D9430;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D9384;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826D93A4;
	sub_826A2E60(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r25,4(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x826d9430
	if (ctx.cr6.eq) goto loc_826D9430;
	// li r28,6
	r28.s64 = 6;
loc_826D93BC:
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d92dc
	if (ctx.cr6.gt) goto loc_826D92DC;
	// rlwinm r10,r11,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826d3b98
	ctx.lr = 0x826D93E8;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D940C;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x826d93bc
	if (ctx.cr6.lt) goto loc_826D93BC;
loc_826D9430:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r22
	ctx.r10.u64 = r22.u64 - ctx.r11.u64;
	// subf. r30,r23,r10
	r30.u64 = ctx.r10.u64 - r23.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d9474
	if (ctx.cr0.eq) goto loc_826D9474;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D9458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9474
	if (ctx.cr6.lt) goto loc_826D9474;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
loc_826D9474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826E17F0) {
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
	ctx.lr = 0x826E17F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lhz r10,34(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,176(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// divwu r7,r7,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// lwz r28,740(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r25,r30
	r25.u64 = r30.u64;
	// divwu r29,r7,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x826e187c
	if (!ctx.cr6.eq) goto loc_826E187C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e1550
	ctx.lr = 0x826E185C;
	sub_826E1550(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826e187c
	if (!ctx.cr6.lt) goto loc_826E187C;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r11,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,0(r23)
	REX_STORE_U16(r23.u32 + 0, ctx.r8.u16);
loc_826E187C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e18b4
	if (ctx.cr6.eq) goto loc_826E18B4;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826E1890:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r7,492(r10)
	REX_STORE_U32(ctx.r10.u32 + 492, ctx.r7.u32);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826e1890
	if (ctx.cr6.lt) goto loc_826E1890;
loc_826E18B4:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826e1afc
	if (!ctx.cr6.eq) goto loc_826E1AFC;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x826e18e0
	if (ctx.cr6.lt) goto loc_826E18E0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_826E18E0:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x826e18ec
	if (ctx.cr6.lt) goto loc_826E18EC;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_826E18EC:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826e18fc
	if (!ctx.cr6.gt) goto loc_826E18FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E18FC:
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826e1918
	if (ctx.cr6.eq) goto loc_826E1918;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r27,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r27.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x826e1938
	goto loc_826E1938;
loc_826E1918:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826e1934
	if (ctx.cr6.eq) goto loc_826E1934;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x826e1938
	goto loc_826E1938;
loc_826E1934:
	// lwz r27,256(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 256);
loc_826E1938:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826e1950
	if (!ctx.cr6.eq) goto loc_826E1950;
	// sth r30,0(r23)
	REX_STORE_U16(r23.u32 + 0, r30.u16);
	// b 0x826e1c78
	goto loc_826E1C78;
loc_826E1950:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e19c4
	if (ctx.cr6.eq) goto loc_826E19C4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r4.s64 = r27.s32 >> 1;
loc_826E1978:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r6,388(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 324);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e1978
	if (ctx.cr6.lt) goto loc_826E1978;
loc_826E19C4:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e19f0
	if (ctx.cr6.eq) goto loc_826E19F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x826E19E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e1c9c
	if (ctx.cr6.lt) goto loc_826E1C9C;
loc_826E19F0:
	// lhz r29,34(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r26,34(r31)
	REX_STORE_U16(r31.u32 + 34, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E1A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e1c98
	if (ctx.cr6.lt) goto loc_826E1C98;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// sth r29,34(r31)
	REX_STORE_U16(r31.u32 + 34, r29.u16);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// sth r11,0(r23)
	REX_STORE_U16(r23.u32 + 0, ctx.r11.u16);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e1c78
	if (ctx.cr6.lt) goto loc_826E1C78;
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r29.s64 = ctx.r11.s32 >> 1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// blt 0x826e1aec
	if (ctx.cr0.lt) goto loc_826E1AEC;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826e1aec
	if (!ctx.cr6.lt) goto loc_826E1AEC;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e1c78
	if (ctx.cr6.eq) goto loc_826E1C78;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
loc_826E1A90:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 324);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r7,r29
	ctx.r3.u64 = r29.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x826E1AD4;
	sub_823EF2F8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e1a90
	if (ctx.cr6.lt) goto loc_826E1A90;
	// b 0x826e1c78
	goto loc_826E1C78;
loc_826E1AEC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_826E1AFC:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rlwinm r7,r29,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e1c00
	if (ctx.cr6.eq) goto loc_826E1C00;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_826E1B18:
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x826e1b30
	if (ctx.cr6.lt) goto loc_826E1B30;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826E1B30:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x826e1b3c
	if (ctx.cr6.lt) goto loc_826E1B3C;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_826E1B3C:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r28
	REX_STORE_U16(ctx.r9.u32 + r28.u32, ctx.r10.u16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x826e1b74
	if (ctx.cr6.lt) goto loc_826E1B74;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826E1B74:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x826e1b94
	if (!ctx.cr6.lt) goto loc_826E1B94;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826e1b8c
	if (!ctx.cr6.lt) goto loc_826E1B8C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x826e1b98
	goto loc_826E1B98;
loc_826E1B8C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x826e1b98
	goto loc_826E1B98;
loc_826E1B94:
	// li r9,32767
	ctx.r9.s64 = 32767;
loc_826E1B98:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// lwzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826e1bbc
	if (!ctx.cr6.lt) goto loc_826E1BBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x826e1be8
	goto loc_826E1BE8;
loc_826E1BBC:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x826e1bcc
	if (ctx.cr6.lt) goto loc_826E1BCC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826E1BCC:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x826e1be4
	if (!ctx.cr6.lt) goto loc_826E1BE4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x826e1be8
	if (ctx.cr6.lt) goto loc_826E1BE8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x826e1be8
	goto loc_826E1BE8;
loc_826E1BE4:
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_826E1BE8:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e1b18
	if (ctx.cr6.lt) goto loc_826E1B18;
loc_826E1C00:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e1c2c
	if (ctx.cr6.eq) goto loc_826E1C2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x826E1C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e1c9c
	if (ctx.cr6.lt) goto loc_826E1C9C;
loc_826E1C2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f6b70
	ctx.lr = 0x826E1C40;
	sub_826F6B70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e1c98
	if (ctx.cr6.lt) goto loc_826E1C98;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// sth r11,0(r23)
	REX_STORE_U16(r23.u32 + 0, ctx.r11.u16);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e1c78
	if (ctx.cr6.eq) goto loc_826E1C78;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826E1C68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e1c68
	if (ctx.cr6.lt) goto loc_826E1C68;
loc_826E1C78:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826e1c9c
	if (!ctx.cr6.eq) goto loc_826E1C9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_826E1C98:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_826E1C9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82715AD8) {
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
	ctx.lr = 0x82715AE0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r22,1
	r22.s64 = 1;
	// lwz r26,22248(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 22248);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r23,22244(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 22244);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// stw r24,22272(r3)
	REX_STORE_U32(ctx.r3.u32 + 22272, r24.u32);
	// mr r21,r24
	r21.u64 = r24.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// stw r22,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r22.u32);
	// mr r17,r24
	r17.u64 = r24.u64;
	// lwz r9,3700(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3700);
	// mr r19,r24
	r19.u64 = r24.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r24,22276(r3)
	REX_STORE_U32(ctx.r3.u32 + 22276, r24.u32);
	// mr r16,r24
	r16.u64 = r24.u64;
	// bne cr6,0x82715b6c
	if (!ctx.cr6.eq) goto loc_82715B6C;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,22272(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22272);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826fba78
	ctx.lr = 0x82715B64;
	sub_826FBA78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
loc_82715B6C:
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82716388
	if (ctx.cr6.eq) goto loc_82716388;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82716388
	if (ctx.cr6.eq) goto loc_82716388;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82716388
	if (ctx.cr6.eq) goto loc_82716388;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82715bac
	if (!ctx.cr6.lt) goto loc_82715BAC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82715BA0;
	sub_826A1E70(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82715BAC:
	// lwz r11,22252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22252);
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82715be0
	if (!ctx.cr6.gt) goto loc_82715BE0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827159f0
	ctx.lr = 0x82715BC8;
	sub_827159F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
	// lwz r26,22248(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22248);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r23,22244(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 22244);
loc_82715BE0:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82715c7c
	if (!ctx.cr6.lt) goto loc_82715C7C;
loc_82715BE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715ca4
	if (ctx.cr6.eq) goto loc_82715CA4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,3364(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3364);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82716b40
	ctx.lr = 0x82715C10;
	sub_82716B40(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r8,22252(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22252);
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r9
	ctx.r5.u64 = r31.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82715c4c
	if (!ctx.cr6.gt) goto loc_82715C4C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827159f0
	ctx.lr = 0x82715C3C;
	sub_827159F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
	// lwz r26,22248(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22248);
	// lwz r23,22244(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 22244);
loc_82715C4C:
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x826a1e70
	ctx.lr = 0x82715C5C;
	sub_826A1E70(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82715be8
	if (ctx.cr6.lt) goto loc_82715BE8;
loc_82715C7C:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82715ca4
	if (!ctx.cr6.eq) goto loc_82715CA4;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82715ca4
	if (!ctx.cr6.eq) goto loc_82715CA4;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// beq cr6,0x82715ca8
	if (ctx.cr6.eq) goto loc_82715CA8;
loc_82715CA4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82715CA8:
	// stw r11,22220(r30)
	REX_STORE_U32(r30.u32 + 22220, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,22268(r30)
	REX_STORE_U32(r30.u32 + 22268, r24.u32);
	// beq cr6,0x82715cd4
	if (ctx.cr6.eq) goto loc_82715CD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r4.u32);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82715CD4:
	// li r20,3
	r20.s64 = 3;
	// li r18,2
	r18.s64 = 2;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x82716248
	if (ctx.cr6.lt) goto loc_82716248;
loc_82715CE4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82716248
	if (!ctx.cr6.eq) goto loc_82716248;
loc_82715CEC:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lbz r5,3(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// blt cr6,0x82715d94
	if (ctx.cr6.lt) goto loc_82715D94;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// ble cr6,0x82715d94
	if (!ctx.cr6.gt) goto loc_82715D94;
loc_82715D18:
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and r31,r10,r7
	r31.u64 = ctx.r10.u64 & ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// clrlwi r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82715d68
	if (!ctx.cr6.eq) goto loc_82715D68;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82715d48
	if (!ctx.cr6.eq) goto loc_82715D48;
	// rlwinm r31,r7,0,16,23
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(r31.u32, 256, ctx.xer);
	// beq cr6,0x82715d80
	if (ctx.cr6.eq) goto loc_82715D80;
loc_82715D48:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82715d68
	if (!ctx.cr6.eq) goto loc_82715D68;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82715d68
	if (!ctx.cr6.eq) goto loc_82715D68;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82715d88
	if (ctx.cr6.gt) goto loc_82715D88;
loc_82715D68:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82715d18
	if (ctx.cr6.lt) goto loc_82715D18;
	// b 0x82715d94
	goto loc_82715D94;
loc_82715D80:
	// addi r27,r11,-2
	r27.s64 = ctx.r11.s64 + -2;
	// b 0x82715d8c
	goto loc_82715D8C;
loc_82715D88:
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
loc_82715D8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82715d9c
	if (!ctx.cr6.eq) goto loc_82715D9C;
loc_82715D94:
	// add r27,r4,r3
	r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
loc_82715D9C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r10,22224(r30)
	REX_STORE_U32(r30.u32 + 22224, ctx.r10.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82715dbc
	if (ctx.cr6.eq) goto loc_82715DBC;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82715dbc
	if (ctx.cr6.eq) goto loc_82715DBC;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82715dc0
	if (!ctx.cr6.eq) goto loc_82715DC0;
loc_82715DBC:
	// mr r17,r22
	r17.u64 = r22.u64;
loc_82715DC0:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x82715e70
	if (!ctx.cr6.eq) goto loc_82715E70;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x82715e70
	if (!ctx.cr6.eq) goto loc_82715E70;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82715e74
	if (!ctx.cr6.eq) goto loc_82715E74;
	// subf r31,r4,r27
	r31.u64 = r27.u64 - ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82715DEC;
	sub_826A1E70(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// lwz r3,3364(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3364);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82716b40
	ctx.lr = 0x82715E08;
	sub_82716B40(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,22252(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22252);
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r8
	ctx.r5.u64 = r31.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82715e44
	if (!ctx.cr6.gt) goto loc_82715E44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827159f0
	ctx.lr = 0x82715E34;
	sub_827159F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
	// lwz r26,22248(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22248);
	// lwz r23,22244(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 22244);
loc_82715E44:
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x826a1e70
	ctx.lr = 0x82715E54;
	sub_826A1E70(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// b 0x82715cec
	goto loc_82715CEC;
loc_82715E70:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82715E74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82715f2c
	if (ctx.cr6.eq) goto loc_82715F2C;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x82715f2c
	if (!ctx.cr6.eq) goto loc_82715F2C;
	// subf r11,r28,r27
	ctx.r11.u64 = r27.u64 - r28.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82715ec8
	if (!ctx.cr6.gt) goto loc_82715EC8;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82715ec8
	if (!ctx.cr6.eq) goto loc_82715EC8;
	// lbz r8,-2(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82715ec8
	if (!ctx.cr6.eq) goto loc_82715EC8;
	// lbz r8,-3(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -3);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82715ec8
	if (!ctx.cr6.eq) goto loc_82715EC8;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r20,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r20.u32);
	// stb r24,22241(r30)
	REX_STORE_U8(r30.u32 + 22241, r24.u8);
	// stb r22,22242(r30)
	REX_STORE_U8(r30.u32 + 22242, r22.u8);
	// b 0x82715f1c
	goto loc_82715F1C;
loc_82715EC8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82715ef8
	if (!ctx.cr6.gt) goto loc_82715EF8;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82715ef8
	if (!ctx.cr6.eq) goto loc_82715EF8;
	// lbz r8,-2(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82715ef8
	if (!ctx.cr6.eq) goto loc_82715EF8;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r18,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r18.u32);
	// stb r24,22241(r30)
	REX_STORE_U8(r30.u32 + 22241, r24.u8);
	// b 0x82715f1c
	goto loc_82715F1C;
loc_82715EF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715f18
	if (ctx.cr6.eq) goto loc_82715F18;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82715f18
	if (!ctx.cr6.eq) goto loc_82715F18;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r22,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r22.u32);
	// b 0x82715f1c
	goto loc_82715F1C;
loc_82715F18:
	// stw r24,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r24.u32);
loc_82715F1C:
	// lwz r8,22228(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22228);
	// mr r19,r22
	r19.u64 = r22.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
loc_82715F2C:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82716124
	if (ctx.cr6.eq) goto loc_82716124;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82716124
	if (ctx.cr6.eq) goto loc_82716124;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x82716124
	if (ctx.cr6.eq) goto loc_82716124;
	// subf r5,r28,r27
	ctx.r5.u64 = r27.u64 - r28.u64;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bgt cr6,0x82716060
	if (ctx.cr6.gt) goto loc_82716060;
	// beq cr6,0x82716030
	if (ctx.cr6.eq) goto loc_82716030;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x82715ff8
	if (ctx.cr6.gt) goto loc_82715FF8;
	// beq cr6,0x82715fb8
	if (ctx.cr6.eq) goto loc_82715FB8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82715fb0
	if (ctx.cr6.eq) goto loc_82715FB0;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8271611c
	if (!ctx.cr6.eq) goto loc_8271611C;
	// lwz r11,15504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82725b68
	ctx.lr = 0x82715F90;
	sub_82725B68(ctx, base);
	// lwz r9,3700(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3700);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82716308
	if (!ctx.cr6.eq) goto loc_82716308;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82701bf0
	ctx.lr = 0x82715FA4;
	sub_82701BF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
	// b 0x82716224
	goto loc_82716224;
loc_82715FB0:
	// stw r22,3704(r30)
	REX_STORE_U32(r30.u32 + 3704, r22.u32);
	// b 0x8271622c
	goto loc_8271622C;
loc_82715FB8:
	// lwz r11,15504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82725b68
	ctx.lr = 0x82715FD8;
	sub_82725B68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271a700
	ctx.lr = 0x82715FE4;
	sub_8271A700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82716224
	if (ctx.cr6.eq) goto loc_82716224;
	// stw r22,3700(r30)
	REX_STORE_U32(r30.u32 + 3700, r22.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82715FF8:
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x8271611c
	if (!ctx.cr6.eq) goto loc_8271611C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82716014
	if (!ctx.cr6.eq) goto loc_82716014;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// beq cr6,0x82716018
	if (ctx.cr6.eq) goto loc_82716018;
loc_82716014:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82716018:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827158f8
	ctx.lr = 0x8271602C;
	sub_827158F8(ctx, base);
	// b 0x82716224
	goto loc_82716224;
loc_82716030:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82716044
	if (!ctx.cr6.eq) goto loc_82716044;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// beq cr6,0x82716048
	if (ctx.cr6.eq) goto loc_82716048;
loc_82716044:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82716048:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827158f8
	ctx.lr = 0x8271605C;
	sub_827158F8(ctx, base);
	// b 0x82716224
	goto loc_82716224;
loc_82716060:
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bgt cr6,0x8271610c
	if (ctx.cr6.gt) goto loc_8271610C;
	// beq cr6,0x827160dc
	if (ctx.cr6.eq) goto loc_827160DC;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// beq cr6,0x827160ac
	if (ctx.cr6.eq) goto loc_827160AC;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x8271611c
	if (!ctx.cr6.eq) goto loc_8271611C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82716090
	if (!ctx.cr6.eq) goto loc_82716090;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// beq cr6,0x82716094
	if (ctx.cr6.eq) goto loc_82716094;
loc_82716090:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82716094:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827158f8
	ctx.lr = 0x827160A8;
	sub_827158F8(ctx, base);
	// b 0x82716224
	goto loc_82716224;
loc_827160AC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x827160c0
	if (!ctx.cr6.eq) goto loc_827160C0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// beq cr6,0x827160c4
	if (ctx.cr6.eq) goto loc_827160C4;
loc_827160C0:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_827160C4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827158f8
	ctx.lr = 0x827160D8;
	sub_827158F8(ctx, base);
	// b 0x82716224
	goto loc_82716224;
loc_827160DC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x827160f0
	if (!ctx.cr6.eq) goto loc_827160F0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// beq cr6,0x827160f4
	if (ctx.cr6.eq) goto loc_827160F4;
loc_827160F0:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_827160F4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827158f8
	ctx.lr = 0x82716108;
	sub_827158F8(ctx, base);
	// b 0x82716224
	goto loc_82716224;
loc_8271610C:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8271611c
	if (ctx.cr6.lt) goto loc_8271611C;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8271622c
	if (!ctx.cr6.gt) goto loc_8271622C;
loc_8271611C:
	// li r16,4
	r16.s64 = 4;
	// b 0x8271622c
	goto loc_8271622C;
loc_82716124:
	// subf. r31,r28,r27
	r31.u64 = r27.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8271614c
	if (ctx.cr0.eq) goto loc_8271614C;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82716134:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8271614c
	if (!ctx.cr6.eq) goto loc_8271614C;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x82716134
	if (!ctx.cr0.eq) goto loc_82716134;
loc_8271614C:
	// lwz r11,3700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82716210
	if (!ctx.cr6.eq) goto loc_82716210;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x82716174
	if (!ctx.cr6.eq) goto loc_82716174;
	// lwz r11,22172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22172);
	// stw r31,22188(r30)
	REX_STORE_U32(r30.u32 + 22188, r31.u32);
	// stw r21,22276(r30)
	REX_STORE_U32(r30.u32 + 22276, r21.u32);
	// stw r22,22272(r30)
	REX_STORE_U32(r30.u32 + 22272, r22.u32);
	// stw r11,22176(r30)
	REX_STORE_U32(r30.u32 + 22176, ctx.r11.u32);
loc_82716174:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x8271618c
	if (!ctx.cr6.eq) goto loc_8271618C;
	// lwz r11,22216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22216);
	// stw r31,22184(r30)
	REX_STORE_U32(r30.u32 + 22184, r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,22216(r30)
	REX_STORE_U32(r30.u32 + 22216, ctx.r11.u32);
loc_8271618C:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82716210
	if (!ctx.cr6.eq) goto loc_82716210;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x827162a0
	if (!ctx.cr6.gt) goto loc_827162A0;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lbz r9,1(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 1);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,22272(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22272);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// bl 0x826fba78
	ctx.lr = 0x827161D0;
	sub_826FBA78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271620c
	if (ctx.cr6.eq) goto loc_8271620C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82716300
	if (!ctx.cr6.eq) goto loc_82716300;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// li r16,4
	r16.s64 = 4;
	// rlwinm r9,r10,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
	// stbx r9,r23,r21
	REX_STORE_U8(r23.u32 + r21.u32, ctx.r9.u8);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// addi r21,r11,1
	r21.s64 = ctx.r11.s64 + 1;
	// stbx r7,r23,r11
	REX_STORE_U8(r23.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8271620C:
	// lwz r29,292(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_82716210:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r23,r21
	ctx.r3.u64 = r23.u64 + r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82716220;
	sub_826A1E70(ctx, base);
	// add r21,r31,r21
	r21.u64 = r31.u64 + r21.u64;
loc_82716224:
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8271622C:
	// subf r11,r27,r4
	ctx.r11.u64 = ctx.r4.u64 - r27.u64;
	// stw r27,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r27.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82715ce4
	if (!ctx.cr6.lt) goto loc_82715CE4;
loc_82716248:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82716370
	if (ctx.cr6.eq) goto loc_82716370;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82716370
	if (!ctx.cr6.eq) goto loc_82716370;
	// add r11,r23,r21
	ctx.r11.u64 = r23.u64 + r21.u64;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// ble cr6,0x82716314
	if (!ctx.cr6.gt) goto loc_82716314;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82716314
	if (!ctx.cr6.eq) goto loc_82716314;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82716314
	if (!ctx.cr6.eq) goto loc_82716314;
	// lbz r9,-3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82716314
	if (!ctx.cr6.eq) goto loc_82716314;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r20,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r20.u32);
	// stb r24,22241(r30)
	REX_STORE_U8(r30.u32 + 22241, r24.u8);
	// stb r22,22242(r30)
	REX_STORE_U8(r30.u32 + 22242, r22.u8);
	// b 0x82716368
	goto loc_82716368;
loc_827162A0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82716210
	if (!ctx.cr6.eq) goto loc_82716210;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// stw r22,22268(r30)
	REX_STORE_U32(r30.u32 + 22268, r22.u32);
	// bne cr6,0x82716210
	if (!ctx.cr6.eq) goto loc_82716210;
	// lwz r11,22228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22228);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82716308
	if (ctx.cr6.gt) goto loc_82716308;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827162e4
	if (ctx.cr6.eq) goto loc_827162E4;
	// addi r10,r30,22239
	ctx.r10.s64 = r30.s64 + 22239;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,22240
	ctx.r9.s64 = r30.s64 + 22240;
loc_827162D4:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x827162d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827162D4;
loc_827162E4:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r31,r24
	r31.u64 = r24.u64;
	// lwz r11,22228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22228);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, ctx.r10.u8);
	// stw r9,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, ctx.r9.u32);
	// b 0x82716210
	goto loc_82716210;
loc_82716300:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8271638c
	if (!ctx.cr6.eq) goto loc_8271638C;
loc_82716308:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82716314:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(r21.u32, 1, ctx.xer);
	// ble cr6,0x82716344
	if (!ctx.cr6.gt) goto loc_82716344;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82716344
	if (!ctx.cr6.eq) goto loc_82716344;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82716344
	if (!ctx.cr6.eq) goto loc_82716344;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r18,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r18.u32);
	// stb r24,22241(r30)
	REX_STORE_U8(r30.u32 + 22241, r24.u8);
	// b 0x82716368
	goto loc_82716368;
loc_82716344:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82716364
	if (ctx.cr6.eq) goto loc_82716364;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82716364
	if (!ctx.cr6.eq) goto loc_82716364;
	// stb r24,22240(r30)
	REX_STORE_U8(r30.u32 + 22240, r24.u8);
	// stw r22,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r22.u32);
	// b 0x82716368
	goto loc_82716368;
loc_82716364:
	// stw r24,22228(r30)
	REX_STORE_U32(r30.u32 + 22228, r24.u32);
loc_82716368:
	// lwz r11,22228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22228);
	// subf r21,r11,r21
	r21.u64 = r21.u64 - ctx.r11.u64;
loc_82716370:
	// stw r23,0(r14)
	REX_STORE_U32(r14.u32 + 0, r23.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r21,0(r29)
	REX_STORE_U32(r29.u32 + 0, r21.u32);
	// stw r10,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82716388:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8271638C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8274CB10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,14296(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14296);
	// ble cr6,0x8274cb5c
	if (!ctx.cr6.gt) goto loc_8274CB5C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8274CB40:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r3,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cb40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CB40;
loc_8274CB5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8274cb88
	if (!ctx.cr6.gt) goto loc_8274CB88;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8274CB6C:
	// lbzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r4,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cb6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CB6C;
loc_8274CB88:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8274CB98:
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CB98;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274E398) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lwz r11,20624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20624);
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r7,r10,-13040
	ctx.r7.s64 = ctx.r10.s64 + -13040;
	// addi r6,r9,-12680
	ctx.r6.s64 = ctx.r9.s64 + -12680;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// stw r7,15888(r3)
	REX_STORE_U32(ctx.r3.u32 + 15888, ctx.r7.u32);
	// stw r6,15884(r3)
	REX_STORE_U32(ctx.r3.u32 + 15884, ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,30048(r8)
	REX_STORE_U32(ctx.r8.u32 + 30048, ctx.r11.u32);
	// lwz r11,20628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20628);
	// stw r11,30044(r5)
	REX_STORE_U32(ctx.r5.u32 + 30044, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,-19656
	ctx.r9.s64 = ctx.r11.s64 + -19656;
	// addi r8,r10,-19208
	ctx.r8.s64 = ctx.r10.s64 + -19208;
	// stw r9,15888(r3)
	REX_STORE_U32(ctx.r3.u32 + 15888, ctx.r9.u32);
	// stw r8,15884(r3)
	REX_STORE_U32(ctx.r3.u32 + 15884, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274F040) {
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
	ctx.lr = 0x8274F048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r3,4052
	ctx.r11.s64 = ctx.r3.s64 + 4052;
	// li r7,-3
	ctx.r7.s64 = -3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r27,8
	r27.s64 = 8;
loc_8274F06C:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r10,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r5,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8274f0b0
	if (ctx.cr6.gt) goto loc_8274F0B0;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r10,14788(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 14788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274f0bc
	if (ctx.cr6.eq) goto loc_8274F0BC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x8274f0bc
	if (ctx.cr6.gt) goto loc_8274F0BC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8274f0b8
	goto loc_8274F0B8;
loc_8274F0B0:
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8274F0B8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8274F0BC:
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// bgt cr6,0x8274f0f8
	if (ctx.cr6.gt) goto loc_8274F0F8;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r9,14788(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8274f104
	if (ctx.cr6.eq) goto loc_8274F104;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8274f104
	if (ctx.cr6.gt) goto loc_8274F104;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8274f100
	goto loc_8274F100;
loc_8274F0F8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8274F100:
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8274F104:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bdnz 0x8274f06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274F06C;
	// addi r29,r28,4036
	r29.s64 = r28.s64 + 4036;
	// addi r30,r28,6656
	r30.s64 = r28.s64 + 6656;
	// li r31,62
	r31.s64 = 62;
loc_8274F120:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8276b170
	ctx.lr = 0x8274F12C;
	sub_8276B170(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8274f120
	if (!ctx.cr0.eq) goto loc_8274F120;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r11,r28,5324
	ctx.r11.s64 = r28.s64 + 5324;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8274F14C:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r10,15504(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// blt cr6,0x8274f174
	if (ctx.cr6.lt) goto loc_8274F174;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8274f18c
	goto loc_8274F18C;
loc_8274F174:
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// subf r8,r6,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8274F18C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bgt cr6,0x8274f1c0
	if (ctx.cr6.gt) goto loc_8274F1C0;
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// lwz r9,14788(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8274f1cc
	if (ctx.cr6.eq) goto loc_8274F1CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8274f1cc
	if (ctx.cr6.gt) goto loc_8274F1CC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8274f1c8
	goto loc_8274F1C8;
loc_8274F1C0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8274F1C8:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8274F1CC:
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r10,15504(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// blt cr6,0x8274f1f0
	if (ctx.cr6.lt) goto loc_8274F1F0;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x8274f208
	goto loc_8274F208;
loc_8274F1F0:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_8274F208:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8274f23c
	if (ctx.cr6.gt) goto loc_8274F23C;
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// lwz r9,14788(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8274f248
	if (ctx.cr6.eq) goto loc_8274F248;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8274f248
	if (ctx.cr6.gt) goto loc_8274F248;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8274f244
	goto loc_8274F244;
loc_8274F23C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8274F244:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8274F248:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x8274f14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274F14C;
	// addi r29,r28,5316
	r29.s64 = r28.s64 + 5316;
	// addi r30,r28,10752
	r30.s64 = r28.s64 + 10752;
	// li r31,62
	r31.s64 = 62;
loc_8274F260:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8276b170
	ctx.lr = 0x8274F26C;
	sub_8276B170(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8274f260
	if (!ctx.cr0.eq) goto loc_8274F260;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827610B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827610e8
	if (ctx.cr6.eq) goto loc_827610E8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// b 0x827610f0
	goto loc_827610F0;
loc_827610E8:
	// li r3,-8
	ctx.r3.s64 = -8;
	// rlwinm r30,r9,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_827610F0:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x82761188
	if (ctx.cr6.eq) goto loc_82761188;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x82761128
	if (!ctx.cr6.lt) goto loc_82761128;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x8276113c
	goto loc_8276113C;
loc_82761128:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x8276113c
	if (!ctx.cr6.gt) goto loc_8276113C;
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8276113C:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82761164
	if (!ctx.cr6.lt) goto loc_82761164;
	// subf r9,r8,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82761164:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// ble cr6,0x8276118c
	if (!ctx.cr6.gt) goto loc_8276118C;
	// subf r9,r8,r30
	ctx.r9.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82761188:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8276118C:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82767F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// beq cr6,0x82767f58
	if (ctx.cr6.eq) goto loc_82767F58;
	// lwz r10,22192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22192);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82767f58
	if (!ctx.cr6.eq) goto loc_82767F58;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
loc_82767F58:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82767f64
	if (ctx.cr6.eq) goto loc_82767F64;
	// addi r31,r4,-10
	r31.s64 = ctx.r4.s64 + -10;
loc_82767F64:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82767fa0
	if (ctx.cr6.eq) goto loc_82767FA0;
	// lwz r10,22192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22192);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82767fa0
	if (!ctx.cr6.eq) goto loc_82767FA0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82767fa0
	if (ctx.cr6.eq) goto loc_82767FA0;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r9,r10,-10
	ctx.r9.s64 = ctx.r10.s64 + -10;
loc_82767FA0:
	// lwz r5,14(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 14);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// rlwinm r8,r5,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rlwinm r7,r5,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r5,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// bne cr6,0x82767fcc
	if (!ctx.cr6.eq) goto loc_82767FCC;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// b 0x82767fd0
	goto loc_82767FD0;
loc_82767FCC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82767FD0:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// xor r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x82767ff0
	if (ctx.cr6.eq) goto loc_82767FF0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82767FF0:
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// xor r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// bne cr6,0x82768014
	if (!ctx.cr6.eq) goto loc_82768014;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 3);
	// b 0x82768018
	goto loc_82768018;
loc_82768014:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82768018:
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// beq cr6,0x82768038
	if (ctx.cr6.eq) goto loc_82768038;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82768038:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// xor r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r3,14(r4)
	REX_STORE_U32(ctx.r4.u32 + 14, ctx.r3.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8276F168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8276F170;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8271b190
	ctx.lr = 0x8276F188;
	sub_8271B190(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f1d0
	if (ctx.cr6.eq) goto loc_8276F1D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x8271b190
	ctx.lr = 0x8276F1BC;
	sub_8271B190(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8276f1dc
	if (!ctx.cr6.eq) goto loc_8276F1DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F1D0;
	sub_8271B1A0(ctx, base);
loc_8276F1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8276F1DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x8276f1f0
	if (ctx.cr6.gt) goto loc_8276F1F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276F1F0:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82770740) {
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
	ctx.lr = 0x82770748;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24896(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24896);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827707a8
	if (!ctx.cr6.gt) goto loc_827707A8;
	// addis r31,r25,1
	r31.s64 = r25.s64 + 65536;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// addi r31,r31,-31416
	r31.s64 = r31.s64 + -31416;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,-1
	r27.s64 = -1;
	// ori r29,r11,43690
	r29.u64 = ctx.r11.u64 | 43690;
loc_82770778:
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// lwz r3,15236(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 15236);
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x827679e0
	ctx.lr = 0x82770788;
	sub_827679E0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,612(r11)
	REX_STORE_U32(ctx.r11.u32 + 612, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r29,616(r10)
	REX_STORE_U32(ctx.r10.u32 + 616, r29.u32);
	// bne 0x82770778
	if (!ctx.cr0.eq) goto loc_82770778;
loc_827707A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,34640
	ctx.r8.u64 = ctx.r11.u64 | 34640;
	// ori r7,r10,34376
	ctx.r7.u64 = ctx.r10.u64 | 34376;
	// ori r6,r9,34380
	ctx.r6.u64 = ctx.r9.u64 | 34380;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r26,r25,r8
	REX_STORE_U32(r25.u32 + ctx.r8.u32, r26.u32);
	// stwx r5,r25,r7
	REX_STORE_U32(r25.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r26,r25,r6
	REX_STORE_U32(r25.u32 + ctx.r6.u32, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82776638) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r6,56(r7)
	REX_STORE_U32(ctx.r7.u32 + 56, ctx.r6.u32);
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82776698
	if (!ctx.cr6.lt) goto loc_82776698;
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subfic r3,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
loc_82776698:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x827766ac
	if (!ctx.cr6.lt) goto loc_827766AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_827766AC:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827766d0
	if (ctx.cr6.eq) goto loc_827766D0;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827766d0
	if (ctx.cr6.eq) goto loc_827766D0;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827766d8
	if (!ctx.cr6.eq) goto loc_827766D8;
loc_827766D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_827766D8:
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lis r5,22101
	ctx.r5.s64 = 1448411136;
	// ori r4,r5,22857
	ctx.r4.u64 = ctx.r5.u64 | 22857;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82776760
	if (ctx.cr6.eq) goto loc_82776760;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82776760
	if (ctx.cr6.eq) goto loc_82776760;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lis r6,12593
	ctx.r6.s64 = 825294848;
	// ori r5,r6,13392
	ctx.r5.u64 = ctx.r6.u64 | 13392;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82776760
	if (ctx.cr6.eq) goto loc_82776760;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// li r8,8
	ctx.r8.s64 = 8;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// addi r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x8277678c
	goto loc_8277678C;
loc_82776760:
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r6,14(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// li r9,8
	ctx.r9.s64 = 8;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_8277678C:
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,20(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x827767a8
	if (ctx.cr6.eq) goto loc_827767A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_827767A8:
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827767d0
	if (ctx.cr6.eq) goto loc_827767D0;
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827767d0
	if (ctx.cr6.eq) goto loc_827767D0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827767d8
	if (!ctx.cr6.eq) goto loc_827767D8;
loc_827767D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_827767D8:
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82776800
	if (!ctx.cr6.eq) goto loc_82776800;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,36(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82776808
	if (ctx.cr6.eq) goto loc_82776808;
loc_82776800:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_82776808:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82776838
	if (!ctx.cr6.eq) goto loc_82776838;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,28(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82776840
	if (ctx.cr6.eq) goto loc_82776840;
loc_82776838:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82776b8c
	goto loc_82776B8C;
loc_82776840:
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82776930
	if (ctx.cr6.eq) goto loc_82776930;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r6,12889
	ctx.r6.s64 = 844693504;
	// ori r5,r6,21849
	ctx.r5.u64 = ctx.r6.u64 | 21849;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x827768d4
	if (!ctx.cr6.eq) goto loc_827768D4;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827768b0
	if (ctx.cr6.eq) goto loc_827768B0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r9,r10,5624
	ctx.r9.s64 = ctx.r10.s64 + 5624;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r7,-32137
	ctx.r7.s64 = -2106130432;
	// addi r6,r7,7216
	ctx.r6.s64 = ctx.r7.s64 + 7216;
	// stw r6,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// b 0x827768d0
	goto loc_827768D0;
loc_827768B0:
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r4,-32137
	ctx.r4.s64 = -2106130432;
	// addi r3,r4,2592
	ctx.r3.s64 = ctx.r4.s64 + 2592;
	// stw r3,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r9,r10,4336
	ctx.r9.s64 = ctx.r10.s64 + 4336;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_827768D0:
	// b 0x82776930
	goto loc_82776930;
loc_827768D4:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x827768e4
	if (!ctx.cr6.eq) goto loc_827768E4;
	// b 0x82776930
	goto loc_82776930;
loc_827768E4:
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// ori r3,r4,13392
	ctx.r3.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82776910
	if (!ctx.cr6.eq) goto loc_82776910;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82776910:
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r8,-32137
	ctx.r8.s64 = -2106130432;
	// addi r7,r8,10496
	ctx.r7.s64 = ctx.r8.s64 + 10496;
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r5,-32137
	ctx.r5.s64 = -2106130432;
	// addi r4,r5,12920
	ctx.r4.s64 = ctx.r5.s64 + 12920;
	// stw r4,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
loc_82776930:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,32(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x827769b8
	if (!ctx.cr6.eq) goto loc_827769B8;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,36(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827769b8
	if (!ctx.cr6.eq) goto loc_827769B8;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,20(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x826a1e70
	ctx.lr = 0x827769B4;
	sub_826A1E70(ctx, base);
	// b 0x82776b88
	goto loc_82776B88;
loc_827769B8:
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,36(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// lwz r6,28(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82776a3c
	if (!ctx.cr6.eq) goto loc_82776A3C;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x827769fc
	if (!ctx.cr6.eq) goto loc_827769FC;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r3,14(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bge cr6,0x82776a24
	if (!ctx.cr6.lt) goto loc_82776A24;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82776a24
	if (ctx.cr6.eq) goto loc_82776A24;
loc_827769FC:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r7,r8,22857
	ctx.r7.u64 = ctx.r8.u64 | 22857;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82776a24
	if (ctx.cr6.eq) goto loc_82776A24;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// ori r4,r5,13385
	ctx.r4.u64 = ctx.r5.u64 | 13385;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82776a3c
	if (!ctx.cr6.eq) goto loc_82776A3C;
loc_82776A24:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82776A3C:
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,32(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r5,24(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82776af8
	if (!ctx.cr6.eq) goto loc_82776AF8;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82776a80
	if (!ctx.cr6.eq) goto loc_82776A80;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x82776aa8
	if (!ctx.cr6.lt) goto loc_82776AA8;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r9,14(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x82776aa8
	if (ctx.cr6.eq) goto loc_82776AA8;
loc_82776A80:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r6,r7,22857
	ctx.r6.u64 = ctx.r7.u64 | 22857;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82776aa8
	if (ctx.cr6.eq) goto loc_82776AA8;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// ori r3,r4,13385
	ctx.r3.u64 = ctx.r4.u64 | 13385;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82776af8
	if (!ctx.cr6.eq) goto loc_82776AF8;
loc_82776AA8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82776af4
	if (ctx.cr6.eq) goto loc_82776AF4;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82776af4
	if (!ctx.cr6.eq) goto loc_82776AF4;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x827765a8
	ctx.lr = 0x82776AF4;
	sub_827765A8(ctx, base);
loc_82776AF4:
	// b 0x82776b88
	goto loc_82776B88;
loc_82776AF8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82776b88
	if (!ctx.cr6.eq) goto loc_82776B88;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82776b40
	if (!ctx.cr6.eq) goto loc_82776B40;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82776b40
	if (ctx.cr6.eq) goto loc_82776B40;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,36(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82774138
	ctx.lr = 0x82776B3C;
	sub_82774138(ctx, base);
	// b 0x82776b88
	goto loc_82776B88;
loc_82776B40:
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,68(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82776b64
	if (!ctx.cr6.eq) goto loc_82776B64;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x827765f0
	ctx.lr = 0x82776B64;
	sub_827765F0(ctx, base);
loc_82776B64:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82776b88
	if (ctx.cr6.eq) goto loc_82776B88;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,36(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x827765a8
	ctx.lr = 0x82776B88;
	sub_827765A8(ctx, base);
loc_82776B88:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82776B8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827936A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002bf
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827937A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000265
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827938D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cf
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793A28) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100c5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793BB8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793D68) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793F38) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000033
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794148) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000019
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794358) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827A1970) {
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
	ctx.lr = 0x827A1978;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r26,1784(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,9
	r30.s64 = 9;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x827a19fc
	if (!ctx.cr6.lt) goto loc_827A19FC;
loc_827A19A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a19fc
	if (ctx.cr6.eq) goto loc_827A19FC;
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
	// bge 0x827a19ec
	if (!ctx.cr0.lt) goto loc_827A19EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A19EC;
	sub_82725E38(ctx, base);
loc_827A19EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a19a4
	if (ctx.cr6.gt) goto loc_827A19A4;
loc_827A19FC:
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
	// bge 0x827a1a34
	if (!ctx.cr0.lt) goto loc_827A1A34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1A34;
	sub_82725E38(ctx, base);
loc_827A1A34:
	// lwz r11,1780(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1780);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827a1a6c
	if (!ctx.cr6.eq) goto loc_827A1A6C;
	// lwz r11,1372(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827a1a6c
	if (!ctx.cr6.eq) goto loc_827A1A6C;
	// lhz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 52);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827a1a80
	if (ctx.cr6.eq) goto loc_827A1A80;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827A1A6C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x827a1a80
	if (ctx.cr6.eq) goto loc_827A1A80;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827A1A80:
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827a1af4
	if (!ctx.cr6.lt) goto loc_827A1AF4;
loc_827A1A9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a1af4
	if (ctx.cr6.eq) goto loc_827A1AF4;
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
	// bge 0x827a1ae4
	if (!ctx.cr0.lt) goto loc_827A1AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1AE4;
	sub_82725E38(ctx, base);
loc_827A1AE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a1a9c
	if (ctx.cr6.gt) goto loc_827A1A9C;
loc_827A1AF4:
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
	// bge 0x827a1b2c
	if (!ctx.cr0.lt) goto loc_827A1B2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1B2C;
	sub_82725E38(ctx, base);
loc_827A1B2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827a1c58
	if (ctx.cr6.eq) goto loc_827A1C58;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x827a1c58
	if (!ctx.cr6.gt) goto loc_827A1C58;
loc_827A1B3C:
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x827a1bd8
	if (!ctx.cr6.gt) goto loc_827A1BD8;
	// addi r26,r26,-32
	r26.s64 = r26.s64 + -32;
	// li r30,32
	r30.s64 = 32;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x827a1ba0
	if (!ctx.cr6.lt) goto loc_827A1BA0;
loc_827A1B60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a1ba0
	if (ctx.cr6.eq) goto loc_827A1BA0;
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
	// bge 0x827a1b90
	if (!ctx.cr0.lt) goto loc_827A1B90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1B90;
	sub_82725E38(ctx, base);
loc_827A1B90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a1b60
	if (ctx.cr6.gt) goto loc_827A1B60;
loc_827A1BA0:
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
	// bge 0x827a1bc4
	if (!ctx.cr0.lt) goto loc_827A1BC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1BC4;
	sub_82725E38(ctx, base);
loc_827A1BC4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bgt cr6,0x827a1b3c
	if (ctx.cr6.gt) goto loc_827A1B3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827A1BD8:
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r26,32
	ctx.cr6.compare<uint32_t>(r26.u32, 32, ctx.xer);
	// bgt cr6,0x827a1c58
	if (ctx.cr6.gt) goto loc_827A1C58;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x827a1c58
	if (ctx.cr6.eq) goto loc_827A1C58;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827a1c34
	if (!ctx.cr6.gt) goto loc_827A1C34;
loc_827A1BF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a1c34
	if (ctx.cr6.eq) goto loc_827A1C34;
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
	// bge 0x827a1c24
	if (!ctx.cr0.lt) goto loc_827A1C24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1C24;
	sub_82725E38(ctx, base);
loc_827A1C24:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a1bf4
	if (ctx.cr6.gt) goto loc_827A1BF4;
loc_827A1C34:
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
	// bge 0x827a1c58
	if (!ctx.cr0.lt) goto loc_827A1C58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A1C58;
	sub_82725E38(ctx, base);
loc_827A1C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827B5200) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r5,1
	ctx.r5.s64 = 1;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r8,16
	ctx.r8.s64 = 16;
	// slw r7,r5,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x827b5344
	if (!ctx.cr6.eq) goto loc_827B5344;
	// lvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b542c
	if (!ctx.cr6.gt) goto loc_827B542C;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,4
	r31.s64 = 4;
loc_827B5290:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v12,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lvx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v8,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v8,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v29,v10,v8
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v28,v9,v31
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v6,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v26,v28,v2
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v25,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v12,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vpkshus128 v55,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsrah v24,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvewx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// blt cr6,0x827b5290
	if (ctx.cr6.lt) goto loc_827B5290;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827B5344:
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v48,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b542c
	if (!ctx.cr6.gt) goto loc_827B542C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B5394:
	// vadduhm v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v7,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor128 v45,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v6,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v31,v8,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm128 v6,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vadduhm v30,v7,v3
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vor128 v1,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vadduhm v29,v31,v2
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v5,v8
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v4,v7
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v25,v0,v27
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v6,v29,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v3,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsrah v23,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvx128 v44,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x827b5394
	if (ctx.cr6.lt) goto loc_827B5394;
loc_827B542C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C9630) {
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
	ctx.lr = 0x827C9638;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r26,r25,30
	r26.u64 = r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c96b0
	if (ctx.cr6.lt) goto loc_827C96B0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82731930
	ctx.lr = 0x827C96A8;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9708
	goto loc_827C9708;
loc_827C96B0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9704
	if (!ctx.cr6.gt) goto loc_827C9704;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C96BC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c96bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C96BC;
loc_827C9704:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9708:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9774
	if (!ctx.cr6.eq) goto loc_827C9774;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x827c9790
	goto loc_827C9790;
loc_827C9774:
	// rlwinm r10,r26,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// clrlwi r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9790;
	sub_827AF130(ctx, base);
loc_827C9790:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r26,r9,30
	r26.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c97ec
	if (ctx.cr6.lt) goto loc_827C97EC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82731930
	ctx.lr = 0x827C97E4;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9844
	goto loc_827C9844;
loc_827C97EC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9840
	if (!ctx.cr6.gt) goto loc_827C9840;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C97F8:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r29,r27,r3
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c97f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C97F8;
loc_827C9840:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9844:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	// bne cr6,0x827c98b4
	if (!ctx.cr6.eq) goto loc_827C98B4;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827C98B4:
	// rlwinm r11,r26,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C98CC;
	sub_827AF130(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_827E8AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827E8AC8;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r10,50(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,1316(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827e8b98
	if (ctx.cr6.eq) goto loc_827E8B98;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-28184
	ctx.r7.s64 = ctx.r10.s64 + -28184;
loc_827E8AF8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827e8b14
	if (ctx.cr6.eq) goto loc_827E8B14;
	// lwz r10,22192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22192);
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x827e8b18
	if (ctx.cr6.eq) goto loc_827E8B18;
loc_827E8B14:
	// li r9,1
	ctx.r9.s64 = 1;
loc_827E8B18:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e8b88
	if (ctx.cr6.eq) goto loc_827E8B88;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827E8B2C:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// rldicl r30,r9,56,8
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r29,r30,56,8
	r29.u64 = __builtin_rotateleft64(r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r30,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r30.u8);
	// rldicl r9,r29,56,8
	ctx.r9.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r29,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r29.u8);
	// rldicl r30,r9,56,8
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r29,r30,56,8
	r29.u64 = __builtin_rotateleft64(r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r30,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r30.u8);
	// stbu r29,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x827e8b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827E8B2C;
loc_827E8B88:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, ctx.xer);
	// blt cr6,0x827e8af8
	if (ctx.cr6.lt) goto loc_827E8AF8;
loc_827E8B98:
	// b 0x826a1d0c
	return;
}

