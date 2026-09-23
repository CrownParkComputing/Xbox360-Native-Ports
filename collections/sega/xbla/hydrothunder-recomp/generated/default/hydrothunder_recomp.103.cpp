#include "hydrothunder_funcs.103.h"

DEFINE_REX_FUNC(sub_82125DB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15744
	ctx.r3.s64 = ctx.r11.s64 + -15744;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126950) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126FF4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821272B0) {
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
	ctx.lr = 0x821272B8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821272dc
	if (ctx.cr6.lt) goto loc_821272DC;
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x821272e0
	goto loc_821272E0;
loc_821272DC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_821272E0:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821272f4
	if (ctx.cr6.lt) goto loc_821272F4;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x821272f8
	goto loc_821272F8;
loc_821272F4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821272F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x82127300;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162af8
	ctx.lr = 0x8212730C;
	sub_82162AF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212732C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82127344
	if (ctx.cr0.eq) goto loc_82127344;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// b 0x821275b8
	goto loc_821275B8;
loc_82127344:
	// lwz r30,68(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 68);
	// b 0x82127368
	goto loc_82127368;
loc_8212734C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82129ee0
	ctx.lr = 0x8212735C;
	sub_82129EE0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8212737c
	if (!ctx.cr0.eq) goto loc_8212737C;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82127368:
	// lwz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212734c
	if (!ctx.cr6.eq) goto loc_8212734C;
loc_82127374:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821275b8
	goto loc_821275B8;
loc_8212737C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82129088
	ctx.lr = 0x82127388;
	sub_82129088(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82127374
	if (ctx.cr0.eq) goto loc_82127374;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127374
	if (ctx.cr6.eq) goto loc_82127374;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x821273A8;
	sub_8212E8B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821273B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82120b20
	ctx.lr = 0x821273CC;
	sub_82120B20(ctx, base);
	// stw r24,80(r26)
	REX_STORE_U32(r26.u32 + 80, r24.u32);
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821273e4
	if (ctx.cr6.lt) goto loc_821273E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821273E4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215eed0
	ctx.lr = 0x821273F4;
	sub_8215EED0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82129460
	ctx.lr = 0x82127404;
	sub_82129460(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// b 0x821274a0
	goto loc_821274A0;
loc_8212740C:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127420
	if (ctx.cr6.lt) goto loc_82127420;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82127424
	goto loc_82127424;
loc_82127420:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82127424:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x8212742C;
	sub_82120600(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127440
	if (ctx.cr6.lt) goto loc_82127440;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x82127444
	goto loc_82127444;
loc_82127440:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82127444:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x8212744C;
	sub_82120600(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82129ee0
	ctx.lr = 0x8212745C;
	sub_82129EE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82127470;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82127480;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8212749c
	if (ctx.cr6.eq) goto loc_8212749C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82129cf0
	ctx.lr = 0x8212749C;
	sub_82129CF0(ctx, base);
loc_8212749C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821274A0:
	// lwz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212740c
	if (!ctx.cr6.eq) goto loc_8212740C;
	// addi r28,r27,84
	r28.s64 = r27.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8213c958
	ctx.lr = 0x821274C0;
	sub_8213C958(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,88(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 88);
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82127560
	if (!ctx.cr6.eq) goto loc_82127560;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821274E8;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82127570
	if (ctx.cr0.eq) goto loc_82127570;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// beq 0x8212750c
	if (ctx.cr0.eq) goto loc_8212750C;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8212750C:
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x82127530
	if (!ctx.cr6.lt) goto loc_82127530;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82127530;
	sub_822F6020(ctx, base);
loc_82127530:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// bl 0x821627e8
	ctx.lr = 0x8212755C;
	sub_821627E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82127560:
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821275ac
	goto loc_821275AC;
loc_82127570:
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
	ctx.lr = 0x8212758C;
	sub_82120018(ctx, base);
loc_8212758C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821275A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821275AC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212758c
	if (!ctx.cr6.eq) goto loc_8212758C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821275B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8213E978) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6088(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6088);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213E9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8213E9C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213e9f0
	if (ctx.cr0.eq) goto loc_8213E9F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-5488
	ctx.r10.s64 = ctx.r10.s64 + -5488;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8213e9f4
	goto loc_8213E9F4;
loc_8213E9F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213E9F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23884
	ctx.r5.s64 = ctx.r10.s64 + -23884;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EA10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82144E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82146FC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82146FD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,64(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82147020
	goto loc_82147020;
loc_82146FE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8214701c
	if (!ctx.cr6.eq) goto loc_8214701C;
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
	ctx.lr = 0x8214700C;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82147020
	goto loc_82147020;
loc_8214701C:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82147020:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82146fe8
	if (!ctx.cr6.eq) goto loc_82146FE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82149AF0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149b38
	if (ctx.cr6.eq) goto loc_82149B38;
loc_82149B14:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// beq cr6,0x82149b30
	if (ctx.cr6.eq) goto loc_82149B30;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149b14
	if (!ctx.cr6.eq) goto loc_82149B14;
loc_82149B30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149b40
	if (!ctx.cr6.eq) goto loc_82149B40;
loc_82149B38:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82149b78
	goto loc_82149B78;
loc_82149B40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82149b54
	if (ctx.cr6.eq) goto loc_82149B54;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82149b5c
	goto loc_82149B5C;
loc_82149B54:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
loc_82149B5C:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82149B78:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82149b90
	if (ctx.cr0.eq) goto loc_82149B90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82149f18
	ctx.lr = 0x82149B88;
	sub_82149F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821357c8
	ctx.lr = 0x82149B90;
	sub_821357C8(ctx, base);
loc_82149B90:
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

DEFINE_REX_FUNC(sub_8214EA60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214EA68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82150328
	ctx.lr = 0x8214EA84;
	sub_82150328(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8269ce98
	ctx.lr = 0x8214EA8C;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lbz r11,89(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 89);
	// b 0x8214eac8
	goto loc_8214EAC8;
loc_8214EAA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x821508e8
	ctx.lr = 0x8214EAAC;
	sub_821508E8(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82150bf0
	ctx.lr = 0x8214EAB8;
	sub_82150BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214EAC0;
	sub_8269CE98(ctx, base);
	// lbz r11,89(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 89);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8214EAC8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214eaa0
	if (ctx.cr0.eq) goto loc_8214EAA0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x8214EAF8;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214EB00;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82152AC0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,454(r3)
	REX_STORE_U8(ctx.r3.u32 + 454, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82153B00) {
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
	// addi r11,r11,-9464
	ctx.r11.s64 = ctx.r11.s64 + -9464;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82153b2c
	if (ctx.cr0.eq) goto loc_82153B2C;
	// bl 0x8269ce98
	ctx.lr = 0x82153B2C;
	sub_8269CE98(ctx, base);
loc_82153B2C:
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

DEFINE_REX_FUNC(sub_821555A0) {
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
	// bl 0x82155fd0
	ctx.lr = 0x821555B0;
	sub_82155FD0(ctx, base);
	// lwz r3,10008(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821564D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821564E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,40448
	ctx.r11.u64 = ctx.r11.u64 | 40448;
	// lwzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// bl 0x82155fd0
	ctx.lr = 0x821564F8;
	sub_82155FD0(ctx, base);
	// addi r5,r3,10040
	ctx.r5.s64 = ctx.r3.s64 + 10040;
	// addi r4,r3,10080
	ctx.r4.s64 = ctx.r3.s64 + 10080;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,10076(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10076);
	// bl 0x823ee288
	ctx.lr = 0x82156510;
	sub_823EE288(ctx, base);
	// lwz r3,10076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10076);
	// bl 0x823ed360
	ctx.lr = 0x82156518;
	sub_823ED360(ctx, base);
	// lwz r11,10040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10040);
	// lwz r10,10036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10036);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82156564
	if (ctx.cr6.eq) goto loc_82156564;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,980
	ctx.r11.s64 = ctx.r11.s64 + 980;
	// stw r29,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, r29.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82156548
	if (ctx.cr6.lt) goto loc_82156548;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82156548:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823edd68
	ctx.lr = 0x82156554;
	sub_823EDD68(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
loc_8215655C:
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// b 0x821565dc
	goto loc_821565DC;
loc_82156564:
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r29,r29,-25128
	r29.s64 = r29.s64 + -25128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8215657C;
	sub_826A2E60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,40436
	ctx.r9.u64 = ctx.r11.u64 | 40436;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// ori r10,r10,40420
	ctx.r10.u64 = ctx.r10.u64 | 40420;
	// addi r11,r11,980
	ctx.r11.s64 = ctx.r11.s64 + 980;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821565ac
	if (ctx.cr6.lt) goto loc_821565AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821565AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823edd68
	ctx.lr = 0x821565B8;
	sub_823EDD68(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// beq cr6,0x821565d4
	if (ctx.cr6.eq) goto loc_821565D4;
	// li r29,1
	r29.s64 = 1;
	// stw r29,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, r29.u32);
	// b 0x8215655c
	goto loc_8215655C;
loc_821565D4:
	// li r10,5
	ctx.r10.s64 = 5;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_821565DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215CF50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D128) {
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
	// addi r11,r11,-26868
	ctx.r11.s64 = ctx.r11.s64 + -26868;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8215d154
	if (ctx.cr0.eq) goto loc_8215D154;
	// bl 0x8269ce98
	ctx.lr = 0x8215D154;
	sub_8269CE98(ctx, base);
loc_8215D154:
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

DEFINE_REX_FUNC(sub_8215F498) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8215f514
	if (!ctx.cr6.eq) goto loc_8215F514;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8215f514
	if (ctx.cr6.eq) goto loc_8215F514;
loc_8215F4EC:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122730
	ctx.lr = 0x8215F4F8;
	sub_82122730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x8215F500;
	sub_8212A9B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215f4ec
	if (!ctx.cr6.eq) goto loc_8215F4EC;
loc_8215F514:
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

DEFINE_REX_FUNC(sub_82164338) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7792(r1)
	ea = -7792 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5840
	ctx.r3.s64 = ctx.r1.s64 + 5840;
	// addi r4,r11,19700
	ctx.r4.s64 = ctx.r11.s64 + 19700;
	// bl 0x82120600
	ctx.lr = 0x82164360;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82164370;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// addi r4,r11,19708
	ctx.r4.s64 = ctx.r11.s64 + 19708;
	// bl 0x82120600
	ctx.lr = 0x82164380;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,5840
	ctx.r6.s64 = ctx.r1.s64 + 5840;
	// addi r7,r11,2920
	ctx.r7.s64 = ctx.r11.s64 + 2920;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,3920
	ctx.r4.s64 = ctx.r1.s64 + 3920;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// bl 0x8213ac58
	ctx.lr = 0x821643A0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82120ac0
	ctx.lr = 0x821643B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821643C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5840
	ctx.r3.s64 = ctx.r1.s64 + 5840;
	// bl 0x82120ac0
	ctx.lr = 0x821643D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,19724
	ctx.r4.s64 = ctx.r11.s64 + 19724;
	// bl 0x82120600
	ctx.lr = 0x821643E0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// addi r30,r11,19748
	r30.s64 = ctx.r11.s64 + 19748;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x821643F4;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,19756
	ctx.r4.s64 = ctx.r11.s64 + 19756;
	// bl 0x82120600
	ctx.lr = 0x82164404;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,1272
	ctx.r7.s64 = ctx.r11.s64 + 1272;
	// addi r5,r1,3984
	ctx.r5.s64 = ctx.r1.s64 + 3984;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x8213ac58
	ctx.lr = 0x82164420;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82164430;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// bl 0x82120ac0
	ctx.lr = 0x82164440;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82164450;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
	// bl 0x82120600
	ctx.lr = 0x82164460;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120600
	ctx.lr = 0x8216446C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6800
	ctx.r3.s64 = ctx.r1.s64 + 6800;
	// addi r4,r11,19800
	ctx.r4.s64 = ctx.r11.s64 + 19800;
	// bl 0x82120600
	ctx.lr = 0x8216447C;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r6,r1,4048
	ctx.r6.s64 = ctx.r1.s64 + 4048;
	// addi r7,r11,-2656
	ctx.r7.s64 = ctx.r11.s64 + -2656;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,6800
	ctx.r4.s64 = ctx.r1.s64 + 6800;
	// bl 0x8213ac58
	ctx.lr = 0x82164498;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6800
	ctx.r3.s64 = ctx.r1.s64 + 6800;
	// bl 0x82120ac0
	ctx.lr = 0x821644A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x821644B8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x82120ac0
	ctx.lr = 0x821644C8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,19816
	ctx.r4.s64 = ctx.r11.s64 + 19816;
	// bl 0x82120600
	ctx.lr = 0x821644D8;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5904
	ctx.r3.s64 = ctx.r1.s64 + 5904;
	// bl 0x82120600
	ctx.lr = 0x821644E4;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,19824
	ctx.r4.s64 = ctx.r11.s64 + 19824;
	// bl 0x82120600
	ctx.lr = 0x821644F4;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-4720
	ctx.r7.s64 = ctx.r11.s64 + -4720;
	// addi r5,r1,5904
	ctx.r5.s64 = ctx.r1.s64 + 5904;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x8213ac58
	ctx.lr = 0x82164510;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x82164520;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5904
	ctx.r3.s64 = ctx.r1.s64 + 5904;
	// bl 0x82120ac0
	ctx.lr = 0x82164530;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x82164540;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7504
	ctx.r3.s64 = ctx.r1.s64 + 7504;
	// addi r4,r11,19840
	ctx.r4.s64 = ctx.r11.s64 + 19840;
	// bl 0x82120600
	ctx.lr = 0x82164550;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120600
	ctx.lr = 0x8216455C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// addi r4,r11,19852
	ctx.r4.s64 = ctx.r11.s64 + 19852;
	// bl 0x82120600
	ctx.lr = 0x8216456C;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,7504
	ctx.r6.s64 = ctx.r1.s64 + 7504;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-5512
	ctx.r7.s64 = ctx.r11.s64 + -5512;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,4112
	ctx.r4.s64 = ctx.r1.s64 + 4112;
	// bl 0x8213ac58
	ctx.lr = 0x82164588;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82120ac0
	ctx.lr = 0x82164598;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120ac0
	ctx.lr = 0x821645A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7504
	ctx.r3.s64 = ctx.r1.s64 + 7504;
	// bl 0x82120ac0
	ctx.lr = 0x821645B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,19872
	ctx.r4.s64 = ctx.r11.s64 + 19872;
	// bl 0x82120600
	ctx.lr = 0x821645C8;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82120600
	ctx.lr = 0x821645D4;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,19884
	ctx.r4.s64 = ctx.r11.s64 + 19884;
	// bl 0x82120600
	ctx.lr = 0x821645E4;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-6760
	ctx.r7.s64 = ctx.r11.s64 + -6760;
	// addi r5,r1,4176
	ctx.r5.s64 = ctx.r1.s64 + 4176;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x8213ac58
	ctx.lr = 0x82164600;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120ac0
	ctx.lr = 0x82164610;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82120ac0
	ctx.lr = 0x82164620;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82120ac0
	ctx.lr = 0x82164630;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// addi r4,r11,19904
	ctx.r4.s64 = ctx.r11.s64 + 19904;
	// bl 0x82120600
	ctx.lr = 0x82164640;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82120600
	ctx.lr = 0x8216464C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5968
	ctx.r3.s64 = ctx.r1.s64 + 5968;
	// addi r4,r11,19916
	ctx.r4.s64 = ctx.r11.s64 + 19916;
	// bl 0x82120600
	ctx.lr = 0x8216465C;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,4240
	ctx.r6.s64 = ctx.r1.s64 + 4240;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-6216
	ctx.r7.s64 = ctx.r11.s64 + -6216;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r4,r1,5968
	ctx.r4.s64 = ctx.r1.s64 + 5968;
	// bl 0x8213ac58
	ctx.lr = 0x82164678;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5968
	ctx.r3.s64 = ctx.r1.s64 + 5968;
	// bl 0x82120ac0
	ctx.lr = 0x82164688;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82120ac0
	ctx.lr = 0x82164698;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// bl 0x82120ac0
	ctx.lr = 0x821646A8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r4,r11,19936
	ctx.r4.s64 = ctx.r11.s64 + 19936;
	// bl 0x82120600
	ctx.lr = 0x821646B8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6864
	ctx.r3.s64 = ctx.r1.s64 + 6864;
	// addi r30,r11,-23796
	r30.s64 = ctx.r11.s64 + -23796;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x821646CC;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,19948
	ctx.r4.s64 = ctx.r11.s64 + 19948;
	// bl 0x82120600
	ctx.lr = 0x821646DC;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-7952
	ctx.r7.s64 = ctx.r11.s64 + -7952;
	// addi r5,r1,6864
	ctx.r5.s64 = ctx.r1.s64 + 6864;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x8213ac58
	ctx.lr = 0x821646F8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82120ac0
	ctx.lr = 0x82164708;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6864
	ctx.r3.s64 = ctx.r1.s64 + 6864;
	// bl 0x82120ac0
	ctx.lr = 0x82164718;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82120ac0
	ctx.lr = 0x82164728;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6032
	ctx.r3.s64 = ctx.r1.s64 + 6032;
	// addi r4,r11,19968
	ctx.r4.s64 = ctx.r11.s64 + 19968;
	// bl 0x82120600
	ctx.lr = 0x82164738;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82120600
	ctx.lr = 0x82164744;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// addi r4,r11,19984
	ctx.r4.s64 = ctx.r11.s64 + 19984;
	// bl 0x82120600
	ctx.lr = 0x82164754;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,6032
	ctx.r6.s64 = ctx.r1.s64 + 6032;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-10128
	ctx.r7.s64 = ctx.r11.s64 + -10128;
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// addi r4,r1,4304
	ctx.r4.s64 = ctx.r1.s64 + 4304;
	// bl 0x8213ac58
	ctx.lr = 0x82164770;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82120ac0
	ctx.lr = 0x82164780;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82120ac0
	ctx.lr = 0x82164790;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6032
	ctx.r3.s64 = ctx.r1.s64 + 6032;
	// bl 0x82120ac0
	ctx.lr = 0x821647A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// addi r4,r11,20008
	ctx.r4.s64 = ctx.r11.s64 + 20008;
	// bl 0x82120600
	ctx.lr = 0x821647B0;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82120600
	ctx.lr = 0x821647BC;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r4,r11,20020
	ctx.r4.s64 = ctx.r11.s64 + 20020;
	// bl 0x82120600
	ctx.lr = 0x821647CC;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-12880
	ctx.r7.s64 = ctx.r11.s64 + -12880;
	// addi r5,r1,4368
	ctx.r5.s64 = ctx.r1.s64 + 4368;
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// bl 0x8213ac58
	ctx.lr = 0x821647E8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82120ac0
	ctx.lr = 0x821647F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82120ac0
	ctx.lr = 0x82164808;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82120ac0
	ctx.lr = 0x82164818;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// addi r4,r11,20040
	ctx.r4.s64 = ctx.r11.s64 + 20040;
	// bl 0x82120600
	ctx.lr = 0x82164828;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82120600
	ctx.lr = 0x82164834;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7312
	ctx.r3.s64 = ctx.r1.s64 + 7312;
	// addi r4,r11,20060
	ctx.r4.s64 = ctx.r11.s64 + 20060;
	// bl 0x82120600
	ctx.lr = 0x82164844;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,4432
	ctx.r6.s64 = ctx.r1.s64 + 4432;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-14288
	ctx.r7.s64 = ctx.r11.s64 + -14288;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// addi r4,r1,7312
	ctx.r4.s64 = ctx.r1.s64 + 7312;
	// bl 0x8213ac58
	ctx.lr = 0x82164860;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7312
	ctx.r3.s64 = ctx.r1.s64 + 7312;
	// bl 0x82120ac0
	ctx.lr = 0x82164870;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82120ac0
	ctx.lr = 0x82164880;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x82120ac0
	ctx.lr = 0x82164890;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// addi r4,r11,20088
	ctx.r4.s64 = ctx.r11.s64 + 20088;
	// bl 0x82120600
	ctx.lr = 0x821648A0;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6096
	ctx.r3.s64 = ctx.r1.s64 + 6096;
	// bl 0x82120600
	ctx.lr = 0x821648AC;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r4,r11,20112
	ctx.r4.s64 = ctx.r11.s64 + 20112;
	// bl 0x82120600
	ctx.lr = 0x821648BC;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-15064
	ctx.r7.s64 = ctx.r11.s64 + -15064;
	// addi r5,r1,6096
	ctx.r5.s64 = ctx.r1.s64 + 6096;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// bl 0x8213ac58
	ctx.lr = 0x821648D8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82120ac0
	ctx.lr = 0x821648E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6096
	ctx.r3.s64 = ctx.r1.s64 + 6096;
	// bl 0x82120ac0
	ctx.lr = 0x821648F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82120ac0
	ctx.lr = 0x82164908;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6928
	ctx.r3.s64 = ctx.r1.s64 + 6928;
	// addi r4,r11,20140
	ctx.r4.s64 = ctx.r11.s64 + 20140;
	// bl 0x82120600
	ctx.lr = 0x82164918;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82120600
	ctx.lr = 0x82164924;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// addi r4,r11,20152
	ctx.r4.s64 = ctx.r11.s64 + 20152;
	// bl 0x82120600
	ctx.lr = 0x82164934;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,6928
	ctx.r6.s64 = ctx.r1.s64 + 6928;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-20504
	ctx.r7.s64 = ctx.r11.s64 + -20504;
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
	// addi r4,r1,4496
	ctx.r4.s64 = ctx.r1.s64 + 4496;
	// bl 0x8213ac58
	ctx.lr = 0x82164950;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82120ac0
	ctx.lr = 0x82164960;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82120ac0
	ctx.lr = 0x82164970;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6928
	ctx.r3.s64 = ctx.r1.s64 + 6928;
	// bl 0x82120ac0
	ctx.lr = 0x82164980;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// addi r4,r11,20172
	ctx.r4.s64 = ctx.r11.s64 + 20172;
	// bl 0x82120600
	ctx.lr = 0x82164990;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82120600
	ctx.lr = 0x8216499C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// addi r4,r11,20188
	ctx.r4.s64 = ctx.r11.s64 + 20188;
	// bl 0x82120600
	ctx.lr = 0x821649AC;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,1424
	ctx.r6.s64 = ctx.r1.s64 + 1424;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-21800
	ctx.r7.s64 = ctx.r11.s64 + -21800;
	// addi r5,r1,4560
	ctx.r5.s64 = ctx.r1.s64 + 4560;
	// addi r4,r1,1360
	ctx.r4.s64 = ctx.r1.s64 + 1360;
	// bl 0x8213ac58
	ctx.lr = 0x821649C8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82120ac0
	ctx.lr = 0x821649D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82120ac0
	ctx.lr = 0x821649E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82120ac0
	ctx.lr = 0x821649F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// addi r4,r11,20212
	ctx.r4.s64 = ctx.r11.s64 + 20212;
	// bl 0x82120600
	ctx.lr = 0x82164A08;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// addi r4,r11,20220
	ctx.r4.s64 = ctx.r11.s64 + 20220;
	// bl 0x82120600
	ctx.lr = 0x82164A18;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6160
	ctx.r3.s64 = ctx.r1.s64 + 6160;
	// addi r4,r11,20232
	ctx.r4.s64 = ctx.r11.s64 + 20232;
	// bl 0x82120600
	ctx.lr = 0x82164A28;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,4624
	ctx.r6.s64 = ctx.r1.s64 + 4624;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-21904
	ctx.r7.s64 = ctx.r11.s64 + -21904;
	// addi r5,r1,1488
	ctx.r5.s64 = ctx.r1.s64 + 1488;
	// addi r4,r1,6160
	ctx.r4.s64 = ctx.r1.s64 + 6160;
	// bl 0x8213ac58
	ctx.lr = 0x82164A44;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6160
	ctx.r3.s64 = ctx.r1.s64 + 6160;
	// bl 0x82120ac0
	ctx.lr = 0x82164A54;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82120ac0
	ctx.lr = 0x82164A64;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// bl 0x82120ac0
	ctx.lr = 0x82164A74;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// addi r4,r11,20248
	ctx.r4.s64 = ctx.r11.s64 + 20248;
	// bl 0x82120600
	ctx.lr = 0x82164A84;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7632
	ctx.r3.s64 = ctx.r1.s64 + 7632;
	// addi r30,r11,20272
	r30.s64 = ctx.r11.s64 + 20272;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82164A98;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// bl 0x82120600
	ctx.lr = 0x82164AA8;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,1616
	ctx.r6.s64 = ctx.r1.s64 + 1616;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-24776
	ctx.r7.s64 = ctx.r11.s64 + -24776;
	// addi r5,r1,7632
	ctx.r5.s64 = ctx.r1.s64 + 7632;
	// addi r4,r1,1552
	ctx.r4.s64 = ctx.r1.s64 + 1552;
	// bl 0x8213ac58
	ctx.lr = 0x82164AC4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82120ac0
	ctx.lr = 0x82164AD4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7632
	ctx.r3.s64 = ctx.r1.s64 + 7632;
	// bl 0x82120ac0
	ctx.lr = 0x82164AE4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82120ac0
	ctx.lr = 0x82164AF4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6224
	ctx.r3.s64 = ctx.r1.s64 + 6224;
	// addi r4,r11,20312
	ctx.r4.s64 = ctx.r11.s64 + 20312;
	// bl 0x82120600
	ctx.lr = 0x82164B04;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82120600
	ctx.lr = 0x82164B10;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// addi r4,r11,20328
	ctx.r4.s64 = ctx.r11.s64 + 20328;
	// bl 0x82120600
	ctx.lr = 0x82164B20;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,6224
	ctx.r6.s64 = ctx.r1.s64 + 6224;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-24320
	ctx.r7.s64 = ctx.r11.s64 + -24320;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// addi r4,r1,4688
	ctx.r4.s64 = ctx.r1.s64 + 4688;
	// bl 0x8213ac58
	ctx.lr = 0x82164B3C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82120ac0
	ctx.lr = 0x82164B4C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82120ac0
	ctx.lr = 0x82164B5C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6224
	ctx.r3.s64 = ctx.r1.s64 + 6224;
	// bl 0x82120ac0
	ctx.lr = 0x82164B6C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// addi r4,r11,20352
	ctx.r4.s64 = ctx.r11.s64 + 20352;
	// bl 0x82120600
	ctx.lr = 0x82164B7C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82120600
	ctx.lr = 0x82164B88;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r4,r11,20368
	ctx.r4.s64 = ctx.r11.s64 + 20368;
	// bl 0x82120600
	ctx.lr = 0x82164B98;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,1808
	ctx.r6.s64 = ctx.r1.s64 + 1808;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-23504
	ctx.r7.s64 = ctx.r11.s64 + -23504;
	// addi r5,r1,4752
	ctx.r5.s64 = ctx.r1.s64 + 4752;
	// addi r4,r1,1744
	ctx.r4.s64 = ctx.r1.s64 + 1744;
	// bl 0x8213ac58
	ctx.lr = 0x82164BB4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82120ac0
	ctx.lr = 0x82164BC4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82120ac0
	ctx.lr = 0x82164BD4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82120ac0
	ctx.lr = 0x82164BE4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// addi r4,r11,-22044
	ctx.r4.s64 = ctx.r11.s64 + -22044;
	// bl 0x82120600
	ctx.lr = 0x82164BF4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82120600
	ctx.lr = 0x82164C00;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6992
	ctx.r3.s64 = ctx.r1.s64 + 6992;
	// addi r4,r11,20392
	ctx.r4.s64 = ctx.r11.s64 + 20392;
	// bl 0x82120600
	ctx.lr = 0x82164C10;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,4816
	ctx.r6.s64 = ctx.r1.s64 + 4816;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-22560
	ctx.r7.s64 = ctx.r11.s64 + -22560;
	// addi r5,r1,1872
	ctx.r5.s64 = ctx.r1.s64 + 1872;
	// addi r4,r1,6992
	ctx.r4.s64 = ctx.r1.s64 + 6992;
	// bl 0x8213ac58
	ctx.lr = 0x82164C2C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6992
	ctx.r3.s64 = ctx.r1.s64 + 6992;
	// bl 0x82120ac0
	ctx.lr = 0x82164C3C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82120ac0
	ctx.lr = 0x82164C4C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// bl 0x82120ac0
	ctx.lr = 0x82164C5C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// addi r4,r11,20412
	ctx.r4.s64 = ctx.r11.s64 + 20412;
	// bl 0x82120600
	ctx.lr = 0x82164C6C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6288
	ctx.r3.s64 = ctx.r1.s64 + 6288;
	// addi r30,r11,20428
	r30.s64 = ctx.r11.s64 + 20428;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82164C80;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// addi r4,r11,20436
	ctx.r4.s64 = ctx.r11.s64 + 20436;
	// bl 0x82120600
	ctx.lr = 0x82164C90;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,2000
	ctx.r6.s64 = ctx.r1.s64 + 2000;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-25560
	ctx.r7.s64 = ctx.r11.s64 + -25560;
	// addi r5,r1,6288
	ctx.r5.s64 = ctx.r1.s64 + 6288;
	// addi r4,r1,1936
	ctx.r4.s64 = ctx.r1.s64 + 1936;
	// bl 0x8213ac58
	ctx.lr = 0x82164CAC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82120ac0
	ctx.lr = 0x82164CBC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6288
	ctx.r3.s64 = ctx.r1.s64 + 6288;
	// bl 0x82120ac0
	ctx.lr = 0x82164CCC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82120ac0
	ctx.lr = 0x82164CDC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7376
	ctx.r3.s64 = ctx.r1.s64 + 7376;
	// addi r4,r11,20460
	ctx.r4.s64 = ctx.r11.s64 + 20460;
	// bl 0x82120600
	ctx.lr = 0x82164CEC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82120600
	ctx.lr = 0x82164CF8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// addi r4,r11,20480
	ctx.r4.s64 = ctx.r11.s64 + 20480;
	// bl 0x82120600
	ctx.lr = 0x82164D08;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,7376
	ctx.r6.s64 = ctx.r1.s64 + 7376;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-27712
	ctx.r7.s64 = ctx.r11.s64 + -27712;
	// addi r5,r1,2064
	ctx.r5.s64 = ctx.r1.s64 + 2064;
	// addi r4,r1,4880
	ctx.r4.s64 = ctx.r1.s64 + 4880;
	// bl 0x8213ac58
	ctx.lr = 0x82164D24;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82120ac0
	ctx.lr = 0x82164D34;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82120ac0
	ctx.lr = 0x82164D44;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7376
	ctx.r3.s64 = ctx.r1.s64 + 7376;
	// bl 0x82120ac0
	ctx.lr = 0x82164D54;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// addi r4,r11,20508
	ctx.r4.s64 = ctx.r11.s64 + 20508;
	// bl 0x82120600
	ctx.lr = 0x82164D64;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// bl 0x82120600
	ctx.lr = 0x82164D70;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// addi r4,r11,20524
	ctx.r4.s64 = ctx.r11.s64 + 20524;
	// bl 0x82120600
	ctx.lr = 0x82164D80;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,2192
	ctx.r6.s64 = ctx.r1.s64 + 2192;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-30304
	ctx.r7.s64 = ctx.r11.s64 + -30304;
	// addi r5,r1,4944
	ctx.r5.s64 = ctx.r1.s64 + 4944;
	// addi r4,r1,2128
	ctx.r4.s64 = ctx.r1.s64 + 2128;
	// bl 0x8213ac58
	ctx.lr = 0x82164D9C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82120ac0
	ctx.lr = 0x82164DAC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// bl 0x82120ac0
	ctx.lr = 0x82164DBC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82120ac0
	ctx.lr = 0x82164DCC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// addi r4,r11,20548
	ctx.r4.s64 = ctx.r11.s64 + 20548;
	// bl 0x82120600
	ctx.lr = 0x82164DDC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82120600
	ctx.lr = 0x82164DE8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6352
	ctx.r3.s64 = ctx.r1.s64 + 6352;
	// addi r4,r11,20568
	ctx.r4.s64 = ctx.r11.s64 + 20568;
	// bl 0x82120600
	ctx.lr = 0x82164DF8;
	sub_82120600(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r1,5008
	ctx.r6.s64 = ctx.r1.s64 + 5008;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-32048
	ctx.r7.s64 = ctx.r11.s64 + -32048;
	// addi r5,r1,2256
	ctx.r5.s64 = ctx.r1.s64 + 2256;
	// addi r4,r1,6352
	ctx.r4.s64 = ctx.r1.s64 + 6352;
	// bl 0x8213ac58
	ctx.lr = 0x82164E14;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6352
	ctx.r3.s64 = ctx.r1.s64 + 6352;
	// bl 0x82120ac0
	ctx.lr = 0x82164E24;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82120ac0
	ctx.lr = 0x82164E34;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// bl 0x82120ac0
	ctx.lr = 0x82164E44;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// addi r4,r11,20596
	ctx.r4.s64 = ctx.r11.s64 + 20596;
	// bl 0x82120600
	ctx.lr = 0x82164E54;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7056
	ctx.r3.s64 = ctx.r1.s64 + 7056;
	// bl 0x82120600
	ctx.lr = 0x82164E60;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// addi r4,r11,20604
	ctx.r4.s64 = ctx.r11.s64 + 20604;
	// bl 0x82120600
	ctx.lr = 0x82164E70;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2384
	ctx.r6.s64 = ctx.r1.s64 + 2384;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,30448
	ctx.r7.s64 = ctx.r11.s64 + 30448;
	// addi r5,r1,7056
	ctx.r5.s64 = ctx.r1.s64 + 7056;
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// bl 0x8213ac58
	ctx.lr = 0x82164E8C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82120ac0
	ctx.lr = 0x82164E9C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7056
	ctx.r3.s64 = ctx.r1.s64 + 7056;
	// bl 0x82120ac0
	ctx.lr = 0x82164EAC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82120ac0
	ctx.lr = 0x82164EBC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6416
	ctx.r3.s64 = ctx.r1.s64 + 6416;
	// addi r4,r11,20620
	ctx.r4.s64 = ctx.r11.s64 + 20620;
	// bl 0x82120600
	ctx.lr = 0x82164ECC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82120600
	ctx.lr = 0x82164ED8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// addi r4,r11,20636
	ctx.r4.s64 = ctx.r11.s64 + 20636;
	// bl 0x82120600
	ctx.lr = 0x82164EE8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,6416
	ctx.r6.s64 = ctx.r1.s64 + 6416;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,22464
	ctx.r7.s64 = ctx.r11.s64 + 22464;
	// addi r5,r1,2448
	ctx.r5.s64 = ctx.r1.s64 + 2448;
	// addi r4,r1,5072
	ctx.r4.s64 = ctx.r1.s64 + 5072;
	// bl 0x8213ac58
	ctx.lr = 0x82164F04;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// bl 0x82120ac0
	ctx.lr = 0x82164F14;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82120ac0
	ctx.lr = 0x82164F24;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6416
	ctx.r3.s64 = ctx.r1.s64 + 6416;
	// bl 0x82120ac0
	ctx.lr = 0x82164F34;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// addi r4,r11,20660
	ctx.r4.s64 = ctx.r11.s64 + 20660;
	// bl 0x82120600
	ctx.lr = 0x82164F44;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// bl 0x82120600
	ctx.lr = 0x82164F50;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// addi r4,r11,20672
	ctx.r4.s64 = ctx.r11.s64 + 20672;
	// bl 0x82120600
	ctx.lr = 0x82164F60;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2576
	ctx.r6.s64 = ctx.r1.s64 + 2576;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,16344
	ctx.r7.s64 = ctx.r11.s64 + 16344;
	// addi r5,r1,5136
	ctx.r5.s64 = ctx.r1.s64 + 5136;
	// addi r4,r1,2512
	ctx.r4.s64 = ctx.r1.s64 + 2512;
	// bl 0x8213ac58
	ctx.lr = 0x82164F7C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82120ac0
	ctx.lr = 0x82164F8C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// bl 0x82120ac0
	ctx.lr = 0x82164F9C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82120ac0
	ctx.lr = 0x82164FAC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// addi r4,r11,20692
	ctx.r4.s64 = ctx.r11.s64 + 20692;
	// bl 0x82120600
	ctx.lr = 0x82164FBC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82120600
	ctx.lr = 0x82164FC8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7568
	ctx.r3.s64 = ctx.r1.s64 + 7568;
	// addi r4,r11,20700
	ctx.r4.s64 = ctx.r11.s64 + 20700;
	// bl 0x82120600
	ctx.lr = 0x82164FD8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,5200
	ctx.r6.s64 = ctx.r1.s64 + 5200;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,12904
	ctx.r7.s64 = ctx.r11.s64 + 12904;
	// addi r5,r1,2640
	ctx.r5.s64 = ctx.r1.s64 + 2640;
	// addi r4,r1,7568
	ctx.r4.s64 = ctx.r1.s64 + 7568;
	// bl 0x8213ac58
	ctx.lr = 0x82164FF4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7568
	ctx.r3.s64 = ctx.r1.s64 + 7568;
	// bl 0x82120ac0
	ctx.lr = 0x82165004;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82120ac0
	ctx.lr = 0x82165014;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82120ac0
	ctx.lr = 0x82165024;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// addi r4,r11,20716
	ctx.r4.s64 = ctx.r11.s64 + 20716;
	// bl 0x82120600
	ctx.lr = 0x82165034;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6480
	ctx.r3.s64 = ctx.r1.s64 + 6480;
	// bl 0x82120600
	ctx.lr = 0x82165040;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// addi r4,r11,20728
	ctx.r4.s64 = ctx.r11.s64 + 20728;
	// bl 0x82120600
	ctx.lr = 0x82165050;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2768
	ctx.r6.s64 = ctx.r1.s64 + 2768;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,10032
	ctx.r7.s64 = ctx.r11.s64 + 10032;
	// addi r5,r1,6480
	ctx.r5.s64 = ctx.r1.s64 + 6480;
	// addi r4,r1,2704
	ctx.r4.s64 = ctx.r1.s64 + 2704;
	// bl 0x8213ac58
	ctx.lr = 0x8216506C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82120ac0
	ctx.lr = 0x8216507C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6480
	ctx.r3.s64 = ctx.r1.s64 + 6480;
	// bl 0x82120ac0
	ctx.lr = 0x8216508C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82120ac0
	ctx.lr = 0x8216509C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7120
	ctx.r3.s64 = ctx.r1.s64 + 7120;
	// addi r4,r11,20748
	ctx.r4.s64 = ctx.r11.s64 + 20748;
	// bl 0x82120600
	ctx.lr = 0x821650AC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82120600
	ctx.lr = 0x821650B8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// addi r4,r11,20756
	ctx.r4.s64 = ctx.r11.s64 + 20756;
	// bl 0x82120600
	ctx.lr = 0x821650C8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,7120
	ctx.r6.s64 = ctx.r1.s64 + 7120;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,3824
	ctx.r7.s64 = ctx.r11.s64 + 3824;
	// addi r5,r1,2832
	ctx.r5.s64 = ctx.r1.s64 + 2832;
	// addi r4,r1,5264
	ctx.r4.s64 = ctx.r1.s64 + 5264;
	// bl 0x8213ac58
	ctx.lr = 0x821650E4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// bl 0x82120ac0
	ctx.lr = 0x821650F4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82120ac0
	ctx.lr = 0x82165104;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7120
	ctx.r3.s64 = ctx.r1.s64 + 7120;
	// bl 0x82120ac0
	ctx.lr = 0x82165114;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// addi r4,r11,20772
	ctx.r4.s64 = ctx.r11.s64 + 20772;
	// bl 0x82120600
	ctx.lr = 0x82165124;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// addi r30,r11,20780
	r30.s64 = ctx.r11.s64 + 20780;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82165138;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// addi r4,r11,20788
	ctx.r4.s64 = ctx.r11.s64 + 20788;
	// bl 0x82120600
	ctx.lr = 0x82165148;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2960
	ctx.r6.s64 = ctx.r1.s64 + 2960;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,2248
	ctx.r7.s64 = ctx.r11.s64 + 2248;
	// addi r5,r1,5328
	ctx.r5.s64 = ctx.r1.s64 + 5328;
	// addi r4,r1,2896
	ctx.r4.s64 = ctx.r1.s64 + 2896;
	// bl 0x8213ac58
	ctx.lr = 0x82165164;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// bl 0x82120ac0
	ctx.lr = 0x82165174;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// bl 0x82120ac0
	ctx.lr = 0x82165184;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x82120ac0
	ctx.lr = 0x82165194;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// addi r4,r11,20804
	ctx.r4.s64 = ctx.r11.s64 + 20804;
	// bl 0x82120600
	ctx.lr = 0x821651A4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82120600
	ctx.lr = 0x821651B0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6544
	ctx.r3.s64 = ctx.r1.s64 + 6544;
	// addi r4,r11,20812
	ctx.r4.s64 = ctx.r11.s64 + 20812;
	// bl 0x82120600
	ctx.lr = 0x821651C0;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,5392
	ctx.r6.s64 = ctx.r1.s64 + 5392;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,912
	ctx.r7.s64 = ctx.r11.s64 + 912;
	// addi r5,r1,3024
	ctx.r5.s64 = ctx.r1.s64 + 3024;
	// addi r4,r1,6544
	ctx.r4.s64 = ctx.r1.s64 + 6544;
	// bl 0x8213ac58
	ctx.lr = 0x821651DC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6544
	ctx.r3.s64 = ctx.r1.s64 + 6544;
	// bl 0x82120ac0
	ctx.lr = 0x821651EC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82120ac0
	ctx.lr = 0x821651FC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// bl 0x82120ac0
	ctx.lr = 0x8216520C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// addi r4,r11,20828
	ctx.r4.s64 = ctx.r11.s64 + 20828;
	// bl 0x82120600
	ctx.lr = 0x8216521C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7440
	ctx.r3.s64 = ctx.r1.s64 + 7440;
	// bl 0x82120600
	ctx.lr = 0x82165228;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// addi r4,r11,20836
	ctx.r4.s64 = ctx.r11.s64 + 20836;
	// bl 0x82120600
	ctx.lr = 0x82165238;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,3152
	ctx.r6.s64 = ctx.r1.s64 + 3152;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-448
	ctx.r7.s64 = ctx.r11.s64 + -448;
	// addi r5,r1,7440
	ctx.r5.s64 = ctx.r1.s64 + 7440;
	// addi r4,r1,3088
	ctx.r4.s64 = ctx.r1.s64 + 3088;
	// bl 0x8213ac58
	ctx.lr = 0x82165254;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// bl 0x82120ac0
	ctx.lr = 0x82165264;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7440
	ctx.r3.s64 = ctx.r1.s64 + 7440;
	// bl 0x82120ac0
	ctx.lr = 0x82165274;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82120ac0
	ctx.lr = 0x82165284;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6608
	ctx.r3.s64 = ctx.r1.s64 + 6608;
	// addi r4,r11,20852
	ctx.r4.s64 = ctx.r11.s64 + 20852;
	// bl 0x82120600
	ctx.lr = 0x82165294;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82120600
	ctx.lr = 0x821652A0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// addi r4,r11,20856
	ctx.r4.s64 = ctx.r11.s64 + 20856;
	// bl 0x82120600
	ctx.lr = 0x821652B0;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,6608
	ctx.r6.s64 = ctx.r1.s64 + 6608;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-17048
	ctx.r7.s64 = ctx.r11.s64 + -17048;
	// addi r5,r1,3216
	ctx.r5.s64 = ctx.r1.s64 + 3216;
	// addi r4,r1,5456
	ctx.r4.s64 = ctx.r1.s64 + 5456;
	// bl 0x8213ac58
	ctx.lr = 0x821652CC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// bl 0x82120ac0
	ctx.lr = 0x821652DC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82120ac0
	ctx.lr = 0x821652EC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6608
	ctx.r3.s64 = ctx.r1.s64 + 6608;
	// bl 0x82120ac0
	ctx.lr = 0x821652FC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// addi r4,r11,20868
	ctx.r4.s64 = ctx.r11.s64 + 20868;
	// bl 0x82120600
	ctx.lr = 0x8216530C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// bl 0x82120600
	ctx.lr = 0x82165318;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// addi r4,r11,20884
	ctx.r4.s64 = ctx.r11.s64 + 20884;
	// bl 0x82120600
	ctx.lr = 0x82165328;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,3344
	ctx.r6.s64 = ctx.r1.s64 + 3344;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-16064
	ctx.r7.s64 = ctx.r11.s64 + -16064;
	// addi r5,r1,5520
	ctx.r5.s64 = ctx.r1.s64 + 5520;
	// addi r4,r1,3280
	ctx.r4.s64 = ctx.r1.s64 + 3280;
	// bl 0x8213ac58
	ctx.lr = 0x82165344;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// bl 0x82120ac0
	ctx.lr = 0x82165354;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// bl 0x82120ac0
	ctx.lr = 0x82165364;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82120ac0
	ctx.lr = 0x82165374;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// addi r4,r11,20908
	ctx.r4.s64 = ctx.r11.s64 + 20908;
	// bl 0x82120600
	ctx.lr = 0x82165384;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82120600
	ctx.lr = 0x82165390;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7184
	ctx.r3.s64 = ctx.r1.s64 + 7184;
	// addi r4,r11,20924
	ctx.r4.s64 = ctx.r11.s64 + 20924;
	// bl 0x82120600
	ctx.lr = 0x821653A0;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,5584
	ctx.r6.s64 = ctx.r1.s64 + 5584;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-15080
	ctx.r7.s64 = ctx.r11.s64 + -15080;
	// addi r5,r1,3408
	ctx.r5.s64 = ctx.r1.s64 + 3408;
	// addi r4,r1,7184
	ctx.r4.s64 = ctx.r1.s64 + 7184;
	// bl 0x8213ac58
	ctx.lr = 0x821653BC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7184
	ctx.r3.s64 = ctx.r1.s64 + 7184;
	// bl 0x82120ac0
	ctx.lr = 0x821653CC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82120ac0
	ctx.lr = 0x821653DC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// bl 0x82120ac0
	ctx.lr = 0x821653EC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// addi r4,r11,20948
	ctx.r4.s64 = ctx.r11.s64 + 20948;
	// bl 0x82120600
	ctx.lr = 0x821653FC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6672
	ctx.r3.s64 = ctx.r1.s64 + 6672;
	// bl 0x82120600
	ctx.lr = 0x82165408;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// addi r4,r11,20964
	ctx.r4.s64 = ctx.r11.s64 + 20964;
	// bl 0x82120600
	ctx.lr = 0x82165418;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,3536
	ctx.r6.s64 = ctx.r1.s64 + 3536;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-13848
	ctx.r7.s64 = ctx.r11.s64 + -13848;
	// addi r5,r1,6672
	ctx.r5.s64 = ctx.r1.s64 + 6672;
	// addi r4,r1,3472
	ctx.r4.s64 = ctx.r1.s64 + 3472;
	// bl 0x8213ac58
	ctx.lr = 0x82165434;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// bl 0x82120ac0
	ctx.lr = 0x82165444;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6672
	ctx.r3.s64 = ctx.r1.s64 + 6672;
	// bl 0x82120ac0
	ctx.lr = 0x82165454;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82120ac0
	ctx.lr = 0x82165464;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7696
	ctx.r3.s64 = ctx.r1.s64 + 7696;
	// addi r4,r11,20988
	ctx.r4.s64 = ctx.r11.s64 + 20988;
	// bl 0x82120600
	ctx.lr = 0x82165474;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82120600
	ctx.lr = 0x82165480;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// addi r4,r11,21008
	ctx.r4.s64 = ctx.r11.s64 + 21008;
	// bl 0x82120600
	ctx.lr = 0x82165490;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,7696
	ctx.r6.s64 = ctx.r1.s64 + 7696;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-3120
	ctx.r7.s64 = ctx.r11.s64 + -3120;
	// addi r5,r1,3600
	ctx.r5.s64 = ctx.r1.s64 + 3600;
	// addi r4,r1,5648
	ctx.r4.s64 = ctx.r1.s64 + 5648;
	// bl 0x8213ac58
	ctx.lr = 0x821654AC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// bl 0x82120ac0
	ctx.lr = 0x821654BC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82120ac0
	ctx.lr = 0x821654CC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7696
	ctx.r3.s64 = ctx.r1.s64 + 7696;
	// bl 0x82120ac0
	ctx.lr = 0x821654DC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// addi r4,r11,21036
	ctx.r4.s64 = ctx.r11.s64 + 21036;
	// bl 0x82120600
	ctx.lr = 0x821654EC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5712
	ctx.r3.s64 = ctx.r1.s64 + 5712;
	// bl 0x82120600
	ctx.lr = 0x821654F8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// addi r4,r11,21056
	ctx.r4.s64 = ctx.r11.s64 + 21056;
	// bl 0x82120600
	ctx.lr = 0x82165508;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// addi r7,r11,-2328
	ctx.r7.s64 = ctx.r11.s64 + -2328;
	// addi r5,r1,5712
	ctx.r5.s64 = ctx.r1.s64 + 5712;
	// addi r4,r1,3664
	ctx.r4.s64 = ctx.r1.s64 + 3664;
	// bl 0x8213ac58
	ctx.lr = 0x82165524;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// bl 0x82120ac0
	ctx.lr = 0x82165534;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5712
	ctx.r3.s64 = ctx.r1.s64 + 5712;
	// bl 0x82120ac0
	ctx.lr = 0x82165544;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82120ac0
	ctx.lr = 0x82165554;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5776
	ctx.r3.s64 = ctx.r1.s64 + 5776;
	// addi r4,r11,21084
	ctx.r4.s64 = ctx.r11.s64 + 21084;
	// bl 0x82120600
	ctx.lr = 0x82165564;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82120600
	ctx.lr = 0x82165570;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6736
	ctx.r3.s64 = ctx.r1.s64 + 6736;
	// addi r4,r11,21104
	ctx.r4.s64 = ctx.r11.s64 + 21104;
	// bl 0x82120600
	ctx.lr = 0x82165580;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,5776
	ctx.r6.s64 = ctx.r1.s64 + 5776;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-1528
	ctx.r7.s64 = ctx.r11.s64 + -1528;
	// addi r5,r1,3792
	ctx.r5.s64 = ctx.r1.s64 + 3792;
	// addi r4,r1,6736
	ctx.r4.s64 = ctx.r1.s64 + 6736;
	// bl 0x8213ac58
	ctx.lr = 0x8216559C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6736
	ctx.r3.s64 = ctx.r1.s64 + 6736;
	// bl 0x82120ac0
	ctx.lr = 0x821655AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82120ac0
	ctx.lr = 0x821655BC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5776
	ctx.r3.s64 = ctx.r1.s64 + 5776;
	// bl 0x82120ac0
	ctx.lr = 0x821655CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21132
	ctx.r4.s64 = ctx.r11.s64 + 21132;
	// bl 0x82120600
	ctx.lr = 0x821655DC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7248
	ctx.r3.s64 = ctx.r1.s64 + 7248;
	// bl 0x82120600
	ctx.lr = 0x821655E8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// addi r4,r11,21144
	ctx.r4.s64 = ctx.r11.s64 + 21144;
	// bl 0x82120600
	ctx.lr = 0x821655F8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-5336
	ctx.r7.s64 = ctx.r11.s64 + -5336;
	// addi r5,r1,7248
	ctx.r5.s64 = ctx.r1.s64 + 7248;
	// addi r4,r1,3856
	ctx.r4.s64 = ctx.r1.s64 + 3856;
	// bl 0x8213ac58
	ctx.lr = 0x82165614;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82120ac0
	ctx.lr = 0x82165624;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7248
	ctx.r3.s64 = ctx.r1.s64 + 7248;
	// bl 0x82120ac0
	ctx.lr = 0x82165634;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82165644;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,21164
	ctx.r4.s64 = ctx.r11.s64 + 21164;
	// bl 0x82120600
	ctx.lr = 0x82165654;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x82165660;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,21176
	ctx.r4.s64 = ctx.r11.s64 + 21176;
	// bl 0x82120600
	ctx.lr = 0x82165670;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-4640
	ctx.r7.s64 = ctx.r11.s64 + -4640;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8213ac58
	ctx.lr = 0x8216568C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8216569C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821656AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821656BC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,21196
	ctx.r4.s64 = ctx.r11.s64 + 21196;
	// bl 0x82120600
	ctx.lr = 0x821656CC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120600
	ctx.lr = 0x821656D8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,21208
	ctx.r4.s64 = ctx.r11.s64 + 21208;
	// bl 0x82120600
	ctx.lr = 0x821656E8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-3880
	ctx.r7.s64 = ctx.r11.s64 + -3880;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x8213ac58
	ctx.lr = 0x82165704;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x82165714;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x82165724;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x82165734;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,21228
	ctx.r4.s64 = ctx.r11.s64 + 21228;
	// bl 0x82120600
	ctx.lr = 0x82165744;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82120600
	ctx.lr = 0x82165750;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,21244
	ctx.r4.s64 = ctx.r11.s64 + 21244;
	// bl 0x82120600
	ctx.lr = 0x82165760;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-13296
	ctx.r7.s64 = ctx.r11.s64 + -13296;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x8213ac58
	ctx.lr = 0x8216577C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82120ac0
	ctx.lr = 0x8216578C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82120ac0
	ctx.lr = 0x8216579C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x821657AC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r11,21268
	ctx.r4.s64 = ctx.r11.s64 + 21268;
	// bl 0x82120600
	ctx.lr = 0x821657BC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82120600
	ctx.lr = 0x821657C8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// bl 0x82120600
	ctx.lr = 0x821657D8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,816
	ctx.r6.s64 = ctx.r1.s64 + 816;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-12432
	ctx.r7.s64 = ctx.r11.s64 + -12432;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x8213ac58
	ctx.lr = 0x821657F4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82120ac0
	ctx.lr = 0x82165804;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82120ac0
	ctx.lr = 0x82165814;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82120ac0
	ctx.lr = 0x82165824;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r4,r11,21300
	ctx.r4.s64 = ctx.r11.s64 + 21300;
	// bl 0x82120600
	ctx.lr = 0x82165834;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82120600
	ctx.lr = 0x82165840;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,21308
	ctx.r4.s64 = ctx.r11.s64 + 21308;
	// bl 0x82120600
	ctx.lr = 0x82165850;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1008
	ctx.r6.s64 = ctx.r1.s64 + 1008;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-11112
	ctx.r7.s64 = ctx.r11.s64 + -11112;
	// addi r5,r1,944
	ctx.r5.s64 = ctx.r1.s64 + 944;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// bl 0x8213ac58
	ctx.lr = 0x8216586C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82120ac0
	ctx.lr = 0x8216587C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82120ac0
	ctx.lr = 0x8216588C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82120ac0
	ctx.lr = 0x8216589C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// addi r4,r11,21324
	ctx.r4.s64 = ctx.r11.s64 + 21324;
	// bl 0x82120600
	ctx.lr = 0x821658AC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82120600
	ctx.lr = 0x821658B8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// addi r4,r11,21332
	ctx.r4.s64 = ctx.r11.s64 + 21332;
	// bl 0x82120600
	ctx.lr = 0x821658C8;
	sub_82120600(ctx, base);
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1200
	ctx.r6.s64 = ctx.r1.s64 + 1200;
	// addi r7,r11,-9296
	ctx.r7.s64 = ctx.r11.s64 + -9296;
	// addi r5,r1,1136
	ctx.r5.s64 = ctx.r1.s64 + 1136;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// bl 0x8213ac58
	ctx.lr = 0x821658E4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82120ac0
	ctx.lr = 0x821658F4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82120ac0
	ctx.lr = 0x82165904;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82120ac0
	ctx.lr = 0x82165914;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// addi r4,r11,21348
	ctx.r4.s64 = ctx.r11.s64 + 21348;
	// bl 0x82120600
	ctx.lr = 0x82165924;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82120600
	ctx.lr = 0x82165930;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// addi r4,r11,21364
	ctx.r4.s64 = ctx.r11.s64 + 21364;
	// bl 0x82120600
	ctx.lr = 0x82165940;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1392
	ctx.r6.s64 = ctx.r1.s64 + 1392;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-8640
	ctx.r7.s64 = ctx.r11.s64 + -8640;
	// addi r5,r1,1328
	ctx.r5.s64 = ctx.r1.s64 + 1328;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// bl 0x8213ac58
	ctx.lr = 0x8216595C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82120ac0
	ctx.lr = 0x8216596C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82120ac0
	ctx.lr = 0x8216597C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82120ac0
	ctx.lr = 0x8216598C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// addi r4,r11,21388
	ctx.r4.s64 = ctx.r11.s64 + 21388;
	// bl 0x82120600
	ctx.lr = 0x8216599C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82120600
	ctx.lr = 0x821659A8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// addi r4,r11,21408
	ctx.r4.s64 = ctx.r11.s64 + 21408;
	// bl 0x82120600
	ctx.lr = 0x821659B8;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1584
	ctx.r6.s64 = ctx.r1.s64 + 1584;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-7464
	ctx.r7.s64 = ctx.r11.s64 + -7464;
	// addi r5,r1,1520
	ctx.r5.s64 = ctx.r1.s64 + 1520;
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// bl 0x8213ac58
	ctx.lr = 0x821659D4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82120ac0
	ctx.lr = 0x821659E4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82120ac0
	ctx.lr = 0x821659F4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82120ac0
	ctx.lr = 0x82165A04;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// addi r4,r11,21436
	ctx.r4.s64 = ctx.r11.s64 + 21436;
	// bl 0x82120600
	ctx.lr = 0x82165A14;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82120600
	ctx.lr = 0x82165A20;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// addi r4,r11,21452
	ctx.r4.s64 = ctx.r11.s64 + 21452;
	// bl 0x82120600
	ctx.lr = 0x82165A30;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1776
	ctx.r6.s64 = ctx.r1.s64 + 1776;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-6912
	ctx.r7.s64 = ctx.r11.s64 + -6912;
	// addi r5,r1,1712
	ctx.r5.s64 = ctx.r1.s64 + 1712;
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// bl 0x8213ac58
	ctx.lr = 0x82165A4C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82120ac0
	ctx.lr = 0x82165A5C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82120ac0
	ctx.lr = 0x82165A6C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82120ac0
	ctx.lr = 0x82165A7C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// addi r4,r11,21476
	ctx.r4.s64 = ctx.r11.s64 + 21476;
	// bl 0x82120600
	ctx.lr = 0x82165A8C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// addi r30,r11,21484
	r30.s64 = ctx.r11.s64 + 21484;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82165AA0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// addi r4,r11,21492
	ctx.r4.s64 = ctx.r11.s64 + 21492;
	// bl 0x82120600
	ctx.lr = 0x82165AB0;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,1968
	ctx.r6.s64 = ctx.r1.s64 + 1968;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-17896
	ctx.r7.s64 = ctx.r11.s64 + -17896;
	// addi r5,r1,1904
	ctx.r5.s64 = ctx.r1.s64 + 1904;
	// addi r4,r1,1840
	ctx.r4.s64 = ctx.r1.s64 + 1840;
	// bl 0x8213ac58
	ctx.lr = 0x82165ACC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82120ac0
	ctx.lr = 0x82165ADC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82120ac0
	ctx.lr = 0x82165AEC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82120ac0
	ctx.lr = 0x82165AFC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// addi r4,r11,21508
	ctx.r4.s64 = ctx.r11.s64 + 21508;
	// bl 0x82120600
	ctx.lr = 0x82165B0C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82120600
	ctx.lr = 0x82165B18;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// addi r4,r11,21528
	ctx.r4.s64 = ctx.r11.s64 + 21528;
	// bl 0x82120600
	ctx.lr = 0x82165B28;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2160
	ctx.r6.s64 = ctx.r1.s64 + 2160;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-20112
	ctx.r7.s64 = ctx.r11.s64 + -20112;
	// addi r5,r1,2096
	ctx.r5.s64 = ctx.r1.s64 + 2096;
	// addi r4,r1,2032
	ctx.r4.s64 = ctx.r1.s64 + 2032;
	// bl 0x8213ac58
	ctx.lr = 0x82165B44;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82120ac0
	ctx.lr = 0x82165B54;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82120ac0
	ctx.lr = 0x82165B64;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82120ac0
	ctx.lr = 0x82165B74;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// addi r4,r11,21556
	ctx.r4.s64 = ctx.r11.s64 + 21556;
	// bl 0x82120600
	ctx.lr = 0x82165B84;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82120600
	ctx.lr = 0x82165B90;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// addi r4,r11,21568
	ctx.r4.s64 = ctx.r11.s64 + 21568;
	// bl 0x82120600
	ctx.lr = 0x82165BA0;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2352
	ctx.r6.s64 = ctx.r1.s64 + 2352;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-19416
	ctx.r7.s64 = ctx.r11.s64 + -19416;
	// addi r5,r1,2288
	ctx.r5.s64 = ctx.r1.s64 + 2288;
	// addi r4,r1,2224
	ctx.r4.s64 = ctx.r1.s64 + 2224;
	// bl 0x8213ac58
	ctx.lr = 0x82165BBC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82120ac0
	ctx.lr = 0x82165BCC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82120ac0
	ctx.lr = 0x82165BDC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82120ac0
	ctx.lr = 0x82165BEC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// addi r4,r11,21588
	ctx.r4.s64 = ctx.r11.s64 + 21588;
	// bl 0x82120600
	ctx.lr = 0x82165BFC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82120600
	ctx.lr = 0x82165C08;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// addi r4,r11,21608
	ctx.r4.s64 = ctx.r11.s64 + 21608;
	// bl 0x82120600
	ctx.lr = 0x82165C18;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2544
	ctx.r6.s64 = ctx.r1.s64 + 2544;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-18656
	ctx.r7.s64 = ctx.r11.s64 + -18656;
	// addi r5,r1,2480
	ctx.r5.s64 = ctx.r1.s64 + 2480;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// bl 0x8213ac58
	ctx.lr = 0x82165C34;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82120ac0
	ctx.lr = 0x82165C44;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82120ac0
	ctx.lr = 0x82165C54;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82120ac0
	ctx.lr = 0x82165C64;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// addi r4,r11,21636
	ctx.r4.s64 = ctx.r11.s64 + 21636;
	// bl 0x82120600
	ctx.lr = 0x82165C74;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// addi r30,r11,-23836
	r30.s64 = ctx.r11.s64 + -23836;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82165C88;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// addi r4,r11,21652
	ctx.r4.s64 = ctx.r11.s64 + 21652;
	// bl 0x82120600
	ctx.lr = 0x82165C98;
	sub_82120600(ctx, base);
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2736
	ctx.r6.s64 = ctx.r1.s64 + 2736;
	// addi r7,r11,-27560
	ctx.r7.s64 = ctx.r11.s64 + -27560;
	// addi r5,r1,2672
	ctx.r5.s64 = ctx.r1.s64 + 2672;
	// addi r4,r1,2608
	ctx.r4.s64 = ctx.r1.s64 + 2608;
	// bl 0x8213ac58
	ctx.lr = 0x82165CB4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82120ac0
	ctx.lr = 0x82165CC4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82120ac0
	ctx.lr = 0x82165CD4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82120ac0
	ctx.lr = 0x82165CE4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// addi r4,r11,21676
	ctx.r4.s64 = ctx.r11.s64 + 21676;
	// bl 0x82120600
	ctx.lr = 0x82165CF4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x82165D00;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// addi r4,r11,21692
	ctx.r4.s64 = ctx.r11.s64 + 21692;
	// bl 0x82120600
	ctx.lr = 0x82165D10;
	sub_82120600(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r6,r1,2928
	ctx.r6.s64 = ctx.r1.s64 + 2928;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-31048
	ctx.r7.s64 = ctx.r11.s64 + -31048;
	// addi r5,r1,2864
	ctx.r5.s64 = ctx.r1.s64 + 2864;
	// addi r4,r1,2800
	ctx.r4.s64 = ctx.r1.s64 + 2800;
	// bl 0x8213ac58
	ctx.lr = 0x82165D2C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// bl 0x82120ac0
	ctx.lr = 0x82165D3C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82120ac0
	ctx.lr = 0x82165D4C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82120ac0
	ctx.lr = 0x82165D5C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// addi r4,r11,21716
	ctx.r4.s64 = ctx.r11.s64 + 21716;
	// bl 0x82120600
	ctx.lr = 0x82165D6C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// bl 0x82120600
	ctx.lr = 0x82165D78;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// addi r4,r11,21736
	ctx.r4.s64 = ctx.r11.s64 + 21736;
	// bl 0x82120600
	ctx.lr = 0x82165D88;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,3120
	ctx.r6.s64 = ctx.r1.s64 + 3120;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,28696
	ctx.r7.s64 = ctx.r11.s64 + 28696;
	// addi r5,r1,3056
	ctx.r5.s64 = ctx.r1.s64 + 3056;
	// addi r4,r1,2992
	ctx.r4.s64 = ctx.r1.s64 + 2992;
	// bl 0x8213ac58
	ctx.lr = 0x82165DA4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x82120ac0
	ctx.lr = 0x82165DB4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// bl 0x82120ac0
	ctx.lr = 0x82165DC4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82120ac0
	ctx.lr = 0x82165DD4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// addi r4,r11,21764
	ctx.r4.s64 = ctx.r11.s64 + 21764;
	// bl 0x82120600
	ctx.lr = 0x82165DE4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82120600
	ctx.lr = 0x82165DF0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// addi r4,r11,21788
	ctx.r4.s64 = ctx.r11.s64 + 21788;
	// bl 0x82120600
	ctx.lr = 0x82165E00;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,3312
	ctx.r6.s64 = ctx.r1.s64 + 3312;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,28800
	ctx.r7.s64 = ctx.r11.s64 + 28800;
	// addi r5,r1,3248
	ctx.r5.s64 = ctx.r1.s64 + 3248;
	// addi r4,r1,3184
	ctx.r4.s64 = ctx.r1.s64 + 3184;
	// bl 0x8213ac58
	ctx.lr = 0x82165E1C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// bl 0x82120ac0
	ctx.lr = 0x82165E2C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82120ac0
	ctx.lr = 0x82165E3C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82120ac0
	ctx.lr = 0x82165E4C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// addi r4,r11,21820
	ctx.r4.s64 = ctx.r11.s64 + 21820;
	// bl 0x82120600
	ctx.lr = 0x82165E5C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82120600
	ctx.lr = 0x82165E68;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// addi r4,r11,21840
	ctx.r4.s64 = ctx.r11.s64 + 21840;
	// bl 0x82120600
	ctx.lr = 0x82165E78;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,3504
	ctx.r6.s64 = ctx.r1.s64 + 3504;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,28856
	ctx.r7.s64 = ctx.r11.s64 + 28856;
	// addi r5,r1,3440
	ctx.r5.s64 = ctx.r1.s64 + 3440;
	// addi r4,r1,3376
	ctx.r4.s64 = ctx.r1.s64 + 3376;
	// bl 0x8213ac58
	ctx.lr = 0x82165E94;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// bl 0x82120ac0
	ctx.lr = 0x82165EA4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82120ac0
	ctx.lr = 0x82165EB4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82120ac0
	ctx.lr = 0x82165EC4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// addi r4,r11,21868
	ctx.r4.s64 = ctx.r11.s64 + 21868;
	// bl 0x82120600
	ctx.lr = 0x82165ED4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82120600
	ctx.lr = 0x82165EE0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// bl 0x82120600
	ctx.lr = 0x82165EF0;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,3696
	ctx.r6.s64 = ctx.r1.s64 + 3696;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,26088
	ctx.r7.s64 = ctx.r11.s64 + 26088;
	// addi r5,r1,3632
	ctx.r5.s64 = ctx.r1.s64 + 3632;
	// addi r4,r1,3568
	ctx.r4.s64 = ctx.r1.s64 + 3568;
	// bl 0x8213ac58
	ctx.lr = 0x82165F0C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// bl 0x82120ac0
	ctx.lr = 0x82165F1C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82120ac0
	ctx.lr = 0x82165F2C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82120ac0
	ctx.lr = 0x82165F3C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// addi r4,r11,21900
	ctx.r4.s64 = ctx.r11.s64 + 21900;
	// bl 0x82120600
	ctx.lr = 0x82165F4C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82120600
	ctx.lr = 0x82165F58;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// addi r4,r11,21912
	ctx.r4.s64 = ctx.r11.s64 + 21912;
	// bl 0x82120600
	ctx.lr = 0x82165F68;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,3888
	ctx.r6.s64 = ctx.r1.s64 + 3888;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,23840
	ctx.r7.s64 = ctx.r11.s64 + 23840;
	// addi r5,r1,3824
	ctx.r5.s64 = ctx.r1.s64 + 3824;
	// addi r4,r1,3760
	ctx.r4.s64 = ctx.r1.s64 + 3760;
	// bl 0x8213ac58
	ctx.lr = 0x82165F84;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// bl 0x82120ac0
	ctx.lr = 0x82165F94;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82120ac0
	ctx.lr = 0x82165FA4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82120ac0
	ctx.lr = 0x82165FB4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// addi r4,r11,21932
	ctx.r4.s64 = ctx.r11.s64 + 21932;
	// bl 0x82120600
	ctx.lr = 0x82165FC4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82120600
	ctx.lr = 0x82165FD0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// addi r4,r11,21948
	ctx.r4.s64 = ctx.r11.s64 + 21948;
	// bl 0x82120600
	ctx.lr = 0x82165FE0;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,4080
	ctx.r6.s64 = ctx.r1.s64 + 4080;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,21128
	ctx.r7.s64 = ctx.r11.s64 + 21128;
	// addi r5,r1,4016
	ctx.r5.s64 = ctx.r1.s64 + 4016;
	// addi r4,r1,3952
	ctx.r4.s64 = ctx.r1.s64 + 3952;
	// bl 0x8213ac58
	ctx.lr = 0x82165FFC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x82120ac0
	ctx.lr = 0x8216600C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82120ac0
	ctx.lr = 0x8216601C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82120ac0
	ctx.lr = 0x8216602C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// addi r4,r11,21972
	ctx.r4.s64 = ctx.r11.s64 + 21972;
	// bl 0x82120600
	ctx.lr = 0x8216603C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82120600
	ctx.lr = 0x82166048;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// addi r4,r11,21984
	ctx.r4.s64 = ctx.r11.s64 + 21984;
	// bl 0x82120600
	ctx.lr = 0x82166058;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r6,r1,4272
	ctx.r6.s64 = ctx.r1.s64 + 4272;
	// addi r7,r11,18232
	ctx.r7.s64 = ctx.r11.s64 + 18232;
	// addi r5,r1,4208
	ctx.r5.s64 = ctx.r1.s64 + 4208;
	// addi r4,r1,4144
	ctx.r4.s64 = ctx.r1.s64 + 4144;
	// bl 0x8213ac58
	ctx.lr = 0x82166074;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// bl 0x82120ac0
	ctx.lr = 0x82166084;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82120ac0
	ctx.lr = 0x82166094;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82120ac0
	ctx.lr = 0x821660A4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// addi r4,r11,22004
	ctx.r4.s64 = ctx.r11.s64 + 22004;
	// bl 0x82120600
	ctx.lr = 0x821660B4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82120600
	ctx.lr = 0x821660C0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// addi r4,r11,22016
	ctx.r4.s64 = ctx.r11.s64 + 22016;
	// bl 0x82120600
	ctx.lr = 0x821660D0;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,4464
	ctx.r6.s64 = ctx.r1.s64 + 4464;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,16040
	ctx.r7.s64 = ctx.r11.s64 + 16040;
	// addi r5,r1,4400
	ctx.r5.s64 = ctx.r1.s64 + 4400;
	// addi r4,r1,4336
	ctx.r4.s64 = ctx.r1.s64 + 4336;
	// bl 0x8213ac58
	ctx.lr = 0x821660EC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// bl 0x82120ac0
	ctx.lr = 0x821660FC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82120ac0
	ctx.lr = 0x8216610C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82120ac0
	ctx.lr = 0x8216611C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// addi r4,r11,22036
	ctx.r4.s64 = ctx.r11.s64 + 22036;
	// bl 0x82120600
	ctx.lr = 0x8216612C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82120600
	ctx.lr = 0x82166138;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// addi r4,r11,22048
	ctx.r4.s64 = ctx.r11.s64 + 22048;
	// bl 0x82120600
	ctx.lr = 0x82166148;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,4656
	ctx.r6.s64 = ctx.r1.s64 + 4656;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,11840
	ctx.r7.s64 = ctx.r11.s64 + 11840;
	// addi r5,r1,4592
	ctx.r5.s64 = ctx.r1.s64 + 4592;
	// addi r4,r1,4528
	ctx.r4.s64 = ctx.r1.s64 + 4528;
	// bl 0x8213ac58
	ctx.lr = 0x82166164;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// bl 0x82120ac0
	ctx.lr = 0x82166174;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82120ac0
	ctx.lr = 0x82166184;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82120ac0
	ctx.lr = 0x82166194;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// addi r4,r11,22068
	ctx.r4.s64 = ctx.r11.s64 + 22068;
	// bl 0x82120600
	ctx.lr = 0x821661A4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82120600
	ctx.lr = 0x821661B0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// addi r4,r11,22080
	ctx.r4.s64 = ctx.r11.s64 + 22080;
	// bl 0x82120600
	ctx.lr = 0x821661C0;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,4848
	ctx.r6.s64 = ctx.r1.s64 + 4848;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,9536
	ctx.r7.s64 = ctx.r11.s64 + 9536;
	// addi r5,r1,4784
	ctx.r5.s64 = ctx.r1.s64 + 4784;
	// addi r4,r1,4720
	ctx.r4.s64 = ctx.r1.s64 + 4720;
	// bl 0x8213ac58
	ctx.lr = 0x821661DC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// bl 0x82120ac0
	ctx.lr = 0x821661EC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82120ac0
	ctx.lr = 0x821661FC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// bl 0x82120ac0
	ctx.lr = 0x8216620C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// addi r4,r11,22100
	ctx.r4.s64 = ctx.r11.s64 + 22100;
	// bl 0x82120600
	ctx.lr = 0x8216621C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// bl 0x82120600
	ctx.lr = 0x82166228;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// addi r4,r11,22116
	ctx.r4.s64 = ctx.r11.s64 + 22116;
	// bl 0x82120600
	ctx.lr = 0x82166238;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,5040
	ctx.r6.s64 = ctx.r1.s64 + 5040;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,6952
	ctx.r7.s64 = ctx.r11.s64 + 6952;
	// addi r5,r1,4976
	ctx.r5.s64 = ctx.r1.s64 + 4976;
	// addi r4,r1,4912
	ctx.r4.s64 = ctx.r1.s64 + 4912;
	// bl 0x8213ac58
	ctx.lr = 0x82166254;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// bl 0x82120ac0
	ctx.lr = 0x82166264;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// bl 0x82120ac0
	ctx.lr = 0x82166274;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// bl 0x82120ac0
	ctx.lr = 0x82166284;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// addi r4,r11,22140
	ctx.r4.s64 = ctx.r11.s64 + 22140;
	// bl 0x82120600
	ctx.lr = 0x82166294;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// addi r30,r11,22164
	r30.s64 = ctx.r11.s64 + 22164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x821662A8;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// addi r4,r11,22176
	ctx.r4.s64 = ctx.r11.s64 + 22176;
	// bl 0x82120600
	ctx.lr = 0x821662B8;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,5232
	ctx.r6.s64 = ctx.r1.s64 + 5232;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,5592
	ctx.r7.s64 = ctx.r11.s64 + 5592;
	// addi r5,r1,5168
	ctx.r5.s64 = ctx.r1.s64 + 5168;
	// addi r4,r1,5104
	ctx.r4.s64 = ctx.r1.s64 + 5104;
	// bl 0x8213ac58
	ctx.lr = 0x821662D4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// bl 0x82120ac0
	ctx.lr = 0x821662E4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// bl 0x82120ac0
	ctx.lr = 0x821662F4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// bl 0x82120ac0
	ctx.lr = 0x82166304;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// addi r4,r11,22208
	ctx.r4.s64 = ctx.r11.s64 + 22208;
	// bl 0x82120600
	ctx.lr = 0x82166314;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// bl 0x82120600
	ctx.lr = 0x82166320;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// addi r4,r11,22228
	ctx.r4.s64 = ctx.r11.s64 + 22228;
	// bl 0x82120600
	ctx.lr = 0x82166330;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,5424
	ctx.r6.s64 = ctx.r1.s64 + 5424;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,5160
	ctx.r7.s64 = ctx.r11.s64 + 5160;
	// addi r5,r1,5360
	ctx.r5.s64 = ctx.r1.s64 + 5360;
	// addi r4,r1,5296
	ctx.r4.s64 = ctx.r1.s64 + 5296;
	// bl 0x8213ac58
	ctx.lr = 0x8216634C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// bl 0x82120ac0
	ctx.lr = 0x8216635C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// bl 0x82120ac0
	ctx.lr = 0x8216636C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// bl 0x82120ac0
	ctx.lr = 0x8216637C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// addi r4,r11,22256
	ctx.r4.s64 = ctx.r11.s64 + 22256;
	// bl 0x82120600
	ctx.lr = 0x8216638C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// bl 0x82120600
	ctx.lr = 0x82166398;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// addi r4,r11,22280
	ctx.r4.s64 = ctx.r11.s64 + 22280;
	// bl 0x82120600
	ctx.lr = 0x821663A8;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,5616
	ctx.r6.s64 = ctx.r1.s64 + 5616;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,3912
	ctx.r7.s64 = ctx.r11.s64 + 3912;
	// addi r5,r1,5552
	ctx.r5.s64 = ctx.r1.s64 + 5552;
	// addi r4,r1,5488
	ctx.r4.s64 = ctx.r1.s64 + 5488;
	// bl 0x8213ac58
	ctx.lr = 0x821663C4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// bl 0x82120ac0
	ctx.lr = 0x821663D4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// bl 0x82120ac0
	ctx.lr = 0x821663E4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// bl 0x82120ac0
	ctx.lr = 0x821663F4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5808
	ctx.r3.s64 = ctx.r1.s64 + 5808;
	// addi r4,r11,22312
	ctx.r4.s64 = ctx.r11.s64 + 22312;
	// bl 0x82120600
	ctx.lr = 0x82166404;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,5744
	ctx.r3.s64 = ctx.r1.s64 + 5744;
	// bl 0x82120600
	ctx.lr = 0x82166410;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5680
	ctx.r3.s64 = ctx.r1.s64 + 5680;
	// addi r4,r11,22336
	ctx.r4.s64 = ctx.r11.s64 + 22336;
	// bl 0x82120600
	ctx.lr = 0x82166420;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r6,r1,5808
	ctx.r6.s64 = ctx.r1.s64 + 5808;
	// addi r7,r11,2568
	ctx.r7.s64 = ctx.r11.s64 + 2568;
	// addi r5,r1,5744
	ctx.r5.s64 = ctx.r1.s64 + 5744;
	// addi r4,r1,5680
	ctx.r4.s64 = ctx.r1.s64 + 5680;
	// bl 0x8213ac58
	ctx.lr = 0x8216643C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5680
	ctx.r3.s64 = ctx.r1.s64 + 5680;
	// bl 0x82120ac0
	ctx.lr = 0x8216644C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5744
	ctx.r3.s64 = ctx.r1.s64 + 5744;
	// bl 0x82120ac0
	ctx.lr = 0x8216645C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5808
	ctx.r3.s64 = ctx.r1.s64 + 5808;
	// bl 0x82120ac0
	ctx.lr = 0x8216646C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6000
	ctx.r3.s64 = ctx.r1.s64 + 6000;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x82120600
	ctx.lr = 0x8216647C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5936
	ctx.r3.s64 = ctx.r1.s64 + 5936;
	// addi r30,r11,22380
	r30.s64 = ctx.r11.s64 + 22380;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82166490;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,5872
	ctx.r3.s64 = ctx.r1.s64 + 5872;
	// addi r4,r11,22392
	ctx.r4.s64 = ctx.r11.s64 + 22392;
	// bl 0x82120600
	ctx.lr = 0x821664A0;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6000
	ctx.r6.s64 = ctx.r1.s64 + 6000;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,1336
	ctx.r7.s64 = ctx.r11.s64 + 1336;
	// addi r5,r1,5936
	ctx.r5.s64 = ctx.r1.s64 + 5936;
	// addi r4,r1,5872
	ctx.r4.s64 = ctx.r1.s64 + 5872;
	// bl 0x8213ac58
	ctx.lr = 0x821664BC;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5872
	ctx.r3.s64 = ctx.r1.s64 + 5872;
	// bl 0x82120ac0
	ctx.lr = 0x821664CC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5936
	ctx.r3.s64 = ctx.r1.s64 + 5936;
	// bl 0x82120ac0
	ctx.lr = 0x821664DC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6000
	ctx.r3.s64 = ctx.r1.s64 + 6000;
	// bl 0x82120ac0
	ctx.lr = 0x821664EC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6192
	ctx.r3.s64 = ctx.r1.s64 + 6192;
	// addi r4,r11,22412
	ctx.r4.s64 = ctx.r11.s64 + 22412;
	// bl 0x82120600
	ctx.lr = 0x821664FC;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6128
	ctx.r3.s64 = ctx.r1.s64 + 6128;
	// bl 0x82120600
	ctx.lr = 0x82166508;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6064
	ctx.r3.s64 = ctx.r1.s64 + 6064;
	// addi r4,r11,22428
	ctx.r4.s64 = ctx.r11.s64 + 22428;
	// bl 0x82120600
	ctx.lr = 0x82166518;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6192
	ctx.r6.s64 = ctx.r1.s64 + 6192;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// addi r5,r1,6128
	ctx.r5.s64 = ctx.r1.s64 + 6128;
	// addi r4,r1,6064
	ctx.r4.s64 = ctx.r1.s64 + 6064;
	// bl 0x8213ac58
	ctx.lr = 0x82166534;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6064
	ctx.r3.s64 = ctx.r1.s64 + 6064;
	// bl 0x82120ac0
	ctx.lr = 0x82166544;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6128
	ctx.r3.s64 = ctx.r1.s64 + 6128;
	// bl 0x82120ac0
	ctx.lr = 0x82166554;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6192
	ctx.r3.s64 = ctx.r1.s64 + 6192;
	// bl 0x82120ac0
	ctx.lr = 0x82166564;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6384
	ctx.r3.s64 = ctx.r1.s64 + 6384;
	// addi r4,r11,22452
	ctx.r4.s64 = ctx.r11.s64 + 22452;
	// bl 0x82120600
	ctx.lr = 0x82166574;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6320
	ctx.r3.s64 = ctx.r1.s64 + 6320;
	// addi r30,r11,-23844
	r30.s64 = ctx.r11.s64 + -23844;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82166588;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6256
	ctx.r3.s64 = ctx.r1.s64 + 6256;
	// addi r4,r11,22468
	ctx.r4.s64 = ctx.r11.s64 + 22468;
	// bl 0x82120600
	ctx.lr = 0x82166598;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6384
	ctx.r6.s64 = ctx.r1.s64 + 6384;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-976
	ctx.r7.s64 = ctx.r11.s64 + -976;
	// addi r5,r1,6320
	ctx.r5.s64 = ctx.r1.s64 + 6320;
	// addi r4,r1,6256
	ctx.r4.s64 = ctx.r1.s64 + 6256;
	// bl 0x8213ac58
	ctx.lr = 0x821665B4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6256
	ctx.r3.s64 = ctx.r1.s64 + 6256;
	// bl 0x82120ac0
	ctx.lr = 0x821665C4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6320
	ctx.r3.s64 = ctx.r1.s64 + 6320;
	// bl 0x82120ac0
	ctx.lr = 0x821665D4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6384
	ctx.r3.s64 = ctx.r1.s64 + 6384;
	// bl 0x82120ac0
	ctx.lr = 0x821665E4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6576
	ctx.r3.s64 = ctx.r1.s64 + 6576;
	// addi r4,r11,22492
	ctx.r4.s64 = ctx.r11.s64 + 22492;
	// bl 0x82120600
	ctx.lr = 0x821665F4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6512
	ctx.r3.s64 = ctx.r1.s64 + 6512;
	// bl 0x82120600
	ctx.lr = 0x82166600;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6448
	ctx.r3.s64 = ctx.r1.s64 + 6448;
	// addi r4,r11,22508
	ctx.r4.s64 = ctx.r11.s64 + 22508;
	// bl 0x82120600
	ctx.lr = 0x82166610;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6576
	ctx.r6.s64 = ctx.r1.s64 + 6576;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-7568
	ctx.r7.s64 = ctx.r11.s64 + -7568;
	// addi r5,r1,6512
	ctx.r5.s64 = ctx.r1.s64 + 6512;
	// addi r4,r1,6448
	ctx.r4.s64 = ctx.r1.s64 + 6448;
	// bl 0x8213ac58
	ctx.lr = 0x8216662C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6448
	ctx.r3.s64 = ctx.r1.s64 + 6448;
	// bl 0x82120ac0
	ctx.lr = 0x8216663C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6512
	ctx.r3.s64 = ctx.r1.s64 + 6512;
	// bl 0x82120ac0
	ctx.lr = 0x8216664C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6576
	ctx.r3.s64 = ctx.r1.s64 + 6576;
	// bl 0x82120ac0
	ctx.lr = 0x8216665C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6768
	ctx.r3.s64 = ctx.r1.s64 + 6768;
	// addi r4,r11,22532
	ctx.r4.s64 = ctx.r11.s64 + 22532;
	// bl 0x82120600
	ctx.lr = 0x8216666C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6704
	ctx.r3.s64 = ctx.r1.s64 + 6704;
	// bl 0x82120600
	ctx.lr = 0x82166678;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6640
	ctx.r3.s64 = ctx.r1.s64 + 6640;
	// addi r4,r11,22544
	ctx.r4.s64 = ctx.r11.s64 + 22544;
	// bl 0x82120600
	ctx.lr = 0x82166688;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6768
	ctx.r6.s64 = ctx.r1.s64 + 6768;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-8456
	ctx.r7.s64 = ctx.r11.s64 + -8456;
	// addi r5,r1,6704
	ctx.r5.s64 = ctx.r1.s64 + 6704;
	// addi r4,r1,6640
	ctx.r4.s64 = ctx.r1.s64 + 6640;
	// bl 0x8213ac58
	ctx.lr = 0x821666A4;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6640
	ctx.r3.s64 = ctx.r1.s64 + 6640;
	// bl 0x82120ac0
	ctx.lr = 0x821666B4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6704
	ctx.r3.s64 = ctx.r1.s64 + 6704;
	// bl 0x82120ac0
	ctx.lr = 0x821666C4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6768
	ctx.r3.s64 = ctx.r1.s64 + 6768;
	// bl 0x82120ac0
	ctx.lr = 0x821666D4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6960
	ctx.r3.s64 = ctx.r1.s64 + 6960;
	// addi r4,r11,22564
	ctx.r4.s64 = ctx.r11.s64 + 22564;
	// bl 0x82120600
	ctx.lr = 0x821666E4;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,6896
	ctx.r3.s64 = ctx.r1.s64 + 6896;
	// bl 0x82120600
	ctx.lr = 0x821666F0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6832
	ctx.r3.s64 = ctx.r1.s64 + 6832;
	// addi r4,r11,22576
	ctx.r4.s64 = ctx.r11.s64 + 22576;
	// bl 0x82120600
	ctx.lr = 0x82166700;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,6960
	ctx.r6.s64 = ctx.r1.s64 + 6960;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-8864
	ctx.r7.s64 = ctx.r11.s64 + -8864;
	// addi r5,r1,6896
	ctx.r5.s64 = ctx.r1.s64 + 6896;
	// addi r4,r1,6832
	ctx.r4.s64 = ctx.r1.s64 + 6832;
	// bl 0x8213ac58
	ctx.lr = 0x8216671C;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6832
	ctx.r3.s64 = ctx.r1.s64 + 6832;
	// bl 0x82120ac0
	ctx.lr = 0x8216672C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6896
	ctx.r3.s64 = ctx.r1.s64 + 6896;
	// bl 0x82120ac0
	ctx.lr = 0x8216673C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6960
	ctx.r3.s64 = ctx.r1.s64 + 6960;
	// bl 0x82120ac0
	ctx.lr = 0x8216674C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7152
	ctx.r3.s64 = ctx.r1.s64 + 7152;
	// addi r30,r11,22596
	r30.s64 = ctx.r11.s64 + 22596;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82166760;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7088
	ctx.r3.s64 = ctx.r1.s64 + 7088;
	// bl 0x82120600
	ctx.lr = 0x8216676C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7024
	ctx.r3.s64 = ctx.r1.s64 + 7024;
	// addi r4,r11,22604
	ctx.r4.s64 = ctx.r11.s64 + 22604;
	// bl 0x82120600
	ctx.lr = 0x8216677C;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,7152
	ctx.r6.s64 = ctx.r1.s64 + 7152;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-14512
	ctx.r7.s64 = ctx.r11.s64 + -14512;
	// addi r5,r1,7088
	ctx.r5.s64 = ctx.r1.s64 + 7088;
	// addi r4,r1,7024
	ctx.r4.s64 = ctx.r1.s64 + 7024;
	// bl 0x8213ac58
	ctx.lr = 0x82166798;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7024
	ctx.r3.s64 = ctx.r1.s64 + 7024;
	// bl 0x82120ac0
	ctx.lr = 0x821667A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7088
	ctx.r3.s64 = ctx.r1.s64 + 7088;
	// bl 0x82120ac0
	ctx.lr = 0x821667B8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7152
	ctx.r3.s64 = ctx.r1.s64 + 7152;
	// bl 0x82120ac0
	ctx.lr = 0x821667C8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7344
	ctx.r3.s64 = ctx.r1.s64 + 7344;
	// addi r4,r11,22620
	ctx.r4.s64 = ctx.r11.s64 + 22620;
	// bl 0x82120600
	ctx.lr = 0x821667D8;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7280
	ctx.r3.s64 = ctx.r1.s64 + 7280;
	// bl 0x82120600
	ctx.lr = 0x821667E4;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7216
	ctx.r3.s64 = ctx.r1.s64 + 7216;
	// addi r4,r11,22636
	ctx.r4.s64 = ctx.r11.s64 + 22636;
	// bl 0x82120600
	ctx.lr = 0x821667F4;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r6,r1,7344
	ctx.r6.s64 = ctx.r1.s64 + 7344;
	// addi r7,r11,-15592
	ctx.r7.s64 = ctx.r11.s64 + -15592;
	// addi r5,r1,7280
	ctx.r5.s64 = ctx.r1.s64 + 7280;
	// addi r4,r1,7216
	ctx.r4.s64 = ctx.r1.s64 + 7216;
	// bl 0x8213ac58
	ctx.lr = 0x82166810;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7216
	ctx.r3.s64 = ctx.r1.s64 + 7216;
	// bl 0x82120ac0
	ctx.lr = 0x82166820;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7280
	ctx.r3.s64 = ctx.r1.s64 + 7280;
	// bl 0x82120ac0
	ctx.lr = 0x82166830;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7344
	ctx.r3.s64 = ctx.r1.s64 + 7344;
	// bl 0x82120ac0
	ctx.lr = 0x82166840;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7536
	ctx.r3.s64 = ctx.r1.s64 + 7536;
	// addi r4,r11,22660
	ctx.r4.s64 = ctx.r11.s64 + 22660;
	// bl 0x82120600
	ctx.lr = 0x82166850;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7472
	ctx.r3.s64 = ctx.r1.s64 + 7472;
	// addi r30,r11,22672
	r30.s64 = ctx.r11.s64 + 22672;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82166864;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7408
	ctx.r3.s64 = ctx.r1.s64 + 7408;
	// addi r4,r11,22684
	ctx.r4.s64 = ctx.r11.s64 + 22684;
	// bl 0x82120600
	ctx.lr = 0x82166874;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,7536
	ctx.r6.s64 = ctx.r1.s64 + 7536;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-17112
	ctx.r7.s64 = ctx.r11.s64 + -17112;
	// addi r5,r1,7472
	ctx.r5.s64 = ctx.r1.s64 + 7472;
	// addi r4,r1,7408
	ctx.r4.s64 = ctx.r1.s64 + 7408;
	// bl 0x8213ac58
	ctx.lr = 0x82166890;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7408
	ctx.r3.s64 = ctx.r1.s64 + 7408;
	// bl 0x82120ac0
	ctx.lr = 0x821668A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7472
	ctx.r3.s64 = ctx.r1.s64 + 7472;
	// bl 0x82120ac0
	ctx.lr = 0x821668B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7536
	ctx.r3.s64 = ctx.r1.s64 + 7536;
	// bl 0x82120ac0
	ctx.lr = 0x821668C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7728
	ctx.r3.s64 = ctx.r1.s64 + 7728;
	// addi r4,r11,22704
	ctx.r4.s64 = ctx.r11.s64 + 22704;
	// bl 0x82120600
	ctx.lr = 0x821668D0;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,7664
	ctx.r3.s64 = ctx.r1.s64 + 7664;
	// bl 0x82120600
	ctx.lr = 0x821668DC;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7600
	ctx.r3.s64 = ctx.r1.s64 + 7600;
	// addi r4,r11,22720
	ctx.r4.s64 = ctx.r11.s64 + 22720;
	// bl 0x82120600
	ctx.lr = 0x821668EC;
	sub_82120600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,7728
	ctx.r6.s64 = ctx.r1.s64 + 7728;
	// lwz r3,6132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6132);
	// addi r7,r11,-16800
	ctx.r7.s64 = ctx.r11.s64 + -16800;
	// addi r5,r1,7664
	ctx.r5.s64 = ctx.r1.s64 + 7664;
	// addi r4,r1,7600
	ctx.r4.s64 = ctx.r1.s64 + 7600;
	// bl 0x8213ac58
	ctx.lr = 0x82166908;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7600
	ctx.r3.s64 = ctx.r1.s64 + 7600;
	// bl 0x82120ac0
	ctx.lr = 0x82166918;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7664
	ctx.r3.s64 = ctx.r1.s64 + 7664;
	// bl 0x82120ac0
	ctx.lr = 0x82166928;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7728
	ctx.r3.s64 = ctx.r1.s64 + 7728;
	// bl 0x82120ac0
	ctx.lr = 0x82166938;
	sub_82120AC0(ctx, base);
	// addi r1,r1,7792
	ctx.r1.s64 = ctx.r1.s64 + 7792;
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

DEFINE_REX_FUNC(sub_82250680) {
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
	// addi r11,r11,-12504
	ctx.r11.s64 = ctx.r11.s64 + -12504;
	// addi r10,r10,-11740
	ctx.r10.s64 = ctx.r10.s64 + -11740;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x8269d1b8
	ctx.lr = 0x822506BC;
	sub_8269D1B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x822506CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822506e8
	if (ctx.cr0.eq) goto loc_822506E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822506E8;
	sub_8269CE98(ctx, base);
loc_822506E8:
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

DEFINE_REX_FUNC(sub_82253010) {
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
	ctx.lr = 0x82253018;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,836(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f13,832(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 832);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r10,16592
	r29.s64 = ctx.r10.s64 + 16592;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r4,736
	ctx.r4.s64 = ctx.r4.s64 + 736;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,164(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f31,f11,f13,f0
	f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f0.f64)));
	// bl 0x82253188
	ctx.lr = 0x82253064;
	sub_82253188(ctx, base);
	// addi r4,r30,784
	ctx.r4.s64 = r30.s64 + 784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82253188
	ctx.lr = 0x82253070;
	sub_82253188(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821df1d8
	ctx.lr = 0x82253084;
	sub_821DF1D8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821def40
	ctx.lr = 0x82253090;
	sub_821DEF40(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,572(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - f31.f64));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f7,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f6,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f10,784(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 784);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,740(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,788(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 788);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,744(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 744);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,792(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 792);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,736(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f5,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// lfs f13,816(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,768(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 768);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82260838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82260840;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822608d0
	if (!ctx.cr0.gt) goto loc_822608D0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r10,-13400
	r29.s64 = ctx.r10.s64 + -13400;
	// addi r28,r11,-13532
	r28.s64 = ctx.r11.s64 + -13532;
loc_82260878:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 616);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r11.u32);
	// bge 0x822608b0
	if (!ctx.cr0.lt) goto loc_822608B0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,479
	ctx.r5.s64 = 479;
	// bl 0x821231d0
	ctx.lr = 0x822608B0;
	sub_821231D0(ctx, base);
loc_822608B0:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822608C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82260878
	if (ctx.cr6.lt) goto loc_82260878;
loc_822608D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82264BB8) {
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
	ctx.lr = 0x82264BC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82264c70
	if (ctx.cr6.eq) goto loc_82264C70;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82264c70
	if (ctx.cr6.eq) goto loc_82264C70;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r26.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_82264BE8:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82263a78
	ctx.lr = 0x82264C00;
	sub_82263A78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264c30
	if (ctx.cr0.eq) goto loc_82264C30;
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r31
	ctx.r11.u64 = r31.u64 - ctx.r5.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8269cc20
	ctx.lr = 0x82264C28;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82264c64
	goto loc_82264C64;
loc_82264C30:
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x82264c4c
	goto loc_82264C4C;
loc_82264C3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwzu r5,-4(r29)
	ea = -4 + r29.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
loc_82264C4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82263a78
	ctx.lr = 0x82264C58;
	sub_82263A78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82264c3c
	if (!ctx.cr0.eq) goto loc_82264C3C;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82264C64:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x82264be8
	if (!ctx.cr6.eq) goto loc_82264BE8;
loc_82264C70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82269A60) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8226A4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// bne 0x8226a504
	if (!ctx.cr0.eq) goto loc_8226A504;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8226A504:
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwa r8,52(r3)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 52));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f12,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lfsx f9,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f11,f9,f13,f11
	ctx.f11.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f10,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f11,f10,f0,f11
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f11,340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// bge cr6,0x8226a5a4
	if (!ctx.cr6.lt) goto loc_8226A5A4;
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// b 0x8226a5ac
	goto loc_8226A5AC;
loc_8226A5A4:
	// fsubs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_8226A5AC:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82279720) {
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
	ctx.lr = 0x82279728;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lwz r3,6140(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6140);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r4,r5,-1568
	ctx.r4.s64 = ctx.r5.s64 + -1568;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// stw r8,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r26,16(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82279790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822797a4
	if (ctx.cr6.lt) goto loc_822797A4;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822797a8
	goto loc_822797A8;
loc_822797A4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822797A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,3500
	ctx.r3.s64 = r31.s64 + 3500;
	// addi r30,r31,3544
	r30.s64 = r31.s64 + 3544;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822e6ff8
	ctx.lr = 0x822797C4;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,34
	ctx.r9.s64 = 34;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x822797E8;
	sub_82174318(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6140(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6140);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f13,3544(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-1548
	ctx.r4.s64 = ctx.r11.s64 + -1548;
	// lfs f30,232(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	f30.f64 = double(temp.f32);
	// fmadds f29,f13,f30,f0
	f29.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82279820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82279834
	if (ctx.cr6.lt) goto loc_82279834;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82279838
	goto loc_82279838;
loc_82279834:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82279838:
	// addi r3,r31,3684
	ctx.r3.s64 = r31.s64 + 3684;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r29,r31,3728
	r29.s64 = r31.s64 + 3728;
	// bl 0x822e6ff8
	ctx.lr = 0x8227984C;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,34
	ctx.r9.s64 = 34;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279870;
	sub_82174318(ctx, base);
	// lfs f13,3728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f30,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f29.f64)));
	// lfs f12,24(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822798f8
	if (!ctx.cr6.lt) goto loc_822798F8;
	// lwz r3,6140(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6140);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-1520
	ctx.r4.s64 = ctx.r11.s64 + -1520;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822798A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822798bc
	if (ctx.cr6.lt) goto loc_822798BC;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822798c0
	goto loc_822798C0;
loc_822798BC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822798C0:
	// addi r3,r31,3592
	ctx.r3.s64 = r31.s64 + 3592;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r31,3636
	r31.s64 = r31.s64 + 3636;
	// bl 0x822e6ff8
	ctx.lr = 0x822798D4;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,130
	ctx.r9.s64 = 130;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x822798F8;
	sub_82174318(ctx, base);
loc_822798F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_82288008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822889D8) {
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
	ctx.lr = 0x822889E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82288a10
	if (ctx.cr6.eq) goto loc_82288A10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82288af8
	goto loc_82288AF8;
loc_82288A10:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82288af4
	if (!ctx.cr0.gt) goto loc_82288AF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r29,r11,-5060
	r29.s64 = ctx.r11.s64 + -5060;
loc_82288A44:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82288A54;
	sub_82120AC0(ctx, base);
	// lwz r3,6256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x82288A7C;
	sub_82120600(ctx, base);
	// lwz r3,6276(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6276);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82288AAC;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288ac4
	if (ctx.cr0.eq) goto loc_82288AC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288918
	ctx.lr = 0x82288AC0;
	sub_82288918(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_82288AC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82288AD4;
	sub_82120AC0(ctx, base);
	// lwz r3,6256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6256);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82288a44
	if (ctx.cr6.lt) goto loc_82288A44;
loc_82288AF4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82288AF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8228D930) {
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
	ctx.lr = 0x8228D938;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228d9ac
	if (!ctx.cr6.gt) goto loc_8228D9AC;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_8228D960:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228D96C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8228d994
	if (ctx.cr6.eq) goto loc_8228D994;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228d960
	if (ctx.cr6.lt) goto loc_8228D960;
	// b 0x8228d9ac
	goto loc_8228D9AC;
loc_8228D994:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228D9A0;
	sub_8228CA78(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8228da60
	if (!ctx.cr6.eq) goto loc_8228DA60;
loc_8228D9AC:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8228D9B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228d9cc
	if (ctx.cr0.eq) goto loc_8228D9CC;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// std r25,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, r25.u64);
	// b 0x8228d9d0
	goto loc_8228D9D0;
loc_8228D9CC:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_8228D9D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8228d9e0
	if (!ctx.cr6.eq) goto loc_8228D9E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228dae8
	goto loc_8228DAE8;
loc_8228D9E0:
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// std r11,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r11.u64);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r28,12(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228da4c
	if (!ctx.cr6.gt) goto loc_8228DA4C;
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
	// bgt cr6,0x8228da18
	if (ctx.cr6.gt) goto loc_8228DA18;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8228DA18:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228da4c
	if (!ctx.cr6.gt) goto loc_8228DA4C;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8228DA2C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8228DA3C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8228DA44;
	sub_8269D1B8(ctx, base);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8228DA4C:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228DA5C;
	sub_8228CA78(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_8228DA60:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r30,r11,-7936
	r30.s64 = ctx.r11.s64 + -7936;
loc_8228DA6C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228DA78;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8228da9c
	if (!ctx.cr6.eq) goto loc_8228DA9C;
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
	// b 0x8228daa0
	goto loc_8228DAA0;
loc_8228DA9C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8228DAA0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8228dae4
	if (!ctx.cr6.lt) goto loc_8228DAE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x8215f670
	ctx.lr = 0x8228DAB4;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8228DAB8;
	sub_8215F270(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8228DAC8;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8228DAD0;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215efb0
	ctx.lr = 0x8228DADC;
	sub_8215EFB0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8228da6c
	goto loc_8228DA6C;
loc_8228DAE4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228DAE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8229E678) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8229E680;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,3
	ctx.r6.s64 = 3;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_8229E704:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8229e718
	if (!ctx.cr6.eq) goto loc_8229E718;
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// b 0x8229e71c
	goto loc_8229E71C;
loc_8229E718:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8229E71C:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne cr6,0x8229e76c
	if (!ctx.cr6.eq) goto loc_8229E76C;
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x8229e7a4
	goto loc_8229E7A4;
loc_8229E76C:
	// lfd f10,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f9,8(r9)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f8,16(r9)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_8229E7A4:
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r3,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne 0x8229e704
	if (!ctx.cr0.eq) goto loc_8229E704;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E7E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A8398) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A83CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a842c
	if (ctx.cr0.eq) goto loc_822A842C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r7,r11,4552
	ctx.r7.s64 = ctx.r11.s64 + 4552;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,6696
	ctx.r8.s64 = ctx.r8.s64 + 6696;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x822a8430
	goto loc_822A8430;
loc_822A842C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A8430:
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

DEFINE_REX_FUNC(sub_822B0418) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822B0420;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c90
	ctx.lr = 0x822B0428;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f31.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// fmuls f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f29,f13,f31
	f29.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f28,f12,f31
	f28.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bctrl 
	ctx.lr = 0x822B0490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B04A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B04C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f29,f26
	ctx.f13.f64 = double(float(f29.f64 + f26.f64));
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f28,f27
	ctx.f11.f64 = double(float(f28.f64 + f27.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f30,f1
	ctx.f9.f64 = double(float(f30.f64 + ctx.f1.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f25,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	f25.f64 = double(temp.f32);
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f5,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmr f23,f25
	f23.f64 = f25.f64;
	// lfs f3,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f5
	ctx.f2.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f1,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fabs f30,f3
	f30.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f29,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	f29.f64 = double(temp.f32);
	// lfs f27,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	f27.f64 = double(temp.f32);
	// fabs f28,f1
	f28.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f26,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	f26.f64 = double(temp.f32);
	// lfs f24,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	f24.f64 = double(temp.f32);
	// fabs f29,f29
	f29.u64 = f29.u64 & ~0x8000000000000000;
	// lfs f22,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	f22.f64 = double(temp.f32);
	// fabs f27,f27
	f27.u64 = f27.u64 & ~0x8000000000000000;
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f31,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	f31.f64 = double(temp.f32);
	// fabs f26,f26
	f26.u64 = f26.u64 & ~0x8000000000000000;
	// fabs f25,f25
	f25.u64 = f25.u64 & ~0x8000000000000000;
	// fmuls f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f23,f23,f0
	f23.f64 = double(float(f23.f64 * ctx.f0.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmadds f10,f6,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f5,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f10.f64)));
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + f24.f64));
	// fmuls f5,f11,f26
	ctx.f5.f64 = double(float(ctx.f11.f64 * f26.f64));
	// lfs f6,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f31,f11,f29
	f31.f64 = double(float(ctx.f11.f64 * f29.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmadds f26,f22,f8,f23
	f26.f64 = double(float(std::fma(f22.f64, ctx.f8.f64, f23.f64)));
	// lfs f29,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	f29.f64 = double(temp.f32);
	// fmadds f8,f6,f8,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f0.f64)));
	// lfs f24,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmadds f11,f11,f2,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f7.f64)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f7,f13,f25,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, ctx.f5.f64)));
	// fmadds f0,f13,f27,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, f31.f64)));
	// fmadds f13,f1,f12,f26
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, f26.f64)));
	// fmadds f12,f3,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f11,f4,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f8,f28,f9,f7
	ctx.f8.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, ctx.f7.f64)));
	// fmadds f0,f9,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f0.f64)));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// std r8,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r8.u64);
	// std r9,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r9.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cdc
	ctx.lr = 0x822B0628;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C2518) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2720) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2870) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	REX_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3288) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3908) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A68) {
	REX_FUNC_PROLOGUE();
	// stb r4,10562(r3)
	REX_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C41C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r10,r7,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C80F8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x822c8200
	if (!ctx.cr6.eq) goto loc_822C8200;
	// lbz r10,10940(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10940);
	// stw r9,12892(r3)
	REX_STORE_U32(ctx.r3.u32 + 12892, ctx.r9.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c81e8
	if (!ctx.cr0.eq) goto loc_822C81E8;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c81e8
	if (!ctx.cr0.eq) goto loc_822C81E8;
	// lbz r11,12363(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12363);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c81e8
	if (!ctx.cr0.eq) goto loc_822C81E8;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c814c
	if (ctx.cr0.eq) goto loc_822C814C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c81dc
	goto loc_822C81DC;
loc_822C814C:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c81d4
	if (ctx.cr0.eq) goto loc_822C81D4;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r8,12904(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c816c
	if (ctx.cr6.eq) goto loc_822C816C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c81d4
	if (!ctx.cr6.eq) goto loc_822C81D4;
loc_822C816C:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r8,12908(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c8184
	if (ctx.cr6.eq) goto loc_822C8184;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c81d4
	if (!ctx.cr6.eq) goto loc_822C81D4;
loc_822C8184:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r8,12912(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c819c
	if (ctx.cr6.eq) goto loc_822C819C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c81d4
	if (!ctx.cr6.eq) goto loc_822C81D4;
loc_822C819C:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r8,12916(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c81b4
	if (ctx.cr6.eq) goto loc_822C81B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c81d4
	if (!ctx.cr6.eq) goto loc_822C81D4;
loc_822C81B4:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r8,12920(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c81cc
	if (ctx.cr6.eq) goto loc_822C81CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c81d4
	if (!ctx.cr6.eq) goto loc_822C81D4;
loc_822C81CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c81d8
	goto loc_822C81D8;
loc_822C81D4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C81D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C81DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822c81ec
	if (!ctx.cr0.eq) goto loc_822C81EC;
loc_822C81E8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C81EC:
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r10,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r10.u8);
	// stw r11,12884(r31)
	REX_STORE_U32(r31.u32 + 12884, ctx.r11.u32);
	// b 0x822c8218
	goto loc_822C8218;
loc_822C8200:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,12884(r31)
	REX_STORE_U32(r31.u32 + 12884, ctx.r4.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,12892(r31)
	REX_STORE_U32(r31.u32 + 12892, ctx.r10.u32);
	// stb r11,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r11.u8);
loc_822C8218:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r9,12888(r31)
	REX_STORE_U32(r31.u32 + 12888, ctx.r9.u32);
	// stw r4,10932(r31)
	REX_STORE_U32(r31.u32 + 10932, ctx.r4.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r9,10936(r31)
	REX_STORE_U32(r31.u32 + 10936, ctx.r9.u32);
	// ble cr6,0x822c823c
	if (!ctx.cr6.gt) goto loc_822C823C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C823C;
	sub_822D5B28(ctx, base);
loc_822C823C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822D3178) {
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
	ctx.lr = 0x822D3180;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822D31B4;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822d31c4
	if (!ctx.cr0.eq) goto loc_822D31C4;
loc_822D31BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d3290
	goto loc_822D3290;
loc_822D31C4:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822d2970
	ctx.lr = 0x822D3208;
	sub_822D2970(ctx, base);
	// not r11,r29
	ctx.r11.u64 = ~r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	r30.u64 = ctx.r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822D3228;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822d3240
	if (!ctx.cr0.eq) goto loc_822D3240;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D3238:
	// bl 0x823f0350
	ctx.lr = 0x822D323C;
	sub_823F0350(ctx, base);
	// b 0x822d31bc
	goto loc_822D31BC;
loc_822D3240:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d3274
	if (ctx.cr6.eq) goto loc_822D3274;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822D3254;
	sub_823F02B8(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne 0x822d3274
	if (!ctx.cr0.eq) goto loc_822D3274;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x822D3268;
	sub_823F0350(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d3238
	goto loc_822D3238;
loc_822D3274:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	r22.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF) | (r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r22,48(r31)
	REX_STORE_U32(r31.u32 + 48, r22.u32);
loc_822D3290:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822DB6F0) {
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
	ctx.lr = 0x822DB6F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,9096
	r27.s64 = 9096;
	// addi r31,r29,10272
	r31.s64 = r29.s64 + 10272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822db724
	if (!ctx.cr6.gt) goto loc_822DB724;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DB724;
	sub_822D5B28(ctx, base);
loc_822DB724:
	// li r11,8199
	ctx.r11.s64 = 8199;
	// li r10,2609
	ctx.r10.s64 = 2609;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,10396(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 10396);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,2607
	ctx.r8.u64 = ctx.r8.u64 | 2607;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,-16380
	ctx.r5.s64 = -1073479680;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r5,r5,15360
	ctx.r5.u64 = ctx.r5.u64 | 15360;
	// li r4,2609
	ctx.r4.s64 = 2609;
	// li r28,0
	r28.s64 = 0;
	// lis r26,-32768
	r26.s64 = -2147483648;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r25,8
	r25.s64 = 8;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
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
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stwu r25,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r4.u32 = ea;
	// stw r4,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r4.u32);
loc_822DB7A0:
	// cntlzd r10,r30
	ctx.r10.u64 = r30.u64 == 0 ? 64 : __builtin_clzll(r30.u64);
	// lwz r9,52(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 52);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r30,r8
	r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r30
	ctx.r8.u64 = ~r30.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cntlzd r28,r8
	r28.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r28,4,0,27
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r27
	r27.u64 = ctx.r10.u64 + r27.u64;
	// add r11,r25,r4
	ctx.r11.u64 = r25.u64 + ctx.r4.u64;
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822db810
	if (ctx.cr6.lt) goto loc_822DB810;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822dafe8
	ctx.lr = 0x822DB7F8;
	sub_822DAFE8(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r25,r31
	r31.u64 = r25.u64 + r31.u64;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// sld r30,r30,r11
	r30.u64 = ctx.r11.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r11.u8 & 0x7F));
	// b 0x822db858
	goto loc_822DB858;
loc_822DB810:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
loc_822DB834:
	// ld r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 4);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ld r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 12);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// rldicr r30,r30,1,62
	r30.u64 = __builtin_rotateleft64(r30.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// std r11,4(r4)
	REX_STORE_U64(ctx.r4.u32 + 4, ctx.r11.u64);
	// std r10,12(r4)
	REX_STORE_U64(ctx.r4.u32 + 12, ctx.r10.u64);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x822db834
	if (!ctx.cr0.eq) goto loc_822DB834;
loc_822DB858:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// bne cr6,0x822db7a0
	if (!ctx.cr6.eq) goto loc_822DB7A0;
	// stw r4,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822E64E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x822e650c
	if (!ctx.cr6.eq) goto loc_822E650C;
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
loc_822E650C:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e654c
	if (ctx.cr6.eq) goto loc_822E654C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r8,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e653c
	if (ctx.cr6.lt) goto loc_822E653C;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x822e6554
	goto loc_822E6554;
loc_822E653C:
	// rlwinm r8,r8,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1F;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e6554
	goto loc_822E6554;
loc_822E654C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,10,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
loc_822E6554:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r9,82(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 82);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srw r3,r8,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9F20) {
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
	ctx.lr = 0x822E9F70;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e9f9c
	if (ctx.cr0.eq) goto loc_822E9F9C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-26032
	ctx.r10.s64 = ctx.r10.s64 + -26032;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822e9fa0
	goto loc_822E9FA0;
loc_822E9F9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E9FA0:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822E9FAC;
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

DEFINE_REX_FUNC(sub_822EDCA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x822e6ff8
	ctx.lr = 0x822EDCD0;
	sub_822E6FF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822edd5c
	if (ctx.cr0.eq) goto loc_822EDD5C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EDCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822edd08
	if (ctx.cr6.lt) goto loc_822EDD08;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822edd0c
	goto loc_822EDD0C;
loc_822EDD08:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822EDD0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x822EDD14;
	sub_82120600(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822edd28
	if (!ctx.cr6.lt) goto loc_822EDD28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_822EDD28:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// lwz r8,132(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r6,r31,56
	ctx.r6.s64 = r31.s64 + 56;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82174558
	ctx.lr = 0x822EDD44;
	sub_82174558(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822EDD54;
	sub_82120AC0(ctx, base);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822edd64
	goto loc_822EDD64;
loc_822EDD5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
loc_822EDD64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F3C50) {
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
	ctx.lr = 0x822F3C58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,19324
	r29.s64 = ctx.r11.s64 + 19324;
	// addi r28,r10,19332
	r28.s64 = ctx.r10.s64 + 19332;
	// bne 0x822f3c8c
	if (!ctx.cr0.eq) goto loc_822F3C8C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822f3cc4
	if (ctx.cr6.eq) goto loc_822F3CC4;
loc_822F3C8C:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3ca4
	if (ctx.cr0.eq) goto loc_822F3CA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28264
	ctx.r4.s64 = ctx.r11.s64 + 28264;
	// bl 0x822f3c00
	ctx.lr = 0x822F3CA4;
	sub_822F3C00(ctx, base);
loc_822F3CA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bne cr6,0x822f3cb4
	if (!ctx.cr6.eq) goto loc_822F3CB4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_822F3CB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19132
	ctx.r4.s64 = ctx.r11.s64 + 19132;
	// bl 0x822f3c00
	ctx.lr = 0x822F3CC4;
	sub_822F3C00(ctx, base);
loc_822F3CC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f3cd8
	if (!ctx.cr0.eq) goto loc_822F3CD8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x822f3cf8
	if (!ctx.cr6.eq) goto loc_822F3CF8;
loc_822F3CD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bne cr6,0x822f3ce8
	if (!ctx.cr6.eq) goto loc_822F3CE8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_822F3CE8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19144
	ctx.r4.s64 = ctx.r11.s64 + 19144;
	// bl 0x822f3c00
	ctx.lr = 0x822F3CF8;
	sub_822F3C00(ctx, base);
loc_822F3CF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822F6CF8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2908
	ctx.r11.s64 = ctx.r11.s64 + 2908;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822f69b0
	ctx.lr = 0x822F6D28;
	sub_822F69B0(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6d38
	if (ctx.cr6.eq) goto loc_822F6D38;
	// bl 0x8269d770
	ctx.lr = 0x822F6D38;
	sub_8269D770(ctx, base);
loc_822F6D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822F9988) {
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
	// lfs f0,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x822f99b4
	if (!ctx.cr6.eq) goto loc_822F99B4;
	// lfs f0,268(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bne cr6,0x822f99b4
	if (!ctx.cr6.eq) goto loc_822F99B4;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9a6c
	if (ctx.cr0.eq) goto loc_822F9A6C;
loc_822F99B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822f99cc
	if (!ctx.cr6.lt) goto loc_822F99CC;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x822f99d0
	goto loc_822F99D0;
loc_822F99CC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_822F99D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822f99e8
	if (!ctx.cr6.lt) goto loc_822F99E8;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// b 0x822f99f4
	goto loc_822F99F4;
loc_822F99E8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822f99f4
	if (ctx.cr6.lt) goto loc_822F99F4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_822F99F4:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x822f9a04
	if (!ctx.cr6.lt) goto loc_822F9A04;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// b 0x822f9a08
	goto loc_822F9A08;
loc_822F9A04:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_822F9A08:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822f9a18
	if (!ctx.cr6.lt) goto loc_822F9A18;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// b 0x822f9a24
	goto loc_822F9A24;
loc_822F9A18:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x822f9a24
	if (ctx.cr6.lt) goto loc_822F9A24;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_822F9A24:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// stfs f1,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f2,268(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9a40
	if (ctx.cr6.eq) goto loc_822F9A40;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f9a44
	goto loc_822F9A44;
loc_822F9A40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F9A44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9a6c
	if (ctx.cr6.eq) goto loc_822F9A6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9a5c
	if (ctx.cr6.eq) goto loc_822F9A5C;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f9a60
	goto loc_822F9A60;
loc_822F9A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9A60:
	// bl 0x82330150
	ctx.lr = 0x822F9A64;
	sub_82330150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9a70
	if (!ctx.cr0.eq) goto loc_822F9A70;
loc_822F9A6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9A70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FFA38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffa50
	if (ctx.cr6.eq) goto loc_822FFA50;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822ffa54
	goto loc_822FFA54;
loc_822FFA50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FFA54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffa64
	if (!ctx.cr6.eq) goto loc_822FFA64;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_822FFA64:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x822ffa78
	if (ctx.cr6.eq) goto loc_822FFA78;
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_822FFA78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301070) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,284
	ctx.r6.s64 = 284;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x823010A0;
	sub_82331A00(ctx, base);
	// lwz r11,276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823010d8
	if (ctx.cr6.eq) goto loc_823010D8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823010C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x823010D8;
	sub_82331A00(ctx, base);
loc_823010D8:
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

DEFINE_REX_FUNC(sub_82303078) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8232fad8
	sub_8232FAD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82303578) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82303588
	if (!ctx.cr6.eq) goto loc_82303588;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82303588:
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823049B0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823049dc
	if (!ctx.cr6.eq) goto loc_823049DC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82304a14
	goto loc_82304A14;
loc_823049DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823049F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82304a14
	if (!ctx.cr0.eq) goto loc_82304A14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82304A14:
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

DEFINE_REX_FUNC(sub_82309848) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,4936
	ctx.r8.s64 = ctx.r9.s64 + 4936;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r9,r3,52
	ctx.r9.s64 = ctx.r3.s64 + 52;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230E2E0) {
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
	ctx.lr = 0x8230E2E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230e30c
	if (ctx.cr6.eq) goto loc_8230E30C;
	// lwz r29,40(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
loc_8230E30C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8230e328
	if (!ctx.cr6.eq) goto loc_8230E328;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8230e328
	if (!ctx.cr6.eq) goto loc_8230E328;
	// li r3,33
	ctx.r3.s64 = 33;
loc_8230E320:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8230E328:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e33c
	if (!ctx.cr0.eq) goto loc_8230E33C;
loc_8230E334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230e320
	goto loc_8230E320;
loc_8230E33C:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e3f8
	if (ctx.cr0.eq) goto loc_8230E3F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230e390
	if (ctx.cr6.eq) goto loc_8230E390;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230e3a4
	if (!ctx.cr6.gt) goto loc_8230E3A4;
	// li r31,0
	r31.s64 = 0;
loc_8230E360:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x823089c0
	ctx.lr = 0x8230E370;
	sub_823089C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e320
	if (!ctx.cr0.eq) goto loc_8230E320;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230e360
	if (ctx.cr6.lt) goto loc_8230E360;
	// b 0x8230e3a4
	goto loc_8230E3A4;
loc_8230E390:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823089c0
	ctx.lr = 0x8230E39C;
	sub_823089C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e320
	if (!ctx.cr0.eq) goto loc_8230E320;
loc_8230E3A4:
	// bl 0x8230ca10
	ctx.lr = 0x8230E3A8;
	sub_8230CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e320
	if (!ctx.cr0.eq) goto loc_8230E320;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r26,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8230ce30
	ctx.lr = 0x8230E3D4;
	sub_8230CE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e3e8
	if (ctx.cr0.eq) goto loc_8230E3E8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8230e320
	if (!ctx.cr6.eq) goto loc_8230E320;
	// b 0x8230e334
	goto loc_8230E334;
loc_8230E3E8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10796(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10796);
	// bl 0x82341948
	ctx.lr = 0x8230E3F4;
	sub_82341948(ctx, base);
	// b 0x8230e320
	goto loc_8230E320;
loc_8230E3F8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r24,-10812(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -10812);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8230E408;
	sub_8233E7E0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8230e46c
	if (ctx.cr6.eq) goto loc_8230E46C;
	// lwz r8,168(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230e444
	if (!ctx.cr6.gt) goto loc_8230E444;
	// lwz r9,32(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_8230E428:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e444
	if (ctx.cr6.eq) goto loc_8230E444;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230e428
	if (ctx.cr6.lt) goto loc_8230E428;
loc_8230E444:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230e45c
	if (ctx.cr6.lt) goto loc_8230E45C;
loc_8230E44C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230E454;
	sub_8233E820(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8230e320
	goto loc_8230E320;
loc_8230E45C:
	// lwz r10,44(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8230e51c
	goto loc_8230E51C;
loc_8230E46C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230e4bc
	if (ctx.cr6.eq) goto loc_8230E4BC;
	// lwz r9,88(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8230e4a4
	if (!ctx.cr6.gt) goto loc_8230E4A4;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 92);
loc_8230E488:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e4a4
	if (ctx.cr6.eq) goto loc_8230E4A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230e488
	if (ctx.cr6.lt) goto loc_8230E488;
loc_8230E4A4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e44c
	if (!ctx.cr6.lt) goto loc_8230E44C;
	// lwz r10,96(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 96);
loc_8230E4B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8230e51c
	goto loc_8230E51C;
loc_8230E4BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230e518
	if (ctx.cr6.eq) goto loc_8230E518;
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8230e4f4
	if (!ctx.cr6.gt) goto loc_8230E4F4;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
loc_8230E4D8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e4f4
	if (ctx.cr6.eq) goto loc_8230E4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230e4d8
	if (ctx.cr6.lt) goto loc_8230E4D8;
loc_8230E4F4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230e510
	if (ctx.cr6.lt) goto loc_8230E510;
	// li r31,37
	r31.s64 = 37;
loc_8230E500:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230E508;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8230e320
	goto loc_8230E320;
loc_8230E510:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// b 0x8230e4b0
	goto loc_8230E4B0;
loc_8230E518:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230E51C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8230e540
	if (ctx.cr6.eq) goto loc_8230E540;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8230E530:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8230e530
	if (!ctx.cr6.eq) goto loc_8230E530;
loc_8230E540:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8230dd00
	ctx.lr = 0x8230E54C;
	sub_8230DD00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e55c
	if (ctx.cr0.eq) goto loc_8230E55C;
loc_8230E554:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8230e500
	goto loc_8230E500;
loc_8230E55C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8230e5c4
	if (ctx.cr6.eq) goto loc_8230E5C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8230d050
	ctx.lr = 0x8230E574;
	sub_8230D050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e554
	if (!ctx.cr0.eq) goto loc_8230E554;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230e710
	if (!ctx.cr6.gt) goto loc_8230E710;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8230E594:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e5b4
	if (ctx.cr6.eq) goto loc_8230E5B4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230e594
	if (ctx.cr6.lt) goto loc_8230E594;
	// b 0x8230e710
	goto loc_8230E710;
loc_8230E5B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7a10
	ctx.lr = 0x8230E5C0;
	sub_822F7A10(ctx, base);
	// b 0x8230e710
	goto loc_8230E710;
loc_8230E5C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230e668
	if (ctx.cr6.eq) goto loc_8230E668;
	// lwz r31,52(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r28,r29,52
	r28.s64 = r29.s64 + 52;
	// b 0x8230e65c
	goto loc_8230E65C;
loc_8230E5D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r31,-8
	r29.s64 = r31.s64 + -8;
	// bne cr6,0x8230e5e8
	if (!ctx.cr6.eq) goto loc_8230E5E8;
	// li r29,0
	r29.s64 = 0;
loc_8230E5E8:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230e61c
	if (!ctx.cr6.gt) goto loc_8230E61C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8230E600:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e61c
	if (ctx.cr6.eq) goto loc_8230E61C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230e600
	if (ctx.cr6.lt) goto loc_8230E600;
loc_8230E61C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f79d0
	ctx.lr = 0x8230E628;
	sub_822F79D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e658
	if (ctx.cr0.eq) goto loc_8230E658;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8230d050
	ctx.lr = 0x8230E640;
	sub_8230D050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e554
	if (!ctx.cr0.eq) goto loc_8230E554;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f7a10
	ctx.lr = 0x8230E658;
	sub_822F7A10(ctx, base);
loc_8230E658:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8230E65C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8230e5d8
	if (!ctx.cr6.eq) goto loc_8230E5D8;
	// b 0x8230e710
	goto loc_8230E710;
loc_8230E668:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230e710
	if (ctx.cr6.eq) goto loc_8230E710;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230e710
	if (!ctx.cr6.gt) goto loc_8230E710;
	// li r29,0
	r29.s64 = 0;
loc_8230E684:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwzx r31,r29,r11
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230e6c0
	if (!ctx.cr6.gt) goto loc_8230E6C0;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8230E6A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230e6c0
	if (ctx.cr6.eq) goto loc_8230E6C0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230e6a4
	if (ctx.cr6.lt) goto loc_8230E6A4;
loc_8230E6C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f79d0
	ctx.lr = 0x8230E6CC;
	sub_822F79D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e6fc
	if (ctx.cr0.eq) goto loc_8230E6FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8230d050
	ctx.lr = 0x8230E6E4;
	sub_8230D050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e554
	if (!ctx.cr0.eq) goto loc_8230E554;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7a10
	ctx.lr = 0x8230E6FC;
	sub_822F7A10(ctx, base);
loc_8230E6FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230e684
	if (ctx.cr6.lt) goto loc_8230E684;
loc_8230E710:
	// li r31,0
	r31.s64 = 0;
	// b 0x8230e500
	goto loc_8230E500;
}

DEFINE_REX_FUNC(sub_8232BF30) {
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
	ctx.lr = 0x8232BF38;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c98
	ctx.lr = 0x8232BF40;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232c1a4
	if (!ctx.cr0.eq) goto loc_8232C1A4;
	// lwz r30,64(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8232c1a4
	if (ctx.cr6.eq) goto loc_8232C1A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
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
	// lfs f27,8228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8228);
	f27.f64 = double(temp.f32);
	// lfs f28,8224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8224);
	f28.f64 = double(temp.f32);
	// clrlwi r27,r4,24
	r27.u64 = ctx.r4.u32 & 0xFF;
	// lfs f29,7620(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7620);
	f29.f64 = double(temp.f32);
	// lfs f31,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,7624(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7624);
	f30.f64 = double(temp.f32);
	// lfs f26,3716(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3716);
	f26.f64 = double(temp.f32);
loc_8232BF98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x8232bfa8
	if (!ctx.cr6.eq) goto loc_8232BFA8;
	// li r31,0
	r31.s64 = 0;
loc_8232BFA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8232c16c
	if (ctx.cr6.eq) goto loc_8232C16C;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232c16c
	if (ctx.cr6.eq) goto loc_8232C16C;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8232ff18
	ctx.lr = 0x8232BFC4;
	sub_8232FF18(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8232bfe0
	if (!ctx.cr6.eq) goto loc_8232BFE0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8232c198
	if (ctx.cr6.gt) goto loc_8232C198;
loc_8232BFE0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232c708
	ctx.lr = 0x8232BFF4;
	sub_8232C708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c1a8
	if (!ctx.cr0.eq) goto loc_8232C1A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8232fea8
	ctx.lr = 0x8232C024;
	sub_8232FEA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c1a8
	if (!ctx.cr0.eq) goto loc_8232C1A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8232c138
	if (!ctx.cr6.eq) goto loc_8232C138;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8232c098
	if (!ctx.cr6.eq) goto loc_8232C098;
loc_8232C050:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8232C058:
	// bne cr6,0x8232c138
	if (!ctx.cr6.eq) goto loc_8232C138;
loc_8232C05C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232C064;
	sub_826A16A0(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f1.f64));
	// lfs f1,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232C070;
	sub_826A16A0(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64));
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232C07C;
	sub_826A16A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 - ctx.f0.f64));
	// fmadds f1,f0,f13,f25
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f25.f64)));
	// bl 0x826a03b0
	ctx.lr = 0x8232C090;
	sub_826A03B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x8232c134
	goto loc_8232C134;
loc_8232C098:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8232c050
	if (ctx.cr6.eq) goto loc_8232C050;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8232c050
	if (ctx.cr6.eq) goto loc_8232C050;
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x8232c050
	if (ctx.cr6.eq) goto loc_8232C050;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8232c050
	if (ctx.cr6.eq) goto loc_8232C050;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x8232c0d4
	if (!ctx.cr6.eq) goto loc_8232C0D4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8232c05c
	if (ctx.cr6.eq) goto loc_8232C05C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// b 0x8232c058
	goto loc_8232C058;
loc_8232C0D4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232c108
	if (ctx.cr0.eq) goto loc_8232C108;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232c138
	if (!ctx.cr6.eq) goto loc_8232C138;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8232C0F8;
	sub_826A03B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// b 0x8232c134
	goto loc_8232C134;
loc_8232C108:
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232c138
	if (ctx.cr0.eq) goto loc_8232C138;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232c138
	if (!ctx.cr6.eq) goto loc_8232C138;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8232C128;
	sub_826A03B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
loc_8232C134:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8232C138:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232c154
	if (!ctx.cr0.eq) goto loc_8232C154;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
loc_8232C154:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8232fe48
	ctx.lr = 0x8232C164;
	sub_8232FE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c1a8
	if (!ctx.cr0.eq) goto loc_8232C1A8;
loc_8232C16C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232c198
	if (!ctx.cr6.eq) goto loc_8232C198;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232c198
	if (ctx.cr6.eq) goto loc_8232C198;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8232fd88
	ctx.lr = 0x8232C190;
	sub_8232FD88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c1a8
	if (!ctx.cr0.eq) goto loc_8232C1A8;
loc_8232C198:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8232bf98
	if (!ctx.cr6.eq) goto loc_8232BF98;
loc_8232C1A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232C1A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce4
	ctx.lr = 0x8232C1B4;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82348C80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r11,22024
	ctx.r3.s64 = ctx.r11.s64 + 22024;
	// b 0x823601b0
	sub_823601B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82349320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82349328;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349350
	if (!ctx.cr6.eq) goto loc_82349350;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
loc_82349350:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823493c4
	if (ctx.cr6.lt) goto loc_823493C4;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823493c4
	if (ctx.cr6.gt) goto loc_823493C4;
	// stw r3,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r3.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8234937C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823493c8
	if (!ctx.cr6.eq) goto loc_823493C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82349394
	if (ctx.cr6.eq) goto loc_82349394;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82349394:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823493b8
	if (ctx.cr6.eq) goto loc_823493B8;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// li r5,16
	ctx.r5.s64 = 16;
	// bgt cr6,0x823493ac
	if (ctx.cr6.gt) goto loc_823493AC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_823493AC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823314a0
	ctx.lr = 0x823493B8;
	sub_823314A0(ctx, base);
loc_823493B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
loc_823493C4:
	// li r3,37
	ctx.r3.s64 = 37;
loc_823493C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234CF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234cfa4
	if (!ctx.cr6.eq) goto loc_8234CFA4;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234CFA4:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234cfbc
	if (!ctx.cr6.eq) goto loc_8234CFBC;
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_8234CFBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234cfe8
	if (ctx.cr6.lt) goto loc_8234CFE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3740(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8234cfe8
	if (ctx.cr6.gt) goto loc_8234CFE8;
	// stfs f1,404(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234CFE8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234DCF8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8234DD00;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r23,r3,76
	r23.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234dd3c
	if (!ctx.cr6.eq) goto loc_8234DD3C;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
loc_8234DD3C:
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r9,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e328
	if (!ctx.cr6.eq) goto loc_8234E328;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r11,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234dd68
	if (ctx.cr6.eq) goto loc_8234DD68;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234dd78
	if (!ctx.cr6.eq) goto loc_8234DD78;
loc_8234DD68:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8234dd7c
	if (ctx.cr6.eq) goto loc_8234DD7C;
loc_8234DD78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8234DD7C:
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234e1e8
	if (ctx.cr6.eq) goto loc_8234E1E8;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e1e8
	if (!ctx.cr6.eq) goto loc_8234E1E8;
	// rlwinm r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// lfs f31,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	f31.f64 = double(temp.f32);
	// lfs f30,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	f30.f64 = double(temp.f32);
	// addi r29,r31,372
	r29.s64 = r31.s64 + 372;
	// addi r28,r31,376
	r28.s64 = r31.s64 + 376;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234dde4
	if (!ctx.cr6.eq) goto loc_8234DDE4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lbz r9,21004(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21004);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234dde4
	if (!ctx.cr6.eq) goto loc_8234DDE4;
	// lbz r11,24576(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234dde4
	if (!ctx.cr6.eq) goto loc_8234DDE4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234df3c
	if (ctx.cr6.eq) goto loc_8234DF3C;
loc_8234DDE4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r9,24560(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24560);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234df3c
	if (ctx.cr6.eq) goto loc_8234DF3C;
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234de38
	if (ctx.cr6.eq) goto loc_8234DE38;
	// lfs f0,20896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20896);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,20900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20900);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f7,20904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20904);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8234de50
	goto loc_8234DE50;
loc_8234DE38:
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8234DE50:
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234deac
	if (ctx.cr6.eq) goto loc_8234DEAC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,20896
	ctx.r4.s64 = ctx.r11.s64 + 20896;
	// addi r3,r11,24564
	ctx.r3.s64 = ctx.r11.s64 + 24564;
	// bl 0x82353f20
	ctx.lr = 0x8234DE74;
	sub_82353F20(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24980
	ctx.r4.s64 = ctx.r11.s64 + 24980;
	// li r27,1
	r27.s64 = 1;
	// bl 0x8234ba60
	ctx.lr = 0x8234DE90;
	sub_8234BA60(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x8235bb20
	ctx.lr = 0x8234DEA8;
	sub_8235BB20(ctx, base);
	// b 0x8234dec0
	goto loc_8234DEC0;
loc_8234DEAC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,24580
	ctx.r3.s64 = ctx.r11.s64 + 24580;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82353d30
	ctx.lr = 0x8234DEC0;
	sub_82353D30(ctx, base);
loc_8234DEC0:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8234ded8
	if (!ctx.cr6.eq) goto loc_8234DED8;
	// li r30,0
	r30.s64 = 0;
loc_8234DED8:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234df3c
	if (ctx.cr6.eq) goto loc_8234DF3C;
loc_8234DEE4:
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234df18
	if (!ctx.cr6.eq) goto loc_8234DF18;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234ba60
	ctx.lr = 0x8234DF04;
	sub_8234BA60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8235bb20
	ctx.lr = 0x8234DF18;
	sub_8235BB20(ctx, base);
loc_8234DF18:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8234df2c
	if (!ctx.cr6.eq) goto loc_8234DF2C;
	// li r30,0
	r30.s64 = 0;
loc_8234DF2C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234dee4
	if (!ctx.cr6.eq) goto loc_8234DEE4;
loc_8234DF3C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234dfa0
	if (!ctx.cr6.eq) goto loc_8234DFA0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r11,24580
	ctx.r3.s64 = ctx.r11.s64 + 24580;
	// bl 0x82353ae8
	ctx.lr = 0x8234DF58;
	sub_82353AE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234dfa0
	if (ctx.cr6.eq) goto loc_8234DFA0;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8234dfa0
	if (!ctx.cr6.eq) goto loc_8234DFA0;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r10,24980
	ctx.r3.s64 = ctx.r10.s64 + 24980;
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f1,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8235bb20
	ctx.lr = 0x8234DF9C;
	sub_8235BB20(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_8234DFA0:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dfd0
	if (ctx.cr6.eq) goto loc_8234DFD0;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234dfd0
	if (ctx.cr6.eq) goto loc_8234DFD0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x8234DFD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234DFD0:
	// lfs f9,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x8234dff0
	if (!ctx.cr6.eq) goto loc_8234DFF0;
	// lfs f0,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8234e1e8
	if (ctx.cr6.eq) goto loc_8234E1E8;
loc_8234DFF0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8234e004
	if (!ctx.cr6.eq) goto loc_8234E004;
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e1e8
	if (ctx.cr6.eq) goto loc_8234E1E8;
loc_8234E004:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,21712(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e02c
	if (ctx.cr6.eq) goto loc_8234E02C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// b 0x8234e034
	goto loc_8234E034;
loc_8234E02C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,5428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5428);
	ctx.f10.f64 = double(temp.f32);
loc_8234E034:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e0d8
	if (ctx.cr6.eq) goto loc_8234E0D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f31,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f9.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,9764(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9764);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5432(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5432);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x8234e094
	if (ctx.cr6.eq) goto loc_8234E094;
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234e084
	if (!ctx.cr6.lt) goto loc_8234E084;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8234e090
	if (!ctx.cr6.gt) goto loc_8234E090;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8234e090
	goto loc_8234E090;
loc_8234E084:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8234e090
	if (!ctx.cr6.lt) goto loc_8234E090;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234E090:
	// stfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
loc_8234E094:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// beq cr6,0x8234e0d8
	if (ctx.cr6.eq) goto loc_8234E0D8;
	// lfs f7,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fdivs f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234e0c8
	if (!ctx.cr6.lt) goto loc_8234E0C8;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8234e0d4
	if (!ctx.cr6.gt) goto loc_8234E0D4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8234e0d4
	goto loc_8234E0D4;
loc_8234E0C8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8234e0d4
	if (!ctx.cr6.lt) goto loc_8234E0D4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234E0D4:
	// stfs f0,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
loc_8234E0D8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e14c
	if (!ctx.cr6.eq) goto loc_8234E14C;
	// fcmpu cr6,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x8234e118
	if (!ctx.cr6.lt) goto loc_8234E118;
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// lfs f0,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f0,f11,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f10,364(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x8234e150
	if (!ctx.cr6.gt) goto loc_8234E150;
	// b 0x8234e14c
	goto loc_8234E14C;
loc_8234E118:
	// fcmpu cr6,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x8234e150
	if (!ctx.cr6.gt) goto loc_8234E150;
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// lfs f0,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f13,f10,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f8,364(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x8234e150
	if (!ctx.cr6.lt) goto loc_8234E150;
loc_8234E14C:
	// stfs f9,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
loc_8234E150:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e160
	if (ctx.cr6.eq) goto loc_8234E160;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
loc_8234E160:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8234e19c
	if (!ctx.cr6.lt) goto loc_8234E19C;
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// lfs f12,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f9,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x8234e1d4
	if (!ctx.cr6.gt) goto loc_8234E1D4;
	// b 0x8234e1d0
	goto loc_8234E1D0;
loc_8234E19C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234e1d4
	if (!ctx.cr6.gt) goto loc_8234E1D4;
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// lfs f13,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f9,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x8234e1d4
	if (!ctx.cr6.lt) goto loc_8234E1D4;
loc_8234E1D0:
	// stfs f0,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
loc_8234E1D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823508e0
	ctx.lr = 0x8234E1E8;
	sub_823508E0(ctx, base);
loc_8234E1E8:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e21c
	if (ctx.cr6.eq) goto loc_8234E21C;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234e21c
	if (ctx.cr6.eq) goto loc_8234E21C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8234e214
	if (ctx.cr6.gt) goto loc_8234E214;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8234e218
	goto loc_8234E218;
loc_8234E214:
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
loc_8234E218:
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_8234E21C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234adb0
	ctx.lr = 0x8234E228;
	sub_8234ADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e32c
	if (!ctx.cr6.eq) goto loc_8234E32C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e274
	if (!ctx.cr6.gt) goto loc_8234E274;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8234E244:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e32c
	if (!ctx.cr6.eq) goto loc_8234E32C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e244
	if (ctx.cr6.lt) goto loc_8234E244;
loc_8234E274:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d998
	ctx.lr = 0x8234E280;
	sub_8234D998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e32c
	if (!ctx.cr6.eq) goto loc_8234E32C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e2a4
	if (ctx.cr6.eq) goto loc_8234E2A4;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234e328
	if (!ctx.cr6.eq) goto loc_8234E328;
loc_8234E2A4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e2ec
	if (!ctx.cr6.gt) goto loc_8234E2EC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8234E2B8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E2D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e32c
	if (!ctx.cr6.eq) goto loc_8234E32C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e2b8
	if (ctx.cr6.lt) goto loc_8234E2B8;
loc_8234E2EC:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234e30c
	if (!ctx.cr6.eq) goto loc_8234E30C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lbz r10,21004(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21004);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234e328
	if (ctx.cr6.eq) goto loc_8234E328;
loc_8234E30C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82350620
	ctx.lr = 0x8234E314;
	sub_82350620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e32c
	if (!ctx.cr6.eq) goto loc_8234E32C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_8234E328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234E32C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8238AAB0) {
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
	ctx.lr = 0x8238AAB8;
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r21,0
	r21.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,1164(r1)
	REX_STORE_U32(ctx.r1.u32 + 1164, ctx.r4.u32);
	// sth r21,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r21.u16);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r5,1172(r1)
	REX_STORE_U32(ctx.r1.u32 + 1172, ctx.r5.u32);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238aaf8
	if (!ctx.cr6.eq) goto loc_8238AAF8;
loc_8238AAEC:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x826a1cd0
	return;
loc_8238AAF8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r9,21
	ctx.r9.s64 = 21;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// stw r21,252(r31)
	REX_STORE_U32(r31.u32 + 252, r21.u32);
	// stw r21,28(r31)
	REX_STORE_U32(r31.u32 + 28, r21.u32);
	// stw r21,32(r31)
	REX_STORE_U32(r31.u32 + 32, r21.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x8238AB28;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82340e38
	ctx.lr = 0x8238AB60;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x82340718
	ctx.lr = 0x8238AB80;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,19724
	ctx.r4.s64 = ctx.r11.s64 + 19724;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82331620
	ctx.lr = 0x8238AB9C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238aaec
	if (!ctx.cr6.eq) goto loc_8238AAEC;
	// li r23,64
	r23.s64 = 64;
	// addi r29,r31,792
	r29.s64 = r31.s64 + 792;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_8238ABBC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238abbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238ABBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r21,520(r31)
	REX_STORE_U32(r31.u32 + 520, r21.u32);
	// li r10,125
	ctx.r10.s64 = 125;
	// stb r23,1404(r31)
	REX_STORE_U8(r31.u32 + 1404, r23.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r21,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, r21.u32);
	// stw r10,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r10.u32);
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// stw r9,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r21,2140(r31)
	REX_STORE_U32(r31.u32 + 2140, r21.u32);
	// stfs f0,2148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2148, temp.u32);
	// stw r21,1424(r31)
	REX_STORE_U32(r31.u32 + 1424, r21.u32);
	// stfs f0,2144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2144, temp.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r28,r31,1268
	r28.s64 = r31.s64 + 1268;
	// addi r27,r31,1272
	r27.s64 = r31.s64 + 1272;
	// addi r30,r31,2140
	r30.s64 = r31.s64 + 2140;
	// bl 0x82340718
	ctx.lr = 0x8238AC1C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238AC30;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x8238aaec
	if (!ctx.cr6.eq) goto loc_8238AAEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82340e38
	ctx.lr = 0x8238AC54;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82340718
	ctx.lr = 0x8238AC74;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r31,1408
	ctx.r4.s64 = r31.s64 + 1408;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238AC88;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238AC9C;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r26,r31,788
	r26.s64 = r31.s64 + 788;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340d98
	ctx.lr = 0x8238ACB4;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238ACC8;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r31,1420
	ctx.r4.s64 = r31.s64 + 1420;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238ACDC;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r31,2162
	ctx.r4.s64 = r31.s64 + 2162;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238ACF0;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238AD04;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d48
	ctx.lr = 0x8238AD18;
	sub_82340D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r27,r31,532
	r27.s64 = r31.s64 + 532;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x8238AD3C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,19320
	ctx.r5.s64 = ctx.r11.s64 + 19320;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8238AD68;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r20,r11,19668
	r20.s64 = ctx.r11.s64 + 19668;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// ble cr6,0x8238adf4
	if (!ctx.cr6.gt) goto loc_8238ADF4;
loc_8238AD8C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2543
	ctx.r6.s64 = 2543;
	// li r4,688
	ctx.r4.s64 = 688;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238ADAC;
	sub_82330E40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238add0
	if (ctx.cr6.eq) goto loc_8238ADD0;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,4(r30)
	REX_STORE_U32(r30.u32 + 4, r30.u32);
	// stw r21,8(r30)
	REX_STORE_U32(r30.u32 + 8, r21.u32);
	// bl 0x8234d858
	ctx.lr = 0x8238ADCC;
	sub_8234D858(ctx, base);
	// b 0x8238add4
	goto loc_8238ADD4;
loc_8238ADD0:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8238ADD4:
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238ad8c
	if (ctx.cr6.lt) goto loc_8238AD8C;
loc_8238ADF4:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x82340e38
	ctx.lr = 0x8238AE08;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r11,1408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r8,r31,1408
	ctx.r8.s64 = r31.s64 + 1408;
	// stw r21,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238ae58
	if (!ctx.cr6.gt) goto loc_8238AE58;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// subfic r9,r31,-532
	ctx.xer.ca = r31.u32 <= 4294966764;
	ctx.r9.u64 = static_cast<uint64_t>(-532) - r31.u64;
loc_8238AE2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,1412(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8238ae44
	if (ctx.cr6.lt) goto loc_8238AE44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, ctx.r10.u32);
loc_8238AE44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238ae2c
	if (ctx.cr6.lt) goto loc_8238AE2C;
loc_8238AE58:
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lwz r11,1412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8238ae6c
	if (ctx.cr6.gt) goto loc_8238AE6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8238AE6C:
	// stw r11,1416(r31)
	REX_STORE_U32(r31.u32 + 1416, ctx.r11.u32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2574
	ctx.r6.s64 = 2574;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238AE90;
	sub_82330E40(ctx, base);
	// stw r3,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// mr r25,r21
	r25.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238b108
	if (!ctx.cr6.gt) goto loc_8238B108;
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r24,255
	r24.s64 = 255;
loc_8238AEB4:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// add r27,r26,r11
	r27.u64 = r26.u64 + ctx.r11.u64;
	// bl 0x82340718
	ctx.lr = 0x8238AED4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238AEE8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238AEFC;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238AF10;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2625
	ctx.r6.s64 = 2625;
	// addi r22,r31,788
	r22.s64 = r31.s64 + 788;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r8,788(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 788);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82330e40
	ctx.lr = 0x8238AF50;
	sub_82330E40(ctx, base);
	// stw r3,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b0f4
	if (ctx.cr6.eq) goto loc_8238B0F4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// mullw. r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8238b0f4
	if (!ctx.cr0.gt) goto loc_8238B0F4;
	// addi r30,r3,3
	r30.s64 = ctx.r3.s64 + 3;
loc_8238AF84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238AF90;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238b058
	if (ctx.cr6.eq) goto loc_8238B058;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238afd0
	if (ctx.cr6.eq) goto loc_8238AFD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238AFC4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8238AFD0:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238aff4
	if (ctx.cr6.eq) goto loc_8238AFF4;
	// addi r4,r30,-2
	ctx.r4.s64 = r30.s64 + -2;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238AFE8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8238AFF4:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b018
	if (ctx.cr6.eq) goto loc_8238B018;
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B00C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8238B018:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b03c
	if (ctx.cr6.eq) goto loc_8238B03C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B030;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8238B03C:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b0b4
	if (ctx.cr6.eq) goto loc_8238B0B4;
	// b 0x8238b0a0
	goto loc_8238B0A0;
loc_8238B04C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x826a1cd0
	return;
loc_8238B058:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b064
	if (ctx.cr6.eq) goto loc_8238B064;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
loc_8238B064:
	// addi r4,r30,-2
	ctx.r4.s64 = r30.s64 + -2;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B070;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B084;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B098;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
loc_8238B0A0:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B0AC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
loc_8238B0B4:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x8238b0c4
	if (!ctx.cr6.eq) goto loc_8238B0C4;
	// stb r24,0(r29)
	REX_STORE_U8(r29.u32 + 0, r24.u8);
loc_8238B0C4:
	// lbz r11,-2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -2);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x8238b0d4
	if (!ctx.cr6.gt) goto loc_8238B0D4;
	// stb r21,-2(r30)
	REX_STORE_U8(r30.u32 + -2, r21.u8);
loc_8238B0D4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,5
	r29.s64 = r29.s64 + 5;
	// addi r30,r30,5
	r30.s64 = r30.s64 + 5;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8238af84
	if (ctx.cr6.lt) goto loc_8238AF84;
loc_8238B0F4:
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238aeb4
	if (ctx.cr6.lt) goto loc_8238AEB4;
loc_8238B108:
	// lwz r10,1412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8238b178
	if (!ctx.cr6.lt) goto loc_8238B178;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8238B11C:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2747
	ctx.r6.s64 = 2747;
	// stwx r23,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r23.u32);
	// addi r11,r31,788
	ctx.r11.s64 = r31.s64 + 788;
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238B158;
	sub_82330E40(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lwz r11,1412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238b11c
	if (ctx.cr6.lt) goto loc_8238B11C;
loc_8238B178:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1420);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2760
	ctx.r6.s64 = 2760;
	// mulli r4,r10,1492
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r31,1420
	r30.s64 = r31.s64 + 1420;
	// bl 0x82330e40
	ctx.lr = 0x8238B1A0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r3.u32);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r17,r21
	r17.u64 = r21.u64;
	// li r18,1
	r18.s64 = 1;
	// li r14,2
	r14.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238bb18
	if (!ctx.cr6.gt) goto loc_8238BB18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r20,112
	r20.s64 = 112;
	// ori r19,r9,44100
	r19.u64 = ctx.r9.u64 | 44100;
	// addi r15,r11,19716
	r15.s64 = ctx.r11.s64 + 19716;
	// addi r16,r10,19560
	r16.s64 = ctx.r10.s64 + 19560;
loc_8238B1E0:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// mulli r10,r17,1492
	ctx.r10.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(1492));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r21,0
	r21.s64 = 0;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82340ff0
	ctx.lr = 0x8238B1FC;
	sub_82340FF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x8238B214;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238bb0c
	if (!ctx.cr6.eq) goto loc_8238BB0C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82340718
	ctx.lr = 0x8238B244;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B258;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238B26C;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// stw r10,28(r23)
	REX_STORE_U32(r23.u32 + 28, ctx.r10.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238bac8
	if (ctx.cr6.eq) goto loc_8238BAC8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82340718
	ctx.lr = 0x8238B2A0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r23,864
	ctx.r4.s64 = r23.s64 + 864;
	// bl 0x82340718
	ctx.lr = 0x8238B2C0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r23,962
	ctx.r4.s64 = r23.s64 + 962;
	// bl 0x82340718
	ctx.lr = 0x8238B2E0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r23,1050
	ctx.r4.s64 = r23.s64 + 1050;
	// bl 0x82340718
	ctx.lr = 0x8238B300;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r27,r23,961
	r27.s64 = r23.s64 + 961;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238B318;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r26,r23,1048
	r26.s64 = r23.s64 + 1048;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238B330;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1042
	ctx.r4.s64 = r23.s64 + 1042;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B344;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1043
	ctx.r4.s64 = r23.s64 + 1043;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B358;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1044
	ctx.r4.s64 = r23.s64 + 1044;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B36C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1130
	ctx.r4.s64 = r23.s64 + 1130;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B380;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1131
	ctx.r4.s64 = r23.s64 + 1131;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B394;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1132
	ctx.r4.s64 = r23.s64 + 1132;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B3A8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r28,r23,960
	r28.s64 = r23.s64 + 960;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238B3C0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r29,r23,1047
	r29.s64 = r23.s64 + 1047;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238B3D8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1223
	ctx.r4.s64 = r23.s64 + 1223;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B3EC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1224
	ctx.r4.s64 = r23.s64 + 1224;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B400;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1225
	ctx.r4.s64 = r23.s64 + 1225;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B414;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r23,1226
	ctx.r4.s64 = r23.s64 + 1226;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B428;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r30,r23,1228
	r30.s64 = r23.s64 + 1228;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340cf8
	ctx.lr = 0x8238B440;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 0);
	// rlwinm r9,r11,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// bge cr6,0x8238b464
	if (!ctx.cr6.lt) goto loc_8238B464;
	// stb r21,0(r28)
	REX_STORE_U8(r28.u32 + 0, r21.u8);
loc_8238B464:
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8238b474
	if (!ctx.cr6.lt) goto loc_8238B474;
	// stb r21,0(r29)
	REX_STORE_U8(r29.u32 + 0, r21.u8);
loc_8238B474:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82340e38
	ctx.lr = 0x8238B484;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b78c
	if (ctx.cr6.eq) goto loc_8238B78C;
	// addi r29,r23,80
	r29.s64 = r23.s64 + 80;
loc_8238B4A0:
	// addi r24,r29,-48
	r24.s64 = r29.s64 + -48;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8238B4B4;
	sub_823EF5F0(ctx, base);
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,1424(r31)
	REX_STORE_U32(r31.u32 + 1424, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82340718
	ctx.lr = 0x8238B4D8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r25,r29,-36
	r25.s64 = r29.s64 + -36;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82340718
	ctx.lr = 0x8238B4FC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r26,r29,-32
	r26.s64 = r29.s64 + -32;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340718
	ctx.lr = 0x8238B520;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r27,r29,-24
	r27.s64 = r29.s64 + -24;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r27,-16
	ctx.r4.s64 = r27.s64 + -16;
	// bl 0x82340c58
	ctx.lr = 0x8238B538;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x8238B54C;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// stw r18,0(r29)
	REX_STORE_U32(r29.u32 + 0, r18.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r28,72
	r28.s64 = 72;
	// mr r30,r18
	r30.u64 = r18.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238B56C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b588
	if (ctx.cr6.eq) goto loc_8238B588;
	// li r28,74
	r28.s64 = 74;
loc_8238B588:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b598
	if (ctx.cr6.eq) goto loc_8238B598;
	// rlwimi r28,r18,2,29,30
	r28.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x6) | (r28.u64 & 0xFFFFFFFFFFFFFFF9);
loc_8238B598:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238b5a8
	if (ctx.cr6.eq) goto loc_8238B5A8;
	// stw r14,0(r29)
	REX_STORE_U32(r29.u32 + 0, r14.u32);
loc_8238B5A8:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b5b8
	if (ctx.cr6.eq) goto loc_8238B5B8;
	// mr r30,r14
	r30.u64 = r14.u64;
loc_8238B5B8:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b5dc
	if (!ctx.cr6.eq) goto loc_8238B5DC;
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b5dc
	if (!ctx.cr6.eq) goto loc_8238B5DC;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_8238B5DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b5f4
	if (!ctx.cr6.eq) goto loc_8238B5F4;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// rlwimi r28,r18,0,29,31
	r28.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x7) | (r28.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_8238B5F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r27,-15
	ctx.r4.s64 = r27.s64 + -15;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r3,r9,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r7,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// divwu r10,r3,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r3.u32 / r30.u32 : 0);
	// divwu r9,r11,r30
	ctx.r9.u64 = uint32_t(r30.u32 ? ctx.r11.u32 / r30.u32 : 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B64C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// addi r4,r27,-4
	ctx.r4.s64 = r27.s64 + -4;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x8238B660;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238B674;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82340718
	ctx.lr = 0x8238B694;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826a0568
	ctx.lr = 0x8238B6AC;
	sub_826A0568(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8238B6CC;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b770
	if (ctx.cr6.eq) goto loc_8238B770;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ef5f0
	ctx.lr = 0x8238B6F0;
	sub_823EF5F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// stw r20,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r20.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r18.u32);
	// ori r5,r28,9216
	ctx.r5.u64 = r28.u64 | 9216;
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8233cb78
	ctx.lr = 0x8238B724;
	sub_8233CB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b744
	if (!ctx.cr6.eq) goto loc_8238B744;
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b770
	if (ctx.cr6.eq) goto loc_8238B770;
loc_8238B744:
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,172(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238B770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238B770:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r29,r29,52
	r29.s64 = r29.s64 + 52;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238b4a0
	if (ctx.cr6.lt) goto loc_8238B4A0;
	// cmplwi cr6,r22,16
	ctx.cr6.compare<uint32_t>(r22.u32, 16, ctx.xer);
	// bge cr6,0x8238b7ac
	if (!ctx.cr6.lt) goto loc_8238B7AC;
loc_8238B78C:
	// subfic r10,r22,16
	ctx.xer.ca = r22.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - r22.u64;
	// mulli r11,r22,52
	ctx.r11.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(52));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
loc_8238B7A4:
	// stwu r10,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238b7a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238B7A4;
loc_8238B7AC:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238baf4
	if (ctx.cr6.eq) goto loc_8238BAF4;
	// addi r27,r23,32
	r27.s64 = r23.s64 + 32;
loc_8238B7C0:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238ba88
	if (ctx.cr6.eq) goto loc_8238BA88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// lwz r30,28(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r27,12
	r28.s64 = r27.s64 + 12;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238ba88
	if (ctx.cr6.eq) goto loc_8238BA88;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3161
	ctx.r7.s64 = 3161;
	// addi r5,r30,72
	ctx.r5.s64 = r30.s64 + 72;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e48
	ctx.lr = 0x8238B820;
	sub_82330E48(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82340718
	ctx.lr = 0x8238B844;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b854
	if (ctx.cr6.eq) goto loc_8238B854;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
loc_8238B854:
	// addi r29,r21,4
	r29.s64 = r21.s64 + 4;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331620
	ctx.lr = 0x8238B868;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238b94c
	if (!ctx.cr6.eq) goto loc_8238B94C;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ef5f0
	ctx.lr = 0x8238B880;
	sub_823EF5F0(ctx, base);
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r20,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r20.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8238B8C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r30,0,22,20
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r6,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r6.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// rlwinm r5,r5,0,19,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// ori r30,r5,2048
	r30.u64 = ctx.r5.u64 | 2048;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8233cb78
	ctx.lr = 0x8238B8F4;
	sub_8233CB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ba88
	if (!ctx.cr6.eq) goto loc_8238BA88;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b914
	if (!ctx.cr6.eq) goto loc_8238B914;
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ba88
	if (ctx.cr6.eq) goto loc_8238BA88;
loc_8238B914:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,172(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238B940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// b 0x8238ba88
	goto loc_8238BA88;
loc_8238B94C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238b98c
	if (!ctx.cr6.eq) goto loc_8238B98C;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b98c
	if (ctx.cr6.eq) goto loc_8238B98C;
	// addi r10,r21,-2
	ctx.r10.s64 = r21.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8238B96C:
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8238b96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238B96C;
loc_8238B98C:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238b9c4
	if (!ctx.cr6.eq) goto loc_8238B9C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238b9f4
	if (ctx.cr6.eq) goto loc_8238B9F4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r21,-1
	ctx.r11.s64 = r21.s64 + -1;
loc_8238B9AC:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8238b9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238B9AC;
	// b 0x8238b9f4
	goto loc_8238B9F4;
loc_8238B9C4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238b9f4
	if (!ctx.cr6.eq) goto loc_8238B9F4;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b9f4
	if (ctx.cr6.eq) goto loc_8238B9F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r21,-2
	ctx.r11.s64 = r21.s64 + -2;
loc_8238B9E0:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8238b9e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238B9E0;
loc_8238B9F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r21
	r28.u64 = r21.u64;
	// lwz r30,48(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_8238BA04:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238BA30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x823ef2f8
	ctx.lr = 0x8238BA48;
	sub_823EF2F8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238BA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf. r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x8238ba04
	if (!ctx.cr0.eq) goto loc_8238BA04;
loc_8238BA88:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,52
	r27.s64 = r27.s64 + 52;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238b7c0
	if (ctx.cr6.lt) goto loc_8238B7C0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8238baf4
	if (ctx.cr6.eq) goto loc_8238BAF4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3357
	ctx.r6.s64 = 3357;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238BAC4;
	sub_82330D00(ctx, base);
	// b 0x8238baf4
	goto loc_8238BAF4;
loc_8238BAC8:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r23,-20
	ctx.r11.s64 = r23.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8238BAD4:
	// stwu r21,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238bad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238BAD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82340e38
	ctx.lr = 0x8238BAEC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
loc_8238BAF4:
	// lwz r10,1420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1420);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r11,r31,1420
	ctx.r11.s64 = r31.s64 + 1420;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238b1e0
	if (ctx.cr6.lt) goto loc_8238B1E0;
	// li r21,0
	r21.s64 = 0;
loc_8238BB0C:
	// lwz r19,1172(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r16,1164(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1164);
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8238BB18:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// stw r21,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238bb54
	if (ctx.cr6.eq) goto loc_8238BB54;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3384
	ctx.r6.s64 = 3384;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238BB48;
	sub_82330E40(ctx, base);
	// stw r3,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
loc_8238BB54:
	// lwz r10,1420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1420);
	// addi r11,r31,1420
	ctx.r11.s64 = r31.s64 + 1420;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8238bbcc
	if (!ctx.cr6.gt) goto loc_8238BBCC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_8238BB70:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238bbb4
	if (!ctx.cr6.gt) goto loc_8238BBB4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
loc_8238BB90:
	// lwz r4,2204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r10,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lwz r3,28(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8238bb90
	if (ctx.cr6.lt) goto loc_8238BB90;
loc_8238BBB4:
	// lwz r10,1420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1420);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r31,1420
	ctx.r11.s64 = r31.s64 + 1420;
	// addi r6,r6,1492
	ctx.r6.s64 = ctx.r6.s64 + 1492;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238bb70
	if (ctx.cr6.lt) goto loc_8238BB70;
loc_8238BBCC:
	// lis r30,-32129
	r30.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3411
	ctx.r6.s64 = 3411;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238BBEC;
	sub_82330E40(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r11,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// beq cr6,0x8238bc24
	if (ctx.cr6.eq) goto loc_8238BC24;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238bc24
	if (ctx.cr6.eq) goto loc_8238BC24;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// b 0x8238bc44
	goto loc_8238BC44;
loc_8238BC24:
	// rlwinm r11,r16,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// beq cr6,0x8238bc40
	if (ctx.cr6.eq) goto loc_8238BC40;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// b 0x8238bc44
	goto loc_8238BC44;
loc_8238BC40:
	// stw r14,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r14.u32);
loc_8238BC44:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r14,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, r14.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x823314a0
	ctx.lr = 0x8238BC5C;
	sub_823314A0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addic. r11,r10,264
	ctx.xer.ca = ctx.r10.u32 > 4294967031;
	ctx.r11.s64 = ctx.r10.s64 + 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238bc74
	if (ctx.cr0.eq) goto loc_8238BC74;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8238BC74:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r21,188(r31)
	REX_STORE_U32(r31.u32 + 188, r21.u32);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// bgt cr6,0x8238bda8
	if (ctx.cr6.gt) goto loc_8238BDA8;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17244
	ctx.r12.s64 = ctx.r12.s64 + -17244;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8238BD24;
	case 1:
		goto loc_8238BCD4;
	case 2:
		goto loc_8238BCE8;
	case 3:
		goto loc_8238BCFC;
	case 4:
		goto loc_8238BD10;
	case 5:
		goto loc_8238BD10;
	case 6:
		goto loc_8238BD24;
	case 7:
		goto loc_8238BD24;
	case 8:
		goto loc_8238BD24;
	case 9:
		goto loc_8238BD24;
	case 10:
		goto loc_8238BD24;
	case 11:
		goto loc_8238BD24;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238BCD4:
	// li r10,8
	ctx.r10.s64 = 8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BCE8:
	// li r10,16
	ctx.r10.s64 = 16;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BCFC:
	// li r10,24
	ctx.r10.s64 = 24;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BD10:
	// li r10,32
	ctx.r10.s64 = 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BD24:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17092
	ctx.r12.s64 = ctx.r12.s64 + -17092;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8238BD98;
	case 1:
		goto loc_8238BDA8;
	case 2:
		goto loc_8238BDA8;
	case 3:
		goto loc_8238BDA8;
	case 4:
		goto loc_8238BDA8;
	case 5:
		goto loc_8238BDA8;
	case 6:
		goto loc_8238BD6C;
	case 7:
		goto loc_8238BD78;
	case 8:
		goto loc_8238BD84;
	case 9:
		goto loc_8238BD90;
	case 10:
		goto loc_8238BD90;
	case 11:
		goto loc_8238BD90;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238BD6C:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BD78:
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BD84:
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238bd9c
	goto loc_8238BD9C;
loc_8238BD90:
	// stw r18,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r18.u32);
	// b 0x8238bda8
	goto loc_8238BDA8;
loc_8238BD98:
	// stw r21,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r21.u32);
loc_8238BD9C:
	// lwz r10,276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r9,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
loc_8238BDA8:
	// addi r11,r1,396
	ctx.r11.s64 = ctx.r1.s64 + 396;
	// stw r21,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, r21.u32);
	// addi r10,r1,396
	ctx.r10.s64 = ctx.r1.s64 + 396;
	// stw r11,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r10,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823ef5f0
	ctx.lr = 0x8238BDCC;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r9,19696
	ctx.r4.s64 = ctx.r9.s64 + 19696;
	// bl 0x82331480
	ctx.lr = 0x8238BDDC;
	sub_82331480(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r7,6
	ctx.r7.s64 = 6;
	// ori r6,r8,256
	ctx.r6.u64 = ctx.r8.u64 | 256;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r27,r31,524
	r27.s64 = r31.s64 + 524;
	// stw r6,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// stw r10,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// lwz r9,256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// stw r7,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// stw r9,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// bl 0x82336400
	ctx.lr = 0x8238BE1C;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3490
	ctx.r6.s64 = 3490;
	// addi r11,r31,788
	ctx.r11.s64 = r31.s64 + 788;
	// lwz r8,264(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,260(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 260, temp.u32);
	// lwz r3,788(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 788);
	// mulli r4,r3,592
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(592));
	// stw r3,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r3.u32);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238BE70;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r3.u32);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238bec4
	if (!ctx.cr6.gt) goto loc_8238BEC4;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8238BE90:
	// lwz r11,1052(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1052);
	// add. r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238beb0
	if (ctx.cr0.eq) goto loc_8238BEB0;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r21.u32);
	// bl 0x8234d858
	ctx.lr = 0x8238BEB0;
	sub_8234D858(ctx, base);
loc_8238BEB0:
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,592
	r30.s64 = r30.s64 + 592;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238be90
	if (ctx.cr6.lt) goto loc_8238BE90;
loc_8238BEC4:
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lwz r10,1048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3515
	ctx.r6.s64 = 3515;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238BEEC;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238befc
	if (ctx.cr6.eq) goto loc_8238BEFC;
	// bl 0x823583e8
	ctx.lr = 0x8238BEF8;
	sub_823583E8(ctx, base);
	// b 0x8238bf00
	goto loc_8238BF00;
loc_8238BEFC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8238BF00:
	// stw r3,2208(r31)
	REX_STORE_U32(r31.u32 + 2208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r3.u32);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82358408
	ctx.lr = 0x8238BF20;
	sub_82358408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3527
	ctx.r6.s64 = 3527;
	// mulli r4,r28,792
	ctx.r4.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(792));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238BF44;
	sub_82330E40(ctx, base);
	// stw r3,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8238bfb4
	if (!ctx.cr6.gt) goto loc_8238BFB4;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8238BF60:
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// add. r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238bf70
	if (ctx.cr0.eq) goto loc_8238BF70;
	// bl 0x823ac560
	ctx.lr = 0x8238BF70;
	sub_823AC560(ctx, base);
loc_8238BF70:
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,1056(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1056);
	// bl 0x823587d8
	ctx.lr = 0x8238BF88;
	sub_823587D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c030
	if (!ctx.cr6.eq) goto loc_8238C030;
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,792
	r30.s64 = r30.s64 + 792;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blt cr6,0x8238bf60
	if (ctx.cr6.lt) goto loc_8238BF60;
loc_8238BFB4:
	// rlwinm r11,r16,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238bfe0
	if (!ctx.cr6.eq) goto loc_8238BFE0;
	// rlwinm r11,r16,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238bfe0
	if (!ctx.cr6.eq) goto loc_8238BFE0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r21,528(r31)
	REX_STORE_U32(r31.u32 + 528, r21.u32);
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x8238c01c
	goto loc_8238C01C;
loc_8238BFE0:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3543
	ctx.r6.s64 = 3543;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// addi r10,r31,1408
	ctx.r10.s64 = r31.s64 + 1408;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238C008;
	sub_82330E40(ctx, base);
	// stw r3,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b04c
	if (ctx.cr6.eq) goto loc_8238B04C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a660
	ctx.lr = 0x8238C01C;
	sub_8238A660(ctx, base);
loc_8238C01C:
	// stw r21,28(r31)
	REX_STORE_U32(r31.u32 + 28, r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c8da8
	ctx.lr = 0x8238C02C;
	sub_823C8DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238C030:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824117C8) {
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
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824118ac
	if (!ctx.cr6.lt) goto loc_824118AC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_82411830:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82411830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411830;
loc_824118AC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824118c8
	if (ctx.cr6.eq) goto loc_824118C8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x824118C8;
	sub_825C73B8(ctx, base);
loc_824118C8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824118e4
	if (ctx.cr6.eq) goto loc_824118E4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x824118E4;
	sub_82409820(ctx, base);
loc_824118E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82417028) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824170fc
	if (ctx.cr6.eq) goto loc_824170FC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,23844
	ctx.r10.s64 = ctx.r10.s64 + 23844;
loc_82417060:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82417084
	if (ctx.cr0.eq) goto loc_82417084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82417060
	if (ctx.cr6.eq) goto loc_82417060;
loc_82417084:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824170d0
	if (!ctx.cr0.eq) goto loc_824170D0;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824170bc
	if (ctx.cr6.eq) goto loc_824170BC;
	// lwz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 640);
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x824170bc
	if (!ctx.cr6.eq) goto loc_824170BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,648(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 648);
	// li r5,1504
	ctx.r5.s64 = 1504;
	// addi r6,r11,23808
	ctx.r6.s64 = ctx.r11.s64 + 23808;
	// b 0x824170f4
	goto loc_824170F4;
loc_824170BC:
	// addi r5,r31,640
	ctx.r5.s64 = r31.s64 + 640;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a9d8
	ctx.lr = 0x824170CC;
	sub_8241A9D8(ctx, base);
	// b 0x824170fc
	goto loc_824170FC;
loc_824170D0:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824009e0
	ctx.lr = 0x824170E0;
	sub_824009E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
loc_824170F4:
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x824170FC;
	sub_8241A4F0(ctx, base);
loc_824170FC:
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

DEFINE_REX_FUNC(sub_8241C488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,-29112
	ctx.r6.s64 = ctx.r11.s64 + -29112;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r6,2
	ctx.r9.s64 = ctx.r6.s64 + 2;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8241C4AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241c4cc
	if (!ctx.cr0.eq) goto loc_8241C4CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241c4ac
	if (!ctx.cr6.eq) goto loc_8241C4AC;
loc_8241C4CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r11,-29116
	ctx.r4.s64 = ctx.r11.s64 + -29116;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
loc_8241C4E8:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241c508
	if (!ctx.cr0.eq) goto loc_8241C508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241c4e8
	if (!ctx.cr6.eq) goto loc_8241C4E8;
loc_8241C508:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r5,r11,-29120
	ctx.r5.s64 = ctx.r11.s64 + -29120;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
loc_8241C524:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241c544
	if (!ctx.cr0.eq) goto loc_8241C544;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241c524
	if (!ctx.cr6.eq) goto loc_8241C524;
loc_8241C544:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r9,r6,2
	ctx.r9.s64 = ctx.r6.s64 + 2;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8241C55C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241c57c
	if (!ctx.cr0.eq) goto loc_8241C57C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241c55c
	if (!ctx.cr6.eq) goto loc_8241C55C;
loc_8241C57C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
loc_8241C590:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241c5b0
	if (!ctx.cr0.eq) goto loc_8241C5B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241c590
	if (!ctx.cr6.eq) goto loc_8241C590;
loc_8241C5B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r5,2
	ctx.r8.s64 = ctx.r5.s64 + 2;
loc_8241C5C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241c5e4
	if (!ctx.cr0.eq) goto loc_8241C5E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241c5c4
	if (!ctx.cr6.eq) goto loc_8241C5C4;
loc_8241C5E4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241c654
	if (ctx.cr0.eq) goto loc_8241C654;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
loc_8241C5F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241c618
	if (ctx.cr0.eq) goto loc_8241C618;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241c5f4
	if (ctx.cr6.eq) goto loc_8241C5F4;
loc_8241C618:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8241c680
	if (!ctx.cr0.eq) goto loc_8241C680;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
loc_8241C630:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8241c680
	if (!ctx.cr0.eq) goto loc_8241C680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241c630
	if (!ctx.cr6.eq) goto loc_8241C630;
	// b 0x8241c680
	goto loc_8241C680;
loc_8241C654:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8241C65C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241c680
	if (ctx.cr0.eq) goto loc_8241C680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8241c65c
	if (ctx.cr6.eq) goto loc_8241C65C;
loc_8241C680:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243AD70) {
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
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243ada0
	goto loc_8243ADA0;
loc_8243AD94:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243adc4
	if (ctx.cr6.eq) goto loc_8243ADC4;
loc_8243ADA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438a18
	ctx.lr = 0x8243ADB8;
	sub_82438A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243ad94
	if (!ctx.cr0.lt) goto loc_8243AD94;
	// b 0x8243adc8
	goto loc_8243ADC8;
loc_8243ADC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243ADC8:
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

DEFINE_REX_FUNC(sub_8243C5E8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824bf588
	ctx.lr = 0x8243C60C;
	sub_824BF588(ctx, base);
	// stw r3,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8243F140) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1158
	ctx.lr = 0x8243F16C;
	sub_824C1158(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-15916
	ctx.r3.s64 = ctx.r9.s64 + -15916;
	// bl 0x823ecbd8
	ctx.lr = 0x8243F178;
	sub_823ECBD8(ctx, base);
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

DEFINE_REX_FUNC(sub_82440248) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244027c
	if (ctx.cr6.eq) goto loc_8244027C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244027c
	if (ctx.cr6.eq) goto loc_8244027C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244027c
	if (ctx.cr0.eq) goto loc_8244027C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8244027c
	if (ctx.cr6.eq) goto loc_8244027C;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// blr 
	return;
loc_8244027C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440660) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824406d0
	if (ctx.cr0.eq) goto loc_824406D0;
	// lbz r11,25(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824406a4
	if (!ctx.cr6.eq) goto loc_824406A4;
	// lhz r11,1546(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1546);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// sth r9,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r9.u16);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r11,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// b 0x824406d0
	goto loc_824406D0;
loc_824406A4:
	// lhz r9,1546(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 1546);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x824406b8
	if (ctx.cr0.eq) goto loc_824406B8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
loc_824406B8:
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x824406c8
	if (!ctx.cr6.lt) goto loc_824406C8;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_824406C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r11.u16);
loc_824406D0:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824406e4
	if (ctx.cr0.eq) goto loc_824406E4;
	// lfs f0,1584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
loc_824406E4:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440700
	if (ctx.cr0.eq) goto loc_82440700;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82440700
	if (!ctx.cr6.eq) goto loc_82440700;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_82440700:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440740
	if (ctx.cr0.eq) goto loc_82440740;
	// lbz r11,25(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82440724
	if (ctx.cr6.eq) goto loc_82440724;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82440740
	if (!ctx.cr6.eq) goto loc_82440740;
loc_82440724:
	// lwz r11,1652(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82440740
	if (ctx.cr6.eq) goto loc_82440740;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82440740
	if (!ctx.cr6.eq) goto loc_82440740;
	// stb r9,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r9.u8);
loc_82440740:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244075c
	if (ctx.cr0.eq) goto loc_8244075C;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8244075c
	if (!ctx.cr6.lt) goto loc_8244075C;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_8244075C:
	// lbz r10,25(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82440778
	if (ctx.cr6.eq) goto loc_82440778;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440778
	if (ctx.cr0.eq) goto loc_82440778;
	// stb r9,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r9.u8);
	// b 0x82440780
	goto loc_82440780;
loc_82440778:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_82440780:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440794
	if (ctx.cr0.eq) goto loc_82440794;
	// lbz r11,29(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_82440794:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824407bc
	if (ctx.cr0.eq) goto loc_824407BC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824407b0
	if (ctx.cr6.eq) goto loc_824407B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824407bc
	if (!ctx.cr6.eq) goto loc_824407BC;
loc_824407B0:
	// lbz r11,29(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_824407BC:
	// lbz r10,29(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stb r10,30(r4)
	REX_STORE_U8(ctx.r4.u32 + 30, ctx.r10.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824485B4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82448840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82448848;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82448864
	if (!ctx.cr6.eq) goto loc_82448864;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
loc_82448864:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x824488c4
	if (!ctx.cr6.eq) goto loc_824488C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824488b0
	if (ctx.cr6.eq) goto loc_824488B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824488b0
	if (ctx.cr6.eq) goto loc_824488B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244889c
	if (!ctx.cr6.eq) goto loc_8244889C;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// b 0x824488bc
	goto loc_824488BC;
loc_8244889C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82448968
	if (!ctx.cr6.eq) goto loc_82448968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x824488bc
	goto loc_824488BC;
loc_824488B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
loc_824488BC:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82448960
	goto loc_82448960;
loc_824488C4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x824488f8
	if (!ctx.cr6.eq) goto loc_824488F8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82448840
	ctx.lr = 0x824488DC;
	sub_82448840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82448970
	if (ctx.cr0.lt) goto loc_82448970;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82448960
	goto loc_82448960;
loc_824488F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82448968
	if (!ctx.cr6.eq) goto loc_82448968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8244890C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82448840
	ctx.lr = 0x82448924;
	sub_82448840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82448970
	if (ctx.cr0.lt) goto loc_82448970;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82448950
	if (!ctx.cr6.gt) goto loc_82448950;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82448950:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8244890c
	if (!ctx.cr6.eq) goto loc_8244890C;
loc_82448960:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82448970
	goto loc_82448970;
loc_82448968:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82448970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82454BE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r10,13324
	ctx.r6.s64 = ctx.r10.s64 + 13324;
	// addi r5,r9,13304
	ctx.r5.s64 = ctx.r9.s64 + 13304;
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,13288
	ctx.r4.s64 = ctx.r8.s64 + 13288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455078) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824551E8) {
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
	ctx.lr = 0x824551F0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82455210
	if (!ctx.cr6.eq) goto loc_82455210;
loc_82455208:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824554c0
	goto loc_824554C0;
loc_82455210:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824554bc
	if (ctx.cr0.eq) goto loc_824554BC;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824554bc
	if (ctx.cr6.eq) goto loc_824554BC;
	// clrlwi r22,r10,12
	r22.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// divwu r24,r9,r22
	r24.u64 = uint32_t(r22.u32 ? ctx.r9.u32 / r22.u32 : 0);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245525c
	if (ctx.cr6.eq) goto loc_8245525C;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245525c
	if (ctx.cr6.eq) goto loc_8245525C;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82455260
	if (!ctx.cr6.eq) goto loc_82455260;
loc_8245525C:
	// li r24,2
	r24.s64 = 2;
loc_82455260:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// ble cr6,0x824554bc
	if (!ctx.cr6.gt) goto loc_824554BC;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,124(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 124);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stwx r31,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, r31.u32);
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// stwx r31,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stwx r11,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r23,r31
	r23.u64 = r31.u64;
	// stwx r3,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r11,r7,r28
	REX_STORE_U32(ctx.r7.u32 + r28.u32, ctx.r11.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stwx r31,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, r31.u32);
	// stwx r11,r29,r5
	REX_STORE_U32(r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// beq cr6,0x82455444
	if (ctx.cr6.eq) goto loc_82455444;
	// rlwinm r26,r22,2,0,29
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_824552EC:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x82455328
	if (!ctx.cr6.eq) goto loc_82455328;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82455434
	if (!ctx.cr0.eq) goto loc_82455434;
loc_82455328:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82455344
	if (ctx.cr0.eq) goto loc_82455344;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82455344
	if (!ctx.cr0.eq) goto loc_82455344;
	// lwz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 124);
	// b 0x8245538c
	goto loc_8245538C;
loc_82455344:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82455354
	if (ctx.cr0.eq) goto loc_82455354;
	// lwz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 148);
	// b 0x8245538c
	goto loc_8245538C;
loc_82455354:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82455388
	if (ctx.cr0.eq) goto loc_82455388;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82455388
	if (!ctx.cr6.eq) goto loc_82455388;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82455388
	if (ctx.cr6.eq) goto loc_82455388;
	// lwz r5,128(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 128);
	// b 0x8245538c
	goto loc_8245538C;
loc_82455388:
	// lwz r5,136(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 136);
loc_8245538C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824553f0
	if (ctx.cr6.eq) goto loc_824553F0;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_824553A8:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824553e0
	if (!ctx.cr6.eq) goto loc_824553E0;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824553e0
	if (!ctx.cr6.eq) goto loc_824553E0;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824553f0
	if (ctx.cr6.eq) goto loc_824553F0;
loc_824553E0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x824553a8
	if (ctx.cr6.lt) goto loc_824553A8;
loc_824553F0:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// bne cr6,0x8245541c
	if (!ctx.cr6.eq) goto loc_8245541C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x824554c8
	if (ctx.cr6.gt) goto loc_824554C8;
loc_8245541C:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82455434
	if (!ctx.cr6.eq) goto loc_82455434;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bgt cr6,0x824554c8
	if (ctx.cr6.gt) goto loc_824554C8;
loc_82455434:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r28,r26,r28
	r28.u64 = r26.u64 + r28.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x824552ec
	if (ctx.cr6.lt) goto loc_824552EC;
loc_82455444:
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824554bc
	if (ctx.cr6.eq) goto loc_824554BC;
	// rlwinm r27,r22,2,0,29
	r27.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_82455454:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824554ac
	if (!ctx.cr6.eq) goto loc_824554AC;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// bctrl 
	ctx.lr = 0x82455494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x824554ac
	if (!ctx.cr6.eq) goto loc_824554AC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824554d8
	if (ctx.cr6.eq) goto loc_824554D8;
loc_824554AC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x82455454
	if (ctx.cr6.lt) goto loc_82455454;
loc_824554BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824554C0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cec
	return;
loc_824554C8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82455208
	if (ctx.cr6.eq) goto loc_82455208;
	// stw r27,0(r21)
	REX_STORE_U32(r21.u32 + 0, r27.u32);
	// b 0x82455208
	goto loc_82455208;
loc_824554D8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82455208
	if (ctx.cr6.eq) goto loc_82455208;
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// b 0x82455208
	goto loc_82455208;
}

DEFINE_REX_FUNC(sub_8246DE00) {
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
	ctx.lr = 0x8246DE08;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,260(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r9,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246e1a4
	if (!ctx.cr6.eq) goto loc_8246E1A4;
	// rlwinm r29,r9,2,10,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFFC;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r25,r9,12
	r25.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246de78
	if (ctx.cr0.eq) goto loc_8246DE78;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8246dea4
	goto loc_8246DEA4;
loc_8246DE78:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246e1a4
	if (ctx.cr0.eq) goto loc_8246E1A4;
	// li r31,1
	r31.s64 = 1;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8246DEA4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r24,352(r26)
	REX_STORE_U32(r26.u32 + 352, r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8246df24
	if (ctx.cr6.eq) goto loc_8246DF24;
	// subf r8,r6,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lfd f0,28680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 28680);
loc_8246DEC4:
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8246e1a4
	if (!ctx.cr6.eq) goto loc_8246E1A4;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r7,60(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r7,r7,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8246df14
	if (!ctx.cr0.eq) goto loc_8246DF14;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246df14
	if (!ctx.cr0.eq) goto loc_8246DF14;
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246df14
	if (ctx.cr0.eq) goto loc_8246DF14;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,352(r26)
	REX_STORE_U32(r26.u32 + 352, ctx.r11.u32);
loc_8246DF14:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// blt cr6,0x8246dec4
	if (ctx.cr6.lt) goto loc_8246DEC4;
loc_8246DF24:
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,136(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 136);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246df94
	if (!ctx.cr6.eq) goto loc_8246DF94;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246d648
	ctx.lr = 0x8246DF60;
	sub_8246D648(ctx, base);
	// lwz r11,352(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 352);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8246df8c
	if (!ctx.cr6.eq) goto loc_8246DF8C;
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4701
	ctx.r5.s64 = 4701;
	// addi r6,r10,28616
	ctx.r6.s64 = ctx.r10.s64 + 28616;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489ce8
	ctx.lr = 0x8246DF8C;
	sub_82489CE8(ctx, base);
loc_8246DF8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8246e1a8
	goto loc_8246E1A8;
loc_8246DF94:
	// lwz r10,132(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246e1a4
	if (!ctx.cr6.eq) goto loc_8246E1A4;
	// li r11,129
	ctx.r11.s64 = 129;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82467bd8
	ctx.lr = 0x8246DFBC;
	sub_82467BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246e1a8
	if (!ctx.cr0.eq) goto loc_8246E1A8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwzx r27,r11,r10
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246e1a4
	if (ctx.cr6.eq) goto loc_8246E1A4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8246e048
	if (ctx.cr6.eq) goto loc_8246E048;
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8246DFF0:
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r5,r9,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8246e048
	if (!ctx.cr0.eq) goto loc_8246E048;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r28.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r5,r5,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8246e048
	if (!ctx.cr0.eq) goto loc_8246E048;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8246e034
	if (!ctx.cr0.eq) goto loc_8246E034;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246e048
	if (ctx.cr0.eq) goto loc_8246E048;
loc_8246E034:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// blt cr6,0x8246dff0
	if (ctx.cr6.lt) goto loc_8246DFF0;
loc_8246E048:
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// beq cr6,0x8246e0c4
	if (ctx.cr6.eq) goto loc_8246E0C4;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8246e0b8
	if (ctx.cr6.eq) goto loc_8246E0B8;
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8246E064:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r6,r9,0,11,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8246e0b8
	if (!ctx.cr0.eq) goto loc_8246E0B8;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8246e0b8
	if (!ctx.cr0.eq) goto loc_8246E0B8;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8246e0a8
	if (!ctx.cr0.eq) goto loc_8246E0A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246e0b8
	if (ctx.cr0.eq) goto loc_8246E0B8;
loc_8246E0A8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, ctx.xer);
	// blt cr6,0x8246e064
	if (ctx.cr6.lt) goto loc_8246E064;
loc_8246E0B8:
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, ctx.xer);
	// beq cr6,0x8246e1a4
	if (ctx.cr6.eq) goto loc_8246E1A4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8246E0C4:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8246e188
	if (ctx.cr6.eq) goto loc_8246E188;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246E0D8:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82478758
	ctx.lr = 0x8246E104;
	sub_82478758(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x8246e198
	if (ctx.cr6.eq) goto loc_8246E198;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x8246e0d8
	if (ctx.cr6.lt) goto loc_8246E0D8;
loc_8246E188:
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// b 0x8246e1a8
	goto loc_8246E1A8;
loc_8246E198:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8246e1a8
	goto loc_8246E1A8;
loc_8246E1A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8246E1A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82493608) {
	REX_FUNC_PROLOGUE();
	// lwz r8,28(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82493668
	if (ctx.cr6.eq) goto loc_82493668;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_82493618:
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82493620:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x82493644
	if (ctx.cr0.eq) goto loc_82493644;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82493620
	if (ctx.cr6.eq) goto loc_82493620;
loc_82493644:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82493670
	if (ctx.cr0.eq) goto loc_82493670;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8249365c
	if (!ctx.cr6.lt) goto loc_8249365C;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82493660
	goto loc_82493660;
loc_8249365C:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_82493660:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82493618
	if (!ctx.cr6.eq) goto loc_82493618;
loc_82493668:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82493670:
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82494948) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82494a24
	if (ctx.cr6.eq) goto loc_82494A24;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x82494974;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494988
	if (ctx.cr0.eq) goto loc_82494988;
	// bl 0x82446f70
	ctx.lr = 0x82494980;
	sub_82446F70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8249498c
	goto loc_8249498C;
loc_82494988:
	// li r30,0
	r30.s64 = 0;
loc_8249498C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82494a24
	if (ctx.cr6.eq) goto loc_82494A24;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bl 0x82444750
	ctx.lr = 0x824949B8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824949e0
	if (ctx.cr0.eq) goto loc_824949E0;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
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
	ctx.lr = 0x824949DC;
	sub_824474C0(ctx, base);
	// b 0x824949e4
	goto loc_824949E4;
loc_824949E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824949E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82494a24
	if (ctx.cr6.eq) goto loc_82494A24;
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824949F8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494a18
	if (ctx.cr0.eq) goto loc_82494A18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444918
	ctx.lr = 0x82494A14;
	sub_82444918(ctx, base);
	// b 0x82494a1c
	goto loc_82494A1C;
loc_82494A18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494A1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82494a28
	if (!ctx.cr6.eq) goto loc_82494A28;
loc_82494A24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494A28:
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

DEFINE_REX_FUNC(sub_82498C30) {
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
	ctx.lr = 0x82498C38;
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82499030
	if (!ctx.cr6.eq) goto loc_82499030;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82498d60
	if (ctx.cr6.eq) goto loc_82498D60;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82446180
	ctx.lr = 0x82498C70;
	sub_82446180(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82446180
	ctx.lr = 0x82498C78;
	sub_82446180(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r31,4
	r31.s64 = 4;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82498c94
	if (!ctx.cr6.eq) goto loc_82498C94;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82498cc8
	goto loc_82498CC8;
loc_82498C94:
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// bl 0x82495868
	ctx.lr = 0x82498CAC;
	sub_82495868(ctx, base);
	// stw r3,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495798
	ctx.lr = 0x82498CBC;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82498cc8
	if (ctx.cr0.eq) goto loc_82498CC8;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r29.u32);
loc_82498CC8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82498cdc
	if (!ctx.cr6.eq) goto loc_82498CDC;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82498d10
	goto loc_82498D10;
loc_82498CDC:
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r29,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r31,r1,192
	r31.s64 = ctx.r1.s64 + 192;
	// bl 0x82495868
	ctx.lr = 0x82498CF4;
	sub_82495868(ctx, base);
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495798
	ctx.lr = 0x82498D04;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82498d10
	if (ctx.cr0.eq) goto loc_82498D10;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r29.u32);
loc_82498D10:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82498f98
	if (ctx.cr6.eq) goto loc_82498F98;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82498f98
	if (ctx.cr6.eq) goto loc_82498F98;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82498d38
	if (!ctx.cr6.eq) goto loc_82498D38;
loc_82498D30:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x8249902c
	goto loc_8249902C;
loc_82498D38:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82498e20
	if (!ctx.cr6.eq) goto loc_82498E20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82498dc0
	if (!ctx.cr6.eq) goto loc_82498DC0;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82499030
	if (!ctx.cr6.gt) goto loc_82499030;
loc_82498D60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-11404
	r31.s64 = ctx.r11.s64 + -11404;
loc_82498D68:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495950
	ctx.lr = 0x82498D7C;
	sub_82495950(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495950
	ctx.lr = 0x82498D90;
	sub_82495950(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// li r5,3017
	ctx.r5.s64 = 3017;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x8249903c
	if (!ctx.cr6.eq) goto loc_8249903C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r6,r11,-11440
	ctx.r6.s64 = ctx.r11.s64 + -11440;
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x82498DBC;
	sub_82494D48(ctx, base);
	// b 0x82499058
	goto loc_82499058;
loc_82498DC0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82498d30
	if (!ctx.cr6.eq) goto loc_82498D30;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82498de4
	if (!ctx.cr6.eq) goto loc_82498DE4;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
loc_82498DE4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82498dfc
	if (!ctx.cr6.eq) goto loc_82498DFC;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
loc_82498DFC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
loc_82498E10:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82498d60
	if (!ctx.cr6.eq) goto loc_82498D60;
	// b 0x82499030
	goto loc_82499030;
loc_82498E20:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82498eb0
	if (!ctx.cr6.eq) goto loc_82498EB0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82498e84
	if (!ctx.cr6.eq) goto loc_82498E84;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82498e54
	if (!ctx.cr6.eq) goto loc_82498E54;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
loc_82498E54:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82498e6c
	if (!ctx.cr6.eq) goto loc_82498E6C;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
loc_82498E6C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x82498e10
	goto loc_82498E10;
loc_82498E84:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82498d30
	if (!ctx.cr6.eq) goto loc_82498D30;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82499030
	if (!ctx.cr6.gt) goto loc_82499030;
	// b 0x82498d60
	goto loc_82498D60;
loc_82498EB0:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82499030
	if (!ctx.cr6.eq) goto loc_82499030;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82498d60
	if (!ctx.cr6.eq) goto loc_82498D60;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// blt cr6,0x82498ef8
	if (ctx.cr6.lt) goto loc_82498EF8;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgt cr6,0x82498ef8
	if (ctx.cr6.gt) goto loc_82498EF8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82499030
	if (ctx.cr6.eq) goto loc_82499030;
	// addi r11,r10,-47
	ctx.r11.s64 = ctx.r10.s64 + -47;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82499028
	goto loc_82499028;
loc_82498EF8:
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x82498f38
	if (!ctx.cr6.eq) goto loc_82498F38;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// b 0x82498f78
	goto loc_82498F78;
loc_82498F38:
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x82498f54
	if (ctx.cr6.eq) goto loc_82498F54;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x82498f54
	if (ctx.cr6.eq) goto loc_82498F54;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// b 0x82498d60
	goto loc_82498D60;
loc_82498F54:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x82498f7c
	if (ctx.cr6.eq) goto loc_82498F7C;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
loc_82498F78:
	// bne cr6,0x82498d60
	if (!ctx.cr6.eq) goto loc_82498D60;
loc_82498F7C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x824937e8
	ctx.lr = 0x82498F8C;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82498d60
	if (ctx.cr0.eq) goto loc_82498D60;
	// b 0x82499030
	goto loc_82499030;
loc_82498F98:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82498d60
	if (ctx.cr6.gt) goto loc_82498D60;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82499024
	if (ctx.cr6.eq) goto loc_82499024;
loc_82498FC4:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495d70
	ctx.lr = 0x82498FD8;
	sub_82495D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82498d60
	if (ctx.cr0.lt) goto loc_82498D60;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495d70
	ctx.lr = 0x82498FF4;
	sub_82495D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82498d60
	if (ctx.cr0.lt) goto loc_82498D60;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824987e0
	ctx.lr = 0x82499010;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82498d60
	if (ctx.cr0.eq) goto loc_82498D60;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x82498fc4
	if (ctx.cr6.lt) goto loc_82498FC4;
loc_82499024:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82499028:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8249902C:
	// beq cr6,0x82498d60
	if (ctx.cr6.eq) goto loc_82498D60;
loc_82499030:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-26856
	r31.s64 = ctx.r11.s64 + -26856;
	// b 0x82498d68
	goto loc_82498D68;
loc_8249903C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r6,r11,-11484
	ctx.r6.s64 = ctx.r11.s64 + -11484;
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82494d48
	ctx.lr = 0x82499058;
	sub_82494D48(ctx, base);
loc_82499058:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824BB760) {
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
	ctx.lr = 0x824BB768;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824bb86c
	if (!ctx.cr6.gt) goto loc_824BB86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BB7B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82471828
	ctx.lr = 0x824BB7F0;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x824bb828
	if (!ctx.cr6.gt) goto loc_824BB828;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
loc_824BB810:
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824bb810
	if (ctx.cr6.lt) goto loc_824BB810;
loc_824BB828:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bl 0x82471828
	ctx.lr = 0x824BB860;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824bbb50
	if (!ctx.cr0.lt) goto loc_824BBB50;
	// b 0x824bbb54
	goto loc_824BBB54;
loc_824BB86C:
	// mr r24,r31
	r24.u64 = r31.u64;
loc_824BB870:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824bbb44
	if (ctx.cr6.eq) goto loc_824BBB44;
	// mr r29,r31
	r29.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// li r28,2
	r28.s64 = 2;
loc_824BB890:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824bb920
	if (!ctx.cr6.eq) goto loc_824BB920;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824bb920
	if (!ctx.cr6.lt) goto loc_824BB920;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// bne cr6,0x824bb90c
	if (!ctx.cr6.eq) goto loc_824BB90C;
	// lwz r7,260(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r5,16(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BB904;
	sub_82471828(ctx, base);
loc_824BB904:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
loc_824BB90C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x824bbb34
	goto loc_824BBB34;
loc_824BB920:
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824bb9f0
	if (ctx.cr6.lt) goto loc_824BB9F0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x824bb90c
	if (!ctx.cr6.eq) goto loc_824BB90C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824bb96c
	if (!ctx.cr6.eq) goto loc_824BB96C;
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
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BB960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// li r25,1
	r25.s64 = 1;
loc_824BB96C:
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BB9A8;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BB9EC;
	sub_82471828(ctx, base);
	// b 0x824bb904
	goto loc_824BB904;
loc_824BB9F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824bba58
	if (!ctx.cr6.eq) goto loc_824BBA58;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824bba58
	if (!ctx.cr6.eq) goto loc_824BBA58;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// bne cr6,0x824bbb24
	if (!ctx.cr6.eq) goto loc_824BBB24;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBA54;
	sub_82471828(ctx, base);
	// b 0x824bbb1c
	goto loc_824BBB1C;
loc_824BBA58:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x824bbb24
	if (!ctx.cr6.eq) goto loc_824BBB24;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824bba9c
	if (!ctx.cr6.eq) goto loc_824BBA9C;
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
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BBA90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// li r25,1
	r25.s64 = 1;
loc_824BBA9C:
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBAD8;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBB1C;
	sub_82471828(ctx, base);
loc_824BBB1C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbb54
	if (ctx.cr0.lt) goto loc_824BBB54;
loc_824BBB24:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
loc_824BBB34:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824bb890
	if (ctx.cr6.lt) goto loc_824BB890;
loc_824BBB44:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// blt cr6,0x824bb870
	if (ctx.cr6.lt) goto loc_824BB870;
loc_824BBB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BBB54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824CC748) {
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
	ctx.lr = 0x824CC750;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,456(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r29,r30,r5
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,16(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r25,24(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r24,28(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r30,r4,r5
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x824cc894
	if (ctx.cr6.eq) goto loc_824CC894;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_824CC7B0:
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r23,r5,2
	r23.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r4,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r28,r23,r24
	r28.u64 = REX_LOAD_U32(r23.u32 + r24.u32);
	// lwzx r6,r4,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	// add r22,r31,r5
	r22.u64 = r31.u64 + ctx.r5.u64;
	// lwzx r4,r23,r26
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + r26.u32);
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r28,r31,r4
	r28.u64 = r31.u64 + ctx.r4.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r23,r22,r11
	r23.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r31.u8);
	// lbzx r31,r28,r11
	r31.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// stb r31,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// lbzu r31,1(r8)
	ea = 1 + ctx.r8.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r23,r31,r6
	r23.u64 = r31.u64 + ctx.r6.u64;
	// stbu r28,3(r10)
	ea = 3 + ctx.r10.u32;
	REX_STORE_U8(ea, r28.u8);
	ctx.r10.u32 = ea;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// lbzx r28,r23,r11
	r28.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r28,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r28.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r31,0(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// add r23,r31,r6
	r23.u64 = r31.u64 + ctx.r6.u64;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// stb r28,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r28.u8);
	// lbzx r28,r23,r11
	r28.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// stb r28,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, r28.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r31.u8);
	// lbzu r31,1(r7)
	ea = 1 + ctx.r7.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// lbzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// stbu r5,3(r9)
	ea = 3 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// lbzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r6,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bdnz 0x824cc7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CC7B0;
loc_824CC894:
	// lwz r6,112(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824cc91c
	if (ctx.cr6.eq) goto loc_824CC91C;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r31,r5,2
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r4,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r6,r4,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	// lwzx r3,r31,r24
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r24.u32);
	// add r30,r8,r5
	r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r8,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r3,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r11,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_824CC91C:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824D7FB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D86B0) {
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
	// addi r4,r11,28492
	ctx.r4.s64 = ctx.r11.s64 + 28492;
	// bl 0x824eac90
	ctx.lr = 0x824D86D0;
	sub_824EAC90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// bl 0x824eac90
	ctx.lr = 0x824D86E0;
	sub_824EAC90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

DEFINE_REX_FUNC(sub_824D9900) {
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
	ctx.lr = 0x824D9908;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d9938
	if (!ctx.cr6.eq) goto loc_824D9938;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d9cf4
	if (ctx.cr6.eq) goto loc_824D9CF4;
loc_824D9938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9940;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,21808
	r29.s64 = ctx.r11.s64 + 21808;
	// addi r15,r10,28488
	r15.s64 = ctx.r10.s64 + 28488;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9964;
	sub_824EAC90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,21228
	ctx.r4.s64 = ctx.r11.s64 + 21228;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d9990
	if (ctx.cr6.eq) goto loc_824D9990;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,17056
	ctx.r5.s64 = ctx.r11.s64 + 17056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9990;
	sub_824EAC90(ctx, base);
loc_824D9990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9998;
	sub_824D8700(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d9ce8
	if (!ctx.cr6.lt) goto loc_824D9CE8;
	// addi r24,r11,8
	r24.s64 = ctx.r11.s64 + 8;
	// lis r26,-32252
	r26.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r26,21240
	ctx.r10.s64 = r26.s64 + 21240;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r25,-32243
	r25.s64 = -2113077248;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r27,-32252
	r27.s64 = -2113667072;
	// lfs f31,8388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8388);
	f31.f64 = double(temp.f32);
	// lis r28,-32252
	r28.s64 = -2113667072;
	// lis r29,-32252
	r29.s64 = -2113667072;
	// lis r30,-32252
	r30.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r9,21356
	ctx.r9.s64 = ctx.r9.s64 + 21356;
	// addi r14,r25,28496
	r14.s64 = r25.s64 + 28496;
	// addi r25,r27,21440
	r25.s64 = r27.s64 + 21440;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r23,r28,21800
	r23.s64 = r28.s64 + 21800;
	// addi r22,r29,21784
	r22.s64 = r29.s64 + 21784;
	// addi r21,r30,-8600
	r21.s64 = r30.s64 + -8600;
	// addi r20,r3,21776
	r20.s64 = ctx.r3.s64 + 21776;
	// addi r19,r4,21768
	r19.s64 = ctx.r4.s64 + 21768;
	// addi r18,r5,-18652
	r18.s64 = ctx.r5.s64 + -18652;
	// addi r17,r6,-22680
	r17.s64 = ctx.r6.s64 + -22680;
	// addi r26,r7,21756
	r26.s64 = ctx.r7.s64 + 21756;
	// addi r27,r8,-8364
	r27.s64 = ctx.r8.s64 + -8364;
	// addi r28,r10,21316
	r28.s64 = ctx.r10.s64 + 21316;
	// addi r16,r11,31964
	r16.s64 = ctx.r11.s64 + 31964;
loc_824D9A3C:
	// lwz r11,-8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d9cc0
	if (ctx.cr6.eq) goto loc_824D9CC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9A50;
	sub_824D7948(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9A60;
	sub_824EAC90(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,-8(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + -8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9A78;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d9ac8
	if (ctx.cr6.eq) goto loc_824D9AC8;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824eac90
	ctx.lr = 0x824D9AC8;
	sub_824EAC90(ctx, base);
loc_824D9AC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9AD0;
	sub_824D8700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9AD8;
	sub_824D7948(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9AE8;
	sub_824EAC90(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9AF4;
	sub_824EAC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r4,-4(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + -4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824D9B08:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d9b08
	if (!ctx.cr6.eq) goto loc_824D9B08;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D9B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7a18
	ctx.lr = 0x824D9B44;
	sub_824D7A18(ctx, base);
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d9cb4
	if (!ctx.cr6.lt) goto loc_824D9CB4;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
loc_824D9B60:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d9c94
	if (ctx.cr6.eq) goto loc_824D9C94;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d9c94
	if (ctx.cr6.eq) goto loc_824D9C94;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bge cr6,0x824d9c94
	if (!ctx.cr6.lt) goto loc_824D9C94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9B8C;
	sub_824D7948(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9B9C;
	sub_824EAC90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9BB0;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// bl 0x824d7b08
	ctx.lr = 0x824D9BC8;
	sub_824D7B08(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9BDC;
	sub_824EAC90(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9BF0;
	sub_824EAC90(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d9c08
	if (!ctx.cr6.eq) goto loc_824D9C08;
	// bl 0x824d86b0
	ctx.lr = 0x824D9C04;
	sub_824D86B0(ctx, base);
	// b 0x824d9c94
	goto loc_824D9C94;
loc_824D9C08:
	// bl 0x824d8700
	ctx.lr = 0x824D9C0C;
	sub_824D8700(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,12(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// b 0x824d9c7c
	goto loc_824D9C7C;
loc_824D9C20:
	// bl 0x824d7948
	ctx.lr = 0x824D9C24;
	sub_824D7948(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9C34;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r10,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// bl 0x826a0568
	ctx.lr = 0x824D9C50;
	sub_826A0568(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D9C60;
	sub_824D7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D9C68;
	sub_824D86B0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824D9C7C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x824d9c20
	if (ctx.cr6.lt) goto loc_824D9C20;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9C90;
	sub_824D79A8(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824D9C94:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9b60
	if (ctx.cr6.lt) goto loc_824D9B60;
loc_824D9CB4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9CC0;
	sub_824D79A8(ctx, base);
loc_824D9CC0:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// addi r9,r24,-8
	ctx.r9.s64 = r24.s64 + -8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r8,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9a3c
	if (ctx.cr6.lt) goto loc_824D9A3C;
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824D9CE8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9CF4;
	sub_824D79A8(ctx, base);
loc_824D9CF4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824EFC00) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EFC2C;
	sub_825A2698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824efc58
	if (!ctx.cr0.eq) goto loc_824EFC58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26300
	ctx.r5.s64 = ctx.r10.s64 + -26300;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFC58;
	sub_824EA978(ctx, base);
loc_824EFC58:
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

DEFINE_REX_FUNC(sub_824F1600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824F160C:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stwu r10,36(r11)
	ea = 36 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824f160c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F160C;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r3,1156
	ctx.r11.s64 = ctx.r3.s64 + 1156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824F1628:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824f1628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F1628;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F5C60) {
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
	ctx.lr = 0x824F5C68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,1140
	ctx.r5.s64 = 1140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824F5C98;
	sub_826A2E60(ctx, base);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stw r25,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824f5cbc
	if (ctx.cr6.eq) goto loc_824F5CBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// stw r11,980(r31)
	REX_STORE_U32(r31.u32 + 980, ctx.r11.u32);
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x826a1e70
	ctx.lr = 0x824F5CBC;
	sub_826A1E70(ctx, base);
loc_824F5CBC:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// beq cr6,0x824f5cf4
	if (ctx.cr6.eq) goto loc_824F5CF4;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,944
	ctx.r3.s64 = r31.s64 + 944;
	// bl 0x826a2e60
	ctx.lr = 0x824F5CE4;
	sub_826A2E60(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F5CF4;
	sub_826A1E70(ctx, base);
loc_824F5CF4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824f5d14
	if (ctx.cr6.eq) goto loc_824F5D14;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,976(r31)
	REX_STORE_U32(r31.u32 + 976, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F5D14;
	sub_826A1E70(ctx, base);
loc_824F5D14:
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,1020(r31)
	REX_STORE_U32(r31.u32 + 1020, ctx.r11.u32);
	// stw r10,1024(r31)
	REX_STORE_U32(r31.u32 + 1024, ctx.r10.u32);
	// beq cr6,0x824f5d54
	if (ctx.cr6.eq) goto loc_824F5D54;
	// rlwinm. r11,r27,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f5d4c
	if (ctx.cr0.eq) goto loc_824F5D4C;
	// rlwinm r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x824f5d58
	goto loc_824F5D58;
loc_824F5D4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824f5d58
	goto loc_824F5D58;
loc_824F5D54:
	// rlwinm r11,r27,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 15) & 0x1;
loc_824F5D58:
	// stw r11,1096(r31)
	REX_STORE_U32(r31.u32 + 1096, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824FF838) {
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
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r5,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x825c6880
	ctx.lr = 0x824FF86C;
	sub_825C6880(ctx, base);
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

DEFINE_REX_FUNC(sub_82502060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// clrldi r7,r4,58
	ctx.r7.u64 = ctx.r4.u64 & 0x3F;
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// rlwinm r31,r4,26,6,31
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r30,r5,26,6,31
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// sld r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x825020b8
	if (!ctx.cr6.eq) goto loc_825020B8;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x82502104
	goto loc_82502104;
loc_825020B8:
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// bge cr6,0x825020f8
	if (!ctx.cr6.lt) goto loc_825020F8;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825020f8
	if (ctx.cr0.eq) goto loc_825020F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825020F0:
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825020f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825020F0;
loc_825020F8:
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
loc_82502104:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825066C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825066C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82504880
	ctx.lr = 0x825066E4;
	sub_82504880(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82504738
	ctx.lr = 0x825066EC;
	sub_82504738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82505e70
	ctx.lr = 0x825066FC;
	sub_82505E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82506774
	if (!ctx.cr0.eq) goto loc_82506774;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82506764
	goto loc_82506764;
loc_82506714:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x82506778
	if (ctx.cr6.eq) goto loc_82506778;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82505f68
	ctx.lr = 0x82506734;
	sub_82505F68(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82506754
	if (!ctx.cr0.eq) goto loc_82506754;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82506778
	if (!ctx.cr6.lt) goto loc_82506778;
loc_82506754:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82506774
	if (!ctx.cr0.eq) goto loc_82506774;
loc_82506764:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82506714
	if (!ctx.cr0.eq) goto loc_82506714;
	// b 0x82506778
	goto loc_82506778;
loc_82506774:
	// li r30,0
	r30.s64 = 0;
loc_82506778:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8250EE58) {
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
	ctx.lr = 0x8250EE60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825164c0
	ctx.lr = 0x8250EE74;
	sub_825164C0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r28,28(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ef68
	if (!ctx.cr0.eq) goto loc_8250EF68;
loc_8250EE8C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8250EE94:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250ef40
	if (ctx.cr6.eq) goto loc_8250EF40;
loc_8250EEA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EEA8;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ef24
	if (ctx.cr0.eq) goto loc_8250EF24;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250eee0
	if (ctx.cr0.eq) goto loc_8250EEE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EEC4;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8250ef78
	if (ctx.cr0.eq) goto loc_8250EF78;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8250EED8;
	sub_825164C0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x8250ef80
	if (ctx.cr6.eq) goto loc_8250EF80;
loc_8250EEE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x8250EEEC;
	sub_8250A7B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8250ef24
	if (ctx.cr0.eq) goto loc_8250EF24;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ef24
	if (ctx.cr0.eq) goto loc_8250EF24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EF08;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8250ef8c
	if (ctx.cr0.eq) goto loc_8250EF8C;
	// lhz r4,18(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8250EF1C;
	sub_825164C0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x8250ef80
	if (ctx.cr6.eq) goto loc_8250EF80;
loc_8250EF24:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ef40
	if (!ctx.cr0.eq) goto loc_8250EF40;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8250eea0
	if (!ctx.cr0.eq) goto loc_8250EEA0;
loc_8250EF40:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ef94
	if (!ctx.cr0.eq) goto loc_8250EF94;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r28.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8250ef94
	if (ctx.cr0.eq) goto loc_8250EF94;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ef70
	if (ctx.cr0.eq) goto loc_8250EF70;
loc_8250EF68:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250ee94
	goto loc_8250EE94;
loc_8250EF70:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// b 0x8250ee8c
	goto loc_8250EE8C;
loc_8250EF78:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250EF80;
	sub_824E4368(ctx, base);
loc_8250EF80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8250EF8C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250EF94;
	sub_824E4368(ctx, base);
loc_8250EF94:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250EFA0;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82520410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82520418;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x824f7678
	ctx.lr = 0x82520434;
	sub_824F7678(ctx, base);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// bl 0x82589c08
	ctx.lr = 0x82520474;
	sub_82589C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82524B28) {
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
	ctx.lr = 0x82524B30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82524B58;
	sub_825BB860(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x82524b7c
	if (ctx.cr6.eq) goto loc_82524B7C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82524B78;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524B7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524B84;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82524ba8
	if (ctx.cr6.eq) goto loc_82524BA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82524BA4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524BA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524BB0;
	sub_8250AD28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82524bf0
	if (ctx.cr6.eq) goto loc_82524BF0;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r30,-36
	ctx.r10.s64 = r30.s64 + -36;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82524BF0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8252ECF0) {
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
	ctx.lr = 0x8252ECF8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,348(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x8252ed34
	if (ctx.cr0.eq) goto loc_8252ED34;
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x8250a678
	ctx.lr = 0x8252ED30;
	sub_8250A678(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8252ED34:
	// lwz r20,28(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r24,0
	r24.s64 = 0;
	// lwz r19,160(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r27,0
	r27.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// addi r26,r30,44
	r26.s64 = r30.s64 + 44;
loc_8252ED54:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8252efe0
	if (!ctx.cr6.lt) goto loc_8252EFE0;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8252ED8C;
	sub_825BA3A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252eda8
	if (ctx.cr0.eq) goto loc_8252EDA8;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252eda8
	if (ctx.cr0.eq) goto loc_8252EDA8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8252EDA8:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252edbc
	if (ctx.cr0.eq) goto loc_8252EDBC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_8252EDBC:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252edd0
	if (ctx.cr0.eq) goto loc_8252EDD0;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252edd0
	if (ctx.cr0.eq) goto loc_8252EDD0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252EDD0:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8252ee4c
	if (!ctx.cr6.eq) goto loc_8252EE4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252ee4c
	if (!ctx.cr6.eq) goto loc_8252EE4C;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ee10
	if (ctx.cr0.eq) goto loc_8252EE10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252EE04;
	sub_8250A678(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252ee44
	if (!ctx.cr6.eq) goto loc_8252EE44;
loc_8252EE10:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8252efd4
	if (ctx.cr6.eq) goto loc_8252EFD4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,1
	r24.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x8252efc8
	goto loc_8252EFC8;
loc_8252EE44:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8252EE4C:
	// rlwinm. r11,r8,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252eeb8
	if (!ctx.cr0.eq) goto loc_8252EEB8;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252eeb8
	if (!ctx.cr0.eq) goto loc_8252EEB8;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8252eeb8
	if (!ctx.cr6.lt) goto loc_8252EEB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8252efdc
	if (!ctx.cr6.eq) goto loc_8252EFDC;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8252EE84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252eea8
	if (ctx.cr6.eq) goto loc_8252EEA8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252eea0
	if (ctx.cr6.eq) goto loc_8252EEA0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8252eeb8
	if (!ctx.cr6.eq) goto loc_8252EEB8;
loc_8252EEA0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8252ee84
	goto loc_8252EE84;
loc_8252EEA8:
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// b 0x8252efc8
	goto loc_8252EFC8;
loc_8252EEB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm. r6,r11,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq 0x8252eef4
	if (ctx.cr0.eq) goto loc_8252EEF4;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252eef4
	if (ctx.cr0.eq) goto loc_8252EEF4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8252EEF4:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ef08
	if (ctx.cr0.eq) goto loc_8252EF08;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_8252EF08:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ef1c
	if (ctx.cr0.eq) goto loc_8252EF1C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ef1c
	if (ctx.cr0.eq) goto loc_8252EF1C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252EF1C:
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252efc8
	if (!ctx.cr6.eq) goto loc_8252EFC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252efc8
	if (!ctx.cr6.eq) goto loc_8252EFC8;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252efc8
	if (!ctx.cr6.eq) goto loc_8252EFC8;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825b8558
	ctx.lr = 0x8252EFA0;
	sub_825B8558(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x825c36d0
	ctx.lr = 0x8252EFB4;
	sub_825C36D0(ctx, base);
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8252efc8
	if (ctx.cr6.eq) goto loc_8252EFC8;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
loc_8252EFC8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8252ed54
	goto loc_8252ED54;
loc_8252EFD4:
	// li r24,0
	r24.s64 = 0;
	// b 0x8252efe0
	goto loc_8252EFE0;
loc_8252EFDC:
	// li r27,0
	r27.s64 = 0;
loc_8252EFE0:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252eff0
	if (!ctx.cr0.eq) goto loc_8252EFF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8252f030
	if (ctx.cr6.eq) goto loc_8252F030;
loc_8252EFF0:
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r31,164
	ctx.r11.s64 = r31.s64 + 164;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// beq cr6,0x8252f08c
	if (ctx.cr6.eq) goto loc_8252F08C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8252ed34
	if (!ctx.cr6.eq) goto loc_8252ED34;
	// b 0x8252f038
	goto loc_8252F038;
loc_8252F030:
	// stw r20,28(r31)
	REX_STORE_U32(r31.u32 + 28, r20.u32);
	// stw r19,160(r31)
	REX_STORE_U32(r31.u32 + 160, r19.u32);
loc_8252F038:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_8252F08C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82554D78) {
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
	ctx.lr = 0x82554D80;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554DB0;
	sub_825BB860(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554DC0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554DCC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554DDC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554DE8;
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
	ctx.lr = 0x82554E18;
	sub_824FFC30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8255CDA0) {
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
	ctx.lr = 0x8255CDA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x824f7678
	ctx.lr = 0x8255CDC0;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255ce8c
	if (!ctx.cr0.eq) goto loc_8255CE8C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ce8c
	if (ctx.cr0.eq) goto loc_8255CE8C;
loc_8255CE04:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8255ce70
	if (!ctx.cr6.eq) goto loc_8255CE70;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_8255CE18:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255ce70
	if (ctx.cr6.eq) goto loc_8255CE70;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8255ce5c
	if (ctx.cr6.eq) goto loc_8255CE5C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ce5c
	if (!ctx.cr0.eq) goto loc_8255CE5C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825c60e8
	ctx.lr = 0x8255CE4C;
	sub_825C60E8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8255CE5C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8255ce18
	if (!ctx.cr6.eq) goto loc_8255CE18;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8255ce18
	goto loc_8255CE18;
loc_8255CE70:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255ce8c
	if (!ctx.cr0.eq) goto loc_8255CE8C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255ce04
	if (!ctx.cr6.eq) goto loc_8255CE04;
loc_8255CE8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255cf34
	if (!ctx.cr0.eq) goto loc_8255CF34;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255cf34
	if (ctx.cr0.eq) goto loc_8255CF34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8255cf00
	if (!ctx.cr0.eq) goto loc_8255CF00;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x8255CF00;
	sub_824E4308(ctx, base);
loc_8255CF00:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825c60e8
	ctx.lr = 0x8255CF20;
	sub_825C60E8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8255ce8c
	goto loc_8255CE8C;
loc_8255CF34:
	// clrlwi. r31,r28,24
	r31.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8255cf44
	if (ctx.cr0.eq) goto loc_8255CF44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8255CF44;
	sub_8257DFD8(ctx, base);
loc_8255CF44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255cfd0
	if (ctx.cr6.eq) goto loc_8255CFD0;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255cfd0
	if (ctx.cr0.eq) goto loc_8255CFD0;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
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
	// bne 0x8255cfc4
	if (!ctx.cr0.eq) goto loc_8255CFC4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255cfc4
	if (ctx.cr6.eq) goto loc_8255CFC4;
loc_8255CF90:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255cfac
	if (ctx.cr0.eq) goto loc_8255CFAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82551458
	ctx.lr = 0x8255CFAC;
	sub_82551458(ctx, base);
loc_8255CFAC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255cfc4
	if (!ctx.cr0.eq) goto loc_8255CFC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255cf90
	if (!ctx.cr6.eq) goto loc_8255CF90;
loc_8255CFC4:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8255CFD0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8257F4A0) {
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
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f514
	if (ctx.cr6.eq) goto loc_8257F514;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8257f4d4
	if (!ctx.cr6.eq) goto loc_8257F4D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F4D4:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f508
	if (ctx.cr6.eq) goto loc_8257F508;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8257f508
	if (!ctx.cr6.eq) goto loc_8257F508;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_8257F4F4:
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
loc_8257F508:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F514;
	sub_824E4368(ctx, base);
loc_8257F514:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// beq 0x8257f614
	if (ctx.cr0.eq) goto loc_8257F614;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8257f5c4
	if (!ctx.cr6.eq) goto loc_8257F5C4;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8257f59c
	if (ctx.cr6.eq) goto loc_8257F59C;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8257F544:
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm. r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8257f58c
	if (ctx.cr0.eq) goto loc_8257F58C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r9,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8257f56c
	if (ctx.cr6.eq) goto loc_8257F56C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8257f58c
	if (!ctx.cr6.eq) goto loc_8257F58C;
loc_8257F56C:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,12,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8257f58c
	if (ctx.cr6.lt) goto loc_8257F58C;
	// rlwinm r9,r9,16,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1FF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8257f4f4
	if (ctx.cr6.lt) goto loc_8257F4F4;
loc_8257F58C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8257f544
	if (ctx.cr6.lt) goto loc_8257F544;
loc_8257F59C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,24(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,-18724
	ctx.r5.s64 = ctx.r11.s64 + -18724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1a58
	ctx.lr = 0x8257F5B4;
	sub_826A1A58(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3521
	ctx.r4.s64 = 3521;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F5C4;
	sub_824E4368(ctx, base);
loc_8257F5C4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8257f5d8
	if (ctx.cr6.eq) goto loc_8257F5D8;
	// li r4,3554
	ctx.r4.s64 = 3554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F5D8;
	sub_824E4368(ctx, base);
loc_8257F5D8:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8257f608
	if (ctx.cr6.lt) goto loc_8257F608;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bgt cr6,0x8257f608
	if (ctx.cr6.gt) goto loc_8257F608;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,600(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 600);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x8257f4f4
	goto loc_8257F4F4;
loc_8257F608:
	// li r4,3540
	ctx.r4.s64 = 3540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F614;
	sub_824E4368(ctx, base);
loc_8257F614:
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8257f6ec
	if (ctx.cr6.gt) goto loc_8257F6EC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-19288
	ctx.r12.s64 = ctx.r12.s64 + -19288;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// nop 
	// addi r12,r12,-2492
	ctx.r12.s64 = ctx.r12.s64 + -2492;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8257F644;
	case 1:
		goto loc_8257F6EC;
	case 2:
		goto loc_8257F64C;
	case 3:
		goto loc_8257F658;
	case 4:
		goto loc_8257F664;
	case 5:
		goto loc_8257F6EC;
	case 6:
		goto loc_8257F664;
	case 7:
		goto loc_8257F6EC;
	case 8:
		goto loc_8257F664;
	case 9:
		goto loc_8257F664;
	case 10:
		goto loc_8257F670;
	case 11:
		goto loc_8257F6EC;
	case 12:
		goto loc_8257F6EC;
	case 13:
		goto loc_8257F6EC;
	case 14:
		goto loc_8257F67C;
	case 15:
		goto loc_8257F688;
	case 16:
		goto loc_8257F6EC;
	case 17:
		goto loc_8257F6EC;
	case 18:
		goto loc_8257F6EC;
	case 19:
		goto loc_8257F694;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8257F644:
	// lwz r3,24(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F64C:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F658:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F664:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F670:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,688
	ctx.r3.s64 = ctx.r11.s64 + 688;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F67C:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F688:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// b 0x8257f69c
	goto loc_8257F69C;
loc_8257F694:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r11,721
	ctx.r3.s64 = ctx.r11.s64 + 721;
loc_8257F69C:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r3,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(40));
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8257f6d0
	goto loc_8257F6D0;
loc_8257F6B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257f6e0
	if (ctx.cr6.eq) goto loc_8257F6E0;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
loc_8257F6D0:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x8257f6b4
	if (ctx.cr6.eq) goto loc_8257F6B4;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x8257f4f4
	goto loc_8257F4F4;
loc_8257F6E0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F6EC;
	sub_824E4368(ctx, base);
loc_8257F6EC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F6F8;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82587CC0) {
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
	ctx.lr = 0x82587CC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
loc_82587CE0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82587e64
	if (ctx.cr6.eq) goto loc_82587E64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// mr r27,r25
	r27.u64 = r25.u64;
	// blt cr6,0x82587cf8
	if (ctx.cr6.lt) goto loc_82587CF8;
	// li r27,4
	r27.s64 = 4;
loc_82587CF8:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585070
	ctx.lr = 0x82587D10;
	sub_82585070(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585070
	ctx.lr = 0x82587D2C;
	sub_82585070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580e90
	ctx.lr = 0x82587D3C;
	sub_82580E90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82587d5c
	if (!ctx.cr6.eq) goto loc_82587D5C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82587e2c
	goto loc_82587E2C;
loc_82587D5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587D6C;
	sub_8250AC70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587D80;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82580da0
	ctx.lr = 0x82587D90;
	sub_82580DA0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82587de0
	if (!ctx.cr6.gt) goto loc_82587DE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587DB8;
	sub_8250AC70(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587DCC;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x82580da0
	ctx.lr = 0x82587DDC;
	sub_82580DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82587DE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82587e2c
	if (!ctx.cr6.gt) goto loc_82587E2C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587E04;
	sub_8250AC70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82587E18;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82580da0
	ctx.lr = 0x82587E28;
	sub_82580DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82587E2C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82587e3c
	if (!ctx.cr6.eq) goto loc_82587E3C;
	// mr r24,r30
	r24.u64 = r30.u64;
	// b 0x82587e50
	goto loc_82587E50;
loc_82587E3C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825830b0
	ctx.lr = 0x82587E4C;
	sub_825830B0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82587E50:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r25,r27,r25
	r25.u64 = r25.u64 - r27.u64;
	// bl 0x82580ab0
	ctx.lr = 0x82587E60;
	sub_82580AB0(ctx, base);
	// b 0x82587ce0
	goto loc_82587CE0;
loc_82587E64:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8259F8B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8259F8C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259f914
	if (ctx.cr0.eq) goto loc_8259F914;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x8259f8fc
	if (ctx.cr0.lt) goto loc_8259F8FC;
loc_8259F8EC:
	// lwzu r3,-12(r30)
	ea = -12 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8269ce98
	ctx.lr = 0x8259F8F4;
	sub_8269CE98(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8259f8ec
	if (!ctx.cr0.lt) goto loc_8259F8EC;
loc_8259F8FC:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259f90c
	if (ctx.cr0.eq) goto loc_8259F90C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F90C;
	sub_8269CE98(ctx, base);
loc_8259F90C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8259f930
	goto loc_8259F930;
loc_8259F914:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8259F91C;
	sub_8269CE98(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259f92c
	if (ctx.cr0.eq) goto loc_8259F92C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F92C;
	sub_8269CE98(ctx, base);
loc_8259F92C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259F930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A29D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A29D8;
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
	// addi r29,r10,-11576
	r29.s64 = ctx.r10.s64 + -11576;
	// bne cr6,0x825a2a14
	if (!ctx.cr6.eq) goto loc_825A2A14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11836
	ctx.r5.s64 = ctx.r11.s64 + -11836;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2A14;
	sub_824EA978(ctx, base);
loc_825A2A14:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a27b8
	ctx.lr = 0x825A2A1C;
	sub_825A27B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825a2a44
	if (!ctx.cr0.eq) goto loc_825A2A44;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26464
	ctx.r5.s64 = ctx.r11.s64 + -26464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2A40;
	sub_824EA978(ctx, base);
	// b 0x825a2a68
	goto loc_825A2A68;
loc_825A2A44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x824ee678
	ctx.lr = 0x825A2A68;
	sub_824EE678(ctx, base);
loc_825A2A68:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A4FB0) {
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
	ctx.lr = 0x825A4FB8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,56
	r28.s64 = ctx.r3.s64 + 56;
	// addi r23,r3,92
	r23.s64 = ctx.r3.s64 + 92;
	// li r21,8
	r21.s64 = 8;
	// li r29,0
	r29.s64 = 0;
	// addi r24,r11,-9588
	r24.s64 = ctx.r11.s64 + -9588;
	// addi r26,r10,22852
	r26.s64 = ctx.r10.s64 + 22852;
	// addi r22,r9,-9280
	r22.s64 = ctx.r9.s64 + -9280;
	// addi r25,r8,-9688
	r25.s64 = ctx.r8.s64 + -9688;
	// b 0x825a5054
	goto loc_825A5054;
loc_825A4FF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efba8
	ctx.lr = 0x825A4FFC;
	sub_824EFBA8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a5024
	if (!ctx.cr6.eq) goto loc_825A5024;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,339
	ctx.r7.s64 = 339;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5024;
	sub_824EA978(ctx, base);
loc_825A5024:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// bl 0x824efb70
	ctx.lr = 0x825A5054;
	sub_824EFB70(ctx, base);
loc_825A5054:
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x824ef898
	ctx.lr = 0x825A505C;
	sub_824EF898(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825a4ff4
	if (!ctx.cr0.eq) goto loc_825A4FF4;
	// lwz r11,196(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a50fc
	if (ctx.cr6.eq) goto loc_825A50FC;
	// stw r29,196(r28)
	REX_STORE_U32(r28.u32 + 196, r29.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a50fc
	goto loc_825A50FC;
loc_825A508C:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825a50c8
	if (ctx.cr6.eq) goto loc_825A50C8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A50A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a50c8
	if (ctx.cr0.eq) goto loc_825A50C8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A50C8;
	sub_824EA978(ctx, base);
loc_825A50C8:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A50DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a50fc
	if (ctx.cr0.eq) goto loc_825A50FC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A50FC;
	sub_824EA978(ctx, base);
loc_825A50FC:
	// lwz r3,-28(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -28);
	// bl 0x825a6058
	ctx.lr = 0x825A5104;
	sub_825A6058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825a508c
	if (!ctx.cr0.eq) goto loc_825A508C;
	// lwz r3,-28(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -28);
	// bl 0x825a5d48
	ctx.lr = 0x825A5114;
	sub_825A5D48(ctx, base);
	// stw r29,-28(r28)
	REX_STORE_U32(r28.u32 + -28, r29.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x824ef3e0
	ctx.lr = 0x825A5120;
	sub_824EF3E0(ctx, base);
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stwu r29,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r29.u32);
	r28.u32 = ea;
	// addi r23,r23,20
	r23.s64 = r23.s64 + 20;
	// bne 0x825a5054
	if (!ctx.cr0.eq) goto loc_825A5054;
	// lwz r3,316(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 316);
	// bl 0x825a2758
	ctx.lr = 0x825A5138;
	sub_825A2758(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A514C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825a516c
	if (ctx.cr0.eq) goto loc_825A516C;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,408
	ctx.r7.s64 = 408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A516C;
	sub_824EA978(ctx, base);
loc_825A516C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825B33A0) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825b33dc
	if (!ctx.cr6.gt) goto loc_825B33DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825de7f8
	ctx.lr = 0x825B33DC;
	sub_825DE7F8(ctx, base);
loc_825B33DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq 0x825b342c
	if (ctx.cr0.eq) goto loc_825B342C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825b342c
	if (!ctx.cr6.lt) goto loc_825B342C;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// bge cr6,0x825b341c
	if (!ctx.cr6.lt) goto loc_825B341C;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x825b3420
	goto loc_825B3420;
loc_825B341C:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_825B3420:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_825B342C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b3444
	if (ctx.cr6.lt) goto loc_825B3444;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825B3444:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825B4258) {
	REX_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B4398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825B43A0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-3984
	ctx.r6.s64 = ctx.r11.s64 + -3984;
	// addi r5,r10,-3992
	ctx.r5.s64 = ctx.r10.s64 + -3992;
	// addi r4,r9,-4028
	ctx.r4.s64 = ctx.r9.s64 + -4028;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825b3fd0
	ctx.lr = 0x825B43C4;
	sub_825B3FD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r29,2120
	r31.s64 = r29.s64 + 2120;
	// li r30,16
	r30.s64 = 16;
	// addi r28,r11,-4056
	r28.s64 = ctx.r11.s64 + -4056;
loc_825B43D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// ldu r7,24(r31)
	ea = 24 + r31.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	r31.u32 = ea;
	// bl 0x826a0568
	ctx.lr = 0x825B43EC;
	sub_826A0568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b3fd0
	ctx.lr = 0x825B43F8;
	sub_825B3FD0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825b43d4
	if (!ctx.cr0.eq) goto loc_825B43D4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825B74A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825B74B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,-2432
	r30.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b74f0
	if (!ctx.cr6.eq) goto loc_825B74F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B74F0;
	sub_824EA978(ctx, base);
loc_825B74F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825b7514
	if (!ctx.cr6.eq) goto loc_825B7514;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-2084
	ctx.r5.s64 = ctx.r11.s64 + -2084;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B7514;
	sub_824EA978(ctx, base);
loc_825B7514:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ef7f8
	ctx.lr = 0x825B751C;
	sub_824EF7F8(ctx, base);
	// b 0x825b7548
	goto loc_825B7548;
loc_825B7520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efba8
	ctx.lr = 0x825B7528;
	sub_824EFBA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825d70b0
	ctx.lr = 0x825B753C;
	sub_825D70B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824efaf8
	ctx.lr = 0x825B7548;
	sub_824EFAF8(ctx, base);
loc_825B7548:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825b7520
	if (!ctx.cr0.eq) goto loc_825B7520;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825B8ED8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b8f5c
	if (ctx.cr6.eq) goto loc_825B8F5C;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// bne cr6,0x825b8f08
	if (!ctx.cr6.eq) goto loc_825B8F08;
	// li r10,3558
	ctx.r10.s64 = 3558;
	// b 0x825b8f14
	goto loc_825B8F14;
loc_825B8F08:
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// bne cr6,0x825b8f14
	if (!ctx.cr6.eq) goto loc_825B8F14;
	// li r10,3559
	ctx.r10.s64 = 3559;
loc_825B8F14:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b8f5c
	if (ctx.cr6.eq) goto loc_825B8F5C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8f50
	if (ctx.cr0.eq) goto loc_825B8F50;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825b8f50
	if (!ctx.cr0.eq) goto loc_825B8F50;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b8f48
	if (ctx.cr0.eq) goto loc_825B8F48;
	// li r10,3557
	ctx.r10.s64 = 3557;
	// b 0x825b8f50
	goto loc_825B8F50;
loc_825B8F48:
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// addi r10,r11,3630
	ctx.r10.s64 = ctx.r11.s64 + 3630;
loc_825B8F50:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_825B8F5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b8f74
	if (ctx.cr6.eq) goto loc_825B8F74;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8f74
	if (ctx.cr0.eq) goto loc_825B8F74;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_825B8F74:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BD100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BD108;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD12C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bd150
	if (ctx.cr6.eq) goto loc_825BD150;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825BD14C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825BD150:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD158;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C19C8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x825c1958
	ctx.lr = 0x825C19EC;
	sub_825C1958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r10,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825C3FE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825C3FF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_825C4000:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c4040
	if (ctx.cr6.eq) goto loc_825C4040;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c4030
	if (ctx.cr6.eq) goto loc_825C4030;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825c4030
	if (!ctx.cr6.eq) goto loc_825C4030;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c4038
	if (!ctx.cr0.eq) goto loc_825C4038;
loc_825C4030:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c4000
	goto loc_825C4000;
loc_825C4038:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// b 0x825c4044
	goto loc_825C4044;
loc_825C4040:
	// li r30,0
	r30.s64 = 0;
loc_825C4044:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c41b4
	if (ctx.cr6.eq) goto loc_825C41B4;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_825C4058:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825c40bc
	if (ctx.cr6.eq) goto loc_825C40BC;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c40b4
	if (ctx.cr6.eq) goto loc_825C40B4;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825c40b4
	if (ctx.cr0.eq) goto loc_825C40B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825c40b0
	if (ctx.cr6.eq) goto loc_825C40B0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C408C:
	// rlwinm r31,r7,27,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r31,r31,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r31,30
	r31.u64 = r31.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r31,r4,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// or r9,r31,r9
	ctx.r9.u64 = r31.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825c408c
	if (ctx.cr6.lt) goto loc_825C408C;
loc_825C40B0:
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
loc_825C40B4:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x825c4058
	goto loc_825C4058;
loc_825C40BC:
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,44
	ctx.r10.s64 = r30.s64 + 44;
	// rlwinm r8,r9,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_825C40CC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825c41b4
	if (!ctx.cr6.lt) goto loc_825C41B4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// bne cr6,0x825c40f4
	if (!ctx.cr6.eq) goto loc_825C40F4;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x825c4100
	if (ctx.cr6.eq) goto loc_825C4100;
loc_825C40F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x825c40cc
	goto loc_825C40CC;
loc_825C4100:
	// slw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c41c4
	if (!ctx.cr0.eq) goto loc_825C41C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,652(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 652);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255ea00
	ctx.lr = 0x825C411C;
	sub_8255EA00(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825c41b4
	if (ctx.cr0.eq) goto loc_825C41B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c41a0
	if (ctx.cr0.eq) goto loc_825C41A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825C4144;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c417c
	if (!ctx.cr0.eq) goto loc_825C417C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c417c
	if (ctx.cr0.eq) goto loc_825C417C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825c4188
	if (!ctx.cr6.gt) goto loc_825C4188;
loc_825C417C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825C4184;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825C4188:
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
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_825C41A0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 652);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c2288
	ctx.lr = 0x825C41B4;
	sub_825C2288(ctx, base);
loc_825C41B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,660(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 660);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254f8d8
	ctx.lr = 0x825C41C4;
	sub_8254F8D8(ctx, base);
loc_825C41C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825CE968) {
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
	// bge cr6,0x825cea48
	if (!ctx.cr6.lt) goto loc_825CEA48;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,19656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CE9CC:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825ce9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CE9CC;
loc_825CEA48:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cea64
	if (ctx.cr6.eq) goto loc_825CEA64;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CEA64;
	sub_825C73B8(ctx, base);
loc_825CEA64:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cea80
	if (ctx.cr6.eq) goto loc_825CEA80;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CEA80;
	sub_825C7788(ctx, base);
loc_825CEA80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D31C8) {
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
	ctx.lr = 0x825D31D0;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d3210
	if (!ctx.cr6.eq) goto loc_825D3210;
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
	// li r7,1932
	ctx.r7.s64 = 1932;
	// bl 0x824ea978
	ctx.lr = 0x825D3210;
	sub_824EA978(ctx, base);
loc_825D3210:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3220;
	sub_824F05F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3234;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d32a4
	if (!ctx.cr6.eq) goto loc_825D32A4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x825d32a4
	if (!ctx.cr6.eq) goto loc_825D32A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3260
	if (ctx.cr6.eq) goto loc_825D3260;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3260;
	sub_824F0950(ctx, base);
loc_825D3260:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d329c
	if (ctx.cr6.eq) goto loc_825D329C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d329c
	if (ctx.cr6.eq) goto loc_825D329C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x825D329C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D329C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3300
	goto loc_825D3300;
loc_825D32A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d32c0
	if (ctx.cr6.eq) goto loc_825D32C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D32C0;
	sub_824F0950(ctx, base);
loc_825D32C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d32fc
	if (ctx.cr6.eq) goto loc_825D32FC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d32fc
	if (ctx.cr6.eq) goto loc_825D32FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x825D32FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D32FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3300:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825D6CD8) {
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
	ctx.lr = 0x825D6CE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r10,22852
	r26.s64 = ctx.r10.s64 + 22852;
	// addi r25,r11,6320
	r25.s64 = ctx.r11.s64 + 6320;
	// bne cr6,0x825d6d1c
	if (!ctx.cr6.eq) goto loc_825D6D1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,6312
	ctx.r5.s64 = ctx.r11.s64 + 6312;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,572
	ctx.r7.s64 = 572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6D1C;
	sub_824EA978(ctx, base);
loc_825D6D1C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d6ddc
	if (ctx.cr6.lt) goto loc_825D6DDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,6444
	r27.s64 = ctx.r11.s64 + 6444;
loc_825D6D38:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d6d5c
	if (!ctx.cr6.eq) goto loc_825D6D5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d6d5c
	if (!ctx.cr6.eq) goto loc_825D6D5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6d64
	if (ctx.cr6.eq) goto loc_825D6D64;
loc_825D6D5C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x825d6d38
	goto loc_825D6D38;
loc_825D6D64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x825a28c0
	ctx.lr = 0x825D6D70;
	sub_825A28C0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// beq 0x825d6dd8
	if (ctx.cr0.eq) goto loc_825D6DD8;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825d6da8
	if (!ctx.cr6.eq) goto loc_825D6DA8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,616
	ctx.r7.s64 = 616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6DA8;
	sub_824EA978(ctx, base);
loc_825D6DA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6dbc
	if (!ctx.cr6.eq) goto loc_825D6DBC;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// b 0x825d6d38
	goto loc_825D6D38;
loc_825D6DBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6dd0
	if (!ctx.cr6.eq) goto loc_825D6DD0;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// b 0x825d6d38
	goto loc_825D6D38;
loc_825D6DD0:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// b 0x825d6d38
	goto loc_825D6D38;
loc_825D6DD8:
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_825D6DDC:
	// stw r28,24(r29)
	REX_STORE_U32(r29.u32 + 24, r28.u32);
	// stw r28,20(r29)
	REX_STORE_U32(r29.u32 + 20, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825E0348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E0350;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x824ea8e0
	ctx.lr = 0x825E0384;
	sub_824EA8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824ea8e0
	ctx.lr = 0x825E0398;
	sub_824EA8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x824ea8e0
	ctx.lr = 0x825E03AC;
	sub_824EA8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x824ea8e0
	ctx.lr = 0x825E03C0;
	sub_824EA8E0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,68(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x824ea8e0
	ctx.lr = 0x825E03DC;
	sub_824EA8E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r10,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E6800) {
	REX_FUNC_PROLOGUE();
	// lwz r3,900(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6850) {
	REX_FUNC_PROLOGUE();
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6874
	if (!ctx.cr6.eq) goto loc_825E6874;
	// lwz r11,900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,900(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825E6874:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E74B0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x825f7d60
	ctx.lr = 0x825E74D0;
	sub_825F7D60(ctx, base);
	// b 0x825e74f0
	goto loc_825E74F0;
loc_825E74D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E74E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f7ca8
	ctx.lr = 0x825E74F0;
	sub_825F7CA8(ctx, base);
loc_825E74F0:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x825e74d4
	if (!ctx.cr6.eq) goto loc_825E74D4;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825e7520
	if (ctx.cr6.eq) goto loc_825E7520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7c38
	ctx.lr = 0x825E7514;
	sub_825F7C38(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825E7520;
	sub_825B3528(ctx, base);
loc_825E7520:
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

DEFINE_REX_FUNC(sub_825ED5B8) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_825ED638) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ed650
	if (ctx.cr6.eq) goto loc_825ED650;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825ed654
	if (!ctx.cr6.eq) goto loc_825ED654;
loc_825ED650:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825ED654:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EF6E8) {
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
	ctx.lr = 0x825EF6F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,15448
	r30.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x825ef734
	if (!ctx.cr6.lt) goto loc_825EF734;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,16536
	ctx.r5.s64 = ctx.r11.s64 + 16536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EF734;
	sub_824EA978(ctx, base);
loc_825EF734:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ef75c
	if (ctx.cr6.eq) goto loc_825EF75C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,15920
	ctx.r5.s64 = ctx.r11.s64 + 15920;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,1433
	ctx.r7.s64 = 1433;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EF75C;
	sub_824EA978(ctx, base);
loc_825EF75C:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x825ef84c
	if (!ctx.cr6.gt) goto loc_825EF84C;
	// li r28,0
	r28.s64 = 0;
loc_825EF774:
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef790
	if (!ctx.cr6.lt) goto loc_825EF790;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ef798
	goto loc_825EF798;
loc_825EF790:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF798;
	sub_825F7718(ctx, base);
loc_825EF798:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef7c8
	if (!ctx.cr6.lt) goto loc_825EF7C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ef7d0
	goto loc_825EF7D0;
loc_825EF7C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF7D0;
	sub_825F7718(ctx, base);
loc_825EF7D0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825ef820
	if (!ctx.cr6.lt) goto loc_825EF820;
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef808
	if (!ctx.cr6.lt) goto loc_825EF808;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ef810
	goto loc_825EF810;
loc_825EF808:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF810;
	sub_825F7718(ctx, base);
loc_825EF810:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825EF820:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825ef83c
	if (!ctx.cr6.eq) goto loc_825EF83C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825ed358
	ctx.lr = 0x825EF83C;
	sub_825ED358(ctx, base);
loc_825EF83C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x825ef774
	if (ctx.cr6.lt) goto loc_825EF774;
loc_825EF84C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825F7360) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r11,18112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f7374
	if (ctx.cr6.eq) goto loc_825F7374;
	// b 0x825f7168
	sub_825F7168(ctx, base);
	return;
loc_825F7374:
	// b 0x825f70b0
	sub_825F70B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F7440) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825f7454
	if (ctx.cr6.eq) goto loc_825F7454;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_825F7454:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r3,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F77A0) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825f77cc
	if (!ctx.cr6.gt) goto loc_825F77CC;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_825F77CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825f77f0
	if (!ctx.cr6.gt) goto loc_825F77F0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F77F0;
	sub_825F7718(ctx, base);
loc_825F77F0:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq 0x825f782c
	if (ctx.cr0.eq) goto loc_825F782C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825F7818:
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bdnz 0x825f7818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F7818;
loc_825F782C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825F9B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F9B08;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,1452(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1452);
	// bl 0x825b33a0
	ctx.lr = 0x825F9B20;
	sub_825B33A0(ctx, base);
	// lwz r11,1452(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1452);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,960
	ctx.r5.s64 = 960;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825F9B40;
	sub_826A1E70(ctx, base);
	// lwz r11,1376(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1376);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// lwz r11,1376(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1376);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1376(r29)
	REX_STORE_U32(r29.u32 + 1376, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FAE58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21500
	ctx.r3.s64 = ctx.r11.s64 + 21500;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB008) {
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
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB02C;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,31656
	ctx.r10.s64 = ctx.r10.s64 + 31656;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stb r11,28(r30)
	REX_STORE_U8(r30.u32 + 28, ctx.r11.u8);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825FCB18) {
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
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x825f7420
	ctx.lr = 0x825FCB40;
	sub_825F7420(ctx, base);
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

DEFINE_REX_FUNC(sub_825FDCF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30276
	ctx.r3.s64 = ctx.r11.s64 + -30276;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FE328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FE330;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_825FE340:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FE34C;
	sub_8260AA38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE36C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825fe340
	if (ctx.cr6.lt) goto loc_825FE340;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fe398
	if (ctx.cr0.eq) goto loc_825FE398;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_825FE398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82609EB8) {
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
	ctx.lr = 0x82609EC0;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82609ee8
	if (ctx.cr6.lt) goto loc_82609EE8;
	// li r27,43
	r27.s64 = 43;
	// b 0x82609ef0
	goto loc_82609EF0;
loc_82609EE8:
	// li r27,45
	r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82609EF0:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,8616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8616);
	f30.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,28480
	r29.s64 = ctx.r11.s64 + 28480;
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82609F34:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a0568
	ctx.lr = 0x82609F70;
	sub_826A0568(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(r31.s32, 9, ctx.xer);
	// blt cr6,0x82609f34
	if (ctx.cr6.lt) goto loc_82609F34;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r11,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-16804
	ctx.r4.s64 = ctx.r10.s64 + -16804;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = r27.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a0568
	ctx.lr = 0x82609FA0;
	sub_826A0568(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8260E7B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
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

DEFINE_REX_FUNC(sub_8260EF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260EF90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8260f0dc
	if (ctx.cr6.eq) goto loc_8260F0DC;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260efc4
	if (ctx.cr0.eq) goto loc_8260EFC4;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// b 0x8260f0dc
	goto loc_8260F0DC;
loc_8260EFC4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// stw r4,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x8261ce38
	ctx.lr = 0x8260EFDC;
	sub_8261CE38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8260f0dc
	if (ctx.cr0.lt) goto loc_8260F0DC;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260effc
	if (ctx.cr6.eq) goto loc_8260EFFC;
	// bl 0x8261b0a8
	ctx.lr = 0x8260EFF4;
	sub_8261B0A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8260f000
	goto loc_8260F000;
loc_8260EFFC:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8260F000:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8260f0dc
	if (ctx.cr6.lt) goto loc_8260F0DC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260f0ac
	if (ctx.cr0.eq) goto loc_8260F0AC;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x8260b9b0
	ctx.lr = 0x8260F024;
	sub_8260B9B0(ctx, base);
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x8260e608
	ctx.lr = 0x8260F034;
	sub_8260E608(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8260f0dc
	if (ctx.cr0.lt) goto loc_8260F0DC;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8261bec8
	ctx.lr = 0x8260F05C;
	sub_8261BEC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8260f0dc
	if (ctx.cr6.lt) goto loc_8260F0DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260f0ac
	if (!ctx.cr6.eq) goto loc_8260F0AC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F0A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8260F0AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8260f0dc
	if (ctx.cr6.lt) goto loc_8260F0DC;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8260F0DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826160C0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826160E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82616104
	if (ctx.cr0.lt) goto loc_82616104;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82616104:
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

DEFINE_REX_FUNC(sub_82617FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_82617FC4:
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
	// bne 0x82617fc4
	if (!ctx.cr0.eq) goto loc_82617FC4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261A420) {
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
	// bl 0x8261a2e0
	ctx.lr = 0x8261A438;
	sub_8261A2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629d78
	ctx.lr = 0x8261A440;
	sub_82629D78(ctx, base);
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

DEFINE_REX_FUNC(sub_8261BB60) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
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
	ctx.lr = 0x8261BB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BBB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BBCC;
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

DEFINE_REX_FUNC(sub_826239B8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r30,212(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x826236a8
	ctx.lr = 0x826239F0;
	sub_826236A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82623a00
	goto loc_82623A00;
loc_82623A00:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

DEFINE_REX_FUNC(sub_82626248) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82626288
	if (!ctx.cr6.eq) goto loc_82626288;
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r9,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r9.u64);
	// std r9,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// std r9,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r9.u64);
	// b 0x82626360
	goto loc_82626360;
loc_82626288:
	// lwz r10,664(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 664);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82626330
	if (!ctx.cr6.eq) goto loc_82626330;
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// addi r6,r11,656
	ctx.r6.s64 = ctx.r11.s64 + 656;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,576
	ctx.r8.s64 = ctx.r10.s64 + 576;
	// std r9,576(r10)
	REX_STORE_U64(ctx.r10.u32 + 576, ctx.r9.u64);
	// std r9,584(r10)
	REX_STORE_U64(ctx.r10.u32 + 584, ctx.r9.u64);
	// std r9,592(r10)
	REX_STORE_U64(ctx.r10.u32 + 592, ctx.r9.u64);
	// std r9,600(r10)
	REX_STORE_U64(ctx.r10.u32 + 600, ctx.r9.u64);
	// std r9,608(r10)
	REX_STORE_U64(ctx.r10.u32 + 608, ctx.r9.u64);
loc_826262C0:
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// mulli r7,r8,40
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(40));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r8,576
	ctx.r8.s64 = ctx.r8.s64 + 576;
	// addi r10,r10,576
	ctx.r10.s64 = ctx.r10.s64 + 576;
loc_826262E0:
	// mfmsr r4
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r4.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82626304
	if (!ctx.cr6.eq) goto loc_82626304;
	// stwcx. r10,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826262e0
	if (!ctx.cr0.eq) goto loc_826262E0;
	// b 0x8262630c
	goto loc_8262630C;
loc_82626304:
	// stwcx. r5,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8262630C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwsync 
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82626324
	if (!ctx.cr6.eq) goto loc_82626324;
	// db16cyc 
	std::this_thread::yield();
	// b 0x826262c0
	goto loc_826262C0;
loc_82626324:
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,660(r11)
	REX_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
loc_82626330:
	// lwz r8,660(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r7,r31,-8
	ctx.r7.s64 = r31.s64 + -8;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// mulli r8,r8,40
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(40));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,568
	ctx.r10.s64 = ctx.r10.s64 + 568;
loc_82626350:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x82626350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82626350;
	// stw r9,664(r11)
	REX_STORE_U32(ctx.r11.u32 + 664, ctx.r9.u32);
loc_82626360:
	// mftb r10
	ctx.r10.u64 = REX_QUERY_TIMEBASE();
	// ld r8,672(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 672);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r7,-32120
	ctx.r7.s64 = -2105016320;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r3,r7,20576
	ctx.r3.s64 = ctx.r7.s64 + 20576;
	// std r9,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r10,672(r11)
	REX_STORE_U64(ctx.r11.u32 + 672, ctx.r10.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82625ce0
	ctx.lr = 0x82626390;
	sub_82625CE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82634348) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,2796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2796);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2792);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82634470
	if (ctx.cr6.lt) goto loc_82634470;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8263437C:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82634390
	if (!ctx.cr6.lt) goto loc_82634390;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8263439c
	goto loc_8263439C;
loc_82634390:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8263439c
	if (!ctx.cr6.gt) goto loc_8263439C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8263439C:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bge cr6,0x826343c8
	if (!ctx.cr6.lt) goto loc_826343C8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826343d4
	goto loc_826343D4;
loc_826343C8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826343d4
	if (!ctx.cr6.gt) goto loc_826343D4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_826343D4:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bge cr6,0x82634400
	if (!ctx.cr6.lt) goto loc_82634400;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8263440c
	goto loc_8263440C;
loc_82634400:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8263440c
	if (!ctx.cr6.gt) goto loc_8263440C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8263440C:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bge cr6,0x82634438
	if (!ctx.cr6.lt) goto loc_82634438;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634444
	goto loc_82634444;
loc_82634438:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634444
	if (!ctx.cr6.gt) goto loc_82634444;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634444:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8263437c
	if (ctx.cr6.lt) goto loc_8263437C;
loc_82634470:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8263448C:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826344a0
	if (!ctx.cr6.lt) goto loc_826344A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826344ac
	goto loc_826344AC;
loc_826344A0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826344ac
	if (!ctx.cr6.gt) goto loc_826344AC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_826344AC:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8263448c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263448C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263D750) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8263d7ac
	if (ctx.cr6.gt) goto loc_8263D7AC;
	// lwz r9,164(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,176(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r9,r7,r4
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r4.u64);
	// mulld r10,r8,r3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r3.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8263d7e4
	goto loc_8263D7E4;
loc_8263D7AC:
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,180(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r10,r7,r4
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r4.u64);
	// mulld r9,r8,r3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r3.u64);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8263D7E4:
	// sradi r9,r10,30
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s64 >> 30;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// stw r9,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// mulld r7,r8,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r10.u64);
	// sradi r5,r7,20
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s64 >> 20;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8263d81c
	if (ctx.cr6.lt) goto loc_8263D81C;
	// rldicr r9,r6,36,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 36) & 0xFFFFFFF000000000;
	// divd r8,r9,r10
	ctx.r8.s64 = (ctx.r10.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r10.s64 == -1)) ? ctx.r9.s64 / ctx.r10.s64 : 0;
	// sradi r7,r8,16
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s64 >> 16;
	// stw r7,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r7.u32);
loc_8263D81C:
	// lwz r3,172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641E00) {
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
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8264c608
	ctx.lr = 0x82641E30;
	sub_8264C608(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82641e40
	if (ctx.cr0.eq) goto loc_82641E40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82641E40;
	sub_8264C3D0(ctx, base);
loc_82641E40:
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

DEFINE_REX_FUNC(sub_82642858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826428d8
	if (!ctx.cr6.eq) goto loc_826428D8;
	// addi r9,r3,240
	ctx.r9.s64 = ctx.r3.s64 + 240;
loc_82642868:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82642888:
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
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826428ac
	if (!ctx.cr6.eq) goto loc_826428AC;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82642888
	if (!ctx.cr0.eq) goto loc_82642888;
	// b 0x826428b4
	goto loc_826428B4;
loc_826428AC:
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
loc_826428B4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826428cc
	if (!ctx.cr6.eq) goto loc_826428CC;
	// db16cyc 
	std::this_thread::yield();
	// b 0x82642868
	goto loc_82642868;
loc_826428CC:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
loc_826428D8:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// stw r10,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264A4F0) {
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
	ctx.lr = 0x8264A4F8;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// slw r26,r11,r5
	r26.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// bge cr6,0x8264a548
	if (!ctx.cr6.lt) goto loc_8264A548;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-21712
	r27.s64 = ctx.r11.s64 + -21712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r27,72
	ctx.r8.s64 = r27.s64 + 72;
	// addi r7,r27,8
	ctx.r7.s64 = r27.s64 + 8;
	// lfs f0,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f31,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8264a59c
	goto loc_8264A59C;
loc_8264A548:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f0,3728(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// addi r27,r11,-21712
	r27.s64 = ctx.r11.s64 + -21712;
	// fdiv f30,f0,f13
	f30.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,-21712(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -21712);
	// fmul f1,f30,f0
	ctx.f1.f64 = f30.f64 * ctx.f0.f64;
	// bl 0x826a15c0
	ctx.lr = 0x8264A578;
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
	ctx.lr = 0x8264A58C;
	sub_826A14E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,8312(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8312);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
loc_8264A59C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8264a5b0
	if (!ctx.cr6.eq) goto loc_8264A5B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8264A5B0:
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
	// li r7,176
	ctx.r7.s64 = 176;
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// li r11,192
	ctx.r11.s64 = 192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,208
	ctx.r9.s64 = 208;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,160
	ctx.r8.s64 = 160;
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
loc_8264A620:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bgt cr6,0x8264a638
	if (ctx.cr6.gt) goto loc_8264A638;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8264a82c
	if (!ctx.cr6.eq) goto loc_8264A82C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// ble cr6,0x8264a7d0
	if (!ctx.cr6.gt) goto loc_8264A7D0;
loc_8264A638:
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
	// ble cr6,0x8264a6bc
	if (!ctx.cr6.gt) goto loc_8264A6BC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_8264A684:
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
	// blt cr6,0x8264a684
	if (ctx.cr6.lt) goto loc_8264A684;
loc_8264A6BC:
	// li r28,4
	r28.s64 = 4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x8264a7c8
	if (!ctx.cr6.gt) goto loc_8264A7C8;
loc_8264A6C8:
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
	// bgt cr6,0x8264a77c
	if (ctx.cr6.gt) goto loc_8264A77C;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r30,r5,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_8264A6FC:
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
	// ble cr6,0x8264a6fc
	if (!ctx.cr6.gt) goto loc_8264A6FC;
loc_8264A77C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bgt cr6,0x8264a7bc
	if (ctx.cr6.gt) goto loc_8264A7BC;
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
loc_8264A7BC:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8264a6c8
	if (ctx.cr6.lt) goto loc_8264A6C8;
loc_8264A7C8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x8264a620
	goto loc_8264A620;
loc_8264A7D0:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x8264a8d4
	if (!ctx.cr6.gt) goto loc_8264A8D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8264a8d4
	if (!ctx.cr6.gt) goto loc_8264A8D4;
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
loc_8264A7F4:
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
	// bdnz 0x8264a7f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264A7F4;
	// b 0x8264a8d4
	goto loc_8264A8D4;
loc_8264A82C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x8264a8d4
	if (!ctx.cr6.gt) goto loc_8264A8D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8264a8d4
	if (!ctx.cr6.gt) goto loc_8264A8D4;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// li r5,240
	ctx.r5.s64 = 240;
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
	// li r10,224
	ctx.r10.s64 = 224;
	// lvx128 v12,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8264A870:
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
	// bdnz 0x8264a870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264A870;
loc_8264A8D4:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// ble cr6,0x8264a9dc
	if (!ctx.cr6.gt) goto loc_8264A9DC;
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
	// ble cr6,0x8264a9dc
	if (!ctx.cr6.gt) goto loc_8264A9DC;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
loc_8264A908:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8264a978
	if (!ctx.cr6.lt) goto loc_8264A978;
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
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
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
loc_8264A978:
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
	// bgt cr6,0x8264a9c4
	if (ctx.cr6.gt) goto loc_8264A9C4;
loc_8264A9B0:
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
	// ble cr6,0x8264a9b0
	if (!ctx.cr6.gt) goto loc_8264A9B0;
loc_8264A9C4:
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
	// blt cr6,0x8264a908
	if (ctx.cr6.lt) goto loc_8264A908;
loc_8264A9DC:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8264aa98
	if (!ctx.cr6.eq) goto loc_8264AA98;
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
	// blt cr6,0x8264aa54
	if (ctx.cr6.lt) goto loc_8264AA54;
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
loc_8264AA18:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
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
	// blt cr6,0x8264aa18
	if (ctx.cr6.lt) goto loc_8264AA18;
loc_8264AA54:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8264aa98
	if (!ctx.cr6.lt) goto loc_8264AA98;
	// extsw r9,r26
	ctx.r9.s64 = r26.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// subf r8,r10,r29
	ctx.r8.u64 = r29.u64 - ctx.r10.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_8264AA88:
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
	// bdnz 0x8264aa88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264AA88;
loc_8264AA98:
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

DEFINE_REX_FUNC(sub_8267C358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267C360;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,640
	ctx.r3.s64 = ctx.r3.s64 + 640;
	// bl 0x82687630
	ctx.lr = 0x8267C374;
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
	ctx.lr = 0x8267C38C;
	sub_82687630(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1008);
	// addi r30,r31,1008
	r30.s64 = r31.s64 + 1008;
	// b 0x8267c3c4
	goto loc_8267C3C4;
loc_8267C398:
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
	ctx.lr = 0x8267C3C0;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267C3C4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267c398
	if (!ctx.cr6.eq) goto loc_8267C398;
	// lwz r11,1016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1016);
	// addi r30,r31,1016
	r30.s64 = r31.s64 + 1016;
	// b 0x8267c404
	goto loc_8267C404;
loc_8267C3D8:
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
	ctx.lr = 0x8267C400;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267C404:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267c3d8
	if (!ctx.cr6.eq) goto loc_8267C3D8;
	// lwz r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// addi r30,r31,1024
	r30.s64 = r31.s64 + 1024;
	// b 0x8267c460
	goto loc_8267C460;
loc_8267C418:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,-8
	r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82681d60
	ctx.lr = 0x8267C448;
	sub_82681D60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267C450;
	sub_82676D18(ctx, base);
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1076(r31)
	REX_STORE_U16(r31.u32 + 1076, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267C460:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267c418
	if (!ctx.cr6.eq) goto loc_8267C418;
	// lwz r11,1032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1032);
	// addi r30,r31,1032
	r30.s64 = r31.s64 + 1032;
	// b 0x8267c4bc
	goto loc_8267C4BC;
loc_8267C474:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,-8
	r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82681dd0
	ctx.lr = 0x8267C4A4;
	sub_82681DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267C4AC;
	sub_82676D18(ctx, base);
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1076(r31)
	REX_STORE_U16(r31.u32 + 1076, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267C4BC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267c474
	if (!ctx.cr6.eq) goto loc_8267C474;
	// lwz r30,516(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r29,r31,516
	r29.s64 = r31.s64 + 516;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8267c504
	if (ctx.cr6.eq) goto loc_8267C504;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8267c504
	if (ctx.cr0.eq) goto loc_8267C504;
loc_8267C4DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82685930
	ctx.lr = 0x8267C4FC;
	sub_82685930(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8267c4dc
	if (!ctx.cr6.eq) goto loc_8267C4DC;
loc_8267C504:
	// lwz r30,524(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r29,r31,524
	r29.s64 = r31.s64 + 524;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8267c544
	if (ctx.cr6.eq) goto loc_8267C544;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8267c544
	if (ctx.cr0.eq) goto loc_8267C544;
loc_8267C51C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82685930
	ctx.lr = 0x8267C53C;
	sub_82685930(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8267c51c
	if (!ctx.cr6.eq) goto loc_8267C51C;
loc_8267C544:
	// addi r30,r31,624
	r30.s64 = r31.s64 + 624;
	// lwz r31,624(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 624);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8267c580
	if (ctx.cr6.eq) goto loc_8267C580;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8267c580
	if (ctx.cr0.eq) goto loc_8267C580;
loc_8267C55C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r31,-24
	ctx.r3.s64 = r31.s64 + -24;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82683b80
	ctx.lr = 0x8267C578;
	sub_82683B80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8267c55c
	if (!ctx.cr6.eq) goto loc_8267C55C;
loc_8267C580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8268A008) {
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
	ctx.lr = 0x8268A010;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,232
	r28.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x827938a4
	ctx.lr = 0x8268A030;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826896a0
	ctx.lr = 0x8268A03C;
	sub_826896A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268a050
	if (!ctx.cr0.eq) goto loc_8268A050;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8268a060
	goto loc_8268A060;
loc_8268A050:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8268e248
	ctx.lr = 0x8268A05C;
	sub_8268E248(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8268A060:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8268A068;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8268C5F0) {
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
	ctx.lr = 0x8268C5F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8268c688
	if (ctx.cr6.eq) goto loc_8268C688;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	r27.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_8268C624:
	// lwz r29,-20(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8268c66c
	if (ctx.cr6.eq) goto loc_8268C66C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// b 0x8268c670
	goto loc_8268C670;
loc_8268C66C:
	// stw r25,0(r30)
	REX_STORE_U32(r30.u32 + 0, r25.u32);
loc_8268C670:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c624
	if (ctx.cr6.lt) goto loc_8268C624;
loc_8268C688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82692578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82692580;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82692594
	if (!ctx.cr6.eq) goto loc_82692594;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82692628
	goto loc_82692628;
loc_82692594:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82692624
	if (ctx.cr6.eq) goto loc_82692624;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,64206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64206, ctx.xer);
	// bne cr6,0x82692624
	if (!ctx.cr6.eq) goto loc_82692624;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x826925c0
	if (ctx.cr6.eq) goto loc_826925C0;
	// li r3,6115
	ctx.r3.s64 = 6115;
	// b 0x82692628
	goto loc_82692628;
loc_826925C0:
	// li r29,0
	r29.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82693948
	ctx.lr = 0x826925D0;
	sub_82693948(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r30,-32119
	r30.s64 = -2104950784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826925f0
	if (ctx.cr6.eq) goto loc_826925F0;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826925EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
loc_826925F0:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269260c
	if (ctx.cr6.eq) goto loc_8269260C;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82692608;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
loc_8269260C:
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269261C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82692628
	goto loc_82692628;
loc_82692624:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_82692628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826972C0) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x826972C8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x826972D0;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32119
	r27.s64 = -2104950784;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2316
	ctx.r5.s64 = 2316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-5952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -5952);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// addi r26,r30,2056
	r26.s64 = r30.s64 + 2056;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r25,r30,2316
	r25.s64 = r30.s64 + 2316;
	// bctrl 
	ctx.lr = 0x82697318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
loc_82697334:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,24712(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24712);
	// lfs f0,4736(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4736);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82697334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697334;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r30,224
	ctx.r6.s64 = r30.s64 + 224;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,224(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 224, temp.u32);
loc_82697384:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfsx f13,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blt cr6,0x826973d4
	if (ctx.cr6.lt) goto loc_826973D4;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_826973BC:
	// lfsx f12,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,-4(r5)
	ea = -4 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x826973bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826973BC;
loc_826973D4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82697384
	if (ctx.cr6.lt) goto loc_82697384;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// subf r9,r29,r6
	ctx.r9.u64 = ctx.r6.u64 - r29.u64;
	// subf r8,r29,r30
	ctx.r8.u64 = r30.u64 - r29.u64;
	// subf r7,r29,r28
	ctx.r7.u64 = r28.u64 - r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826973FC:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826973fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826973FC;
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// stfs f29,48(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// subf r5,r31,r6
	ctx.r5.u64 = ctx.r6.u64 - r31.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8269742C:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// ble cr6,0x82697474
	if (!ctx.cr6.gt) goto loc_82697474;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82697464:
	// lfsu f13,-4(r8)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsu f12,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// bdnz 0x82697464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697464;
loc_82697474:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x8269742c
	if (!ctx.cr6.gt) goto loc_8269742C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// bgt cr6,0x826974dc
	if (ctx.cr6.gt) goto loc_826974DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// subfic r6,r11,44
	ctx.xer.ca = ctx.r11.u32 <= 44;
	ctx.r6.u64 = static_cast<uint64_t>(44) - ctx.r11.u64;
loc_826974A8:
	// li r11,12
	ctx.r11.s64 = 12;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826974BC:
	// lfsu f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f12,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// bdnz 0x826974bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826974BC;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x826974a8
	if (!ctx.cr0.eq) goto loc_826974A8;
loc_826974DC:
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// li r10,43
	ctx.r10.s64 = 43;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lwz r9,24724(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24724);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - r31.u64;
loc_826974F4:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826974f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826974F4;
	// lwz r11,-5952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -5952);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82697524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-5952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -5952);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269753C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r9,r1,684
	ctx.r9.s64 = ctx.r1.s64 + 684;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lfs f0,3192(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lfs f13,3188(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3188);
	ctx.f13.f64 = double(temp.f32);
loc_82697570:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfsu f10,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f12,-4(r7)
	ea = -4 + ctx.r7.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82697570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697570;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82695418
	ctx.lr = 0x826975CC;
	sub_82695418(ctx, base);
	// li r10,65
	ctx.r10.s64 = 65;
	// subf r11,r30,r25
	ctx.r11.u64 = r25.u64 - r30.u64;
	// addi r9,r25,-4
	ctx.r9.s64 = r25.s64 + -4;
	// addi r11,r11,-2316
	ctx.r11.s64 = ctx.r11.s64 + -2316;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826975E0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r11,r26
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r26.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x826975e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826975E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82699428
	ctx.lr = 0x82697610;
	sub_82699428(ctx, base);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fcmpu cr6,f28,f30
	ctx.cr6.compare(f28.f64, f30.f64);
	// bne cr6,0x82697630
	if (!ctx.cr6.eq) goto loc_82697630;
	// extsh. r11,r23
	ctx.r11.s64 = r23.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82697630
	if (!ctx.cr0.eq) goto loc_82697630;
	// extsh. r11,r24
	ctx.r11.s64 = r24.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826976f8
	if (ctx.cr0.eq) goto loc_826976F8;
loc_82697630:
	// li r10,65
	ctx.r10.s64 = 65;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r7,r30,r26
	ctx.r7.u64 = r26.u64 - r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82697648:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826976a0
	if (ctx.cr6.lt) goto loc_826976A0;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// extsh r10,r23
	ctx.r10.s64 = r23.s16;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// lfsx f12,r8,r26
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bgt cr6,0x82697698
	if (ctx.cr6.gt) goto loc_82697698;
	// lfsx f12,r8,r26
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826976a4
	goto loc_826976A4;
loc_82697698:
	// lfs f12,256(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826976a4
	goto loc_826976A4;
loc_826976A0:
	// lfsx f12,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_826976A4:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f12,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// bdnz 0x82697648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697648;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r10,65
	ctx.r10.s64 = 65;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r9,r26,r30
	ctx.r9.u64 = r30.u64 - r26.u64;
	// lfs f0,3184(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3184);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_826976E4:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826976e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826976E4;
loc_826976F8:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82697704;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826A4220) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826a4258
	if (ctx.cr0.eq) goto loc_826A4258;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826a423c
	if (!ctx.cr6.eq) goto loc_826A423C;
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x826a4258
	goto loc_826A4258;
loc_826A423C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x826a424c
	if (!ctx.cr6.eq) goto loc_826A424C;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x826a4258
	goto loc_826A4258;
loc_826A424C:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x826a4258
	if (!ctx.cr6.eq) goto loc_826A4258;
	// li r11,256
	ctx.r11.s64 = 256;
loc_826A4258:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4264
	if (ctx.cr0.eq) goto loc_826A4264;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_826A4264:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4270
	if (ctx.cr0.eq) goto loc_826A4270;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_826A4270:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a427c
	if (ctx.cr0.eq) goto loc_826A427C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_826A427C:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4288
	if (ctx.cr0.eq) goto loc_826A4288;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_826A4288:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a4294
	if (ctx.cr0.eq) goto loc_826A4294;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_826A4294:
	// oris r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 524288;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A7DE0) {
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
	ctx.lr = 0x826A7DE8;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// stw r4,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// sth r19,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r19.u16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// bne cr6,0x826a7e3c
	if (!ctx.cr6.eq) goto loc_826A7E3C;
loc_826A7E24:
	// bl 0x826a33d0
	ctx.lr = 0x826A7E28;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A7E34;
	sub_8269CB20(ctx, base);
loc_826A7E34:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a91a4
	goto loc_826A91A4;
loc_826A7E3C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826a7e24
	if (ctx.cr6.eq) goto loc_826A7E24;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a7efc
	if (!ctx.cr0.eq) goto loc_826A7EFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A7E58;
	sub_826A3320(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// addi r8,r10,26400
	ctx.r8.s64 = ctx.r10.s64 + 26400;
	// beq cr6,0x826a7e94
	if (ctx.cr6.eq) goto loc_826A7E94;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826a7e94
	if (ctx.cr6.eq) goto loc_826A7E94;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x826a7e98
	goto loc_826A7E98;
loc_826A7E94:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_826A7E98:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a7ee0
	if (!ctx.cr0.eq) goto loc_826A7EE0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a7ed0
	if (ctx.cr6.eq) goto loc_826A7ED0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826a7ed0
	if (ctx.cr6.eq) goto loc_826A7ED0;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x826a7ed4
	goto loc_826A7ED4;
loc_826A7ED0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826A7ED4:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a7efc
	if (ctx.cr0.eq) goto loc_826A7EFC;
loc_826A7EE0:
	// bl 0x826a33d0
	ctx.lr = 0x826A7EE4;
	sub_826A33D0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_826A7EE8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A7EF4;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826a91a4
	goto loc_826A91A4;
loc_826A7EFC:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r19,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// beq 0x826a91a0
	if (ctx.cr0.eq) goto loc_826A91A0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,27400
	ctx.r11.s64 = ctx.r11.s64 + 27400;
	// addi r10,r10,28084
	ctx.r10.s64 = ctx.r10.s64 + 28084;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_826A7F2C:
	// bl 0x826a0860
	ctx.lr = 0x826A7F30;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a7fb8
	if (ctx.cr0.eq) goto loc_826A7FB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_826A7F40:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a7f6c
	if (ctx.cr0.lt) goto loc_826A7F6C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a7f78
	goto loc_826A7F78;
loc_826A7F6C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A7F74;
	sub_826A91B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826A7F78:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x826a7f9c
	if (ctx.cr6.eq) goto loc_826A7F9C;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x826a0860
	ctx.lr = 0x826A7F88;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a7f40
	if (!ctx.cr0.eq) goto loc_826A7F40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A7F9C;
	sub_8269DD28(ctx, base);
loc_826A7F9C:
	// lwz r30,716(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_826A7FA0:
	// lbzu r3,1(r30)
	ea = 1 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// bl 0x826a0860
	ctx.lr = 0x826A7FA8;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a7fa0
	if (!ctx.cr0.eq) goto loc_826A7FA0;
	// stw r30,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// b 0x826a90b8
	goto loc_826A90B8;
loc_826A7FB8:
	// lwz r18,716(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x826a8fe4
	if (!ctx.cr6.eq) goto loc_826A8FE4;
	// lbz r10,1(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x826a8fc8
	if (ctx.cr6.eq) goto loc_826A8FC8;
	// li r22,0
	r22.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r14,0
	r14.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// li r21,0
	r21.s64 = 0;
loc_826A800C:
	// lbzu r31,1(r18)
	ea = 1 + r18.u32;
	r31.u64 = REX_LOAD_U8(ea);
	r18.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0820
	ctx.lr = 0x826A8018;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8034
	if (ctx.cr0.eq) goto loc_826A8034;
	// mulli r11,r14,10
	ctx.r11.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r14,r11,-48
	r14.s64 = ctx.r11.s64 + -48;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A8034:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(r31.s32, 78, ctx.xer);
	// bgt cr6,0x826a80f0
	if (ctx.cr6.gt) goto loc_826A80F0;
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(r31.s32, 42, ctx.xer);
	// beq cr6,0x826a80e4
	if (ctx.cr6.eq) goto loc_826A80E4;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(r31.s32, 70, ctx.xer);
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(r31.s32, 73, ctx.xer);
	// beq cr6,0x826a8068
	if (ctx.cr6.eq) goto loc_826A8068;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(r31.s32, 76, ctx.xer);
	// bne cr6,0x826a8108
	if (!ctx.cr6.eq) goto loc_826A8108;
	// addi r11,r15,1
	ctx.r11.s64 = r15.s64 + 1;
	// b 0x826a8144
	goto loc_826A8144;
loc_826A8068:
	// lbz r10,1(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x826a8098
	if (!ctx.cr6.eq) goto loc_826A8098;
	// lbz r9,2(r18)
	ctx.r9.u64 = REX_LOAD_U8(r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x826a8098
	if (!ctx.cr6.eq) goto loc_826A8098;
loc_826A8084:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// b 0x826a8148
	goto loc_826A8148;
loc_826A8098:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x826a80b8
	if (!ctx.cr6.eq) goto loc_826A80B8;
	// lbz r9,2(r18)
	ctx.r9.u64 = REX_LOAD_U8(r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// bne cr6,0x826a80b8
	if (!ctx.cr6.eq) goto loc_826A80B8;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A80B8:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x826a8148
	if (ctx.cr6.eq) goto loc_826A8148;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x826a8108
	if (!ctx.cr6.eq) goto loc_826A8108;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A80E4:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A80F0:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(r31.s32, 104, ctx.xer);
	// beq cr6,0x826a8138
	if (ctx.cr6.eq) goto loc_826A8138;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(r31.s32, 108, ctx.xer);
	// beq cr6,0x826a8114
	if (ctx.cr6.eq) goto loc_826A8114;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(r31.s32, 119, ctx.xer);
	// beq cr6,0x826a812c
	if (ctx.cr6.eq) goto loc_826A812C;
loc_826A8108:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A8114:
	// lbz r10,1(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 1);
	// addi r11,r18,1
	ctx.r11.s64 = r18.s64 + 1;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x826a8084
	if (ctx.cr6.eq) goto loc_826A8084;
	// addi r11,r15,1
	ctx.r11.s64 = r15.s64 + 1;
	// extsb r15,r11
	r15.s64 = ctx.r11.s8;
loc_826A812C:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// b 0x826a8148
	goto loc_826A8148;
loc_826A8138:
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// addi r11,r15,-1
	ctx.r11.s64 = r15.s64 + -1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_826A8144:
	// extsb r15,r11
	r15.s64 = ctx.r11.s8;
loc_826A8148:
	// extsb. r11,r30
	ctx.r11.s64 = r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a800c
	if (ctx.cr0.eq) goto loc_826A800C;
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r18.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne 0x826a8180
	if (!ctx.cr0.eq) goto loc_826A8180;
	// lwz r11,732(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x826a8184
	goto loc_826A8184;
loc_826A8180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A8184:
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne 0x826a81b0
	if (!ctx.cr0.eq) goto loc_826A81B0;
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x826a81ac
	if (ctx.cr6.eq) goto loc_826A81AC;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	r28.s64 = -1;
	// bne cr6,0x826a81b0
	if (!ctx.cr6.eq) goto loc_826A81B0;
loc_826A81AC:
	// li r28,1
	r28.s64 = 1;
loc_826A81B0:
	// lwz r9,716(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// ori r18,r11,32
	r18.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r18,110
	ctx.cr6.compare<int32_t>(r18.s32, 110, ctx.xer);
	// beq cr6,0x826a8278
	if (ctx.cr6.eq) goto loc_826A8278;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x826a8230
	if (ctx.cr6.eq) goto loc_826A8230;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// beq cr6,0x826a8230
	if (ctx.cr6.eq) goto loc_826A8230;
loc_826A81D4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt 0x826a8204
	if (ctx.cr0.lt) goto loc_826A8204;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8210
	goto loc_826A8210;
loc_826A8204:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A820C;
	sub_826A91B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826A8210:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x826a8228
	if (ctx.cr6.eq) goto loc_826A8228;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x826a0860
	ctx.lr = 0x826A8220;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a81d4
	if (!ctx.cr0.eq) goto loc_826A81D4;
loc_826A8228:
	// mr r19,r31
	r19.u64 = r31.u64;
	// b 0x826a826c
	goto loc_826A826C;
loc_826A8230:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8260
	if (ctx.cr0.lt) goto loc_826A8260;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a826c
	goto loc_826A826C;
loc_826A8260:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8268;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A826C:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// lwz r9,716(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_826A8278:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a8288
	if (ctx.cr6.eq) goto loc_826A8288;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x826a913c
	if (ctx.cr6.eq) goto loc_826A913C;
loc_826A8288:
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826a82f8
	if (!ctx.cr6.eq) goto loc_826A82F8;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x826a82ac
	if (ctx.cr6.eq) goto loc_826A82AC;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(r18.s32, 115, ctx.xer);
	// beq cr6,0x826a82ac
	if (ctx.cr6.eq) goto loc_826A82AC;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x826a82f8
	if (!ctx.cr6.eq) goto loc_826A82F8;
loc_826A82AC:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bge cr6,0x826a82fc
	if (!ctx.cr6.lt) goto loc_826A82FC;
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826a90c8
	if (!ctx.cr0.gt) goto loc_826A90C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// b 0x826a90d0
	goto loc_826A90D0;
loc_826A82F8:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_826A82FC:
	// addi r11,r18,-99
	ctx.r11.s64 = r18.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x826a8f80
	if (ctx.cr6.gt) goto loc_826A8F80;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,21816
	ctx.r12.s64 = ctx.r12.s64 + 21816;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32149
	ctx.r12.s64 = -2106916864;
	// addi r12,r12,-31952
	ctx.r12.s64 = ctx.r12.s64 + -31952;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826A8330;
	case 1:
		goto loc_826A8824;
	case 2:
		goto loc_826A8B88;
	case 3:
		goto loc_826A8B88;
	case 4:
		goto loc_826A8B88;
	case 5:
		goto loc_826A8F80;
	case 6:
		goto loc_826A86AC;
	case 7:
		goto loc_826A8F80;
	case 8:
		goto loc_826A8F80;
	case 9:
		goto loc_826A8F80;
	case 10:
		goto loc_826A8F80;
	case 11:
		goto loc_826A8B3C;
	case 12:
		goto loc_826A8824;
	case 13:
		goto loc_826A8820;
	case 14:
		goto loc_826A8F80;
	case 15:
		goto loc_826A8F80;
	case 16:
		goto loc_826A8340;
	case 17:
		goto loc_826A8F80;
	case 18:
		goto loc_826A8824;
	case 19:
		goto loc_826A8F80;
	case 20:
		goto loc_826A8F80;
	case 21:
		goto loc_826A86B0;
	case 22:
		goto loc_826A8F80;
	case 23:
		goto loc_826A8F80;
	case 24:
		goto loc_826A8350;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826A8330:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x826a8340
	if (!ctx.cr6.eq) goto loc_826A8340;
	// li r16,1
	r16.s64 = 1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
loc_826A8340:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826a84a8
	if (!ctx.cr0.gt) goto loc_826A84A8;
	// li r23,1
	r23.s64 = 1;
	// b 0x826a84a8
	goto loc_826A84A8;
loc_826A8350:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x826a8360
	if (!ctx.cr0.gt) goto loc_826A8360;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
loc_826A8360:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x826a837c
	if (!ctx.cr6.eq) goto loc_826A837C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r24,-1
	r24.s64 = -1;
loc_826A837C:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// std r5,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x826a8480
	if (!ctx.cr6.eq) goto loc_826A8480;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x826a8480
	if (!ctx.cr6.eq) goto loc_826A8480;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x826a8480
	goto loc_826A8480;
loc_826A83BC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x826a8460
	if (!ctx.cr6.eq) goto loc_826A8460;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826a8460
	if (ctx.cr0.eq) goto loc_826A8460;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x826a8460
	if (ctx.cr6.eq) goto loc_826A8460;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826a83f8
	if (!ctx.cr6.lt) goto loc_826A83F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x826a8400
	goto loc_826A8400;
loc_826A83F8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_826A8400:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826a843c
	if (!ctx.cr6.lt) goto loc_826A843C;
loc_826A8410:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stbx r4,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x826a8410
	if (ctx.cr6.lt) goto loc_826A8410;
loc_826A843C:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x826a8480
	goto loc_826A8480;
loc_826A8460:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_826A8480:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x826a83bc
	if (!ctx.cr6.eq) goto loc_826A83BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x826a84a8
	if (!ctx.cr6.eq) goto loc_826A84A8;
	// stw r7,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_826A84A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x826a84cc
	if (ctx.cr6.eq) goto loc_826A84CC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A84CC;
	sub_8269DD28(ctx, base);
loc_826A84CC:
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x826a84d8
	if (ctx.cr6.eq) goto loc_826A84D8;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_826A84D8:
	// lwz r28,128(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_826A84DC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a84f0
	if (ctx.cr6.eq) goto loc_826A84F0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x826a8660
	if (ctx.cr6.eq) goto loc_826A8660;
loc_826A84F0:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a851c
	if (ctx.cr0.lt) goto loc_826A851C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8528
	goto loc_826A8528;
loc_826A851C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8524;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8528:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x826a8644
	if (ctx.cr6.eq) goto loc_826A8644;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x826a858c
	if (ctx.cr6.eq) goto loc_826A858C;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(r18.s32, 115, ctx.xer);
	// bne cr6,0x826a8558
	if (!ctx.cr6.eq) goto loc_826A8558;
	// cmpwi cr6,r19,9
	ctx.cr6.compare<int32_t>(r19.s32, 9, ctx.xer);
	// blt cr6,0x826a8550
	if (ctx.cr6.lt) goto loc_826A8550;
	// cmpwi cr6,r19,13
	ctx.cr6.compare<int32_t>(r19.s32, 13, ctx.xer);
	// ble cr6,0x826a8644
	if (!ctx.cr6.gt) goto loc_826A8644;
loc_826A8550:
	// cmpwi cr6,r19,32
	ctx.cr6.compare<int32_t>(r19.s32, 32, ctx.xer);
	// bne cr6,0x826a858c
	if (!ctx.cr6.eq) goto loc_826A858C;
loc_826A8558:
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x826a8644
	if (!ctx.cr6.eq) goto loc_826A8644;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r19,3
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7) != 0);
	ctx.r11.s64 = r19.s32 >> 3;
	// clrlwi r9,r19,29
	ctx.r9.u64 = r19.u32 & 0x7;
	// extsb r8,r24
	ctx.r8.s64 = r24.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8644
	if (ctx.cr0.eq) goto loc_826A8644;
loc_826A858C:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a863c
	if (!ctx.cr6.eq) goto loc_826A863C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826a90e0
	if (ctx.cr6.eq) goto loc_826A90E0;
	// extsb. r11,r23
	ctx.r11.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8624
	if (ctx.cr0.eq) goto loc_826A8624;
	// stb r19,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r19.u8);
	// clrlwi r3,r19,24
	ctx.r3.u64 = r19.u32 & 0xFF;
	// bl 0x826b1458
	ctx.lr = 0x826A85B4;
	sub_826B1458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a85f4
	if (ctx.cr0.eq) goto loc_826A85F4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a85e8
	if (ctx.cr0.lt) goto loc_826A85E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a85f0
	goto loc_826A85F0;
loc_826A85E8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A85F0;
	sub_826A91B0(ctx, base);
loc_826A85F0:
	// stb r3,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r3.u8);
loc_826A85F4:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// sth r10,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,172(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x826b1510
	ctx.lr = 0x826A8614;
	sub_826B1510(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x826a8630
	goto loc_826A8630;
loc_826A8624:
	// extsb r11,r19
	ctx.r11.s64 = r19.s8;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_826A8630:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x826a84dc
	goto loc_826A84DC;
loc_826A863C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826a84dc
	goto loc_826A84DC;
loc_826A8644:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a8660
	if (ctx.cr6.eq) goto loc_826A8660;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A8660;
	sub_8269DD28(ctx, base);
loc_826A8660:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a8fa8
	if (!ctx.cr6.eq) goto loc_826A8FA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x826a8fa8
	if (ctx.cr6.eq) goto loc_826A8FA8;
	// extsb. r11,r23
	ctx.r11.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x826a86a0
	if (ctx.cr0.eq) goto loc_826A86A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A86A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A86AC:
	// li r18,100
	r18.s64 = 100;
loc_826A86B0:
	// cmpwi cr6,r19,45
	ctx.cr6.compare<int32_t>(r19.s32, 45, ctx.xer);
	// bne cr6,0x826a86c0
	if (!ctx.cr6.eq) goto loc_826A86C0;
	// li r20,1
	r20.s64 = 1;
	// b 0x826a86c8
	goto loc_826A86C8;
loc_826A86C0:
	// cmpwi cr6,r19,43
	ctx.cr6.compare<int32_t>(r19.s32, 43, ctx.xer);
	// bne cr6,0x826a871c
	if (!ctx.cr6.eq) goto loc_826A871C;
loc_826A86C8:
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x826a86e0
	if (!ctx.cr0.eq) goto loc_826A86E0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a86e0
	if (ctx.cr6.eq) goto loc_826A86E0;
	// li r29,1
	r29.s64 = 1;
	// b 0x826a871c
	goto loc_826A871C;
loc_826A86E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8710
	if (ctx.cr0.lt) goto loc_826A8710;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a871c
	goto loc_826A871C;
loc_826A8710:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8718;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A871C:
	// cmpwi cr6,r19,48
	ctx.cr6.compare<int32_t>(r19.s32, 48, ctx.xer);
	// bne cr6,0x826a8890
	if (!ctx.cr6.eq) goto loc_826A8890;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8754
	if (ctx.cr0.lt) goto loc_826A8754;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8760
	goto loc_826A8760;
loc_826A8754:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A875C;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8760:
	// extsb r11,r19
	ctx.r11.s64 = r19.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x826a87c4
	if (ctx.cr6.eq) goto loc_826A87C4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x826a87c4
	if (ctx.cr6.eq) goto loc_826A87C4;
	// li r17,1
	r17.s64 = 1;
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x826a87a0
	if (ctx.cr6.eq) goto loc_826A87A0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a8798
	if (ctx.cr6.eq) goto loc_826A8798;
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x826a8798
	if (!ctx.cr0.eq) goto loc_826A8798;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826A8798:
	// li r18,111
	r18.s64 = 111;
	// b 0x826a8890
	goto loc_826A8890;
loc_826A87A0:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a87bc
	if (ctx.cr6.eq) goto loc_826A87BC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A87BC;
	sub_8269DD28(ctx, base);
loc_826A87BC:
	// li r19,48
	r19.s64 = 48;
	// b 0x826a8890
	goto loc_826A8890;
loc_826A87C4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a87f0
	if (ctx.cr0.lt) goto loc_826A87F0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a87fc
	goto loc_826A87FC;
loc_826A87F0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A87F8;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A87FC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a8818
	if (ctx.cr6.eq) goto loc_826A8818;
	// addi r14,r14,-2
	r14.s64 = r14.s64 + -2;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(r14.s32, 1, ctx.xer);
	// bge cr6,0x826a8818
	if (!ctx.cr6.lt) goto loc_826A8818;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826A8818:
	// li r18,120
	r18.s64 = 120;
	// b 0x826a8890
	goto loc_826A8890;
loc_826A8820:
	// li r15,1
	r15.s64 = 1;
loc_826A8824:
	// cmpwi cr6,r19,45
	ctx.cr6.compare<int32_t>(r19.s32, 45, ctx.xer);
	// bne cr6,0x826a8834
	if (!ctx.cr6.eq) goto loc_826A8834;
	// li r20,1
	r20.s64 = 1;
	// b 0x826a883c
	goto loc_826A883C;
loc_826A8834:
	// cmpwi cr6,r19,43
	ctx.cr6.compare<int32_t>(r19.s32, 43, ctx.xer);
	// bne cr6,0x826a8890
	if (!ctx.cr6.eq) goto loc_826A8890;
loc_826A883C:
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x826a8854
	if (!ctx.cr0.eq) goto loc_826A8854;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a8854
	if (ctx.cr6.eq) goto loc_826A8854;
	// li r29,1
	r29.s64 = 1;
	// b 0x826a8890
	goto loc_826A8890;
loc_826A8854:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8884
	if (ctx.cr0.lt) goto loc_826A8884;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8890
	goto loc_826A8890;
loc_826A8884:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A888C;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8890:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x826a89e8
	if (ctx.cr6.eq) goto loc_826A89E8;
	// bne 0x826a89d0
	if (!ctx.cr0.eq) goto loc_826A89D0;
loc_826A88A0:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x826a88ec
	if (ctx.cr6.eq) goto loc_826A88EC;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(r18.s32, 112, ctx.xer);
	// beq cr6,0x826a88ec
	if (ctx.cr6.eq) goto loc_826A88EC;
	// clrlwi r3,r19,24
	ctx.r3.u64 = r19.u32 & 0xFF;
	// bl 0x826a0820
	ctx.lr = 0x826A88B8;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8928
	if (ctx.cr0.eq) goto loc_826A8928;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(r18.s32, 111, ctx.xer);
	// bne cr6,0x826a88e0
	if (!ctx.cr6.eq) goto loc_826A88E0;
	// cmpwi cr6,r19,56
	ctx.cr6.compare<int32_t>(r19.s32, 56, ctx.xer);
	// bge cr6,0x826a8928
	if (!ctx.cr6.lt) goto loc_826A8928;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_826A88D8:
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x826a8930
	goto loc_826A8930;
loc_826A88E0:
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// b 0x826a88d8
	goto loc_826A88D8;
loc_826A88EC:
	// clrlwi r30,r19,24
	r30.u64 = r19.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0840
	ctx.lr = 0x826A88F8;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8928
	if (ctx.cr0.eq) goto loc_826A8928;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x826a0820
	ctx.lr = 0x826A8914;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a8930
	if (!ctx.cr0.eq) goto loc_826A8930;
	// rlwinm r11,r19,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r19,r11,-7
	r19.s64 = ctx.r11.s64 + -7;
	// b 0x826a8930
	goto loc_826A8930;
loc_826A8928:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826A8930:
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a89a8
	if (!ctx.cr0.eq) goto loc_826A89A8;
	// addi r11,r19,-48
	ctx.r11.s64 = r19.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x826a8968
	if (ctx.cr6.eq) goto loc_826A8968;
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x826a8968
	if (!ctx.cr0.eq) goto loc_826A8968;
	// li r29,1
	r29.s64 = 1;
	// b 0x826a89c8
	goto loc_826A89C8;
loc_826A8968:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8998
	if (ctx.cr0.lt) goto loc_826A8998;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a89c8
	goto loc_826A89C8;
loc_826A8998:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A89A0;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x826a89c8
	goto loc_826A89C8;
loc_826A89A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a89c8
	if (ctx.cr6.eq) goto loc_826A89C8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A89C8;
	sub_8269DD28(ctx, base);
loc_826A89C8:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826a88a0
	if (ctx.cr0.eq) goto loc_826A88A0;
loc_826A89D0:
	// extsb. r11,r20
	ctx.r11.s64 = r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8b08
	if (ctx.cr0.eq) goto loc_826A8B08;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x826a8b08
	goto loc_826A8B08;
loc_826A89E8:
	// bne 0x826a8afc
	if (!ctx.cr0.eq) goto loc_826A8AFC;
loc_826A89EC:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x826a8a2c
	if (ctx.cr6.eq) goto loc_826A8A2C;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(r18.s32, 112, ctx.xer);
	// beq cr6,0x826a8a2c
	if (ctx.cr6.eq) goto loc_826A8A2C;
	// clrlwi r3,r19,24
	ctx.r3.u64 = r19.u32 & 0xFF;
	// bl 0x826a0820
	ctx.lr = 0x826A8A04;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8a60
	if (ctx.cr0.eq) goto loc_826A8A60;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(r18.s32, 111, ctx.xer);
	// bne cr6,0x826a8a24
	if (!ctx.cr6.eq) goto loc_826A8A24;
	// cmpwi cr6,r19,56
	ctx.cr6.compare<int32_t>(r19.s32, 56, ctx.xer);
	// bge cr6,0x826a8a60
	if (!ctx.cr6.lt) goto loc_826A8A60;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x826a8a68
	goto loc_826A8A68;
loc_826A8A24:
	// mulli r22,r22,10
	r22.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(10));
	// b 0x826a8a68
	goto loc_826A8A68;
loc_826A8A2C:
	// clrlwi r30,r19,24
	r30.u64 = r19.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0840
	ctx.lr = 0x826A8A38;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8a60
	if (ctx.cr0.eq) goto loc_826A8A60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r22,4,0,27
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a0820
	ctx.lr = 0x826A8A4C;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a8a68
	if (!ctx.cr0.eq) goto loc_826A8A68;
	// rlwinm r11,r19,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r19,r11,-7
	r19.s64 = ctx.r11.s64 + -7;
	// b 0x826a8a68
	goto loc_826A8A68;
loc_826A8A60:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826A8A68:
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a8ad4
	if (!ctx.cr0.eq) goto loc_826A8AD4;
	// add r11,r22,r19
	ctx.r11.u64 = r22.u64 + r19.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r22,r11,-48
	r22.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826a8a94
	if (ctx.cr6.eq) goto loc_826A8A94;
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x826a8a94
	if (!ctx.cr0.eq) goto loc_826A8A94;
	// li r29,1
	r29.s64 = 1;
	// b 0x826a8af4
	goto loc_826A8AF4;
loc_826A8A94:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8ac4
	if (ctx.cr0.lt) goto loc_826A8AC4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8af4
	goto loc_826A8AF4;
loc_826A8AC4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8ACC;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x826a8af4
	goto loc_826A8AF4;
loc_826A8AD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a8af4
	if (ctx.cr6.eq) goto loc_826A8AF4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A8AF4;
	sub_8269DD28(ctx, base);
loc_826A8AF4:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826a89ec
	if (ctx.cr0.eq) goto loc_826A89EC;
loc_826A8AFC:
	// extsb. r11,r20
	ctx.r11.s64 = r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8b08
	if (ctx.cr0.eq) goto loc_826A8B08;
	// neg r22,r22
	r22.s64 = static_cast<int64_t>(-r22.u64);
loc_826A8B08:
	// addi r11,r18,-70
	ctx.r11.s64 = r18.s64 + -70;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a8fa8
	if (!ctx.cr6.eq) goto loc_826A8FA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x826a8b54
	goto loc_826A8B54;
loc_826A8B3C:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826a8fa8
	if (!ctx.cr6.eq) goto loc_826A8FA8;
	// bl 0x826a3040
	ctx.lr = 0x826A8B4C;
	sub_826A3040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8fa8
	if (ctx.cr0.eq) goto loc_826A8FA8;
loc_826A8B54:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x826a8b6c
	if (ctx.cr6.eq) goto loc_826A8B6C;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A8B6C:
	// extsb. r11,r15
	ctx.r11.s64 = r15.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x826a8b80
	if (ctx.cr0.eq) goto loc_826A8B80;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A8B80:
	// sth r22,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r22.u16);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A8B88:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r19,45
	ctx.cr6.compare<int32_t>(r19.s32, 45, ctx.xer);
	// bne cr6,0x826a8ba8
	if (!ctx.cr6.eq) goto loc_826A8BA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	r30.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x826a8bb0
	goto loc_826A8BB0;
loc_826A8BA8:
	// cmpwi cr6,r19,43
	ctx.cr6.compare<int32_t>(r19.s32, 43, ctx.xer);
	// bne cr6,0x826a8bf0
	if (!ctx.cr6.eq) goto loc_826A8BF0;
loc_826A8BB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8be4
	if (ctx.cr0.lt) goto loc_826A8BE4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8bf0
	goto loc_826A8BF0;
loc_826A8BE4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8BEC;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8BF0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x826a8c78
	if (!ctx.cr6.eq) goto loc_826A8C78;
	// li r14,-1
	r14.s64 = -1;
	// b 0x826a8c78
	goto loc_826A8C78;
loc_826A8C00:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x826a8c8c
	if (ctx.cr6.eq) goto loc_826A8C8C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8C34;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8c6c
	if (ctx.cr0.lt) goto loc_826A8C6C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8c78
	goto loc_826A8C78;
loc_826A8C6C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8C74;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8C78:
	// clrlwi r31,r19,24
	r31.u64 = r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0820
	ctx.lr = 0x826A8C84;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a8c00
	if (!ctx.cr0.eq) goto loc_826A8C00;
loc_826A8C8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r10,r31
	ctx.r10.s64 = r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826a8dac
	if (!ctx.cr6.eq) goto loc_826A8DAC;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x826a8dac
	if (ctx.cr6.eq) goto loc_826A8DAC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8ce8
	if (ctx.cr0.lt) goto loc_826A8CE8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8cf4
	goto loc_826A8CF4;
loc_826A8CE8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8CF0;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8CF4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8D18;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
	// b 0x826a8d94
	goto loc_826A8D94;
loc_826A8D24:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x826a8db0
	if (ctx.cr6.eq) goto loc_826A8DB0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8D58;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8d88
	if (ctx.cr0.lt) goto loc_826A8D88;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8d94
	goto loc_826A8D94;
loc_826A8D88:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8D90;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8D94:
	// clrlwi r31,r19,24
	r31.u64 = r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0820
	ctx.lr = 0x826A8DA0;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a8d24
	if (!ctx.cr0.eq) goto loc_826A8D24;
	// b 0x826a8db0
	goto loc_826A8DB0;
loc_826A8DAC:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826A8DB0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x826a8f14
	if (ctx.cr6.eq) goto loc_826A8F14;
	// cmpwi cr6,r19,101
	ctx.cr6.compare<int32_t>(r19.s32, 101, ctx.xer);
	// beq cr6,0x826a8dc8
	if (ctx.cr6.eq) goto loc_826A8DC8;
	// cmpwi cr6,r19,69
	ctx.cr6.compare<int32_t>(r19.s32, 69, ctx.xer);
	// bne cr6,0x826a8f14
	if (!ctx.cr6.eq) goto loc_826A8F14;
loc_826A8DC8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r29,r14,-1
	r29.s64 = r14.s64 + -1;
	// beq cr6,0x826a8f14
	if (ctx.cr6.eq) goto loc_826A8F14;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8DFC;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8e2c
	if (ctx.cr0.lt) goto loc_826A8E2C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8e38
	goto loc_826A8E38;
loc_826A8E2C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8E34;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8E38:
	// cmpwi cr6,r19,45
	ctx.cr6.compare<int32_t>(r19.s32, 45, ctx.xer);
	// bne cr6,0x826a8e74
	if (!ctx.cr6.eq) goto loc_826A8E74;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8E68;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
	// b 0x826a8e7c
	goto loc_826A8E7C;
loc_826A8E74:
	// cmpwi cr6,r19,43
	ctx.cr6.compare<int32_t>(r19.s32, 43, ctx.xer);
	// bne cr6,0x826a8f00
	if (!ctx.cr6.eq) goto loc_826A8F00;
loc_826A8E7C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x826a8ecc
	if (!ctx.cr6.eq) goto loc_826A8ECC;
	// li r29,0
	r29.s64 = 0;
	// b 0x826a8f00
	goto loc_826A8F00;
loc_826A8E90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// beq cr6,0x826a8f14
	if (ctx.cr6.eq) goto loc_826A8F14;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a7d40
	ctx.lr = 0x826A8EC4;
	sub_826A7D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9150
	if (ctx.cr0.eq) goto loc_826A9150;
loc_826A8ECC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a8ef4
	if (ctx.cr0.lt) goto loc_826A8EF4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a8f00
	goto loc_826A8F00;
loc_826A8EF4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A8EFC;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A8F00:
	// clrlwi r31,r19,24
	r31.u64 = r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0820
	ctx.lr = 0x826A8F0C;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a8e90
	if (!ctx.cr0.eq) goto loc_826A8E90;
loc_826A8F14:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a8f30
	if (ctx.cr6.eq) goto loc_826A8F30;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A8F30;
	sub_8269DD28(ctx, base);
loc_826A8F30:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a8fa8
	if (!ctx.cr6.eq) goto loc_826A8FA8;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// extsb r11,r15
	ctx.r11.s64 = r15.s8;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r10,r30,r5
	REX_STORE_U8(r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x826A8F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826a8fa8
	goto loc_826A8FA8;
loc_826A8F80:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// bne cr6,0x826a910c
	if (!ctx.cr6.eq) goto loc_826A910C;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bne cr6,0x826a8fa8
	if (!ctx.cr6.eq) goto loc_826A8FA8;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_826A8FA8:
	// lwz r11,716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r9,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r9.u32);
	// rotlwi r30,r9,0
	r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// b 0x826a9090
	goto loc_826A9090;
loc_826A8FC8:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x826a8fe4
	if (!ctx.cr6.eq) goto loc_826A8FE4;
	// lbz r10,1(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 1);
	// addi r11,r18,1
	ctx.r11.s64 = r18.s64 + 1;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x826a8fe4
	if (!ctx.cr6.eq) goto loc_826A8FE4;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
loc_826A8FE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a9014
	if (ctx.cr0.lt) goto loc_826A9014;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a9020
	goto loc_826A9020;
loc_826A9014:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A901C;
	sub_826A91B0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_826A9020:
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// addi r30,r18,1
	r30.s64 = r18.s64 + 1;
	// stw r30,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// bne cr6,0x826a913c
	if (!ctx.cr6.eq) goto loc_826A913C;
	// clrlwi r3,r19,24
	ctx.r3.u64 = r19.u32 & 0xFF;
	// bl 0x826b1458
	ctx.lr = 0x826A903C;
	sub_826B1458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9090
	if (ctx.cr0.eq) goto loc_826A9090;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// blt 0x826a906c
	if (ctx.cr0.lt) goto loc_826A906C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x826a9074
	goto loc_826A9074;
loc_826A906C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A9074;
	sub_826A91B0(ctx, base);
loc_826A9074:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x826a912c
	if (!ctx.cr6.eq) goto loc_826A912C;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826A9090:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// bne cr6,0x826a90b8
	if (!ctx.cr6.eq) goto loc_826A90B8;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x826a9150
	if (!ctx.cr6.eq) goto loc_826A9150;
	// lwz r11,716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x826a9150
	if (!ctx.cr6.eq) goto loc_826A9150;
	// lwz r30,716(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_826A90B8:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a7f2c
	if (!ctx.cr0.eq) goto loc_826A7F2C;
	// b 0x826a9150
	goto loc_826A9150;
loc_826A90C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
loc_826A90D0:
	// bl 0x826a33d0
	ctx.lr = 0x826A90D4;
	sub_826A33D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826a9150
	goto loc_826A9150;
loc_826A90E0:
	// bl 0x826a33d0
	ctx.lr = 0x826A90E4;
	sub_826A33D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// extsb. r10,r23
	ctx.r10.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x826a9100
	if (ctx.cr0.eq) goto loc_826A9100;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// b 0x826a9150
	goto loc_826A9150;
loc_826A9100:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// b 0x826a9150
	goto loc_826A9150;
loc_826A910C:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x826a9120
	if (ctx.cr6.eq) goto loc_826A9120;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A9120;
	sub_8269DD28(ctx, base);
loc_826A9120:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x826a9150
	goto loc_826A9150;
loc_826A912C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a913c
	if (ctx.cr6.eq) goto loc_826A913C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A913C;
	sub_8269DD28(ctx, base);
loc_826A913C:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x826a9150
	if (ctx.cr6.eq) goto loc_826A9150;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269dd28
	ctx.lr = 0x826A9150;
	sub_8269DD28(ctx, base);
loc_826A9150:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826a9164
	if (!ctx.cr6.eq) goto loc_826A9164;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d770
	ctx.lr = 0x826A9164;
	sub_8269D770(ctx, base);
loc_826A9164:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// bne cr6,0x826a9188
	if (!ctx.cr6.eq) goto loc_826A9188;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826a91a4
	if (!ctx.cr6.eq) goto loc_826A91A4;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826a91a4
	if (!ctx.cr0.eq) goto loc_826A91A4;
	// b 0x826a7e34
	goto loc_826A7E34;
loc_826A9188:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826a91a0
	if (!ctx.cr6.eq) goto loc_826A91A0;
	// bl 0x826a33d0
	ctx.lr = 0x826A9198;
	sub_826A33D0(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x826a7ee8
	goto loc_826A7EE8;
loc_826A91A0:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_826A91A4:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82748D40) {
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
	ctx.lr = 0x82748D48;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82748ebc
	if (!ctx.cr6.gt) goto loc_82748EBC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r4,r3
	r24.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r27,r11,r3
	r27.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r26,r10,r3
	r26.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r25,r9,r3
	r25.u64 = ctx.r3.u64 - ctx.r9.u64;
loc_82748D78:
	// lbz r28,0(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 0);
	// lbz r29,0(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf r9,r29,r28
	ctx.r9.u64 = r28.u64 - r29.u64;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addze. r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82748ea0
	if (ctx.cr0.eq) goto loc_82748EA0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 0);
	// lbzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U8(r26.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r23,0(r25)
	r23.u64 = REX_LOAD_U8(r25.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// xor r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 ^ r30.u64;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82748ea0
	if (ctx.cr6.eq) goto loc_82748EA0;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r23,r6,r9
	r23.u64 = ctx.r9.u64 - ctx.r6.u64;
	// cmpw cr6,r23,r5
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82748ea0
	if (!ctx.cr6.lt) goto loc_82748EA0;
	// lbzx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lbz r22,0(r31)
	r22.u64 = REX_LOAD_U8(r31.u32 + 0);
	// subf r9,r28,r7
	ctx.r9.u64 = ctx.r7.u64 - r28.u64;
	// subf r8,r6,r29
	ctx.r8.u64 = r29.u64 - ctx.r6.u64;
	// subf r11,r11,r22
	ctx.r11.u64 = r22.u64 - ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r8,2
	r22.s64 = ctx.r8.s64 + 2;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82748e54
	if (!ctx.cr6.lt) goto loc_82748E54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82748E54:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x82748ea0
	if (!ctx.cr6.lt) goto loc_82748EA0;
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r30.s32 >> 31;
	// xor r9,r30,r10
	ctx.r9.u64 = r30.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82748e84
	if (ctx.cr6.lt) goto loc_82748E84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82748E84:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x82748e90
	if (!ctx.cr6.lt) goto loc_82748E90;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82748E90:
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// stb r10,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r10.u8);
	// stb r9,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
loc_82748EA0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bdnz 0x82748d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82748D78;
loc_82748EBC:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8274D0B0) {
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
	ctx.lr = 0x8274D0B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,212(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,216(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,22140(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22140);
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,208(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r26,14296(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 14296);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r25,r8,r5
	r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// beq cr6,0x8274d14c
	if (ctx.cr6.eq) goto loc_8274D14C;
	// lwz r11,15596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8274d100
	if (!ctx.cr6.eq) goto loc_8274D100;
	// lwz r7,3744(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// b 0x8274d104
	goto loc_8274D104;
loc_8274D100:
	// lwz r7,3800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3800);
loc_8274D104:
	// lwz r10,22148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,3800(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x8274d190
	if (!ctx.cr6.gt) goto loc_8274D190;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_8274D120:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274d120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274D120;
	// b 0x8274d190
	goto loc_8274D190;
loc_8274D14C:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3744(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r10,3800(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r27,188(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 188);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8274d190
	if (!ctx.cr6.gt) goto loc_8274D190;
loc_8274D170:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D180;
	sub_826A1E70(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// bne 0x8274d170
	if (!ctx.cr0.eq) goto loc_8274D170;
loc_8274D190:
	// lwz r11,22144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274d244
	if (ctx.cr6.eq) goto loc_8274D244;
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8274d1b4
	if (!ctx.cr6.eq) goto loc_8274D1B4;
	// lwz r8,3748(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r7,3752(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// b 0x8274d1bc
	goto loc_8274D1BC;
loc_8274D1B4:
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r7,3808(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3808);
loc_8274D1BC:
	// lwz r10,22152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r11,3804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x8274d200
	if (!ctx.cr6.gt) goto loc_8274D200;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8274D1D8:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + r26.u64;
	// lbz r4,128(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 128);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274d1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274D1D8;
loc_8274D200:
	// lwz r11,3808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8274d2cc
	if (!ctx.cr6.gt) goto loc_8274D2CC;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_8274D214:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274d214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274D214;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8274D244:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3748(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r10,3804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r27,200(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 200);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,208(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8274d288
	if (!ctx.cr6.gt) goto loc_8274D288;
loc_8274D268:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D278;
	sub_826A1E70(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// bne 0x8274d268
	if (!ctx.cr0.eq) goto loc_8274D268;
loc_8274D288:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r28,200(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,3808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8274d2cc
	if (!ctx.cr6.gt) goto loc_8274D2CC;
loc_8274D2AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D2BC;
	sub_826A1E70(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// bne 0x8274d2ac
	if (!ctx.cr0.eq) goto loc_8274D2AC;
loc_8274D2CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8275D450) {
	REX_FUNC_PROLOGUE();
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8275d57c
	if (!ctx.cr0.gt) goto loc_8275D57C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8275D468:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r8,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r8,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// lbz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// lbz r8,1(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// stb r8,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r8.u8);
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lbz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// stb r8,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stb r11,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lbz r8,2(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// lbz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r8,13(r3)
	REX_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// lbz r11,7(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// stb r11,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// lbz r8,3(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stb r8,15(r3)
	REX_STORE_U8(ctx.r3.u32 + 15, ctx.r8.u8);
	// lbz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lbz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// stb r8,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// lbz r11,9(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// stb r11,18(r3)
	REX_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// lbz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// stb r8,19(r3)
	REX_STORE_U8(ctx.r3.u32 + 19, ctx.r8.u8);
	// lbz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lbz r8,5(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// stb r8,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
	// lbz r11,11(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// stb r11,22(r3)
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// lbz r8,5(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stb r8,23(r3)
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r8.u8);
	// lbz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lbz r8,6(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// stb r8,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r8.u8);
	// lbz r11,13(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 13);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// lbz r8,6(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// stb r8,27(r3)
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r8.u8);
	// lbz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 14);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lbz r8,7(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stb r8,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r8.u8);
	// lbz r11,15(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// lbz r8,7(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stb r8,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, ctx.r8.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x8275d468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275D468;
loc_8275D57C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8275d5c4
	if (!ctx.cr6.lt) goto loc_8275D5C4;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275D590:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x8275d590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275D590;
loc_8275D5C4:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82767AB8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82767AC8) {
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
	ctx.lr = 0x82767AD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82767af0
	if (!ctx.cr6.eq) goto loc_82767AF0;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82767AF0:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82767B04:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82767b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82767B04;
	// addi r26,r28,8
	r26.s64 = r28.s64 + 8;
	// stw r27,20(r28)
	REX_STORE_U32(r28.u32 + 20, r27.u32);
	// stw r30,16(r28)
	REX_STORE_U32(r28.u32 + 16, r30.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82767bb4
	if (!ctx.cr6.gt) goto loc_82767BB4;
loc_82767B28:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8271b190
	ctx.lr = 0x82767B34;
	sub_8271B190(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767b60
	if (ctx.cr6.eq) goto loc_82767B60;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// blt cr6,0x82767b28
	if (ctx.cr6.lt) goto loc_82767B28;
	// b 0x82767bb8
	goto loc_82767BB8;
loc_82767B60:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767b80
	if (ctx.cr6.eq) goto loc_82767B80;
loc_82767B6C:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8271b1a0
	ctx.lr = 0x82767B74;
	sub_8271B1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82767b6c
	if (!ctx.cr6.eq) goto loc_82767B6C;
loc_82767B80:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767ba4
	if (ctx.cr6.eq) goto loc_82767BA4;
loc_82767B90:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8271b1a0
	ctx.lr = 0x82767B98;
	sub_8271B1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82767b90
	if (!ctx.cr6.eq) goto loc_82767B90;
loc_82767BA4:
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82767BB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82767BB8:
	// stw r3,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r3.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r28)
	REX_STORE_U32(r28.u32 + 4, r30.u32);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8276DBA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8276DBB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_8276DBC0:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8276dbf8
	if (ctx.cr6.gt) goto loc_8276DBF8;
	// subfic r11,r31,40
	ctx.xer.ca = r31.u32 <= 40;
	ctx.r11.u64 = static_cast<uint64_t>(40) - r31.u64;
loc_8276DBCC:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8276dbcc
	if (!ctx.cr6.gt) goto loc_8276DBCC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8276dc6c
	if (!ctx.cr6.lt) goto loc_8276DC6C;
loc_8276DBF8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276dc4c
	if (ctx.cr6.eq) goto loc_8276DC4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725a90
	ctx.lr = 0x8276DC0C;
	sub_82725A90(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276dc84
	if (!ctx.cr6.eq) goto loc_8276DC84;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276dbc0
	if (!ctx.cr6.lt) goto loc_8276DBC0;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// rldicr r8,r11,0,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_8276DC4C:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(r31.s32, -16, ctx.xer);
	// bge cr6,0x8276dc6c
	if (!ctx.cr6.lt) goto loc_8276DC6C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r31,127
	r31.s64 = 127;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276dc6c
	if (!ctx.cr6.eq) goto loc_8276DC6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
loc_8276DC6C:
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r4.u32);
	// stw r5,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8276DC84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8276FD48) {
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
	ctx.lr = 0x8276FD50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8276fda8
	if (!ctx.cr6.eq) goto loc_8276FDA8;
	// bl 0x8276fb88
	ctx.lr = 0x8276FD88;
	sub_8276FB88(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827702d0
	if (!ctx.cr6.eq) goto loc_827702D0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8276FDA8:
	// lwz r10,40(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 40);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r31,r5
	r31.s64 = ctx.r5.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8276fe98
	if (ctx.cr6.lt) goto loc_8276FE98;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r31,28
	ctx.r9.u64 = r31.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8276fe90
	if (!ctx.cr6.lt) goto loc_8276FE90;
loc_8276FDF8:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276fe24
	if (ctx.cr6.lt) goto loc_8276FE24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725d78
	ctx.lr = 0x8276FE14;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8276fdf8
	if (ctx.cr6.eq) goto loc_8276FDF8;
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// b 0x8276fed8
	goto loc_8276FED8;
loc_8276FE24:
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
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
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
	// std r7,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r7.u64);
loc_8276FE90:
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// b 0x8276fed8
	goto loc_8276FED8;
loc_8276FE98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276FEA0;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_8276FEA8:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276FEC0;
	sub_82725F80(ctx, base);
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8276fea8
	if (ctx.cr6.lt) goto loc_8276FEA8;
loc_8276FED8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// lbzx r29,r11,r31
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8276ffa0
	if (ctx.cr6.eq) goto loc_8276FFA0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8276ff08
	if (!ctx.cr6.gt) goto loc_8276FF08;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8276ffa0
	goto loc_8276FFA0;
loc_8276FF08:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276ff68
	if (!ctx.cr6.gt) goto loc_8276FF68;
loc_8276FF10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ff68
	if (ctx.cr6.eq) goto loc_8276FF68;
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
	// bge 0x8276ff58
	if (!ctx.cr0.lt) goto loc_8276FF58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276FF58;
	sub_82725E38(ctx, base);
loc_8276FF58:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276ff10
	if (ctx.cr6.gt) goto loc_8276FF10;
loc_8276FF68:
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
	// bge 0x8276ffa0
	if (!ctx.cr0.lt) goto loc_8276FFA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276FFA0;
	sub_82725E38(ctx, base);
loc_8276FFA0:
	// lwz r10,36(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r31,46
	ctx.cr6.compare<int32_t>(r31.s32, 46, ctx.xer);
	// bge cr6,0x82770024
	if (!ctx.cr6.lt) goto loc_82770024;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(r31.s32, 23, ctx.xer);
	// bge cr6,0x8276ffc4
	if (!ctx.cr6.lt) goto loc_8276FFC4;
	// stw r27,0(r23)
	REX_STORE_U32(r23.u32 + 0, r27.u32);
	// b 0x8276ffcc
	goto loc_8276FFCC;
loc_8276FFC4:
	// addi r11,r31,-23
	ctx.r11.s64 = r31.s64 + -23;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
loc_8276FFCC:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8276ffe0
	if (!ctx.cr6.lt) goto loc_8276FFE0;
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x82770288
	goto loc_82770288;
loc_8276FFE0:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8276fff8
	if (!ctx.cr6.lt) goto loc_8276FFF8;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x82770288
	goto loc_82770288;
loc_8276FFF8:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bge cr6,0x82770014
	if (!ctx.cr6.lt) goto loc_82770014;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770014:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770024:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,59
	ctx.cr6.compare<int32_t>(r31.s32, 59, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// and r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 & r29.u64;
	// bge cr6,0x82770114
	if (!ctx.cr6.lt) goto loc_82770114;
	// cmpwi cr6,r31,47
	ctx.cr6.compare<int32_t>(r31.s32, 47, ctx.xer);
	// stw r27,0(r23)
	REX_STORE_U32(r23.u32 + 0, r27.u32);
	// bgt cr6,0x82770068
	if (ctx.cr6.gt) goto loc_82770068;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lbz r8,-46(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -46);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770068:
	// cmpwi cr6,r31,49
	ctx.cr6.compare<int32_t>(r31.s32, 49, ctx.xer);
	// bgt cr6,0x82770098
	if (ctx.cr6.gt) goto loc_82770098;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// lbz r7,-46(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -46);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770098:
	// cmpwi cr6,r31,50
	ctx.cr6.compare<int32_t>(r31.s32, 50, ctx.xer);
	// bne cr6,0x827700ac
	if (!ctx.cr6.eq) goto loc_827700AC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x82770288
	goto loc_82770288;
loc_827700AC:
	// cmpwi cr6,r31,51
	ctx.cr6.compare<int32_t>(r31.s32, 51, ctx.xer);
	// bne cr6,0x827700c8
	if (!ctx.cr6.eq) goto loc_827700C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// b 0x82770288
	goto loc_82770288;
loc_827700C8:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmpwi cr6,r31,56
	ctx.cr6.compare<int32_t>(r31.s32, 56, ctx.xer);
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// bgt cr6,0x827700f4
	if (ctx.cr6.gt) goto loc_827700F4;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// lbz r8,-46(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -46);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_827700F4:
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// lbz r7,-46(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -46);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770114:
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(r31.s32, 73, ctx.xer);
	// bge cr6,0x827701d8
	if (!ctx.cr6.lt) goto loc_827701D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(r31.s32, 64, ctx.xer);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x82770150
	if (ctx.cr6.gt) goto loc_82770150;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770150:
	// cmpwi cr6,r31,67
	ctx.cr6.compare<int32_t>(r31.s32, 67, ctx.xer);
	// bgt cr6,0x82770180
	if (ctx.cr6.gt) goto loc_82770180;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770180:
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(r31.s32, 70, ctx.xer);
	// bgt cr6,0x827701b0
	if (ctx.cr6.gt) goto loc_827701B0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_827701B0:
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r10,r10,-22972
	ctx.r10.s64 = ctx.r10.s64 + -22972;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// b 0x82770288
	goto loc_82770288;
loc_827701D8:
	// cmpwi cr6,r31,75
	ctx.cr6.compare<int32_t>(r31.s32, 75, ctx.xer);
	// bge cr6,0x8277026c
	if (!ctx.cr6.lt) goto loc_8277026C;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r9,r31,-73
	ctx.r9.s64 = r31.s64 + -73;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r9,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82770288
	if (ctx.cr6.gt) goto loc_82770288;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82770220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82770220;
	// bdzf 4*cr6+eq,0x82770234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82770234;
	// bne cr6,0x82770250
	if (!ctx.cr6.eq) goto loc_82770250;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770220:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770234:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// b 0x82770288
	goto loc_82770288;
loc_82770250:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// b 0x82770288
	goto loc_82770288;
loc_8277026C:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
loc_82770288:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bge 0x827702bc
	if (!ctx.cr0.lt) goto loc_827702BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827702BC;
	sub_82725E38(ctx, base);
loc_827702BC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// neg r10,r31
	ctx.r10.s64 = static_cast<int64_t>(-r31.u64);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
loc_827702D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82792CB0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,644
	ctx.r4.s64 = 644;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// bl 0x8269c348
	ctx.lr = 0x82792CCC;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8892(r11)
	REX_STORE_U32(ctx.r11.u32 + 8892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792F60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,1024(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1024);
	// b 0x8269d6a0
	sub_8269D6A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827931E8) {
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
	// addi r31,r11,4352
	r31.s64 = ctx.r11.s64 + 4352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212aaa0
	ctx.lr = 0x82793208;
	sub_8212AAA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x82793210;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_827937B8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200025e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827938E8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793A38) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100bd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793BC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f0
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793D88) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101ca
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793F58) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000035
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794168) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000317
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794378) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827A8B78) {
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
	ctx.lr = 0x827A8B80;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r16,4(r4)
	r16.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1304(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rotlwi r11,r16,2
	ctx.r11.u64 = __builtin_rotateleft32(r16.u32, 2);
	// lbz r26,5(r4)
	r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// clrlwi r4,r29,31
	ctx.r4.u64 = r29.u32 & 0x1;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r16,r11
	ctx.r3.u64 = r16.u64 + ctx.r11.u64;
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r31,r10,0,27,28
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// neg r24,r4
	r24.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// stw r7,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1312(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r11,50(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 50);
	// cntlzw r23,r31
	r23.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r25,r6,r7
	r25.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r22,28(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 28);
	// li r14,0
	r14.s64 = 0;
	// lwz r3,348(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 348);
	// rlwinm r26,r23,27,31,31
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 27) & 0x1;
	// lwz r31,352(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 352);
	// and r7,r24,r11
	ctx.r7.u64 = r24.u64 & ctx.r11.u64;
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// mullw r4,r11,r29
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// std r14,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r14.u64);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// and r17,r8,r29
	r17.u64 = ctx.r8.u64 & r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// beq cr6,0x827a8c70
	if (ctx.cr6.eq) goto loc_827A8C70;
	// rlwinm r11,r10,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xC;
	// lwz r8,396(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 396);
	// lwz r10,400(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 400);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// b 0x827a8c80
	goto loc_827A8C80;
loc_827A8C70:
	// addi r11,r30,404
	ctx.r11.s64 = r30.s64 + 404;
	// addi r10,r30,416
	ctx.r10.s64 = r30.s64 + 416;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_827A8C80:
	// add r10,r28,r6
	ctx.r10.u64 = r28.u64 + ctx.r6.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r22,2
	r22.s64 = 131072;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stwx r8,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r8.u32);
	// ori r23,r10,32768
	r23.u64 = ctx.r10.u64 | 32768;
	// addi r9,r11,-30440
	ctx.r9.s64 = ctx.r11.s64 + -30440;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_827A8CC8:
	// srawi. r11,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r11.s64 = r14.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,119
	r26.s64 = 119;
	// bne 0x827a8d44
	if (!ctx.cr0.eq) goto loc_827A8D44;
	// addi r8,r14,18
	ctx.r8.s64 = r14.s64 + 18;
	// lwz r6,348(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 348);
	// rlwinm r3,r29,1,30,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x2;
	// lwz r5,432(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 432);
	// srawi r11,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r11.s64 = r14.s32 >> 1;
	// lwz r9,1224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1224);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + r15.u64;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// add r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 + r15.u64;
	// lhzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r7,r14,31
	ctx.r7.u64 = r14.u32 & 0x1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r4,r30
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r15,r7,r15
	r15.u64 = ctx.r7.u64 + r15.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// add r18,r8,r6
	r18.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r29,r5,r10
	r29.u64 = ctx.r5.u64 + ctx.r10.u64;
	// extsh r19,r3
	r19.s64 = ctx.r3.s16;
	// b 0x827a8d90
	goto loc_827A8D90;
loc_827A8D44:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// lwz r8,352(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 352);
	// addi r6,r14,105
	ctx.r6.s64 = r14.s64 + 105;
	// lwz r9,1228(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1228);
	// addi r5,r11,182
	ctx.r5.s64 = ctx.r11.s64 + 182;
	// lwz r20,96(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r6,r3,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + r30.u32);
	// add r18,r11,r8
	r18.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r7,r10
	r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r19,r6
	r19.s64 = ctx.r6.s16;
loc_827A8D90:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r24,16(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r21,r11,-128
	r21.s64 = ctx.r11.s64 + -128;
	// stw r21,28(r27)
	REX_STORE_U32(r27.u32 + 28, r21.u32);
	// dcbzl r0,r21
	ea = (r21.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r25,0
	r25.s64 = 0;
	// lbz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r27,0(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r27.u32);
	// extsh r28,r6
	r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x827a8e98
	if (ctx.cr6.lt) goto loc_827A8E98;
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
	// bge cr6,0x827a8e90
	if (!ctx.cr6.lt) goto loc_827A8E90;
loc_827A8DF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827a8e24
	if (ctx.cr6.lt) goto loc_827A8E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827A8E14;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827a8df8
	if (ctx.cr6.eq) goto loc_827A8DF8;
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x827a8ed0
	goto loc_827A8ED0;
loc_827A8E24:
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
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
loc_827A8E90:
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x827a8ed0
	goto loc_827A8ED0;
loc_827A8E98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827A8EA0;
	sub_82725F80(ctx, base);
loc_827A8EA0:
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
	ctx.lr = 0x827A8EB8;
	sub_82725F80(ctx, base);
	// add r10,r28,r23
	ctx.r10.u64 = r28.u64 + r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r27.u32);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x827a8ea0
	if (ctx.cr6.lt) goto loc_827A8EA0;
loc_827A8ED0:
	// clrlwi r28,r28,16
	r28.u64 = r28.u32 & 0xFFFF;
	// mr r23,r28
	r23.u64 = r28.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// beq cr6,0x827a8ff8
	if (ctx.cr6.eq) goto loc_827A8FF8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x827a911c
	if (ctx.cr6.eq) goto loc_827A911C;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// bne cr6,0x827a8f30
	if (!ctx.cr6.eq) goto loc_827A8F30;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x827a8f18
	if (!ctx.cr0.lt) goto loc_827A8F18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A8F18;
	sub_82725E38(ctx, base);
loc_827A8F18:
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x827a90e0
	goto loc_827A90E0;
loc_827A8F30:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x827a90e0
	if (!ctx.cr6.eq) goto loc_827A90E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,2
	r28.s64 = 2;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x827a8fa8
	if (!ctx.cr6.lt) goto loc_827A8FA8;
loc_827A8F50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a8fa8
	if (ctx.cr6.eq) goto loc_827A8FA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x827a8f98
	if (!ctx.cr0.lt) goto loc_827A8F98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A8F98;
	sub_82725E38(ctx, base);
loc_827A8F98:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a8f50
	if (ctx.cr6.gt) goto loc_827A8F50;
loc_827A8FA8:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x827a8fe0
	if (!ctx.cr0.lt) goto loc_827A8FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A8FE0;
	sub_82725E38(ctx, base);
loc_827A8FE0:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x827a90e0
	goto loc_827A90E0;
loc_827A8FF8:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// bgt cr6,0x827a900c
	if (ctx.cr6.gt) goto loc_827A900C;
	// srawi r11,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r11.s64 = r24.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x827a9010
	goto loc_827A9010;
loc_827A900C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A9010:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x827a9030
	if (!ctx.cr6.gt) goto loc_827A9030;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a90dc
	goto loc_827A90DC;
loc_827A9030:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x827a9040
	if (!ctx.cr6.eq) goto loc_827A9040;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a90dc
	goto loc_827A90DC;
loc_827A9040:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827a90a0
	if (!ctx.cr6.gt) goto loc_827A90A0;
loc_827A9048:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a90a0
	if (ctx.cr6.eq) goto loc_827A90A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x827a9090
	if (!ctx.cr0.lt) goto loc_827A9090;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A9090;
	sub_82725E38(ctx, base);
loc_827A9090:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827a9048
	if (ctx.cr6.gt) goto loc_827A9048;
loc_827A90A0:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x827a90d8
	if (!ctx.cr0.lt) goto loc_827A90D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A90D8;
	sub_82725E38(ctx, base);
loc_827A90D8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_827A90DC:
	// clrlwi r28,r11,16
	r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_827A90E0:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x827a9108
	if (!ctx.cr0.lt) goto loc_827A9108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827A9108;
	sub_82725E38(ctx, base);
loc_827A9108:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
loc_827A911C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// sth r25,0(r21)
	REX_STORE_U16(r21.u32 + 0, r25.u16);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827a9a00
	if (!ctx.cr6.eq) goto loc_827A9A00;
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827a915c
	if (ctx.cr6.eq) goto loc_827A915C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,444(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 444);
	// bl 0x827abe30
	ctx.lr = 0x827A9154;
	sub_827ABE30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827a9a00
	if (ctx.cr6.lt) goto loc_827A9A00;
loc_827A915C:
	// srawi r11,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r11.s64 = r14.s32 >> 2;
	// lhz r31,50(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 50);
	// li r26,1
	r26.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	r28.s64 = 0;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// li r27,0
	r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x827a91a8
	if (ctx.cr6.eq) goto loc_827A91A8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = r18.u64 - ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,16384
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16384, ctx.xer);
	// bne cr6,0x827a91a8
	if (!ctx.cr6.eq) goto loc_827A91A8;
	// rlwinm r10,r19,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 5) & 0xFFFFFFE0;
	// li r26,8
	r26.s64 = 8;
	// subf r28,r10,r29
	r28.u64 = r29.u64 - ctx.r10.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_827A91A8:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x827a9404
	if (ctx.cr6.eq) goto loc_827A9404;
	// lwz r9,-4(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + -4);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x827a9404
	if (!ctx.cr6.eq) goto loc_827A9404;
	// addic. r27,r29,-32
	ctx.xer.ca = r29.u32 > 31;
	r27.s64 = r29.s64 + -32;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r26,1
	r26.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// beq 0x827a9734
	if (ctx.cr0.eq) goto loc_827A9734;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x827a9404
	if (ctx.cr6.eq) goto loc_827A9404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = r18.u64 - ctx.r9.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// bne cr6,0x827a91f8
	if (!ctx.cr6.eq) goto loc_827A91F8;
	// lhz r11,-16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + -16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
loc_827A91F8:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// lhz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lbz r8,27(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 27);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827a93c8
	if (ctx.cr6.eq) goto loc_827A93C8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x827a9310
	if (ctx.cr6.eq) goto loc_827A9310;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x827a9310
	if (ctx.cr6.eq) goto loc_827A9310;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x827a9310
	if (ctx.cr6.eq) goto loc_827A9310;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(r14.s32, 1, ctx.xer);
	// bne cr6,0x827a92a4
	if (!ctx.cr6.eq) goto loc_827A92A4;
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r3,r8,r25
	ctx.r3.u64 = r25.u64 - ctx.r8.u64;
	// add r9,r16,r9
	ctx.r9.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r9,r3,r22
	ctx.r9.u64 = ctx.r3.u64 + r22.u64;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + r22.u64;
	// srawi r7,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 18;
	// srawi r6,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 18;
	// b 0x827a93d0
	goto loc_827A93D0;
loc_827A92A4:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(r14.s32, 2, ctx.xer);
	// bne cr6,0x827a93cc
	if (!ctx.cr6.eq) goto loc_827A93CC;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,-8(r25)
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + -8);
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// add r9,r16,r9
	ctx.r9.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r4,26
	ctx.r9.u64 = ctx.r4.u32 & 0x3F;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r3,r8,r9
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r5,r8,r22
	ctx.r5.u64 = ctx.r8.u64 + r22.u64;
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + r22.u64;
	// srawi r7,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
	// b 0x827a93d0
	goto loc_827A93D0;
loc_827A9310:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// subf r4,r8,r25
	ctx.r4.u64 = r25.u64 - ctx.r8.u64;
	// add r3,r16,r9
	ctx.r3.u64 = r16.u64 + ctx.r9.u64;
	// lbz r9,-8(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + -8);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbz r3,-8(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + -8);
	// lbz r23,0(r4)
	r23.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r21,r8,r11
	r21.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r23,26
	ctx.r8.u64 = r23.u32 & 0x3F;
	// add r23,r9,r4
	r23.u64 = ctx.r9.u64 + ctx.r4.u64;
	// clrlwi r9,r3,26
	ctx.r9.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,16(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r23,r21,2,0,29
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r23,r4
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + ctx.r4.u32);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + r22.u64;
	// add r11,r6,r22
	ctx.r11.u64 = ctx.r6.u64 + r22.u64;
	// add r9,r5,r22
	ctx.r9.u64 = ctx.r5.u64 + r22.u64;
	// srawi r7,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 18;
	// srawi r6,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 18;
	// srawi r5,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 18;
	// b 0x827a93d0
	goto loc_827A93D0;
loc_827A93C8:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_827A93CC:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_827A93D0:
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r3,r8,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x827a940c
	if (!ctx.cr6.lt) goto loc_827A940C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r26,8
	r26.s64 = 8;
	// b 0x827a940c
	goto loc_827A940C;
loc_827A9404:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_827A940C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827a9734
	if (ctx.cr6.eq) goto loc_827A9734;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,27(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 27);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r26,r7,r26
	r26.u64 = ctx.r7.u64 | r26.u64;
	// beq cr6,0x827a9728
	if (ctx.cr6.eq) goto loc_827A9728;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x827a95a8
	if (!ctx.cr6.eq) goto loc_827A95A8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x827a947c
	if (ctx.cr6.eq) goto loc_827A947C;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(r14.s32, 2, ctx.xer);
	// beq cr6,0x827a947c
	if (ctx.cr6.eq) goto loc_827A947C;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x827a947c
	if (ctx.cr6.eq) goto loc_827A947C;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x827a947c
	if (ctx.cr6.eq) goto loc_827A947C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827A9468:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827a9468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827A9468;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x827a9734
	goto loc_827A9734;
loc_827A947C:
	// lbz r9,-8(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + -8);
	// rlwinm r8,r16,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r6,r16,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r16,r8
	ctx.r5.u64 = r16.u64 + ctx.r8.u64;
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,146
	r28.s64 = ctx.r1.s64 + 146;
	// addi r7,r1,138
	ctx.r7.s64 = ctx.r1.s64 + 138;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r27,r1,148
	r27.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r4,r3
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r4,r6,r22
	ctx.r4.u64 = ctx.r6.u64 + r22.u64;
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// subf r5,r10,r28
	ctx.r5.u64 = r28.u64 - ctx.r10.u64;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
loc_827A9504:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r31,r31,r8
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + r22.u64;
	// mullw r27,r8,r27
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + r22.u64;
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	r27.u64 = r27.u64 + r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// srawi r28,r28,18
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFFF) != 0);
	r28.s64 = r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFFF) != 0);
	r27.s64 = r27.s32 >> 18;
	// sthx r31,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, r31.u16);
	// sthx r28,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, r28.u16);
	// sthx r27,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r27.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x827a9504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827A9504;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x827a9734
	goto loc_827A9734;
loc_827A95A8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x827a95f0
	if (ctx.cr6.eq) goto loc_827A95F0;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(r14.s32, 1, ctx.xer);
	// beq cr6,0x827a95f0
	if (ctx.cr6.eq) goto loc_827A95F0;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x827a95f0
	if (ctx.cr6.eq) goto loc_827A95F0;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x827a95f0
	if (ctx.cr6.eq) goto loc_827A95F0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827A95DC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827a95dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827A95DC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x827a9734
	goto loc_827A9734;
loc_827A95F0:
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// subf r6,r8,r25
	ctx.r6.u64 = r25.u64 - ctx.r8.u64;
	// add r5,r16,r9
	ctx.r5.u64 = r16.u64 + ctx.r9.u64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r16,2,0,29
	r31.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,146
	r31.s64 = ctx.r1.s64 + 146;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r27,r1,148
	r27.s64 = ctx.r1.s64 + 148;
	// lwzx r4,r7,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r7,r6,-10
	ctx.r7.s64 = ctx.r6.s64 + -10;
	// subf r6,r10,r28
	ctx.r6.u64 = r28.u64 - ctx.r10.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwz r28,16(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r10,r31
	ctx.r5.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// mullw r3,r28,r3
	ctx.r3.s64 = int64_t(r28.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r22
	ctx.r3.u64 = ctx.r4.u64 + r22.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
loc_827A9684:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r31,r31,r8
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + r22.u64;
	// mullw r27,r8,r27
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + r22.u64;
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	r27.u64 = r27.u64 + r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// srawi r28,r28,18
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFFF) != 0);
	r28.s64 = r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFFF) != 0);
	r27.s64 = r27.s32 >> 18;
	// sthx r31,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, r31.u16);
	// sthx r28,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, r28.u16);
	// sthx r27,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, r27.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x827a9684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827A9684;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x827a9734
	goto loc_827A9734;
loc_827A9728:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x827a9734
	if (!ctx.cr6.eq) goto loc_827A9734;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_827A9734:
	// lwz r6,388(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,28(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// beq cr6,0x827a9918
	if (ctx.cr6.eq) goto loc_827A9918;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r5.u16);
	// sth r5,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r5.u16);
	// bne cr6,0x827a984c
	if (!ctx.cr6.eq) goto loc_827A984C;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r5,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r5.u16);
	// lhz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r8.u16);
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// sth r3,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r3.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// sth r4,8(r29)
	REX_STORE_U16(r29.u32 + 8, ctx.r4.u16);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// sth r7,10(r29)
	REX_STORE_U16(r29.u32 + 10, ctx.r7.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// sth r9,12(r29)
	REX_STORE_U16(r29.u32 + 12, ctx.r9.u16);
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,14(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// sth r4,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r3,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r3.u16);
	// lhz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r10,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r10.u16);
	// lhz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r9,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r9.u16);
	// lhz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r8,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r8.u16);
	// lhz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r7,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r7.u16);
	// lhz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r5,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r4,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r4.u16);
	// b 0x827a9974
	goto loc_827A9974;
loc_827A984C:
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// bne cr6,0x827a9924
	if (!ctx.cr6.eq) goto loc_827A9924;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r9,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r7.u64);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// sth r9,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r9.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r4.u16);
	// sth r4,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r4.u16);
	// lhz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r7.u16);
	// sth r7,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r7.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r9.u16);
	// sth r9,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r9.u16);
	// lhz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r4.u16);
	// sth r4,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r4.u16);
	// lhz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,96(r11)
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r7.u16);
	// sth r7,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r7.u16);
	// lhz r10,14(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lhz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r10,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r10,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r10.u16);
	// b 0x827a9974
	goto loc_827A9974;
loc_827A9918:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r10.u16);
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
loc_827A9924:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r10.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r8.u64);
	// lhz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r7,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r7.u16);
	// lhz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r5,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r5.u16);
	// lhz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r4,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r4.u16);
	// lhz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r3,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r3.u16);
	// lhz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r10,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r10.u16);
	// lhz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r9,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r9.u16);
	// lhz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r8,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r8.u16);
loc_827A9974:
	// clrlwi r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	// lwz r5,372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// srawi r8,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r8.s64 = r24.s32 >> 1;
	// ld r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// or r11,r7,r14
	ctx.r11.u64 = ctx.r7.u64 | r14.u64;
	// lwz r9,32(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// ori r8,r4,128
	ctx.r8.u64 = ctx.r4.u64 | 128;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rldicr r7,r4,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// std r7,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(r14.s32, 6, ctx.xer);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,32(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// bge cr6,0x827a9a0c
	if (!ctx.cr6.lt) goto loc_827A9A0C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,108(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r15,372(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// ori r23,r11,32768
	r23.u64 = ctx.r11.u64 | 32768;
	// lwz r29,380(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r27,388(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r17,116(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x827a8cc8
	goto loc_827A8CC8;
loc_827A9A00:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_827A9A0C:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rldicl r29,r7,56,8
	r29.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// li r31,16384
	r31.s64 = 16384;
	// lbz r7,1324(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 1324);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r9,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x7;
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r26,r5,8,63
	r26.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1836(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1836);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r11,1844(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1844);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,1312(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r25,r7,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// or r28,r25,r28
	r28.u64 = r25.u64 | r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// rldicr r28,r28,48,15
	r28.u64 = __builtin_rotateleft64(r28.u64, 48) & 0xFFFF000000000000;
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// stdx r29,r30,r27
	REX_STORE_U64(r30.u32 + r27.u32, r29.u64);
	// sth r31,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, r31.u16);
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r31.u16);
	// sth r31,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, r31.u16);
	// sthx r31,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r31.u16);
	// sth r31,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, r31.u16);
	// sthx r31,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, r31.u16);
	// sth r31,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, r31.u16);
	// sthx r31,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, r31.u16);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
}

