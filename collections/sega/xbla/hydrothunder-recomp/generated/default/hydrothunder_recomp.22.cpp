#include "hydrothunder_funcs.22.h"

DEFINE_REX_FUNC(sub_82121450) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82121458;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 69);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x821214b4
	goto loc_821214B4;
loc_82121470:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82121450
	ctx.lr = 0x8212147C;
	sub_82121450(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82121494;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821214A4;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821214AC;
	sub_8269CE98(ctx, base);
	// lbz r11,69(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 69);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821214B4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82121470
	if (ctx.cr0.eq) goto loc_82121470;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82129670) {
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
	ctx.lr = 0x82129678;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// std r26,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r26.u64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r30,6072(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x821296A0;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x8215f338
	ctx.lr = 0x821296AC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821296B0;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821296CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821296dc
	if (!ctx.cr0.eq) goto loc_821296DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821298c0
	goto loc_821298C0;
loc_821296DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215ef60
	ctx.lr = 0x821296E4;
	sub_8215EF60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82167708
	ctx.lr = 0x821296EC;
	sub_82167708(ctx, base);
	// lwz r30,6072(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212970C;
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
	ctx.lr = 0x82129720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82129730;
	sub_82120AC0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82129b80
	ctx.lr = 0x82129740;
	sub_82129B80(ctx, base);
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// blt cr6,0x82129898
	if (ctx.cr6.lt) goto loc_82129898;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82129898
	if (ctx.cr0.eq) goto loc_82129898;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r26,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r26.u64);
	// std r26,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r26.u64);
	// std r26,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r26.u64);
	// std r26,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r26.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821297BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// lis r11,16715
	ctx.r11.s64 = 1095434240;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// ori r11,r11,16961
	ctx.r11.u64 = ctx.r11.u64 | 16961;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821297F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x82129880
	if (!ctx.cr6.eq) goto loc_82129880;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82129874
	if (ctx.cr6.eq) goto loc_82129874;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82125c20
	ctx.lr = 0x82129840;
	sub_82125C20(ctx, base);
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82129878
	goto loc_82129878;
loc_82129874:
	// li r26,1
	r26.s64 = 1;
loc_82129878:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,88(r27)
	REX_STORE_U32(r27.u32 + 88, ctx.r11.u32);
loc_82129880:
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129898:
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821298AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821298BC;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821298C0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8213AEB0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8213aeb8
	sub_8213AEB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213B430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213B438;
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
	// addi r30,r11,-15684
	r30.s64 = ctx.r11.s64 + -15684;
	// lwz r4,-15684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15684);
	// bl 0x82120600
	ctx.lr = 0x8213B458;
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
	ctx.lr = 0x8213B474;
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
	ctx.lr = 0x8213B488;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8213b4bc
	if (ctx.cr6.eq) goto loc_8213B4BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x8213B49C;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b4bc
	if (!ctx.cr0.eq) goto loc_8213B4BC;
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
	ctx.lr = 0x8213B4BC;
	sub_821231D0(ctx, base);
loc_8213B4BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821406E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
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

DEFINE_REX_FUNC(sub_82141488) {
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
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82141548
	if (!ctx.cr0.eq) goto loc_82141548;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821414D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821414F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82141548
	if (!ctx.cr0.eq) goto loc_82141548;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// bne cr6,0x82141530
	if (!ctx.cr6.eq) goto loc_82141530;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82141534
	goto loc_82141534;
loc_82141530:
	// bl 0x8217ee18
	ctx.lr = 0x82141534;
	sub_8217EE18(ctx, base);
loc_82141534:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82141548
	if (ctx.cr0.eq) goto loc_82141548;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,228(r31)
	REX_STORE_U8(r31.u32 + 228, r30.u8);
	// b 0x8214154c
	goto loc_8214154C;
loc_82141548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214154C:
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

DEFINE_REX_FUNC(sub_82148248) {
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
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82148340
	if (ctx.cr0.eq) goto loc_82148340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-14472
	ctx.r4.s64 = ctx.r11.s64 + -14472;
	// bl 0x82125d00
	ctx.lr = 0x821482A0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821482bc
	if (!ctx.cr0.eq) goto loc_821482BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821482BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821482BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821482D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-14456
	ctx.r4.s64 = ctx.r11.s64 + -14456;
	// bl 0x82125d00
	ctx.lr = 0x821482DC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82148340
	if (!ctx.cr0.eq) goto loc_82148340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821482F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822f6280
	ctx.lr = 0x82148300;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82148324
	if (ctx.cr0.eq) goto loc_82148324;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13040
	ctx.r11.s64 = ctx.r11.s64 + -13040;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82148328
	goto loc_82148328;
loc_82148324:
	// li r31,0
	r31.s64 = 0;
loc_82148328:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821484b0
	ctx.lr = 0x82148338;
	sub_821484B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82148340;
	sub_8269CE98(ctx, base);
loc_82148340:
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

DEFINE_REX_FUNC(sub_8214FDE8) {
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
	ctx.lr = 0x8214FDF0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fe18
	if (ctx.cr0.eq) goto loc_8214FE18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26916
	ctx.r3.s64 = ctx.r11.s64 + -26916;
	// bl 0x822f6058
	ctx.lr = 0x8214FE18;
	sub_822F6058(ctx, base);
loc_8214FE18:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x821502b0
	ctx.lr = 0x8214FE24;
	sub_821502B0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x8214fe40
	if (ctx.cr0.eq) goto loc_8214FE40;
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x8214fe64
	goto loc_8214FE64;
loc_8214FE40:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lbz r10,45(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8214fe58
	if (ctx.cr0.eq) goto loc_8214FE58;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8214fe64
	goto loc_8214FE64;
loc_8214FE58:
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214ff3c
	if (!ctx.cr6.eq) goto loc_8214FF3C;
loc_8214FE64:
	// lbz r11,45(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 45);
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214fe78
	if (!ctx.cr0.eq) goto loc_8214FE78;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8214FE78:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214fe90
	if (!ctx.cr6.eq) goto loc_8214FE90;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8214fea8
	goto loc_8214FEA8;
loc_8214FE90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214fea4
	if (!ctx.cr6.eq) goto loc_8214FEA4;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8214fea8
	goto loc_8214FEA8;
loc_8214FEA4:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8214FEA8:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214fef0
	if (!ctx.cr6.eq) goto loc_8214FEF0;
	// lbz r11,45(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fecc
	if (ctx.cr0.eq) goto loc_8214FECC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8214feec
	goto loc_8214FEEC;
loc_8214FECC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8214fee0
	goto loc_8214FEE0;
loc_8214FED8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214FEE0:
	// lbz r8,45(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8214fed8
	if (ctx.cr0.eq) goto loc_8214FED8;
loc_8214FEEC:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8214FEF0:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214ffd0
	if (!ctx.cr6.eq) goto loc_8214FFD0;
	// lbz r11,45(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214ff14
	if (ctx.cr0.eq) goto loc_8214FF14;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8214ff34
	goto loc_8214FF34;
loc_8214FF14:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8214ff28
	goto loc_8214FF28;
loc_8214FF20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8214FF28:
	// lbz r8,45(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8214ff20
	if (ctx.cr0.eq) goto loc_8214FF20;
loc_8214FF34:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8214ffd0
	goto loc_8214FFD0;
loc_8214FF3C:
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214ff5c
	if (!ctx.cr6.eq) goto loc_8214FF5C;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x8214ff84
	goto loc_8214FF84;
loc_8214FF5C:
	// lbz r11,45(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 45);
	// lwz r31,4(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214ff70
	if (!ctx.cr0.eq) goto loc_8214FF70;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8214FF70:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
loc_8214FF84:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214ff9c
	if (!ctx.cr6.eq) goto loc_8214FF9C;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// b 0x8214ffb8
	goto loc_8214FFB8;
loc_8214FF9C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8214ffb4
	if (!ctx.cr6.eq) goto loc_8214FFB4;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// b 0x8214ffb8
	goto loc_8214FFB8;
loc_8214FFB4:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_8214FFB8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// lbz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 44);
	// lbz r10,44(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 44);
	// stb r10,44(r25)
	REX_STORE_U8(r25.u32 + 44, ctx.r10.u8);
	// stb r11,44(r26)
	REX_STORE_U8(r26.u32 + 44, ctx.r11.u8);
loc_8214FFD0:
	// lbz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82150168
	if (!ctx.cr6.eq) goto loc_82150168;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82150164
	if (ctx.cr6.eq) goto loc_82150164;
	// li r29,0
	r29.s64 = 0;
loc_8214FFF4:
	// lbz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82150164
	if (!ctx.cr6.eq) goto loc_82150164;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821500ac
	if (!ctx.cr6.eq) goto loc_821500AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82150034
	if (!ctx.cr0.eq) goto loc_82150034;
	// stb r30,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,44(r31)
	REX_STORE_U8(r31.u32 + 44, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150248
	ctx.lr = 0x82150030;
	sub_82150248(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82150034:
	// lbz r10,45(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82150100
	if (!ctx.cr0.eq) goto loc_82150100;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82150060
	if (!ctx.cr6.eq) goto loc_82150060;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821500fc
	if (ctx.cr6.eq) goto loc_821500FC;
loc_82150060:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82150088
	if (!ctx.cr6.eq) goto loc_82150088;
	// stb r30,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82180d38
	ctx.lr = 0x82150084;
	sub_82180D38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82150088:
	// lbz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r30.u8);
	// bl 0x82150248
	ctx.lr = 0x821500A8;
	sub_82150248(ctx, base);
	// b 0x82150164
	goto loc_82150164;
loc_821500AC:
	// lbz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821500d0
	if (!ctx.cr0.eq) goto loc_821500D0;
	// stb r30,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,44(r31)
	REX_STORE_U8(r31.u32 + 44, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82180d38
	ctx.lr = 0x821500CC;
	sub_82180D38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821500D0:
	// lbz r10,45(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82150100
	if (!ctx.cr0.eq) goto loc_82150100;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215011c
	if (!ctx.cr6.eq) goto loc_8215011C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215011c
	if (!ctx.cr6.eq) goto loc_8215011C;
loc_821500FC:
	// stb r29,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r29.u8);
loc_82150100:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214fff4
	if (!ctx.cr6.eq) goto loc_8214FFF4;
	// b 0x82150164
	goto loc_82150164;
loc_8215011C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82150144
	if (!ctx.cr6.eq) goto loc_82150144;
	// stb r30,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150248
	ctx.lr = 0x82150140;
	sub_82150248(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82150144:
	// lbz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r30.u8);
	// bl 0x82180d38
	ctx.lr = 0x82150164;
	sub_82180D38(ctx, base);
loc_82150164:
	// stb r30,44(r28)
	REX_STORE_U8(r28.u32 + 44, r30.u8);
loc_82150168:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,12
	ctx.r3.s64 = r26.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x82150178;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82150180;
	sub_8269CE98(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150194
	if (ctx.cr6.eq) goto loc_82150194;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_82150194:
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8216C690) {
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
	ctx.lr = 0x8216C698;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r25,r3,12
	r25.s64 = ctx.r3.s64 + 12;
	// stw r20,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r20.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C6B8;
	sub_8216CDC8(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r21,r10,-26856
	r21.s64 = ctx.r10.s64 + -26856;
	// beq cr6,0x8216c6e4
	if (ctx.cr6.eq) goto loc_8216C6E4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C6DC;
	sub_8216CDC8(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x8216c6e8
	goto loc_8216C6E8;
loc_8216C6E4:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8216C6E8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8216C6F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8216c6f0
	if (!ctx.cr0.eq) goto loc_8216C6F0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,25212
	ctx.r10.s64 = ctx.r10.s64 + 25212;
loc_8216C710:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216c710
	if (!ctx.cr6.eq) goto loc_8216C710;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8216C724:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8216c724
	if (!ctx.cr6.eq) goto loc_8216C724;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c760
	if (ctx.cr6.eq) goto loc_8216C760;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C754;
	sub_8216CDC8(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x8216c764
	goto loc_8216C764;
loc_8216C760:
	// std r20,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r20.u64);
loc_8216C764:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c788
	if (ctx.cr6.eq) goto loc_8216C788;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C77C;
	sub_8216CDC8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x8216c78c
	goto loc_8216C78C;
loc_8216C788:
	// std r20,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r20.u64);
loc_8216C78C:
	// lwz r29,28(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 28);
	// addi r28,r22,24
	r28.s64 = r22.s64 + 24;
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216c7f0
	if (!ctx.cr6.gt) goto loc_8216C7F0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8216c7bc
	if (ctx.cr6.gt) goto loc_8216C7BC;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8216C7BC:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216c7f0
	if (!ctx.cr6.gt) goto loc_8216C7F0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,272
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(272));
	// bl 0x8269d1d0
	ctx.lr = 0x8216C7D0;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r5,r29,272
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(272));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216C7E0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216C7E8;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
loc_8216C7F0:
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r4,r31,-1
	ctx.r4.s64 = r31.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216ce38
	ctx.lr = 0x8216C800;
	sub_8216CE38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,272
	ctx.r5.s64 = 272;
	// bl 0x826a1e70
	ctx.lr = 0x8216C80C;
	sub_826A1E70(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,8(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r29,r20
	r29.u64 = r20.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C81C;
	sub_8216CDC8(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216ca84
	if (!ctx.cr6.gt) goto loc_8216CA84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r27,r20
	r27.u64 = r20.u64;
	// addi r24,r11,25228
	r24.s64 = ctx.r11.s64 + 25228;
	// addi r23,r10,-26960
	r23.s64 = ctx.r10.s64 + -26960;
loc_8216C83C:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c85c
	if (ctx.cr6.eq) goto loc_8216C85C;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C854;
	sub_8216CDC8(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x8216c860
	goto loc_8216C860;
loc_8216C85C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8216C860:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8216C868:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8216c868
	if (!ctx.cr0.eq) goto loc_8216C868;
	// lwz r11,296(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 296);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216C88C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216c88c
	if (!ctx.cr6.eq) goto loc_8216C88C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subfic r10,r10,11
	ctx.xer.ca = ctx.r10.u32 <= 11;
	ctx.r10.u64 = static_cast<uint64_t>(11) - ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8216c918
	if (!ctx.cr6.gt) goto loc_8216C918;
loc_8216C8B4:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8216C8BC:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8216c8bc
	if (!ctx.cr6.eq) goto loc_8216C8BC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216C8D0:
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216c8d0
	if (!ctx.cr6.eq) goto loc_8216C8D0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216C8F0:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216c8f0
	if (!ctx.cr6.eq) goto loc_8216C8F0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subfic r10,r10,11
	ctx.xer.ca = ctx.r10.u32 <= 11;
	ctx.r10.u64 = static_cast<uint64_t>(11) - ctx.r10.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8216c8b4
	if (ctx.cr6.lt) goto loc_8216C8B4;
loc_8216C918:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8216C91C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216c91c
	if (!ctx.cr6.eq) goto loc_8216C91C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216C930:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216c930
	if (!ctx.cr6.eq) goto loc_8216C930;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8216C950:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216c950
	if (!ctx.cr6.eq) goto loc_8216C950;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8216C964:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8216c964
	if (!ctx.cr6.eq) goto loc_8216C964;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c99c
	if (ctx.cr6.eq) goto loc_8216C99C;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C994;
	sub_8216CDC8(ctx, base);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x8216c9a0
	goto loc_8216C9A0;
loc_8216C99C:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8216C9A0:
	// ld r9,288(r26)
	ctx.r9.u64 = REX_LOAD_U64(r26.u32 + 288);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// beq cr6,0x8216c9cc
	if (ctx.cr6.eq) goto loc_8216C9CC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216C9C4;
	sub_8216CDC8(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x8216c9d0
	goto loc_8216C9D0;
loc_8216C9CC:
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_8216C9D0:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// extsw r8,r29
	ctx.r8.s64 = r29.s32;
	// lwa r7,280(r26)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(r26.u32 + 280));
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ble cr6,0x8216ca48
	if (!ctx.cr6.gt) goto loc_8216CA48;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8216ca10
	if (ctx.cr6.gt) goto loc_8216CA10;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8216CA10:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216ca48
	if (!ctx.cr6.gt) goto loc_8216CA48;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,272
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(272));
	// bl 0x8269d1d0
	ctx.lr = 0x8216CA24;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r5,r11,272
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(272));
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216CA38;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216CA40;
	sub_8269D1B8(ctx, base);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
loc_8216CA48:
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r4,r31,-1
	ctx.r4.s64 = r31.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216ce38
	ctx.lr = 0x8216CA58;
	sub_8216CE38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,272
	ctx.r5.s64 = 272;
	// bl 0x826a1e70
	ctx.lr = 0x8216CA64;
	sub_826A1E70(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,8(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bl 0x8216cdc8
	ctx.lr = 0x8216CA78;
	sub_8216CDC8(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216c83c
	if (ctx.cr6.lt) goto loc_8216C83C;
loc_8216CA84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,272(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 272);
	// bl 0x8216ce38
	ctx.lr = 0x8216CA90;
	sub_8216CE38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,272(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 272);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
	// bl 0x8216ce38
	ctx.lr = 0x8216CAA8;
	sub_8216CE38(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,272(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 272);
	// std r11,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r11.u64);
	// bl 0x8216ce38
	ctx.lr = 0x8216CABC;
	sub_8216CE38(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8216CAC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8216cac8
	if (!ctx.cr0.eq) goto loc_8216CAC8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r22,36
	ctx.r11.s64 = r22.s64 + 36;
	// addi r9,r10,25232
	ctx.r9.s64 = ctx.r10.s64 + 25232;
	// lwz r10,25232(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 25232);
	// stw r10,36(r22)
	REX_STORE_U32(r22.u32 + 36, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,40(r22)
	REX_STORE_U32(r22.u32 + 40, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,44(r22)
	REX_STORE_U32(r22.u32 + 44, ctx.r10.u32);
	// lhz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// sth r10,48(r22)
	REX_STORE_U16(r22.u32 + 48, ctx.r10.u16);
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8216cb4c
	if (ctx.cr6.lt) goto loc_8216CB4C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25248
	ctx.r9.s64 = ctx.r9.s64 + 25248;
loc_8216CB20:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cb20
	if (!ctx.cr6.eq) goto loc_8216CB20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CB34:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cb34
	if (!ctx.cr6.eq) goto loc_8216CB34;
loc_8216CB4C:
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8216cb90
	if (ctx.cr6.lt) goto loc_8216CB90;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25264
	ctx.r9.s64 = ctx.r9.s64 + 25264;
loc_8216CB64:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cb64
	if (!ctx.cr6.eq) goto loc_8216CB64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CB78:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cb78
	if (!ctx.cr6.eq) goto loc_8216CB78;
loc_8216CB90:
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8216cbd4
	if (ctx.cr6.lt) goto loc_8216CBD4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25280
	ctx.r9.s64 = ctx.r9.s64 + 25280;
loc_8216CBA8:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cba8
	if (!ctx.cr6.eq) goto loc_8216CBA8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CBBC:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cbbc
	if (!ctx.cr6.eq) goto loc_8216CBBC;
loc_8216CBD4:
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8216cc18
	if (ctx.cr6.lt) goto loc_8216CC18;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25296
	ctx.r9.s64 = ctx.r9.s64 + 25296;
loc_8216CBEC:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cbec
	if (!ctx.cr6.eq) goto loc_8216CBEC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CC00:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cc00
	if (!ctx.cr6.eq) goto loc_8216CC00;
loc_8216CC18:
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8216cc5c
	if (ctx.cr6.lt) goto loc_8216CC5C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25312
	ctx.r9.s64 = ctx.r9.s64 + 25312;
loc_8216CC30:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cc30
	if (!ctx.cr6.eq) goto loc_8216CC30;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CC44:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cc44
	if (!ctx.cr6.eq) goto loc_8216CC44;
loc_8216CC5C:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,25328
	ctx.r9.s64 = ctx.r9.s64 + 25328;
loc_8216CC68:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216cc68
	if (!ctx.cr6.eq) goto loc_8216CC68;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CC7C:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216cc7c
	if (!ctx.cr6.eq) goto loc_8216CC7C;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8216ccf0
	if (ctx.cr6.lt) goto loc_8216CCF0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r10,25336
	ctx.r8.s64 = ctx.r10.s64 + 25336;
loc_8216CCAC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216CCB4:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8216ccb4
	if (!ctx.cr6.eq) goto loc_8216CCB4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CCC8:
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8216ccc8
	if (!ctx.cr6.eq) goto loc_8216CCC8;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8216ccac
	if (!ctx.cr6.gt) goto loc_8216CCAC;
loc_8216CCF0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,25352
	ctx.r10.s64 = ctx.r10.s64 + 25352;
loc_8216CCF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216ccf8
	if (!ctx.cr6.eq) goto loc_8216CCF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8216CD0C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8216cd0c
	if (!ctx.cr6.eq) goto loc_8216CD0C;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8219C888) {
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
	ctx.lr = 0x8219C890;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ca4
	ctx.lr = 0x8219C898;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f13,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8219cf94
	if (!ctx.cr6.gt) goto loc_8219CF94;
	// lbz r8,100(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 100);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,96(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r30,100
	r26.s64 = r30.s64 + 100;
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lwz r9,128(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lfs f0,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f13,56(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f10,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f27,f10,f12,f31
	f27.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fmuls f28,f12,f13
	f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bne cr6,0x8219ca5c
	if (!ctx.cr6.eq) goto loc_8219CA5C;
	// lwa r10,72(r30)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r30.u32 + 72));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8219ca5c
	if (!ctx.cr6.gt) goto loc_8219CA5C;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r10,6056(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8219c9d8
	if (!ctx.cr6.gt) goto loc_8219C9D8;
	// lfs f13,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lfs f0,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_8219C998:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f10,f9,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f10,f8,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x8219c9c8
	if (!ctx.cr6.lt) goto loc_8219C9C8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8219C9C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 + 720;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8219c998
	if (ctx.cr6.lt) goto loc_8219C998;
loc_8219C9D8:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,104(r31)
	REX_STORE_U32(r31.u32 + 104, r27.u32);
	// beq 0x8219ca50
	if (ctx.cr0.eq) goto loc_8219CA50;
	// lwz r11,6180(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6180);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82197d48
	ctx.lr = 0x8219C9F4;
	sub_82197D48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219ca50
	if (ctx.cr0.eq) goto loc_8219CA50;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ca24
	if (ctx.cr6.eq) goto loc_8219CA24;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x8219ca2c
	goto loc_8219CA2C;
loc_8219CA24:
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8219CA2C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// b 0x8219ca50
	goto loc_8219CA50;
loc_8219CA44:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
loc_8219CA50:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8219ca44
	if (ctx.cr6.gt) goto loc_8219CA44;
loc_8219CA5C:
	// lwz r29,32(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x8219ca80
	goto loc_8219CA80;
loc_8219CA64:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219CA7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8219CA80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8219ca64
	if (!ctx.cr6.eq) goto loc_8219CA64;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219cbec
	if (ctx.cr6.eq) goto loc_8219CBEC;
	// fdivs f0,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / f27.f64));
loc_8219CA9C:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lfs f12,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r6,16592
	ctx.r9.s64 = ctx.r6.s64 + 16592;
	// lfs f11,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - f30.f64));
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r10,256
	ctx.r6.s64 = ctx.r10.s64 + 256;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r10,r5,16592
	ctx.r10.s64 = ctx.r5.s64 + 16592;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lfsx f12,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f30,f11
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? f30.f64 : ctx.f11.f64;
	// fsubs f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
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
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// rlwinm r3,r8,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// lfsx f11,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f30,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// lfsx f11,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f11,f31,f12
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : ctx.f12.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f11,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f31,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f11,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219ca9c
	if (!ctx.cr6.eq) goto loc_8219CA9C;
loc_8219CBEC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ce4c
	if (ctx.cr6.eq) goto loc_8219CE4C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8219ce48
	if (!ctx.cr6.eq) goto loc_8219CE48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219CC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,48(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 48);
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,56(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 56);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// bl 0x823fbe48
	ctx.lr = 0x8219CC4C;
	sub_823FBE48(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// bl 0x82191980
	ctx.lr = 0x8219CC74;
	sub_82191980(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// addi r11,r9,16592
	ctx.r11.s64 = ctx.r9.s64 + 16592;
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lfs f0,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
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
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f13,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lfs f13,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f31
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
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// fdivs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 / f27.f64));
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfsx f12,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsel f12,f12,f30,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f0,920(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
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
	// fsubs f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 - f30.f64));
	// addi r11,r8,16592
	ctx.r11.s64 = ctx.r8.s64 + 16592;
	// rlwinm r5,r10,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// addi r10,r7,16592
	ctx.r10.s64 = ctx.r7.s64 + 16592;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r25,256
	ctx.r5.s64 = r25.s64 + 256;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfsx f10,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fsel f12,f10,f31,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? f31.f64 : ctx.f12.f64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f11,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f30,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f31,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f31
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
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f13,60(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lfs f13,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
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
	// lfsx f12,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r10,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 8);
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lfs f0,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// b 0x8219ce4c
	goto loc_8219CE4C;
loc_8219CE48:
	// stw r27,104(r31)
	REX_STORE_U32(r31.u32 + 104, r27.u32);
loc_8219CE4C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8219cf04
	if (ctx.cr6.lt) goto loc_8219CF04;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,60(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8219cf74
	if (ctx.cr6.gt) goto loc_8219CF74;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8219ce80
	if (!ctx.cr6.eq) goto loc_8219CE80;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_8219CE80:
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8219ce90
	if (!ctx.cr6.eq) goto loc_8219CE90;
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
loc_8219CE90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ce9c
	if (ctx.cr6.eq) goto loc_8219CE9C;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8219CE9C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219cea8
	if (ctx.cr6.eq) goto loc_8219CEA8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8219CEA8:
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r10,6180(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 6180);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// beq cr6,0x8219cee8
	if (ctx.cr6.eq) goto loc_8219CEE8;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x8219cef0
	goto loc_8219CEF0;
loc_8219CEE8:
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8219CEF0:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8219cf74
	goto loc_8219CF74;
loc_8219CF04:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,128(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8219cf74
	if (ctx.cr6.eq) goto loc_8219CF74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8219cf74
	if (!ctx.cr6.eq) goto loc_8219CF74;
	// lwz r11,6180(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6180);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219cf4c
	if (ctx.cr6.eq) goto loc_8219CF4C;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x8219cf54
	goto loc_8219CF54;
loc_8219CF4C:
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219CF54:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	REX_STORE_U32(r28.u32 + 4, r27.u32);
	// stw r27,8(r28)
	REX_STORE_U32(r28.u32 + 8, r27.u32);
	// stw r27,104(r31)
	REX_STORE_U32(r31.u32 + 104, r27.u32);
loc_8219CF74:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8219cf94
	if (ctx.cr6.eq) goto loc_8219CF94;
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_8219CF94:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219d180
	if (ctx.cr6.eq) goto loc_8219D180;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219CFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,172(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// lfs f13,596(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r9,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r9.u64);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// std r10,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r10.u64);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8219d1f0
	if (ctx.cr6.eq) goto loc_8219D1F0;
	// lfs f30,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	f30.f64 = double(temp.f32);
loc_8219D018:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823fbd18
	ctx.lr = 0x8219D028;
	sub_823FBD18(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r25,256
	ctx.r9.s64 = r25.s64 + 256;
	// lfs f8,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r25,256
	ctx.r6.s64 = r25.s64 + 256;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r25,256
	ctx.r5.s64 = r25.s64 + 256;
	// lfs f5,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r25,256
	ctx.r4.s64 = r25.s64 + 256;
	// addi r8,r25,256
	ctx.r8.s64 = r25.s64 + 256;
	// fsubs f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsubs f27,f6,f13
	f27.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f28,f7,f0
	f28.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
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
	// rlwinm r24,r11,27,29,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// fsubs f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// or r11,r24,r11
	ctx.r11.u64 = r24.u64 | ctx.r11.u64;
	// fsubs f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f29,f2,f8
	f29.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// fsubs f11,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// rlwinm r23,r7,27,29,29
	r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(f28.f64, f31.f64);
	// mfcr r27
	r27.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r27.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r27.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r27.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r27.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r27.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r27.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r27.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r27.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r27.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r27.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r27.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r27.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r27.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r27.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r27.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r27.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r27.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r27.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r27.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r27.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r27.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r27.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r27.u64 |= ctx.cr5.so ? 0x100 : 0;
	r27.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r27.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r27.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r27.u64 |= ctx.cr6.so ? 0x10 : 0;
	r27.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r27.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r27.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r27.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// mfcr r26
	r26.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r26.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r26.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r26.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r26.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r26.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r26.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r26.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r26.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r26.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r26.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r26.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r26.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r26.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r26.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r26.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r26.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r26.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r26.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r26.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r26.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r26.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r26.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r26.u64 |= ctx.cr5.so ? 0x100 : 0;
	r26.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r26.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r26.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r26.u64 |= ctx.cr6.so ? 0x10 : 0;
	r26.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r26.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r26.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r26.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r22,r3,27,29,29
	r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r21,r27,27,29,29
	r21.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// rlwinm r20,r26,27,29,29
	r20.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x4;
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// or r7,r23,r7
	ctx.r7.u64 = r23.u64 | ctx.r7.u64;
	// fsel f11,f11,f10,f4
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// rlwinm r27,r27,30,29,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x4;
	// mfcr r24
	r24.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r24.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r24.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r24.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r24.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r24.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r24.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r24.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r24.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r24.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r24.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r24.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r24.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r24.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r24.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r24.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r24.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r24.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r24.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r24.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r24.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r24.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r24.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r24.u64 |= ctx.cr5.so ? 0x100 : 0;
	r24.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r24.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r24.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r24.u64 |= ctx.cr6.so ? 0x10 : 0;
	r24.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r24.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r24.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r24.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r26,r26,30,29,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x4;
	// lfsx f1,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// or r11,r21,r27
	ctx.r11.u64 = r21.u64 | r27.u64;
	// fsel f10,f1,f9,f3
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f9.f64 : ctx.f3.f64;
	// or r3,r22,r3
	ctx.r3.u64 = r22.u64 | ctx.r3.u64;
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// or r10,r20,r26
	ctx.r10.u64 = r20.u64 | r26.u64;
	// lfsx f10,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r24,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 27) & 0x4;
	// lfsx f11,r6,r3
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f10,f7,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// lfsx f9,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f11,f11,f8,f2
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : ctx.f2.f64;
	// fsel f13,f9,f6,f13
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f6.f64 : ctx.f13.f64;
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm r10,r24,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f5,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8219d018
	if (!ctx.cr6.eq) goto loc_8219D018;
	// b 0x8219d1f0
	goto loc_8219D1F0;
loc_8219D180:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_8219D1F0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2cf0
	ctx.lr = 0x8219D1FC;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8221DA48) {
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
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// bne cr6,0x8221da6c
	if (!ctx.cr6.eq) goto loc_8221DA6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221DA6C:
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
	ctx.lr = 0x8221DA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221ed60
	ctx.lr = 0x8221DA8C;
	sub_8221ED60(ctx, base);
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

DEFINE_REX_FUNC(sub_82220E20) {
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
	// bl 0x821b2d80
	ctx.lr = 0x82220E48;
	sub_821B2D80(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82220ebc
	if (!ctx.cr6.eq) goto loc_82220EBC;
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
	ctx.lr = 0x82220E68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25480
	ctx.r4.s64 = ctx.r11.s64 + -25480;
	// bl 0x82120600
	ctx.lr = 0x82220E78;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x821dd040
	ctx.lr = 0x82220E84;
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
	ctx.lr = 0x82220EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82220EBC;
	sub_82120AC0(ctx, base);
loc_82220EBC:
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

DEFINE_REX_FUNC(sub_822272A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822272C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82227328
	if (!ctx.cr6.eq) goto loc_82227328;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24272
	ctx.r4.s64 = ctx.r11.s64 + -24272;
	// bl 0x82120600
	ctx.lr = 0x822272E4;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -560);
	// bl 0x821dd040
	ctx.lr = 0x822272F0;
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
	ctx.lr = 0x82227318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82227328;
	sub_82120AC0(ctx, base);
loc_82227328:
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

DEFINE_REX_FUNC(sub_822298A0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// li r31,0
	r31.s64 = 0;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x822298D4;
	sub_821B2D80(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822298EC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-23312
	ctx.r3.s64 = ctx.r11.s64 + -23312;
	// bl 0x8216bc98
	ctx.lr = 0x822298FC;
	sub_8216BC98(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8222ACC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222ACC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82229520
	ctx.lr = 0x8222ACD4;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,-21944
	ctx.r11.s64 = ctx.r11.s64 + -21944;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222ACE8;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x8222ad20
	if (ctx.cr0.eq) goto loc_8222AD20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22940
	ctx.r4.s64 = ctx.r10.s64 + -22940;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222AD18;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x8222ad24
	goto loc_8222AD24;
loc_8222AD20:
	// li r31,0
	r31.s64 = 0;
loc_8222AD24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8222AD30;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8222AD40;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8222AD48;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222ad78
	if (ctx.cr0.eq) goto loc_8222AD78;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22936
	ctx.r4.s64 = ctx.r10.s64 + -22936;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222AD70;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x8222ad7c
	goto loc_8222AD7C;
loc_8222AD78:
	// li r31,0
	r31.s64 = 0;
loc_8222AD7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8222AD88;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8222AD98;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82231538) {
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
	// addi r4,r3,188
	ctx.r4.s64 = ctx.r3.s64 + 188;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// bl 0x82231b48
	ctx.lr = 0x8223155C;
	sub_82231B48(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82231578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223159c
	if (ctx.cr0.eq) goto loc_8223159C;
	// lwz r3,6288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223159C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223159C:
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

DEFINE_REX_FUNC(sub_82234D70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82236c70
	ctx.lr = 0x82234D90;
	sub_82236C70(ctx, base);
	// lwz r11,1120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1120);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82234e70
	if (!ctx.cr6.eq) goto loc_82234E70;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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
	// addi r3,r31,992
	ctx.r3.s64 = r31.s64 + 992;
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
	ctx.lr = 0x82234E04;
	sub_822EEDE0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82234e18
	if (!ctx.cr6.eq) goto loc_82234E18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82234E18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234e70
	if (ctx.cr0.eq) goto loc_82234E70;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
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
	// beq 0x82234e70
	if (ctx.cr0.eq) goto loc_82234E70;
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
	ctx.lr = 0x82234E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82234E70:
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

DEFINE_REX_FUNC(sub_8223E5D8) {
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
	ctx.lr = 0x8223E5E0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8223f710
	ctx.lr = 0x8223E5F4;
	sub_8223F710(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r28,1
	r28.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223e68c
	if (!ctx.cr0.gt) goto loc_8223E68C;
	// li r29,0
	r29.s64 = 0;
loc_8223E620:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e668
	if (ctx.cr0.eq) goto loc_8223E668;
	// lwz r11,3848(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3848);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 224);
	// and r28,r11,r10
	r28.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8223E668:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,320
	r29.s64 = r29.s64 + 320;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223e620
	if (ctx.cr6.lt) goto loc_8223E620;
loc_8223E68C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e724
	if (ctx.cr0.eq) goto loc_8223E724;
	// lfs f0,3856(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 3856);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f13,3856(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 3856, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8223e724
	if (ctx.cr6.lt) goto loc_8223E724;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8223E6C8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f338
	ctx.lr = 0x8223E6D4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8223e6e8
	if (!ctx.cr6.eq) goto loc_8223E6E8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8223e6ec
	goto loc_8223E6EC;
loc_8223E6E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223E6EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x8223e700
	if (ctx.cr0.eq) goto loc_8223E700;
	// bl 0x8223efd0
	ctx.lr = 0x8223E6FC;
	sub_8223EFD0(ctx, base);
	// b 0x8223e704
	goto loc_8223E704;
loc_8223E700:
	// bl 0x8223ebd8
	ctx.lr = 0x8223E704;
	sub_8223EBD8(ctx, base);
loc_8223E704:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-17808
	ctx.r3.s64 = ctx.r10.s64 + -17808;
	// bl 0x8216bc98
	ctx.lr = 0x8223E71C;
	sub_8216BC98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223e728
	goto loc_8223E728;
loc_8223E724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223E728:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822478E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13316
	ctx.r3.s64 = ctx.r11.s64 + -13316;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822480A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822480A8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// bl 0x8215f338
	ctx.lr = 0x822480C0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822480C4;
	sub_8215F990(ctx, base);
	// stw r3,128(r29)
	REX_STORE_U32(r29.u32 + 128, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822480E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-26856
	r28.s64 = ctx.r11.s64 + -26856;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120c08
	ctx.lr = 0x82248104;
	sub_82120C08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82248140
	if (ctx.cr6.eq) goto loc_82248140;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82248140
	if (ctx.cr0.eq) goto loc_82248140;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82248140:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8224814C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822481a0
	if (!ctx.cr0.eq) goto loc_822481A0;
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 128);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x826a06d8
	ctx.lr = 0x82248168;
	sub_826A06D8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-14336
	ctx.r4.s64 = ctx.r11.s64 + -14336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x8224817C;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121928
	ctx.lr = 0x82248184;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x82248190;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822481A0;
	sub_82120AC0(ctx, base);
loc_822481A0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-14328
	ctx.r4.s64 = ctx.r10.s64 + -14328;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822481C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822481d8
	if (!ctx.cr6.eq) goto loc_822481D8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
loc_822481D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82249480
	ctx.lr = 0x822481E0;
	sub_82249480(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82251BD8) {
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
	ctx.lr = 0x82251BE0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-11960
	r29.s64 = ctx.r11.s64 + -11960;
	// bne cr6,0x82251c18
	if (!ctx.cr6.eq) goto loc_82251C18;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-11924
	ctx.r3.s64 = ctx.r11.s64 + -11924;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x821231d0
	ctx.lr = 0x82251C18;
	sub_821231D0(ctx, base);
loc_82251C18:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82251c34
	if (!ctx.cr6.eq) goto loc_82251C34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x821231d0
	ctx.lr = 0x82251C34;
	sub_821231D0(ctx, base);
loc_82251C34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82251c48
	if (!ctx.cr6.eq) goto loc_82251C48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82251cf0
	goto loc_82251CF0;
loc_82251C48:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f9,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f8,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f13.f64)));
	// lfs f10,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f7,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f13.f64)));
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
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x82251cec
	if (ctx.cr6.eq) goto loc_82251CEC;
loc_82251CC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250250
	ctx.lr = 0x82251CCC;
	sub_82250250(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x82251cec
	if (ctx.cr6.eq) goto loc_82251CEC;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82251cc0
	if (!ctx.cr6.eq) goto loc_82251CC0;
loc_82251CEC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82251CF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82258418) {
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
	ctx.lr = 0x82258420;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// bl 0x82289b48
	ctx.lr = 0x82258430;
	sub_82289B48(ctx, base);
	// lwz r11,108(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 108);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82258548
	if (!ctx.cr6.eq) goto loc_82258548;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82258548
	if (!ctx.cr0.gt) goto loc_82258548;
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r6,1624
	r30.s64 = ctx.r6.s64 + 1624;
	// addi r29,r5,-10220
	r29.s64 = ctx.r5.s64 + -10220;
	// addi r28,r7,30308
	r28.s64 = ctx.r7.s64 + 30308;
	// addi r27,r8,30288
	r27.s64 = ctx.r8.s64 + 30288;
	// addi r25,r9,-10144
	r25.s64 = ctx.r9.s64 + -10144;
	// addi r24,r10,-10200
	r24.s64 = ctx.r10.s64 + -10200;
	// addi r26,r11,-13316
	r26.s64 = ctx.r11.s64 + -13316;
loc_82258498:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822584B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x822584C0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822584d8
	if (!ctx.cr0.eq) goto loc_822584D8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x822584D8;
	sub_821231D0(ctx, base);
loc_822584D8:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,128(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822584F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82258528
	if (!ctx.cr6.eq) goto loc_82258528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82258508;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82258510;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82258518;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r21,-4
	ctx.r3.s64 = r21.s64 + -4;
	// bl 0x8228baf8
	ctx.lr = 0x82258528;
	sub_8228BAF8(ctx, base);
loc_82258528:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82258498
	if (ctx.cr6.lt) goto loc_82258498;
loc_82258548:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822638B8) {
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
	ctx.lr = 0x822638C0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822638E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r21,r11,-9400
	r21.s64 = ctx.r11.s64 + -9400;
	// bne 0x82263904
	if (!ctx.cr0.eq) goto loc_82263904;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-7496
	ctx.r3.s64 = ctx.r11.s64 + -7496;
	// li r5,4891
	ctx.r5.s64 = 4891;
	// bl 0x821231d0
	ctx.lr = 0x82263904;
	sub_821231D0(ctx, base);
loc_82263904:
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r26,r24,280
	r26.s64 = r24.s64 + 280;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r23,2
	r23.s64 = 2;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r22,r10,-7420
	r22.s64 = ctx.r10.s64 + -7420;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r25,r11,17480
	r25.s64 = ctx.r11.s64 + 17480;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
loc_82263938:
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822639d8
	if (ctx.cr0.eq) goto loc_822639D8;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// li r27,8
	r27.s64 = 8;
loc_82263954:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822639b4
	if (ctx.cr6.eq) goto loc_822639B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r24,192
	ctx.r3.s64 = r24.s64 + 192;
	// bl 0x8228c390
	ctx.lr = 0x8226396C;
	sub_8228C390(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82125d00
	ctx.lr = 0x82263980;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822639a8
	if (!ctx.cr0.eq) goto loc_822639A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822639a0
	if (ctx.cr6.eq) goto loc_822639A0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,4920
	ctx.r5.s64 = 4920;
	// bl 0x821231d0
	ctx.lr = 0x822639A0;
	sub_821231D0(ctx, base);
loc_822639A0:
	// mr r28,r29
	r28.u64 = r29.u64;
	// b 0x822639b4
	goto loc_822639B4;
loc_822639A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82264568
	ctx.lr = 0x822639B4;
	sub_82264568(ctx, base);
loc_822639B4:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82263954
	if (!ctx.cr0.eq) goto loc_82263954;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822639d8
	if (ctx.cr6.eq) goto loc_822639D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82264568
	ctx.lr = 0x822639D8;
	sub_82264568(ctx, base);
loc_822639D8:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// bne 0x82263938
	if (!ctx.cr0.eq) goto loc_82263938;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// srawi. r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble 0x82263a1c
	if (!ctx.cr0.gt) goto loc_82263A1C;
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
loc_82263A00:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x8227d768
	ctx.lr = 0x82263A10;
	sub_8227D768(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x82263a00
	if (ctx.cr6.lt) goto loc_82263A00;
loc_82263A1C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x82263a50
	if (!ctx.cr0.gt) goto loc_82263A50;
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
loc_82263A34:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// add r4,r28,r31
	ctx.r4.u64 = r28.u64 + r31.u64;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x8227d768
	ctx.lr = 0x82263A44;
	sub_8227D768(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x82263a34
	if (ctx.cr6.lt) goto loc_82263A34;
loc_82263A50:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82263a60
	if (ctx.cr6.eq) goto loc_82263A60;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82263A60;
	sub_8269CE98(ctx, base);
loc_82263A60:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82263a70
	if (ctx.cr6.eq) goto loc_82263A70;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82263A70;
	sub_8269CE98(ctx, base);
loc_82263A70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8226FF50) {
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
	// addi r11,r11,-4412
	ctx.r11.s64 = ctx.r11.s64 + -4412;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8226ff7c
	if (ctx.cr0.eq) goto loc_8226FF7C;
	// bl 0x8269ce98
	ctx.lr = 0x8226FF7C;
	sub_8269CE98(ctx, base);
loc_8226FF7C:
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

DEFINE_REX_FUNC(sub_822717D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822717E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,612(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,6040(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271820
	if (ctx.cr6.eq) goto loc_82271820;
	// bl 0x8269ce98
	ctx.lr = 0x82271820;
	sub_8269CE98(ctx, base);
loc_82271820:
	// li r28,0
	r28.s64 = 0;
	// stw r28,656(r31)
	REX_STORE_U32(r31.u32 + 656, r28.u32);
	// stw r28,648(r31)
	REX_STORE_U32(r31.u32 + 648, r28.u32);
	// stw r28,652(r31)
	REX_STORE_U32(r31.u32 + 652, r28.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271868
	if (ctx.cr6.eq) goto loc_82271868;
	// lwz r29,636(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 636);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82271860
	if (ctx.cr6.eq) goto loc_82271860;
loc_8227184C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220c2c0
	ctx.lr = 0x82271854;
	sub_8220C2C0(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8227184c
	if (!ctx.cr6.eq) goto loc_8227184C;
loc_82271860:
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8269ce98
	ctx.lr = 0x82271868;
	sub_8269CE98(ctx, base);
loc_82271868:
	// stw r28,632(r31)
	REX_STORE_U32(r31.u32 + 632, r28.u32);
	// addi r3,r31,616
	ctx.r3.s64 = r31.s64 + 616;
	// stw r28,636(r31)
	REX_STORE_U32(r31.u32 + 636, r28.u32);
	// stw r28,640(r31)
	REX_STORE_U32(r31.u32 + 640, r28.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x8227187C;
	sub_8215F0F0(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8220c238
	ctx.lr = 0x82271884;
	sub_8220C238(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82120ac0
	ctx.lr = 0x82271894;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8227189C;
	sub_82178388(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82276AC8) {
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
	ctx.lr = 0x82276AD0;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfd f0,352(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 352);
	// lbz r11,360(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 360);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,352(r3)
	REX_STORE_U64(ctx.r3.u32 + 352, ctx.f0.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82276ed8
	if (ctx.cr0.eq) goto loc_82276ED8;
	// lbz r10,177(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 177);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// beq 0x82276b94
	if (ctx.cr0.eq) goto loc_82276B94;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ld r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lwz r4,6168(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 6168);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821497c0
	ctx.lr = 0x82276B44;
	sub_821497C0(ctx, base);
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,1244(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 1244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82276b94
	if (!ctx.cr6.gt) goto loc_82276B94;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276b94
	if (ctx.cr6.eq) goto loc_82276B94;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276B94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lfs f30,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82276e54
	if (ctx.cr6.eq) goto loc_82276E54;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x821fd140
	ctx.lr = 0x82276BE0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276e54
	if (ctx.cr0.eq) goto loc_82276E54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276e54
	if (ctx.cr0.eq) goto loc_82276E54;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276c1c
	if (ctx.cr6.lt) goto loc_82276C1C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82276C1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,6184(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x82276C28;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82276d44
	if (ctx.cr0.eq) goto loc_82276D44;
	// lwz r3,6184(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x82276C38;
	sub_82151118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82276d44
	if (ctx.cr0.eq) goto loc_82276D44;
	// lwz r11,468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 468);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821d7c18
	ctx.lr = 0x82276C78;
	sub_821D7C18(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 468);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276CE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82276d44
	if (ctx.cr6.eq) goto loc_82276D44;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r28,r11,-14428
	r28.s64 = ctx.r11.s64 + -14428;
loc_82276D0C:
	// lwz r29,32(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 32);
	// b 0x82276d30
	goto loc_82276D30;
loc_82276D14:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x821fd140
	ctx.lr = 0x82276D20;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276d2c
	if (ctx.cr0.eq) goto loc_82276D2C;
	// stw r27,20(r29)
	REX_STORE_U32(r29.u32 + 20, r27.u32);
loc_82276D2C:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_82276D30:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82276d14
	if (!ctx.cr6.eq) goto loc_82276D14;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82276d0c
	if (!ctx.cr6.eq) goto loc_82276D0C;
loc_82276D44:
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// lfs f13,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// lwz r3,460(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276e54
	if (ctx.cr0.eq) goto loc_82276E54;
	// lwz r3,460(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276e54
	if (ctx.cr0.eq) goto loc_82276E54;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,300(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lwz r10,6100(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6100);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// blt cr6,0x82276dac
	if (ctx.cr6.lt) goto loc_82276DAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82276DAC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82276e20
	if (!ctx.cr0.eq) goto loc_82276E20;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f0,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822fbfc0
	ctx.lr = 0x82276E18;
	sub_822FBFC0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822fbe20
	ctx.lr = 0x82276E20;
	sub_822FBE20(ctx, base);
loc_82276E20:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lwz r3,6296(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6296);
	// blt cr6,0x82276e3c
	if (ctx.cr6.lt) goto loc_82276E3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82276E3C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276E54:
	// lfs f13,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r25,256
	ctx.r11.s64 = r25.s64 + 256;
	// lfs f12,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f0,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6184(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6184);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,324(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 324);
	// fmsubs f11,f11,f9,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, -ctx.f10.f64)));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,368(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
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
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f0,f31
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f1,372(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// bl 0x82151118
	ctx.lr = 0x82276EBC;
	sub_82151118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276ed8
	if (ctx.cr0.eq) goto loc_82276ED8;
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276ED8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

DEFINE_REX_FUNC(sub_8229AF30) {
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
	ctx.lr = 0x8229AF38;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229b368
	if (!ctx.cr6.eq) goto loc_8229B368;
	// lwz r29,48(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r27,0
	r27.s64 = 0;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229AF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8229b368
	if (!ctx.cr0.gt) goto loc_8229B368;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r22,2
	r22.s64 = 2;
	// lfs f29,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f29.f64 = double(temp.f32);
	// addi r25,r11,5148
	r25.s64 = ctx.r11.s64 + 5148;
	// lfs f31,308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 308);
	f31.f64 = double(temp.f32);
	// addi r24,r10,5456
	r24.s64 = ctx.r10.s64 + 5456;
	// lfs f30,100(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 100);
	f30.f64 = double(temp.f32);
loc_8229AFB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r27,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bctrl 
	ctx.lr = 0x8229B014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229b348
	if (!ctx.cr6.gt) goto loc_8229B348;
loc_8229B024:
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r7,3
	ctx.r7.s64 = 3;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
loc_8229B04C:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8229b060
	if (!ctx.cr6.eq) goto loc_8229B060;
	// lhz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// b 0x8229b064
	goto loc_8229B064;
loc_8229B060:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8229B064:
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8229b0c4
	if (!ctx.cr6.eq) goto loc_8229B0C4;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f29,204(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x8229b118
	goto loc_8229B118;
loc_8229B0C4:
	// lfd f11,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfd f10,8(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fmul f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f11,16(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmul f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64;
	// stfs f29,220(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r4,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_8229B118:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne 0x8229b04c
	if (!ctx.cr0.eq) goto loc_8229B04C;
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f7,f29
	ctx.f7.f64 = f29.f64;
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8229b180
	if (!ctx.cr6.lt) goto loc_8229B180;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_8229B180:
	// lfs f11,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// bge cr6,0x8229b194
	if (!ctx.cr6.lt) goto loc_8229B194;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
loc_8229B194:
	// lfs f12,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8229b1a8
	if (!ctx.cr6.lt) goto loc_8229B1A8;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_8229B1A8:
	// lfs f13,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x8229b1bc
	if (!ctx.cr6.lt) goto loc_8229B1BC;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_8229B1BC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8229b1cc
	if (!ctx.cr6.gt) goto loc_8229B1CC;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_8229B1CC:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// ble cr6,0x8229b1dc
	if (!ctx.cr6.gt) goto loc_8229B1DC;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
loc_8229B1DC:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// ble cr6,0x8229b1ec
	if (!ctx.cr6.gt) goto loc_8229B1EC;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
loc_8229B1EC:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// ble cr6,0x8229b1fc
	if (!ctx.cr6.gt) goto loc_8229B1FC;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
loc_8229B1FC:
	// lfs f11,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8229b210
	if (!ctx.cr6.lt) goto loc_8229B210;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_8229B210:
	// lfs f12,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x8229b224
	if (!ctx.cr6.lt) goto loc_8229B224;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_8229B224:
	// lfs f13,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229b238
	if (!ctx.cr6.lt) goto loc_8229B238;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
loc_8229B238:
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8229b24c
	if (!ctx.cr6.lt) goto loc_8229B24C;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8229B24C:
	// fcmpu cr6,f6,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// bge cr6,0x8229b25c
	if (!ctx.cr6.lt) goto loc_8229B25C;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
loc_8229B25C:
	// fcmpu cr6,f5,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// bge cr6,0x8229b26c
	if (!ctx.cr6.lt) goto loc_8229B26C;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
loc_8229B26C:
	// fcmpu cr6,f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x8229b27c
	if (!ctx.cr6.lt) goto loc_8229B27C;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
loc_8229B27C:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8229b28c
	if (!ctx.cr6.lt) goto loc_8229B28C;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_8229B28C:
	// lfs f11,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8229b29c
	if (!ctx.cr6.lt) goto loc_8229B29C;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8229B29C:
	// lfs f12,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x8229b2ac
	if (!ctx.cr6.lt) goto loc_8229B2AC;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8229B2AC:
	// lfs f13,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229b2bc
	if (!ctx.cr6.lt) goto loc_8229B2BC;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8229B2BC:
	// lfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8229b2cc
	if (!ctx.cr6.lt) goto loc_8229B2CC;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8229B2CC:
	// fcmpu cr6,f6,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// bge cr6,0x8229b2d8
	if (!ctx.cr6.lt) goto loc_8229B2D8;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8229B2D8:
	// fcmpu cr6,f5,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// bge cr6,0x8229b2e4
	if (!ctx.cr6.lt) goto loc_8229B2E4;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8229B2E4:
	// fcmpu cr6,f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x8229b2f0
	if (!ctx.cr6.lt) goto loc_8229B2F0;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8229B2F0:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8229b2fc
	if (!ctx.cr6.lt) goto loc_8229B2FC;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8229B2FC:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r28,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r23,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229b024
	if (ctx.cr6.lt) goto loc_8229B024;
loc_8229B348:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8229afb8
	if (ctx.cr6.lt) goto loc_8229AFB8;
loc_8229B368:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

DEFINE_REX_FUNC(sub_822C1AD8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822c1b60
	if (!ctx.cr6.eq) goto loc_822C1B60;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c1b0c
	if (!ctx.cr6.gt) goto loc_822C1B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C1B0C;
	sub_822D5B28(ctx, base);
loc_822C1B0C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,12884(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r7,r7,25344
	ctx.r7.u64 = ctx.r7.u64 | 25344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822C1B60:
	// lwz r11,10440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x822c1c90
	ctx.lr = 0x822C1B90;
	sub_822C1C90(ctx, base);
	// lwz r11,10916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10916);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r11,10916(r31)
	REX_STORE_U32(r31.u32 + 10916, ctx.r11.u32);
	// ble cr6,0x822c1bb0
	if (!ctx.cr6.gt) goto loc_822C1BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C1BB0;
	sub_822D5B28(ctx, base);
loc_822C1BB0:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r9,3841
	ctx.r9.s64 = 3841;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r10,10916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10916);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_822C6180) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x822c5c60
	sub_822C5C60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C71D8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x822C71E0;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r16,r4,29
	r16.u64 = ctx.r4.u32 & 0x7;
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// rlwinm. r11,r4,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c7264
	if (!ctx.cr0.eq) goto loc_822C7264;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// bne cr6,0x822c722c
	if (!ctx.cr6.eq) goto loc_822C722C;
	// lwz r11,12632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
	// b 0x822c7238
	goto loc_822C7238;
loc_822C722C:
	// addi r11,r16,3154
	ctx.r11.s64 = r16.s64 + 3154;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
loc_822C7238:
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7250
	if (!ctx.cr6.eq) goto loc_822C7250;
	// ori r23,r23,16
	r23.u64 = r23.u64 | 16;
	// b 0x822c7264
	goto loc_822C7264;
loc_822C7250:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c7260
	if (!ctx.cr6.eq) goto loc_822C7260;
	// ori r23,r23,80
	r23.u64 = r23.u64 | 80;
	// b 0x822c7264
	goto loc_822C7264;
loc_822C7260:
	// ori r23,r23,112
	r23.u64 = r23.u64 | 112;
loc_822C7264:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x822c7284
	if (!ctx.cr6.eq) goto loc_822C7284;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822C7284:
	// lwz r29,40(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r10,48(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 48);
	// rlwinm r11,r29,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x2;
	// lwz r9,36(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 36);
	// rlwinm r22,r10,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// beq cr6,0x822c72b4
	if (ctx.cr6.eq) goto loc_822C72B4;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x822c72c0
	goto loc_822C72C0;
loc_822C72B4:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_822C72C0:
	// lwz r25,32(r21)
	r25.u64 = REX_LOAD_U32(r21.u32 + 32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// clrlwi r30,r25,26
	r30.u64 = r25.u32 & 0x3F;
	// add r24,r9,r11
	r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822C72E0;
	sub_822C6B30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm r8,r25,1,25,30
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0x7E;
	// lwz r6,28(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r7,r6,15,18,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x3FE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r21,28
	ctx.r9.s64 = r21.s64 + 28;
	// li r15,0
	r15.s64 = 0;
	// rlwinm r10,r25,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lbzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r17,r8,29,3,31
	r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r21,r7,r11
	r21.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// bne cr6,0x822c7340
	if (!ctx.cr6.eq) goto loc_822C7340;
	// stw r26,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r26.u32);
	// addi r27,r1,176
	r27.s64 = ctx.r1.s64 + 176;
	// stw r24,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r24.u32);
	// stw r15,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r15.u32);
	// stw r15,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r15.u32);
loc_822C7340:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822c7350
	if (!ctx.cr6.eq) goto loc_822C7350;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r28,r11,8160
	r28.s64 = ctx.r11.s64 + 8160;
loc_822C7350:
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r4,r29,0,28,30
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xE;
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// subf r28,r9,r24
	r28.u64 = r24.u64 - ctx.r9.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// mullw r8,r9,r21
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mullw r10,r8,r17
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r17.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// divwu r8,r28,r5
	ctx.r8.u64 = uint32_t(ctx.r5.u32 ? r28.u32 / ctx.r5.u32 : 0);
	// addic r7,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r9,r23,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 6) & 0x3F;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// rlwinm r18,r6,30,30,31
	r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3;
	// subfe r7,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,54
	ctx.cr6.compare<uint32_t>(r30.u32, 54, ctx.xer);
	// bne cr6,0x822c73cc
	if (!ctx.cr6.eq) goto loc_822C73CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C73CC:
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bne cr6,0x822c73dc
	if (!ctx.cr6.eq) goto loc_822C73DC;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C73DC:
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x822c73ec
	if (!ctx.cr6.eq) goto loc_822C73EC;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C73EC:
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x822c73fc
	if (!ctx.cr6.eq) goto loc_822C73FC;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C73FC:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x822c740c
	if (!ctx.cr6.eq) goto loc_822C740C;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C740C:
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x822c741c
	if (!ctx.cr6.eq) goto loc_822C741C;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x822c7430
	goto loc_822C7430;
loc_822C741C:
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x822c742c
	if (ctx.cr6.eq) goto loc_822C742C;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x822c7430
	if (!ctx.cr6.eq) goto loc_822C7430;
loc_822C742C:
	// li r11,6
	ctx.r11.s64 = 6;
loc_822C7430:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r10,r18,-1
	ctx.r10.s64 = r18.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x822c7448
	if (!ctx.cr6.eq) goto loc_822C7448;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_822C7448:
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// beq cr6,0x822c7488
	if (ctx.cr6.eq) goto loc_822C7488;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x822c748c
	if (!ctx.cr6.eq) goto loc_822C748C;
loc_822C7488:
	// li r10,7
	ctx.r10.s64 = 7;
loc_822C748C:
	// rlwimi r9,r7,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// andi. r9,r9,319
	ctx.r9.u64 = ctx.r9.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r10,r9,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// rlwimi r7,r10,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r9,r21,18
	ctx.r9.u64 = r21.u32 & 0x3FFF;
	// rlwinm r6,r7,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r25,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 26) & 0x3;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// bne cr6,0x822c74d8
	if (!ctx.cr6.eq) goto loc_822C74D8;
	// mullw r10,r21,r24
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(r24.s32);
	// stw r10,10820(r31)
	REX_STORE_U32(r31.u32 + 10820, ctx.r10.u32);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// ori r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 8;
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
loc_822C74D8:
	// rlwinm. r10,r23,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x822c74ec
	if (ctx.cr0.eq) goto loc_822C74EC;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x822c7508
	goto loc_822C7508;
loc_822C74EC:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// bne cr6,0x822c74fc
	if (!ctx.cr6.eq) goto loc_822C74FC;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// b 0x822c7508
	goto loc_822C7508;
loc_822C74FC:
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x822c7508
	if (!ctx.cr6.eq) goto loc_822C7508;
	// li r9,2
	ctx.r9.s64 = 2;
loc_822C7508:
	// stw r7,10784(r31)
	REX_STORE_U32(r31.u32 + 10784, ctx.r7.u32);
	// andi. r10,r23,887
	ctx.r10.u64 = r23.u64 & 887;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r26,10780(r31)
	REX_STORE_U32(r31.u32 + 10780, r26.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,10788(r31)
	REX_STORE_U32(r31.u32 + 10788, ctx.r8.u32);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r7,10776(r31)
	REX_STORE_U32(r31.u32 + 10776, ctx.r7.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// bne cr6,0x822c7574
	if (!ctx.cr6.eq) goto loc_822C7574;
	// lis r11,-32640
	ctx.r11.s64 = -2139095040;
	// stw r6,10816(r31)
	REX_STORE_U32(r31.u32 + 10816, ctx.r6.u32);
	// li r10,4369
	ctx.r10.s64 = 4369;
	// ori r11,r11,32896
	ctx.r11.u64 = ctx.r11.u64 | 32896;
	// stw r10,10808(r31)
	REX_STORE_U32(r31.u32 + 10808, ctx.r10.u32);
	// stw r11,10812(r31)
	REX_STORE_U32(r31.u32 + 10812, ctx.r11.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,60
	ctx.r11.u64 = ctx.r11.u64 | 60;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,30
	ctx.r11.u64 = ctx.r11.u64 | 30;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_822C7574:
	// rlwinm. r24,r23,0,22,22
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x822c758c
	if (ctx.cr0.eq) goto loc_822C758C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c6c70
	ctx.lr = 0x822C758C;
	sub_822C6C70(ctx, base);
loc_822C758C:
	// rlwinm. r11,r23,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c75e8
	if (ctx.cr0.eq) goto loc_822C75E8;
	// lvx128 v1,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi. r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c75a8
	if (!ctx.cr0.eq) goto loc_822C75A8;
	// addi r11,r31,10372
	ctx.r11.s64 = r31.s64 + 10372;
	// b 0x822c75b4
	goto loc_822C75B4;
loc_822C75A8:
	// addi r11,r11,2594
	ctx.r11.s64 = ctx.r11.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
loc_822C75B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x822c6d60
	ctx.lr = 0x822C75CC;
	sub_822C6D60(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,10804(r31)
	REX_STORE_U32(r31.u32 + 10804, ctx.r10.u32);
	// stw r11,10800(r31)
	REX_STORE_U32(r31.u32 + 10800, ctx.r11.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_822C75E8:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r19,r15
	r19.u64 = r15.u64;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,10436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10436);
	// lwz r25,0(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r23,4(r27)
	r23.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r22,r9,0,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r20,r10,0,0,28
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822c7654
	if (ctx.cr6.lt) goto loc_822C7654;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c7654
	if (ctx.cr6.lt) goto loc_822C7654;
	// lwz r11,10440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822c7654
	if (ctx.cr6.gt) goto loc_822C7654;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822c7670
	if (!ctx.cr6.gt) goto loc_822C7670;
loc_822C7654:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c1c90
	ctx.lr = 0x822C766C;
	sub_822C1C90(ctx, base);
	// li r19,1
	r19.s64 = 1;
loc_822C7670:
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x822c7790
	if (ctx.cr6.eq) goto loc_822C7790;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822c769c
	if (ctx.cr6.eq) goto loc_822C769C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// bl 0x822db298
	ctx.lr = 0x822C7698;
	sub_822DB298(ctx, base);
	// std r3,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_822C769C:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c76cc
	if (ctx.cr6.eq) goto loc_822C76CC;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C76C0;
	sub_822DB630(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C76CC:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c7704
	if (ctx.cr6.eq) goto loc_822C7704;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C76F0;
	sub_822DB630(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C7704:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c774c
	if (ctx.cr6.eq) goto loc_822C774C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C7734;
	sub_822DB630(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C774C:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c7790
	if (ctx.cr6.eq) goto loc_822C7790;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C7778;
	sub_822DB630(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C7790:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822c77e0
	if (ctx.cr6.eq) goto loc_822C77E0;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c77e0
	if (ctx.cr6.eq) goto loc_822C77E0;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C77C8;
	sub_822DB630(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
loc_822C77E0:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822c7818
	if (ctx.cr6.eq) goto loc_822C7818;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822c7818
	if (ctx.cr6.eq) goto loc_822C7818;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822C780C;
	sub_822DB630(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_822C7818:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c782c
	if (ctx.cr0.eq) goto loc_822C782C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c78bc
	goto loc_822C78BC;
loc_822C782C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c78b4
	if (ctx.cr0.eq) goto loc_822C78B4;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c784c
	if (ctx.cr6.eq) goto loc_822C784C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78b4
	if (!ctx.cr6.eq) goto loc_822C78B4;
loc_822C784C:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c7864
	if (ctx.cr6.eq) goto loc_822C7864;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78b4
	if (!ctx.cr6.eq) goto loc_822C78B4;
loc_822C7864:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c787c
	if (ctx.cr6.eq) goto loc_822C787C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78b4
	if (!ctx.cr6.eq) goto loc_822C78B4;
loc_822C787C:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c7894
	if (ctx.cr6.eq) goto loc_822C7894;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78b4
	if (!ctx.cr6.eq) goto loc_822C78B4;
loc_822C7894:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c78ac
	if (ctx.cr6.eq) goto loc_822C78AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78b4
	if (!ctx.cr6.eq) goto loc_822C78B4;
loc_822C78AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c78b8
	goto loc_822C78B8;
loc_822C78B4:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_822C78B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C78BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c79c8
	if (ctx.cr0.eq) goto loc_822C79C8;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c78dc
	if (!ctx.cr6.gt) goto loc_822C78DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C78DC;
	sub_822D5B28(ctx, base);
loc_822C78DC:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// mr r28,r15
	r28.u64 = r15.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c799c
	if (!ctx.cr6.gt) goto loc_822C799C;
	// mr r29,r15
	r29.u64 = r15.u64;
	// addi r30,r31,13168
	r30.s64 = r31.s64 + 13168;
loc_822C790C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// slw r7,r7,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r10,11521
	ctx.r4.u64 = ctx.r10.u64 | 11521;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r9,r6,793
	ctx.r9.u64 = ctx.r6.u64 | 793;
	// mullw r10,r8,r21
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r21.s32);
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x822c7984
	if (!ctx.cr6.gt) goto loc_822C7984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7980;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C7984:
	// lwz r10,12924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822c790c
	if (ctx.cr6.lt) goto loc_822C790C;
loc_822C799C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822C79C8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c79e4
	if (!ctx.cr6.gt) goto loc_822C79E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C79E0;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C79E4:
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r26,r9,17920
	r26.u64 = ctx.r9.u64 | 17920;
	// beq 0x822c7a30
	if (ctx.cr0.eq) goto loc_822C7A30;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
loc_822C7A30:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r6,15
	ctx.r6.s64 = 15;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r27,r10,15048
	r27.s64 = ctx.r10.s64 + 15048;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// addi r4,r27,-620
	ctx.r4.s64 = r27.s64 + -620;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r15,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C7A7C;
	sub_826A1E70(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,8704
	ctx.r6.s64 = 8704;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwu r15,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r15,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x822c7b04
	if (ctx.cr6.eq) goto loc_822C7B04;
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// lbz r9,10941(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,10560(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r9,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r9.u8);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// std r9,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_822C7B04:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stb r10,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r10.u8);
	// bl 0x822db298
	ctx.lr = 0x822C7B30;
	sub_822DB298(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c7b48
	if (!ctx.cr6.gt) goto loc_822C7B48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7B48;
	sub_822D5B28(ctx, base);
loc_822C7B48:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	r30.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r29,0
	r29.s64 = 0;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// ori r11,r29,65535
	ctx.r11.u64 = r29.u64 | 65535;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// li r28,8205
	r28.s64 = 8205;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// bne cr6,0x822c7cf0
	if (!ctx.cr6.eq) goto loc_822C7CF0;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822c7cf0
	if (ctx.cr6.eq) goto loc_822C7CF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq cr6,0x822c7c74
	if (ctx.cr6.eq) goto loc_822C7C74;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_822C7C74:
	// addi r11,r29,2593
	ctx.r11.s64 = r29.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r31
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r11,r28,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822c7cf0
	if (!ctx.cr6.eq) goto loc_822C7CF0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c7ca8
	if (!ctx.cr6.gt) goto loc_822C7CA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7CA8;
	sub_822D5B28(ctx, base);
loc_822C7CA8:
	// addis r10,r29,2
	ctx.r10.s64 = r29.s64 + 131072;
	// addi r11,r29,8193
	ctx.r11.s64 = r29.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r28,6
	ctx.r8.u64 = r28.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822C7CF0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c7d08
	if (!ctx.cr6.gt) goto loc_822C7D08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7D04;
	sub_822D5B28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822C7D08:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822C7D18;
	sub_822D4EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822c7d28
	if (!ctx.cr0.eq) goto loc_822C7D28;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x822c80e8
	goto loc_822C80E8;
loc_822C7D28:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x822c7d58
	if (!ctx.cr0.eq) goto loc_822C7D58;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822c7d5c
	goto loc_822C7D5C;
loc_822C7D58:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_822C7D5C:
	// extsw r10,r25
	ctx.r10.s64 = r25.s32;
	// extsw r9,r23
	ctx.r9.s64 = r23.s32;
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// subf r10,r25,r22
	ctx.r10.u64 = r22.u64 - r25.u64;
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// subf r9,r23,r20
	ctx.r9.u64 = r20.u64 - r23.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// ori r10,r9,18432
	ctx.r10.u64 = ctx.r9.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// li r28,0
	r28.s64 = 0;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r24,3
	r24.s64 = 196608;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// ori r24,r24,136
	r24.u64 = r24.u64 | 136;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// mr r25,r28
	r25.u64 = r28.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,136(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,12892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12892);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x822c7e80
	if (!ctx.cr6.gt) goto loc_822C7E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7E80;
	sub_822D5B28(ctx, base);
loc_822C7E80:
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,8199
	ctx.r10.s64 = 8199;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822c7ed8
	if (ctx.cr6.eq) goto loc_822C7ED8;
	// lwz r11,10440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x822c1c90
	ctx.lr = 0x822C7ED8;
	sub_822C1C90(ctx, base);
loc_822C7ED8:
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lwz r29,396(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// bl 0x822d1b30
	ctx.lr = 0x822C7F38;
	sub_822D1B30(ctx, base);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r7,40(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm r6,r10,10,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FF;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// rlwinm r8,r7,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mullw r10,r6,r17
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r17.s32);
	// lwz r6,48(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r30,32(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 32);
	// srawi r8,r8,26
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 26;
	// rlwinm r11,r5,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0xF;
	// rlwinm r27,r10,5,0,26
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r26,r7,1,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r6,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r8,r6,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r7,r30,26
	ctx.r7.u64 = r30.u32 & 0x3F;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x822d1728
	ctx.lr = 0x822C7FB0;
	sub_822D1728(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r30,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x822c7fdc
	if (!ctx.cr6.gt) goto loc_822C7FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C7FDC;
	sub_822D5B28(ctx, base);
loc_822C7FDC:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r9,768
	ctx.r9.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,8191
	ctx.r10.s64 = ctx.r10.s64 + 8191;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r30,8
	r30.s64 = 8;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r27,2
	r27.s64 = 131072;
	// li r26,8984
	r26.s64 = 8984;
	// li r24,8987
	r24.s64 = 8987;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stw r28,10776(r31)
	REX_STORE_U32(r31.u32 + 10776, r28.u32);
	// stw r28,10788(r31)
	REX_STORE_U32(r31.u32 + 10788, r28.u32);
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822c8098
	if (ctx.cr6.eq) goto loc_822C8098;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// b 0x822c80e8
	goto loc_822C80E8;
loc_822C8098:
	// lwz r11,10912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10912);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c80e8
	if (ctx.cr0.eq) goto loc_822C80E8;
	// lwz r11,13740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13740);
	// lwz r3,13736(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13736);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c80c0
	if (ctx.cr6.lt) goto loc_822C80C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822C80C0;
	sub_822D8DA0(ctx, base);
loc_822C80C0:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r29,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13736(r31)
	REX_STORE_U32(r31.u32 + 13736, ctx.r9.u32);
loc_822C80E8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8233FC60) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233fc98
	if (ctx.cr6.eq) goto loc_8233FC98;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8233e7e0
	ctx.lr = 0x8233FC88;
	sub_8233E7E0(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x8233fcb4
	goto loc_8233FCB4;
loc_8233FC98:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8233e820
	ctx.lr = 0x8233FCB4;
	sub_8233E820(ctx, base);
loc_8233FCB4:
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

DEFINE_REX_FUNC(sub_82342F70) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342f80
	if (!ctx.cr6.eq) goto loc_82342F80;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82342F80:
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343510) {
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
	ctx.lr = 0x82343518;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82343540
	if (ctx.cr6.eq) goto loc_82343540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82343540:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x82343548;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823435c0
	if (!ctx.cr6.eq) goto loc_823435C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823435c0
	if (!ctx.cr6.eq) goto loc_823435C0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823435a0
	if (ctx.cr6.eq) goto loc_823435A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823435A0;
	sub_826A1E70(ctx, base);
loc_823435A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823435bc
	if (ctx.cr6.eq) goto loc_823435BC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x823435B8;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823435BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823435C0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8234B9A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8234B9B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234b9d4
	if (!ctx.cr6.eq) goto loc_8234B9D4;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8234B9D4:
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ba44
	if (!ctx.cr6.gt) goto loc_8234BA44;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
loc_8234B9E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234B9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234ba54
	if (!ctx.cr6.eq) goto loc_8234BA54;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r6.u32);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r4,r5,64
	ctx.r4.u64 = ctx.r5.u64 | 64;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8234b9e8
	if (ctx.cr6.lt) goto loc_8234B9E8;
loc_8234BA44:
	// lwz r11,84(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r10,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r10.u32);
loc_8234BA54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82350E10) {
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
	// bl 0x8235ace0
	ctx.lr = 0x82350E24;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82350e38
	if (!ctx.cr6.eq) goto loc_82350E38;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235c298
	ctx.lr = 0x82350E38;
	sub_8235C298(ctx, base);
loc_82350E38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823516A0) {
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
	ctx.lr = 0x823516A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351788
	if (!ctx.cr6.eq) goto loc_82351788;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235171c
	if (ctx.cr6.eq) goto loc_8235171C;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823516D8:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x823516ec
	if (!ctx.cr6.eq) goto loc_823516EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823516EC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235171c
	if (ctx.cr6.eq) goto loc_8235171C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82351704
	if (!ctx.cr6.eq) goto loc_82351704;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82351704:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823516a0
	ctx.lr = 0x8235170C;
	sub_823516A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235178c
	if (!ctx.cr6.eq) goto loc_8235178C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x823516d8
	goto loc_823516D8;
loc_8235171C:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addi r29,r28,44
	r29.s64 = r28.s64 + 44;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82351788
	if (ctx.cr6.eq) goto loc_82351788;
loc_8235172C:
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d650
	ctx.lr = 0x82351740;
	sub_8234D650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235177c
	if (!ctx.cr6.eq) goto loc_8235177C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82348e28
	ctx.lr = 0x82351758;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235178c
	if (!ctx.cr6.eq) goto loc_8235178C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234e760
	ctx.lr = 0x82351774;
	sub_8234E760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235178c
	if (!ctx.cr6.eq) goto loc_8235178C;
loc_8235177C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8235172c
	if (!ctx.cr6.eq) goto loc_8235172C;
loc_82351788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235178C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82355C10) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355c40
	if (ctx.cr6.eq) goto loc_82355C40;
	// bl 0x82358490
	ctx.lr = 0x82355C3C;
	sub_82358490(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_82355C40:
	// lwz r4,364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82355c70
	if (ctx.cr6.eq) goto loc_82355C70;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9928
	ctx.r5.s64 = ctx.r10.s64 + 9928;
	// li r6,126
	ctx.r6.s64 = 126;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82355C6C;
	sub_82330D00(ctx, base);
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
loc_82355C70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359cb8
	ctx.lr = 0x82355C78;
	sub_82359CB8(ctx, base);
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

DEFINE_REX_FUNC(sub_823587D8) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82358834
	if (ctx.cr6.eq) goto loc_82358834;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82358834
	if (ctx.cr6.lt) goto loc_82358834;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82358834
	if (!ctx.cr6.lt) goto loc_82358834;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r3,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r6,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82358834:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235BC60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235be58
	if (ctx.cr6.eq) goto loc_8235BE58;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235be58
	if (ctx.cr6.eq) goto loc_8235BE58;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f30,8772(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8772);
	f30.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BCC0;
	sub_826A03B0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f10.f64)));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f6,f30
	ctx.f1.f64 = double(float(ctx.f6.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BCF0;
	sub_826A03B0(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f4,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f31,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f4.f64)));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 24);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BD20;
	sub_826A03B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f31,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f12.f64)));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f7,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f31,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f11.f64)));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f5,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f31,f10
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f10.f64)));
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f3,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f31,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f9.f64)));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BD80;
	sub_826A03B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f31,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f11.f64)));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f8,44(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f31,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f10.f64)));
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BDC0;
	sub_826A03B0(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f3,f31,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f2.f64)));
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f11,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmadds f10,f11,f31,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f1.f64)));
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f9,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f31,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, ctx.f0.f64)));
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f7,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f31,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f13.f64)));
	// lfs f30,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f30.f64 = double(temp.f32);
	// stfs f6,56(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f1,100(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8235be24
	if (!ctx.cr6.gt) goto loc_8235BE24;
	// bl 0x826a16a0
	ctx.lr = 0x8235BE18;
	sub_826A16A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// b 0x8235be28
	goto loc_8235BE28;
loc_8235BE24:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_8235BE28:
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f1,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8235be4c
	if (!ctx.cr6.gt) goto loc_8235BE4C;
	// bl 0x826a16a0
	ctx.lr = 0x8235BE44;
	sub_826A16A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_8235BE4C:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8235BE58:
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

DEFINE_REX_FUNC(sub_82371078) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82371080;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2c84
	ctx.lr = 0x82371088;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823716e0
	if (ctx.cr6.eq) goto loc_823716E0;
	// lfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x823710bc
	if (ctx.cr6.eq) goto loc_823710BC;
	// stfs f1,312(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// bl 0x82370fa8
	ctx.lr = 0x823710BC;
	sub_82370FA8(ctx, base);
loc_823710BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823716d0
	if (ctx.cr6.eq) goto loc_823716D0;
	// li r25,1
	r25.s64 = 1;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r10,r25,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823716d0
	if (ctx.cr6.eq) goto loc_823716D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82371140
	if (!ctx.cr6.eq) goto loc_82371140;
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82371110;
	sub_823EF5F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823716e0
	if (!ctx.cr6.gt) goto loc_823716E0;
	// addi r11,r31,312
	ctx.r11.s64 = r31.s64 + 312;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82371120:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f31,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82371120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371120;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x8237113C;
	// b 0x826a1cfc
	return;
loc_82371140:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823711c4
	if (!ctx.cr6.eq) goto loc_823711C4;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237158c
	if (ctx.cr6.eq) goto loc_8237158C;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f12,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x823711a8
	if (ctx.cr6.eq) goto loc_823711A8;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10040);
	ctx.f0.f64 = double(temp.f32);
loc_82371178:
	// lfs f10,452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f10.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f7.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f13,f8,f7,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f12,f10,f12,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371178;
	// stfs f0,10040(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10040, temp.u32);
loc_823711A8:
	// stfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f12,324(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x823711C0;
	// b 0x826a1cfc
	return;
loc_823711C4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82371274
	if (!ctx.cr6.eq) goto loc_82371274;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8237158c
	if (!ctx.cr6.eq) goto loc_8237158C;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f11,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82371250
	if (ctx.cr6.eq) goto loc_82371250;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10040);
	ctx.f0.f64 = double(temp.f32);
loc_82371204:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfsu f9,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f4,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f13,f7,f4,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f6.f64)));
	// fmadds f12,f5,f4,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f11,f8,f11,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f2.f64)));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f10,f8,f10,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfsu f10,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371204;
	// stfs f0,10040(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10040, temp.u32);
loc_82371250:
	// stfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f11,324(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f12,328(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f10,332(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x82371270;
	// b 0x826a1cfc
	return;
loc_82371274:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// bne cr6,0x823713d4
	if (!ctx.cr6.eq) goto loc_823713D4;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x8237158c
	if (!ctx.cr6.eq) goto loc_8237158C;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f7,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x82371390
	if (ctx.cr6.eq) goto loc_82371390;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10040);
	ctx.f0.f64 = double(temp.f32);
loc_823712D4:
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f28,f1,f0
	f28.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	f27.f64 = double(temp.f32);
	// fadds f26,f1,f0
	f26.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f31,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// lfs f29,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f29.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfsu f1,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f29,f29,f0
	f29.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfs f25,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	f25.f64 = double(temp.f32);
	// fmuls f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 * ctx.f11.f64));
	// fmuls f10,f27,f10
	ctx.f10.f64 = double(float(f27.f64 * ctx.f10.f64));
	// fmuls f9,f27,f9
	ctx.f9.f64 = double(float(f27.f64 * ctx.f9.f64));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 * ctx.f8.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f13,f30,f25,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, f25.f64, ctx.f13.f64)));
	// fmadds f12,f31,f25,f12
	ctx.f12.f64 = double(float(std::fma(f31.f64, f25.f64, ctx.f12.f64)));
	// fmadds f11,f28,f25,f11
	ctx.f11.f64 = double(float(std::fma(f28.f64, f25.f64, ctx.f11.f64)));
	// fmadds f10,f29,f25,f10
	ctx.f10.f64 = double(float(std::fma(f29.f64, f25.f64, ctx.f10.f64)));
	// fmadds f9,f26,f25,f9
	ctx.f9.f64 = double(float(std::fma(f26.f64, f25.f64, ctx.f9.f64)));
	// fmadds f8,f1,f25,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, f25.f64, ctx.f8.f64)));
	// fmuls f1,f25,f13
	ctx.f1.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f31,f25,f12
	f31.f64 = double(float(f25.f64 * ctx.f12.f64));
	// fmuls f30,f25,f11
	f30.f64 = double(float(f25.f64 * ctx.f11.f64));
	// fmuls f29,f25,f10
	f29.f64 = double(float(f25.f64 * ctx.f10.f64));
	// fmuls f28,f25,f9
	f28.f64 = double(float(f25.f64 * ctx.f9.f64));
	// fmuls f26,f25,f8
	f26.f64 = double(float(f25.f64 * ctx.f8.f64));
	// fmadds f7,f27,f7,f1
	ctx.f7.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f1.f64)));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f6,f27,f6,f31
	ctx.f6.f64 = double(float(std::fma(f27.f64, ctx.f6.f64, f31.f64)));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f5,f27,f5,f30
	ctx.f5.f64 = double(float(std::fma(f27.f64, ctx.f5.f64, f30.f64)));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f4,f27,f4,f29
	ctx.f4.f64 = double(float(std::fma(f27.f64, ctx.f4.f64, f29.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f3,f27,f3,f28
	ctx.f3.f64 = double(float(std::fma(f27.f64, ctx.f3.f64, f28.f64)));
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f2,f27,f2,f26
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f2.f64, f26.f64)));
	// stfsu f2,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823712d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823712D4;
	// stfs f0,10040(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10040, temp.u32);
loc_82371390:
	// stfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f7,324(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f12,328(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f6,332(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f11,336(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f5,340(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f10,344(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f4,348(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f9,352(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f3,356(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f8,360(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f2,364(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x823713D0;
	// b 0x826a1cfc
	return;
loc_823713D4:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bne cr6,0x8237158c
	if (!ctx.cr6.eq) goto loc_8237158C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8237158c
	if (!ctx.cr6.eq) goto loc_8237158C;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f5,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	f31.f64 = double(temp.f32);
	// lfs f7,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f7.f64 = double(temp.f32);
	// lfs f30,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	f30.f64 = double(temp.f32);
	// lfs f6,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,380(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 380);
	f29.f64 = double(temp.f32);
	// beq cr6,0x82371538
	if (ctx.cr6.eq) goto loc_82371538;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10040);
	ctx.f0.f64 = double(temp.f32);
loc_82371444:
	// lfs f28,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f28.f64 = double(temp.f32);
	// fadds f26,f28,f0
	f26.f64 = double(float(f28.f64 + ctx.f0.f64));
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// fadds f24,f28,f0
	f24.f64 = double(float(f28.f64 + ctx.f0.f64));
	// lfs f28,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f28.f64 = double(temp.f32);
	// fadds f22,f28,f0
	f22.f64 = double(float(f28.f64 + ctx.f0.f64));
	// lfs f28,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f28.f64 = double(temp.f32);
	// lfs f21,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	f21.f64 = double(temp.f32);
	// fadds f20,f28,f0
	f20.f64 = double(float(f28.f64 + ctx.f0.f64));
	// lfs f27,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f13,f21,f13
	ctx.f13.f64 = double(float(f21.f64 * ctx.f13.f64));
	// lfs f25,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f25.f64 = double(temp.f32);
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// lfs f23,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f23.f64 = double(temp.f32);
	// fadds f25,f25,f0
	f25.f64 = double(float(f25.f64 + ctx.f0.f64));
	// lfsu f28,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f28.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f23,f23,f0
	f23.f64 = double(float(f23.f64 + ctx.f0.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(f21.f64 * ctx.f12.f64));
	// lfs f19,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	f19.f64 = double(temp.f32);
	// fmuls f11,f21,f11
	ctx.f11.f64 = double(float(f21.f64 * ctx.f11.f64));
	// fmuls f10,f21,f10
	ctx.f10.f64 = double(float(f21.f64 * ctx.f10.f64));
	// fmuls f9,f21,f9
	ctx.f9.f64 = double(float(f21.f64 * ctx.f9.f64));
	// fmuls f8,f21,f8
	ctx.f8.f64 = double(float(f21.f64 * ctx.f8.f64));
	// fmuls f7,f21,f7
	ctx.f7.f64 = double(float(f21.f64 * ctx.f7.f64));
	// fadds f28,f28,f0
	f28.f64 = double(float(f28.f64 + ctx.f0.f64));
	// fmuls f6,f21,f6
	ctx.f6.f64 = double(float(f21.f64 * ctx.f6.f64));
	// fmadds f13,f26,f19,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, f19.f64, ctx.f13.f64)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f12,f27,f19,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, f19.f64, ctx.f12.f64)));
	// fmadds f11,f24,f19,f11
	ctx.f11.f64 = double(float(std::fma(f24.f64, f19.f64, ctx.f11.f64)));
	// fmadds f10,f25,f19,f10
	ctx.f10.f64 = double(float(std::fma(f25.f64, f19.f64, ctx.f10.f64)));
	// fmadds f9,f22,f19,f9
	ctx.f9.f64 = double(float(std::fma(f22.f64, f19.f64, ctx.f9.f64)));
	// fmadds f8,f23,f19,f8
	ctx.f8.f64 = double(float(std::fma(f23.f64, f19.f64, ctx.f8.f64)));
	// fmadds f7,f20,f19,f7
	ctx.f7.f64 = double(float(std::fma(f20.f64, f19.f64, ctx.f7.f64)));
	// fmadds f6,f28,f19,f6
	ctx.f6.f64 = double(float(std::fma(f28.f64, f19.f64, ctx.f6.f64)));
	// fmuls f28,f19,f13
	f28.f64 = double(float(f19.f64 * ctx.f13.f64));
	// fmuls f27,f19,f12
	f27.f64 = double(float(f19.f64 * ctx.f12.f64));
	// fmuls f26,f19,f11
	f26.f64 = double(float(f19.f64 * ctx.f11.f64));
	// fmuls f25,f19,f10
	f25.f64 = double(float(f19.f64 * ctx.f10.f64));
	// fmuls f24,f19,f9
	f24.f64 = double(float(f19.f64 * ctx.f9.f64));
	// fmuls f23,f19,f8
	f23.f64 = double(float(f19.f64 * ctx.f8.f64));
	// fmuls f22,f19,f7
	f22.f64 = double(float(f19.f64 * ctx.f7.f64));
	// fmuls f20,f19,f6
	f20.f64 = double(float(f19.f64 * ctx.f6.f64));
	// fmadds f5,f21,f5,f28
	ctx.f5.f64 = double(float(std::fma(f21.f64, ctx.f5.f64, f28.f64)));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f4,f21,f4,f27
	ctx.f4.f64 = double(float(std::fma(f21.f64, ctx.f4.f64, f27.f64)));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f3,f21,f3,f26
	ctx.f3.f64 = double(float(std::fma(f21.f64, ctx.f3.f64, f26.f64)));
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f2,f21,f2,f25
	ctx.f2.f64 = double(float(std::fma(f21.f64, ctx.f2.f64, f25.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f1,f21,f1,f24
	ctx.f1.f64 = double(float(std::fma(f21.f64, ctx.f1.f64, f24.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f31,f21,f31,f23
	f31.f64 = double(float(std::fma(f21.f64, f31.f64, f23.f64)));
	// stfs f31,24(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fmadds f30,f21,f30,f22
	f30.f64 = double(float(std::fma(f21.f64, f30.f64, f22.f64)));
	// stfs f30,28(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fmadds f29,f21,f29,f20
	f29.f64 = double(float(std::fma(f21.f64, f29.f64, f20.f64)));
	// stfsu f29,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371444;
	// stfs f0,10040(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10040, temp.u32);
loc_82371538:
	// stfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f5,324(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f12,328(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f4,332(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f11,336(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f3,340(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f10,344(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f2,348(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f9,352(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f1,356(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f8,360(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f7,368(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f30,372(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f6,376(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// stfs f29,380(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x82371588;
	// b 0x826a1cfc
	return;
loc_8237158C:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823716e0
	if (!ctx.cr6.gt) goto loc_823716E0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - r29.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r26,r31,324
	r26.s64 = r31.s64 + 324;
	// lfs f12,10040(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10040);
	ctx.f12.f64 = double(temp.f32);
loc_823715AC:
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r9,r25,r27
	ctx.r9.u64 = r27.u8 & 0x20 ? 0 : (r25.u32 << (r27.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82371650
	if (!ctx.cr6.eq) goto loc_82371650;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r28,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r30,r9
	ctx.r6.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82371624
	if (ctx.cr6.eq) goto loc_82371624;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823715F8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r9
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lfsx f11,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r10,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f10,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stfsx f10,r10,r7
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x823715f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823715F8;
loc_82371624:
	// clrlwi r8,r28,30
	ctx.r8.u64 = r28.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823716a4
	if (ctx.cr6.eq) goto loc_823716A4;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_82371640:
	// lfsux f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsux f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r10.u32 + ctx.r9.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371640;
	// b 0x823716a4
	goto loc_823716A4;
loc_82371650:
	// lfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8237169c
	if (ctx.cr6.eq) goto loc_8237169C;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_8237166C:
	// lfs f11,452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f7,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f7.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f0,f8,f7,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f13,f11,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x8237166c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237166C;
loc_8237169C:
	// stfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + -4, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_823716A4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// blt cr6,0x823715ac
	if (ctx.cr6.lt) goto loc_823715AC;
	// stfs f12,10040(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 10040, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x823716CC;
	// b 0x826a1cfc
	return;
loc_823716D0:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823716E0;
	sub_823EF2F8(ctx, base);
loc_823716E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x823716F0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823C2DC0) {
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
	ctx.lr = 0x823C2DC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C2DE8;
	sub_823C1638(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// beq cr6,0x823c2e00
	if (ctx.cr6.eq) goto loc_823C2E00;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823C2E00:
	// bl 0x823c16c0
	ctx.lr = 0x823C2E04;
	sub_823C16C0(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c2e38
	if (!ctx.cr6.gt) goto loc_823C2E38;
	// addi r29,r28,-96
	r29.s64 = r28.s64 + -96;
	// mr r30,r24
	r30.u64 = r24.u64;
	// li r27,-1
	r27.s64 = -1;
loc_823C2E1C:
	// stw r27,104(r29)
	REX_STORE_U32(r29.u32 + 104, r27.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C2E2C;
	sub_823C16C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r3,208(r29)
	ea = 208 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// bne 0x823c2e1c
	if (!ctx.cr0.eq) goto loc_823C2E1C;
loc_823C2E38:
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r19,r28,12
	r19.s64 = r28.s64 + 12;
	// mr r17,r26
	r17.u64 = r26.u64;
	// li r20,18
	r20.s64 = 18;
	// li r21,288
	r21.s64 = 288;
	// addi r25,r11,17720
	r25.s64 = ctx.r11.s64 + 17720;
	// addi r22,r10,-24656
	r22.s64 = ctx.r10.s64 + -24656;
loc_823C2E5C:
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c3198
	if (!ctx.cr6.gt) goto loc_823C3198;
	// addi r30,r19,-128
	r30.s64 = r19.s64 + -128;
loc_823C2E6C:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C2E78;
	sub_823C1638(ctx, base);
	// stw r3,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C2E88;
	sub_823C16C0(ctx, base);
	// stw r3,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r3,288
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 288, ctx.xer);
	// bgt cr6,0x823c31b4
	if (ctx.cr6.gt) goto loc_823C31B4;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgt cr6,0x823c31b4
	if (ctx.cr6.gt) goto loc_823C31B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C2EAC;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,1024
	ctx.r10.s64 = r22.s64 + 1024;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,224(r30)
	REX_STORE_U32(r30.u32 + 224, ctx.r11.u32);
	// beq cr6,0x823c2ecc
	if (ctx.cr6.eq) goto loc_823C2ECC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,224(r30)
	REX_STORE_U32(r30.u32 + 224, ctx.r11.u32);
loc_823C2ECC:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C2ED8;
	sub_823C16C0(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// rlwinm r3,r6,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18604(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 18604);
	// lwz r10,18600(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 18600);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,18604(r4)
	REX_STORE_U32(ctx.r4.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r8,18600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r7.u32);
	// beq cr6,0x823c3018
	if (ctx.cr6.eq) goto loc_823C3018;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823c16c0
	ctx.lr = 0x823C2F38;
	sub_823C16C0(ctx, base);
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// rlwinm r9,r6,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1;
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18604(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 18604);
	// lwz r7,18600(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 18600);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,18604(r8)
	REX_STORE_U32(ctx.r8.u32 + 18604, ctx.r6.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,18600(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// stw r10,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r10.u32);
	// stw r9,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r9.u32);
	// bl 0x823c16c0
	ctx.lr = 0x823C2F94;
	sub_823C16C0(ctx, base);
	// stw r3,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C2FA4;
	sub_823C16C0(ctx, base);
	// stw r3,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// stw r26,156(r30)
	REX_STORE_U32(r30.u32 + 156, r26.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,224(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 224);
	// bl 0x823c16c0
	ctx.lr = 0x823C2FBC;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r28,224(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,212(r30)
	REX_STORE_U32(r30.u32 + 212, ctx.r11.u32);
	// bl 0x823c16c0
	ctx.lr = 0x823C2FD8;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,224(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,216(r30)
	REX_STORE_U32(r30.u32 + 216, ctx.r11.u32);
	// bl 0x823c16c0
	ctx.lr = 0x823C2FF4;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,140(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 140);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
	// beq cr6,0x823c31b4
	if (ctx.cr6.eq) goto loc_823C31B4;
	// stw r20,192(r30)
	REX_STORE_U32(r30.u32 + 192, r20.u32);
	// stw r21,196(r30)
	REX_STORE_U32(r30.u32 + 196, r21.u32);
	// b 0x823c30a8
	goto loc_823C30A8;
loc_823C3018:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x823c16c0
	ctx.lr = 0x823C3020;
	sub_823C16C0(ctx, base);
	// stw r3,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3030;
	sub_823C16C0(ctx, base);
	// stw r3,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3040;
	sub_823C16C0(ctx, base);
	// stw r3,156(r30)
	REX_STORE_U32(r30.u32 + 156, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3050;
	sub_823C16C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3060;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// addi r9,r25,8
	ctx.r9.s64 = r25.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// stw r11,192(r30)
	REX_STORE_U32(r30.u32 + 192, ctx.r11.u32);
	// lwzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// stw r26,140(r30)
	REX_STORE_U32(r30.u32 + 140, r26.u32);
	// stw r26,144(r30)
	REX_STORE_U32(r30.u32 + 144, r26.u32);
	// stw r11,196(r30)
	REX_STORE_U32(r30.u32 + 196, ctx.r11.u32);
loc_823C30A8:
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r6,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18600(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18600);
	// lwz r11,18604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 18604);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,18604(r3)
	REX_STORE_U32(ctx.r3.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r8,18600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r7.u32);
	// stw r4,200(r30)
	REX_STORE_U32(r30.u32 + 200, ctx.r4.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r6,18604(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 18604);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lbz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// slw r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r5.u32);
	// rlwinm r8,r3,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18604(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 18604);
	// lwz r7,18600(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 18600);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,18604(r9)
	REX_STORE_U32(ctx.r9.u32 + 18604, ctx.r6.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,18600(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// stw r4,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r4.u32);
	// stw r8,204(r30)
	REX_STORE_U32(r30.u32 + 204, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r3,18604(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 18604);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r9.u32);
	// rlwinm r4,r7,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1;
	// lwz r5,264(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18604(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 18604);
	// lwz r3,18600(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 18600);
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,18604(r5)
	REX_STORE_U32(ctx.r5.u32 + 18604, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r9.u32);
	// stwu r4,208(r30)
	ea = 208 + r30.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// blt cr6,0x823c2e6c
	if (ctx.cr6.lt) goto loc_823C2E6C;
loc_823C3198:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r19,r19,104
	r19.s64 = r19.s64 + 104;
	// cmpwi cr6,r17,2
	ctx.cr6.compare<int32_t>(r17.s32, 2, ctx.xer);
	// blt cr6,0x823c2e5c
	if (ctx.cr6.lt) goto loc_823C2E5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
loc_823C31B4:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_823D9E20) {
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
	ctx.lr = 0x823D9E28;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d9e68
	if (ctx.cr6.eq) goto loc_823D9E68;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x823d9e6c
	goto loc_823D9E6C;
loc_823D9E68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D9E6C:
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 20);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823D9E94;
	sub_826A2D14(ctx, base);
	// lwz r6,0(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwux r6,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r1.u32 = ea;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823da2d0
	if (!ctx.cr6.gt) goto loc_823DA2D0;
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r18,372(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 372);
	// li r27,0
	r27.s64 = 0;
	// rlwinm r16,r11,4,0,27
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// lfs f30,11252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11252);
	f30.f64 = double(temp.f32);
	// addi r21,r7,-4
	r21.s64 = ctx.r7.s64 + -4;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// lfs f29,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f29.f64 = double(temp.f32);
loc_823D9EDC:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,52(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 52);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823db0c8
	ctx.lr = 0x823D9EEC;
	sub_823DB0C8(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x823d9ef8
	if (ctx.cr6.eq) goto loc_823D9EF8;
	// subf r24,r3,r24
	r24.u64 = r24.u64 - ctx.r3.u64;
loc_823D9EF8:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// subf r10,r3,r16
	ctx.r10.u64 = r16.u64 - ctx.r3.u64;
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x823d9f14
	if (!ctx.cr6.gt) goto loc_823D9F14;
	// li r11,3
	ctx.r11.s64 = 3;
loc_823D9F14:
	// rotlwi r10,r24,1
	ctx.r10.u64 = __builtin_rotateleft32(r24.u32, 1);
	// lwzx r6,r27,r17
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + r17.u32);
	// divw r9,r24,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(r24.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r24.s32 / ctx.r11.s32 : 0);
	// lwzx r8,r27,r30
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,127
	ctx.r10.s64 = 127;
loc_823D9F48:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823d9f6c
	if (ctx.cr6.lt) goto loc_823D9F6C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x823d9f70
	goto loc_823D9F70;
loc_823D9F6C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823D9F70:
	// bdnz 0x823d9f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9F48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823d9fa0
	if (!ctx.cr6.gt) goto loc_823D9FA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823D9FA0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r5.u32);
	// lwzx r10,r27,r30
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// subf. r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823d9fec
	if (!ctx.cr0.lt) goto loc_823D9FEC;
loc_823D9FC0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823d9fec
	if (!ctx.cr6.gt) goto loc_823D9FEC;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r5.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r27,r30
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x823d9fc0
	if (ctx.cr0.lt) goto loc_823D9FC0;
loc_823D9FEC:
	// lhz r9,2(r20)
	ctx.r9.u64 = REX_LOAD_U16(r20.u32 + 2);
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lhz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U16(r20.u32 + 0);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// subf r28,r30,r29
	r28.u64 = r29.u64 - r30.u64;
	// extsw r7,r28
	ctx.r7.s64 = r28.s32;
	// std r7,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsqrts f31,f13
	f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// beq cr6,0x823da078
	if (ctx.cr6.eq) goto loc_823DA078;
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 28);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823da078
	if (!ctx.cr6.lt) goto loc_823DA078;
	// lhz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U16(r15.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823da078
	if (!ctx.cr6.eq) goto loc_823DA078;
	// addi r15,r15,2
	r15.s64 = r15.s64 + 2;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x823da06c
	if (ctx.cr6.lt) goto loc_823DA06C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823d9548
	ctx.lr = 0x823DA05C;
	sub_823D9548(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823da074
	if (ctx.cr6.eq) goto loc_823DA074;
loc_823DA06C:
	// stfs f30,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// b 0x823da078
	goto loc_823DA078;
loc_823DA074:
	// stfs f29,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
loc_823DA078:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 28);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823da090
	if (ctx.cr6.lt) goto loc_823DA090;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823da098
	if (!ctx.cr6.eq) goto loc_823DA098;
loc_823DA090:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x823da0c8
	if (ctx.cr6.gt) goto loc_823DA0C8;
loc_823DA098:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823e9568
	ctx.lr = 0x823DA0C0;
	sub_823E9568(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x823da1bc
	goto loc_823DA1BC;
loc_823DA0C8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x823da190
	if (ctx.cr6.eq) goto loc_823DA190;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823da190
	if (!ctx.cr6.lt) goto loc_823DA190;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da1bc
	if (!ctx.cr6.lt) goto loc_823DA1BC;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823da15c
	if (ctx.cr6.lt) goto loc_823DA15C;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r25
	ctx.r10.u64 = ctx.r9.u64 + r25.u64;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823DA118:
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f4,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823da118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA118;
loc_823DA15C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da1bc
	if (!ctx.cr6.lt) goto loc_823DA1BC;
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823DA178:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823da178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA178;
	// b 0x823da1bc
	goto loc_823DA1BC;
loc_823DA190:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da1bc
	if (!ctx.cr6.lt) goto loc_823DA1BC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x823da1bc
	if (ctx.cr0.eq) goto loc_823DA1BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DA1B4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823da1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA1B4;
loc_823DA1BC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823da1e0
	if (!ctx.cr6.gt) goto loc_823DA1E0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x823e9308
	ctx.lr = 0x823DA1DC;
	sub_823E9308(ctx, base);
	// b 0x823da200
	goto loc_823DA200;
loc_823DA1E0:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da200
	if (!ctx.cr6.lt) goto loc_823DA200;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x823DA200;
	sub_826A22F8(ctx, base);
loc_823DA200:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da2b8
	if (!ctx.cr6.lt) goto loc_823DA2B8;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823da288
	if (ctx.cr6.lt) goto loc_823DA288;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r7,r23
	ctx.r10.u64 = ctx.r7.u64 + r23.u64;
	// subf r7,r23,r26
	ctx.r7.u64 = r26.u64 - r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_823DA250:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfsx f11,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f12,-4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823da250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA250;
loc_823DA288:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x823da2b8
	if (!ctx.cr6.lt) goto loc_823DA2B8;
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r23,r26
	ctx.r10.u64 = r26.u64 - r23.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823DA2A4:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823da2a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA2A4;
loc_823DA2B8:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r20,r20,2
	r20.s64 = r20.s64 + 2;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d9edc
	if (ctx.cr6.lt) goto loc_823D9EDC;
loc_823DA2D0:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
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

DEFINE_REX_FUNC(sub_823F5210) {
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
	// bl 0x823f5788
	ctx.lr = 0x823F5228;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823f4018
	ctx.lr = 0x823F5234;
	sub_823F4018(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & r31.u64;
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

DEFINE_REX_FUNC(sub_823F6FA0) {
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
	// lwz r11,1104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1104);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r9,17184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 17184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823f71d0
	ctx.lr = 0x823F6FD4;
	sub_823F71D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x823f6fe4
	if (!ctx.cr0.gt) goto loc_823F6FE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6590
	ctx.lr = 0x823F6FE4;
	sub_823F6590(ctx, base);
loc_823F6FE4:
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

DEFINE_REX_FUNC(sub_823F9770) {
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
	ctx.lr = 0x823F9778;
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823f9798
	if (ctx.cr6.eq) goto loc_823F9798;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
loc_823F9798:
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// blt cr6,0x823f9938
	if (ctx.cr6.lt) goto loc_823F9938;
	// lbz r19,2161(r25)
	r19.u64 = REX_LOAD_U8(r25.u32 + 2161);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(r19.u32, 4, ctx.xer);
	// bge cr6,0x823f9938
	if (!ctx.cr6.lt) goto loc_823F9938;
	// rlwinm. r8,r5,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823f97f4
	if (ctx.cr0.eq) goto loc_823F97F4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,44(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r6,r9,-2
	ctx.r6.s64 = ctx.r9.s64 + -2;
loc_823F97CC:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f97d8
	if (!ctx.cr0.eq) goto loc_823F97D8;
	// sthu r10,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r6.u32 = ea;
loc_823F97D8:
	// lbzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbz r9,2162(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2162);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x823f97cc
	if (ctx.cr6.lt) goto loc_823F97CC;
loc_823F97F4:
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// addi r23,r5,-4096
	r23.s64 = ctx.r5.s64 + -4096;
	// rlwinm r22,r11,0,0,25
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r24,r22,2048
	r24.s64 = r22.s64 + 2048;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x823f9938
	if (!ctx.cr6.lt) goto loc_823F9938;
	// addi r31,r24,1024
	r31.s64 = r24.s64 + 1024;
loc_823F9810:
	// rlwinm r11,r31,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r24,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 27) & 0x7FFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x823f9478
	ctx.lr = 0x823F983C;
	sub_823F9478(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x823f9928
	if (!ctx.cr6.gt) goto loc_823F9928;
	// addi r5,r31,1024
	ctx.r5.s64 = r31.s64 + 1024;
	// addi r4,r31,-2048
	ctx.r4.s64 = r31.s64 + -2048;
	// rlwinm r11,r5,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r10,r4,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x823f9478
	ctx.lr = 0x823F9870;
	sub_823F9478(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x823f9928
	if (!ctx.cr6.gt) goto loc_823F9928;
	// addi r5,r31,2048
	ctx.r5.s64 = r31.s64 + 2048;
	// addi r4,r31,-3072
	ctx.r4.s64 = r31.s64 + -3072;
	// rlwinm r11,r5,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r10,r4,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x823f9478
	ctx.lr = 0x823F98A4;
	sub_823F9478(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x823f9928
	if (!ctx.cr6.gt) goto loc_823F9928;
	// addi r30,r31,-512
	r30.s64 = r31.s64 + -512;
	// addi r26,r31,1536
	r26.s64 = r31.s64 + 1536;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bge cr6,0x823f9928
	if (!ctx.cr6.lt) goto loc_823F9928;
	// addi r29,r31,-1536
	r29.s64 = r31.s64 + -1536;
loc_823F98C8:
	// rlwinm r11,r30,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r29,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x823f9478
	ctx.lr = 0x823F98F4;
	sub_823F9478(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// ble cr6,0x823f9904
	if (!ctx.cr6.gt) goto loc_823F9904;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_823F9904:
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x823f98c8
	if (ctx.cr6.lt) goto loc_823F98C8;
	// cmplwi cr6,r28,1700
	ctx.cr6.compare<uint32_t>(r28.u32, 1700, ctx.xer);
	// blt cr6,0x823f9928
	if (ctx.cr6.lt) goto loc_823F9928;
	// subf r11,r22,r27
	ctx.r11.u64 = r27.u64 - r22.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x823f9944
	if (!ctx.cr6.lt) goto loc_823F9944;
loc_823F9928:
	// addi r24,r24,1024
	r24.s64 = r24.s64 + 1024;
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// blt cr6,0x823f9810
	if (ctx.cr6.lt) goto loc_823F9810;
loc_823F9938:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F993C:
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x826a1ce4
	return;
loc_823F9944:
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stb r11,2161(r25)
	REX_STORE_U8(r25.u32 + 2161, ctx.r11.u8);
	// stw r27,0(r20)
	REX_STORE_U32(r20.u32 + 0, r27.u32);
	// beq cr6,0x823f9968
	if (ctx.cr6.eq) goto loc_823F9968;
	// rlwinm r11,r27,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
loc_823F9968:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f993c
	goto loc_823F993C;
}

DEFINE_REX_FUNC(sub_82407498) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x824074A0;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mr r18,r19
	r18.u64 = r19.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82407ba4
	if (!ctx.cr6.eq) goto loc_82407BA4;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82407ba4
	if (!ctx.cr6.eq) goto loc_82407BA4;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// rlwinm r5,r11,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// rlwinm r31,r10,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// bl 0x82406930
	ctx.lr = 0x82407508;
	sub_82406930(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x82407b50
	if (ctx.cr0.eq) goto loc_82407B50;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82406930
	ctx.lr = 0x82407528;
	sub_82406930(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x82407b50
	if (ctx.cr0.eq) goto loc_82407B50;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// add r21,r11,r23
	r21.u64 = ctx.r11.u64 + r23.u64;
	// add r24,r10,r22
	r24.u64 = ctx.r10.u64 + r22.u64;
	// lwz r31,108(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x82407564
	if (!ctx.cr6.gt) goto loc_82407564;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82407564:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82407574
	if (ctx.cr6.gt) goto loc_82407574;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82407574:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x8240757C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824075b8
	if (ctx.cr0.eq) goto loc_824075B8;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x824075b0
	if (ctx.cr0.lt) goto loc_824075B0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824075A0:
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r19.u32);
	// stw r19,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r19.u32);
	// stwu r19,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824075a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824075A0;
loc_824075B0:
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// b 0x824075bc
	goto loc_824075BC;
loc_824075B8:
	// mr r25,r19
	r25.u64 = r19.u64;
loc_824075BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82407b44
	if (ctx.cr6.eq) goto loc_82407B44;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x824075D8;
	sub_823F02B8(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x82407b44
	if (ctx.cr0.eq) goto loc_82407B44;
	// addi r7,r22,4
	ctx.r7.s64 = r22.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// bge cr6,0x82407648
	if (!ctx.cr6.lt) goto loc_82407648;
loc_824075F0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8240763c
	if (!ctx.cr6.lt) goto loc_8240763C;
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
loc_8240761C:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x8240761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240761C;
loc_8240763C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, ctx.xer);
	// blt cr6,0x824075f0
	if (ctx.cr6.lt) goto loc_824075F0;
loc_82407648:
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// bge cr6,0x82407b3c
	if (!ctx.cr6.lt) goto loc_82407B3C;
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
loc_82407670:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bge cr6,0x824076fc
	if (!ctx.cr6.lt) goto loc_824076FC;
loc_82407688:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824076f0
	if (!ctx.cr6.eq) goto loc_824076F0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824076b8
	if (ctx.cr6.eq) goto loc_824076B8;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// stwx r11,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r11.u32);
	// stw r19,0(r20)
	REX_STORE_U32(r20.u32 + 0, r19.u32);
	// lwz r20,4(r20)
	r20.u64 = REX_LOAD_U32(r20.u32 + 4);
	// b 0x824076d8
	goto loc_824076D8;
loc_824076B8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x824076CC;
	sub_823F02B8(ctx, base);
	// stwx r3,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82407b44
	if (ctx.cr0.eq) goto loc_82407B44;
loc_824076D8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x824076F0;
	sub_826A2E60(ctx, base);
loc_824076F0:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x82407688
	if (ctx.cr6.lt) goto loc_82407688;
loc_824076FC:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240771C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r23,4
	ctx.r11.s64 = r23.s64 + 4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bge cr6,0x82407814
	if (!ctx.cr6.lt) goto loc_82407814;
	// addi r8,r18,8
	ctx.r8.s64 = r18.s64 + 8;
loc_8240772C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82407804
	if (!ctx.cr6.lt) goto loc_82407804;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82407744:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bge cr6,0x824077f8
	if (!ctx.cr6.lt) goto loc_824077F8;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
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
loc_82407770:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
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
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
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
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
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
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x82407770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82407770;
loc_824077F8:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x82407744
	if (ctx.cr6.lt) goto loc_82407744;
loc_82407804:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, ctx.xer);
	// blt cr6,0x8240772c
	if (ctx.cr6.lt) goto loc_8240772C;
loc_82407814:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bge cr6,0x82407b2c
	if (!ctx.cr6.lt) goto loc_82407B2C;
loc_82407820:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne 0x82407b20
	if (!ctx.cr0.eq) goto loc_82407B20;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82407a1c
	if (ctx.cr6.eq) goto loc_82407A1C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8240793c
	if (ctx.cr6.eq) goto loc_8240793C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82407af8
	if (!ctx.cr6.eq) goto loc_82407AF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82407af8
	if (!ctx.cr6.gt) goto loc_82407AF8;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82407874:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8240788c
	if (!ctx.cr6.lt) goto loc_8240788C;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82407898
	goto loc_82407898;
loc_8240788C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407898
	if (ctx.cr6.lt) goto loc_82407898;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407898:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824078b8
	if (!ctx.cr6.lt) goto loc_824078B8;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824078c4
	goto loc_824078C4;
loc_824078B8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824078c4
	if (ctx.cr6.lt) goto loc_824078C4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824078C4:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824078e4
	if (!ctx.cr6.lt) goto loc_824078E4;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824078f0
	goto loc_824078F0;
loc_824078E4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824078f0
	if (ctx.cr6.lt) goto loc_824078F0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824078F0:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82407910
	if (!ctx.cr6.lt) goto loc_82407910;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x8240791c
	goto loc_8240791C;
loc_82407910:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8240791c
	if (ctx.cr6.lt) goto loc_8240791C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8240791C:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82407874
	if (ctx.cr6.lt) goto loc_82407874;
	// b 0x82407af8
	goto loc_82407AF8;
loc_8240793C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82407af8
	if (!ctx.cr6.gt) goto loc_82407AF8;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82407954:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8240796c
	if (!ctx.cr6.lt) goto loc_8240796C;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82407978
	goto loc_82407978;
loc_8240796C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407978
	if (ctx.cr6.lt) goto loc_82407978;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407978:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82407998
	if (!ctx.cr6.lt) goto loc_82407998;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824079a4
	goto loc_824079A4;
loc_82407998:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824079a4
	if (ctx.cr6.lt) goto loc_824079A4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824079A4:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824079c4
	if (!ctx.cr6.lt) goto loc_824079C4;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824079d0
	goto loc_824079D0;
loc_824079C4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824079d0
	if (ctx.cr6.lt) goto loc_824079D0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824079D0:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x824079f0
	if (!ctx.cr6.lt) goto loc_824079F0;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x824079fc
	goto loc_824079FC;
loc_824079F0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824079fc
	if (ctx.cr6.lt) goto loc_824079FC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824079FC:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82407954
	if (ctx.cr6.lt) goto loc_82407954;
	// b 0x82407af8
	goto loc_82407AF8;
loc_82407A1C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82407af8
	if (!ctx.cr6.gt) goto loc_82407AF8;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82407A34:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407a4c
	if (!ctx.cr6.lt) goto loc_82407A4C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82407a58
	goto loc_82407A58;
loc_82407A4C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407a58
	if (ctx.cr6.lt) goto loc_82407A58;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407A58:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407a78
	if (!ctx.cr6.lt) goto loc_82407A78;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82407a84
	goto loc_82407A84;
loc_82407A78:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407a84
	if (ctx.cr6.lt) goto loc_82407A84;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407A84:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407aa4
	if (!ctx.cr6.lt) goto loc_82407AA4;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82407ab0
	goto loc_82407AB0;
loc_82407AA4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407ab0
	if (ctx.cr6.lt) goto loc_82407AB0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407AB0:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407ad0
	if (!ctx.cr6.lt) goto loc_82407AD0;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82407adc
	goto loc_82407ADC;
loc_82407AD0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82407adc
	if (ctx.cr6.lt) goto loc_82407ADC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82407ADC:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82407a34
	if (ctx.cr6.lt) goto loc_82407A34;
loc_82407AF8:
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82407B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// mr r20,r31
	r20.u64 = r31.u64;
loc_82407B20:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x82407820
	if (ctx.cr6.lt) goto loc_82407820;
loc_82407B2C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x82407670
	if (ctx.cr6.lt) goto loc_82407670;
loc_82407B3C:
	// mr r31,r19
	r31.u64 = r19.u64;
	// b 0x82407b58
	goto loc_82407B58;
loc_82407B44:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82407b58
	goto loc_82407B58;
loc_82407B50:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82407B58:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82407b6c
	if (ctx.cr6.eq) goto loc_82407B6C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82406c28
	ctx.lr = 0x82407B6C;
	sub_82406C28(ctx, base);
loc_82407B6C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823f0350
	ctx.lr = 0x82407B78;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823f0350
	ctx.lr = 0x82407B84;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823f0350
	ctx.lr = 0x82407B90;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f0350
	ctx.lr = 0x82407B9C;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82407bac
	goto loc_82407BAC;
loc_82407BA4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82407BAC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82442258) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1360(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244226c
	if (ctx.cr6.eq) goto loc_8244226C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8244226C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-15148
	ctx.r4.s64 = ctx.r11.s64 + -15148;
	// b 0x8243c410
	sub_8243C410(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824438E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824438E8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r10,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r5,r9,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r8,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r29,r6,8,16,23
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// or r9,r30,r8
	ctx.r9.u64 = r30.u64 | ctx.r8.u64;
	// or r11,r29,r6
	ctx.r11.u64 = r29.u64 | ctx.r6.u64;
	// sth r10,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r9,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// bl 0x82443510
	ctx.lr = 0x82443954;
	sub_82443510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82443b04
	if (ctx.cr0.lt) goto loc_82443B04;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,20328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ble cr6,0x82443a14
	if (!ctx.cr6.gt) goto loc_82443A14;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,20248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20248);
	ctx.f0.f64 = double(temp.f32);
loc_824439C4:
	// subfic r9,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r9.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824439c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824439C4;
	// b 0x82443a88
	goto loc_82443A88;
loc_82443A14:
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,14180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14180);
	ctx.f0.f64 = double(temp.f32);
loc_82443A24:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82443a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443A24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82443A88:
	// lbz r8,99(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_82443AAC:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82443aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443AAC;
	// lbz r8,102(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,103(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// addi r9,r31,124
	ctx.r9.s64 = r31.s64 + 124;
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_82443AE8:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82443ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443AE8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82443B04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82453EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82453EB8;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,200(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// li r7,1279
	ctx.r7.s64 = 1279;
	// lwz r6,112(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r4,r10,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r4,r4,0,4,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// rlwimi r6,r7,18,6,13
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FC0000) | (ctx.r6.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r5,268(r8)
	REX_STORE_U32(ctx.r8.u32 + 268, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,64
	r31.s64 = 64;
	// stw r3,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r3.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r9,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// li r30,24
	r30.s64 = 24;
	// stw r10,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// li r29,4
	r29.s64 = 4;
	// stw r31,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, r31.u32);
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// stw r9,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r9.u32);
	// rlwimi r6,r7,18,2,4
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x38000000) | (ctx.r6.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r5,104(r8)
	REX_STORE_U32(ctx.r8.u32 + 104, ctx.r5.u32);
	// stw r10,100(r8)
	REX_STORE_U32(ctx.r8.u32 + 100, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, r30.u32);
	// stw r29,92(r8)
	REX_STORE_U32(ctx.r8.u32 + 92, r29.u32);
	// stw r4,108(r8)
	REX_STORE_U32(ctx.r8.u32 + 108, ctx.r4.u32);
	// stw r6,112(r8)
	REX_STORE_U32(ctx.r8.u32 + 112, ctx.r6.u32);
	// stw r11,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, ctx.r11.u32);
	// stw r9,468(r8)
	REX_STORE_U32(ctx.r8.u32 + 468, ctx.r9.u32);
	// stw r10,344(r8)
	REX_STORE_U32(ctx.r8.u32 + 344, ctx.r10.u32);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82456880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82456888;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1812);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r11,14180
	r30.s64 = ctx.r11.s64 + 14180;
	// stw r10,1812(r3)
	REX_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,564(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824568BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r10,13164
	ctx.r4.s64 = ctx.r10.s64 + 13164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824568E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x82456900;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x824555b8
	ctx.lr = 0x82456918;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82456944
	if (ctx.cr6.eq) goto loc_82456944;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,552(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245693C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
loc_82456944:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824569a0
	if (ctx.cr0.lt) goto loc_824569A0;
	// lwz r11,1808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r11.u32);
	// beq cr6,0x8245699c
	if (ctx.cr6.eq) goto loc_8245699C;
	// bl 0x82471f30
	ctx.lr = 0x82456998;
	sub_82471F30(ctx, base);
	// b 0x824569a0
	goto loc_824569A0;
loc_8245699C:
	// bl 0x82471ec8
	ctx.lr = 0x824569A0;
	sub_82471EC8(ctx, base);
loc_824569A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8245E940) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,18664
	ctx.r5.s64 = ctx.r11.s64 + 18664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E96C;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474710
	ctx.lr = 0x8245E974;
	sub_82474710(ctx, base);
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

DEFINE_REX_FUNC(sub_82460528) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x82460574
	if (ctx.cr0.eq) goto loc_82460574;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246054C:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bdnz 0x8246054c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246054C;
loc_82460574:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82466C50) {
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
	ctx.lr = 0x82466C58;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r6)
	r22.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// stw r6,2396(r1)
	REX_STORE_U32(ctx.r1.u32 + 2396, ctx.r6.u32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824678ec
	if (!ctx.cr6.lt) goto loc_824678EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r21,0
	r21.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82466CA0:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// lwz r9,2444(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// lwzx r26,r8,r11
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// rlwinm r28,r11,0,0,11
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r23,r11,12
	r23.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82467818
	if (ctx.cr6.eq) goto loc_82467818;
	// lwz r31,16(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r8,r11
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x824674bc
	if (!ctx.cr6.eq) goto loc_824674BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82466d00
	if (ctx.cr6.eq) goto loc_82466D00;
	// lis r11,4384
	ctx.r11.s64 = 287309824;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82467808
	if (!ctx.cr6.eq) goto loc_82467808;
loc_82466D00:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82466d20
	if (ctx.cr6.eq) goto loc_82466D20;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// subf r11,r11,r18
	ctx.r11.u64 = r18.u64 - ctx.r11.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
loc_82466D20:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82466558
	ctx.lr = 0x82466D28;
	sub_82466558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82466f50
	if (ctx.cr0.eq) goto loc_82466F50;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// bne cr6,0x8246783c
	if (!ctx.cr6.eq) goto loc_8246783C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82466d68
	if (ctx.cr6.eq) goto loc_82466D68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824665e8
	ctx.lr = 0x82466D50;
	sub_824665E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8246784c
	if (ctx.cr0.eq) goto loc_8246784C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x82466D60;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_82466D68:
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// addi r31,r22,1
	r31.s64 = r22.s64 + 1;
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82466c50
	ctx.lr = 0x82466DB0;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82466de8
	if (ctx.cr6.eq) goto loc_82466DE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824665e8
	ctx.lr = 0x82466DD0;
	sub_824665E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8246784c
	if (ctx.cr0.eq) goto loc_8246784C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x82466DE0;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_82466DE8:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// addi r8,r1,1168
	ctx.r8.s64 = ctx.r1.s64 + 1168;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82466c50
	ctx.lr = 0x82466E24;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82466f40
	if (ctx.cr6.eq) goto loc_82466F40;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82467858
	if (!ctx.cr6.eq) goto loc_82467858;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82466e88
	if (ctx.cr6.eq) goto loc_82466E88;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82466E58:
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// bdnz 0x82466e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82466E58;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82467858
	if (ctx.cr6.eq) goto loc_82467858;
loc_82466E88:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82466E90;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82466ea4
	if (ctx.cr0.eq) goto loc_82466EA4;
	// bl 0x824773d0
	ctx.lr = 0x82466E9C;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82466ea8
	goto loc_82466EA8;
loc_82466EA4:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82466EA8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,461
	ctx.r11.s64 = 461;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82466ED0;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x8246786c
	if (ctx.cr0.lt) goto loc_8246786C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x82466EE4;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82467868
	if (ctx.cr0.lt) goto loc_82467868;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82466F00;
	sub_826A1E70(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82466F14;
	sub_826A1E70(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82466F2C;
	sub_826A1E70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x82466F38;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_82466F40:
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// lwz r22,116(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x8246780c
	goto loc_8246780C;
loc_82466F50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824665a0
	ctx.lr = 0x82466F58;
	sub_824665A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824671a0
	if (ctx.cr0.eq) goto loc_824671A0;
	// addi r28,r22,1
	r28.s64 = r22.s64 + 1;
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// beq cr6,0x82467154
	if (ctx.cr6.eq) goto loc_82467154;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82466F7C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82466f90
	if (ctx.cr0.eq) goto loc_82466F90;
	// bl 0x824773d0
	ctx.lr = 0x82466F88;
	sub_824773D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82466f94
	goto loc_82466F94;
loc_82466F90:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82466F94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477e80
	ctx.lr = 0x82466FA8;
	sub_82477E80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82467000
	if (ctx.cr6.eq) goto loc_82467000;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82466ff8
	if (ctx.cr6.eq) goto loc_82466FF8;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82466ff0
	if (ctx.cr6.eq) goto loc_82466FF0;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246700c
	if (!ctx.cr6.eq) goto loc_8246700C;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// b 0x82467004
	goto loc_82467004;
loc_82466FF0:
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// b 0x82467004
	goto loc_82467004;
loc_82466FF8:
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// b 0x82467004
	goto loc_82467004;
loc_82467000:
	// lis r11,29616
	ctx.r11.s64 = 1940914176;
loc_82467004:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8246700C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82467018;
	sub_82477420(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x82467024;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r21,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r8,r1,1168
	ctx.r8.s64 = ctx.r1.s64 + 1168;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r31,12(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// bl 0x82466c50
	ctx.lr = 0x8246706C;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8246709c
	if (!ctx.cr6.eq) goto loc_8246709C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82478998
	ctx.lr = 0x8246708C;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// stw r21,0(r30)
	REX_STORE_U32(r30.u32 + 0, r21.u32);
	// b 0x8246714c
	goto loc_8246714C;
loc_8246709C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824670A4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824670b8
	if (ctx.cr0.eq) goto loc_824670B8;
	// bl 0x824773d0
	ctx.lr = 0x824670B0;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824670bc
	goto loc_824670BC;
loc_824670B8:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824670BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// lis r4,29504
	ctx.r4.s64 = 1933574144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x824670E0;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x8246786c
	if (ctx.cr0.lt) goto loc_8246786C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x824670F4;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82467868
	if (ctx.cr0.lt) goto loc_82467868;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lis r10,29744
	ctx.r10.s64 = 1949302784;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82478998
	ctx.lr = 0x82467130;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x82467144;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_8246714C:
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_82467154:
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82466c50
	ctx.lr = 0x82467190;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// lwz r22,120(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8246780c
	goto loc_8246780C;
loc_824671A0:
	// lis r30,4368
	r30.s64 = 286261248;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// beq cr6,0x82467318
	if (ctx.cr6.eq) goto loc_82467318;
	// lis r11,29712
	ctx.r11.s64 = 1947205632;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82467318
	if (ctx.cr6.eq) goto loc_82467318;
	// lis r11,4384
	ctx.r11.s64 = 287309824;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82467228
	if (!ctx.cr6.eq) goto loc_82467228;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82467808
	if (ctx.cr6.eq) goto loc_82467808;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82467808
	if (ctx.cr6.eq) goto loc_82467808;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82467210
	if (ctx.cr6.eq) goto loc_82467210;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_824671E4:
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r8,2460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2460);
	// lwz r7,2452(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2452);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// bdnz 0x824671e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824671E4;
loc_82467210:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82478998
	ctx.lr = 0x8246721C;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// b 0x82467808
	goto loc_82467808;
loc_82467228:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82467300
	if (!ctx.cr6.eq) goto loc_82467300;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82467808
	if (ctx.cr6.eq) goto loc_82467808;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82467808
	if (!ctx.cr6.eq) goto loc_82467808;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824672f4
	if (ctx.cr6.eq) goto loc_824672F4;
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r8,20(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 20);
loc_82467260:
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
	// lwz r11,204(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824672e0
	if (ctx.cr0.eq) goto loc_824672E0;
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824672f4
	if (!ctx.cr6.eq) goto loc_824672F4;
loc_824672E0:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82467260
	if (ctx.cr6.lt) goto loc_82467260;
loc_824672F4:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82467808
	if (ctx.cr6.eq) goto loc_82467808;
	// b 0x82467210
	goto loc_82467210;
loc_82467300:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82467808
	if (ctx.cr6.eq) goto loc_82467808;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82467808
	if (!ctx.cr6.eq) goto loc_82467808;
	// b 0x82467210
	goto loc_82467210;
loc_82467318:
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// addi r31,r22,1
	r31.s64 = r22.s64 + 1;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// stw r14,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r14.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82466c50
	ctx.lr = 0x8246735C;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824673b4
	if (ctx.cr6.eq) goto loc_824673B4;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne cr6,0x824673a0
	if (!ctx.cr6.eq) goto loc_824673A0;
	// clrlwi r30,r23,12
	r30.u64 = r23.u32 & 0xFFFFF;
	// oris r11,r30,29728
	ctx.r11.u64 = r30.u64 | 1948254208;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// bl 0x82478998
	ctx.lr = 0x8246738C;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// oris r11,r30,4368
	ctx.r11.u64 = r30.u64 | 286261248;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x824673ac
	goto loc_824673AC;
loc_824673A0:
	// bl 0x82478998
	ctx.lr = 0x824673A4;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_824673AC:
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_824673B4:
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82466c50
	ctx.lr = 0x824673F0;
	sub_82466C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824674b4
	if (ctx.cr6.eq) goto loc_824674B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,168(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82478758
	ctx.lr = 0x82467418;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x8246742C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82467440
	if (ctx.cr0.eq) goto loc_82467440;
	// bl 0x824773d0
	ctx.lr = 0x82467438;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82467444
	goto loc_82467444;
loc_82467440:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82467444:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// lis r11,4368
	ctx.r11.s64 = 286261248;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lis r4,29872
	ctx.r4.s64 = 1957691392;
	// beq cr6,0x82467470
	if (ctx.cr6.eq) goto loc_82467470;
	// lis r4,29856
	ctx.r4.s64 = 1956642816;
loc_82467470:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82477b60
	ctx.lr = 0x82467478;
	sub_82477B60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8246786c
	if (ctx.cr6.lt) goto loc_8246786C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x82467490;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82467868
	if (ctx.cr0.lt) goto loc_82467868;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// bl 0x824785e8
	ctx.lr = 0x824674AC;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678f0
	if (ctx.cr0.lt) goto loc_824678F0;
loc_824674B4:
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x8246780c
	goto loc_8246780C;
loc_824674BC:
	// lis r11,8304
	ctx.r11.s64 = 544210944;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824678e8
	if (!ctx.cr6.eq) goto loc_824678E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82467808
	if (!ctx.cr6.eq) goto loc_82467808;
	// lwz r6,8(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r25,r23,2,0,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r9,r25,r6
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82467880
	if (!ctx.cr6.eq) goto loc_82467880;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824678d8
	if (ctx.cr6.eq) goto loc_824678D8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824678d8
	if (ctx.cr6.eq) goto loc_824678D8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824678d8
	if (ctx.cr6.eq) goto loc_824678D8;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x82467890
	if (!ctx.cr6.eq) goto loc_82467890;
	// lwz r11,2436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467804
	if (ctx.cr6.eq) goto loc_82467804;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x82467548
	if (ctx.cr6.eq) goto loc_82467548;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_82467548:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824675d8
	if (ctx.cr6.eq) goto loc_824675D8;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82467560:
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x824675c8
	if (!ctx.cr6.eq) goto loc_824675C8;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x824675c8
	if (!ctx.cr6.eq) goto loc_824675C8;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,8(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x824675c8
	if (!ctx.cr6.eq) goto loc_824675C8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x824675c8
	if (!ctx.cr6.eq) goto loc_824675C8;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824675cc
	if (ctx.cr6.eq) goto loc_824675CC;
loc_824675C8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_824675CC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82467560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82467560;
loc_824675D8:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8246789c
	if (!ctx.cr6.lt) goto loc_8246789C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8246764c
	if (ctx.cr6.eq) goto loc_8246764C;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824677f8
	if (ctx.cr6.eq) goto loc_824677F8;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82467608:
	// lwz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 8);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r7,r8,r17
	REX_STORE_U32(ctx.r8.u32 + r17.u32, ctx.r7.u32);
	// lwz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r7,16(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 16);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r7,r8,r16
	REX_STORE_U32(ctx.r8.u32 + r16.u32, ctx.r7.u32);
	// bdnz 0x82467608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82467608;
	// b 0x824677f8
	goto loc_824677F8;
loc_8246764C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82467654;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82467668
	if (ctx.cr0.eq) goto loc_82467668;
	// bl 0x824773d0
	ctx.lr = 0x82467660;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8246766c
	goto loc_8246766C;
loc_82467668:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8246766C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8246784c
	if (ctx.cr6.eq) goto loc_8246784C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r15,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b60
	ctx.lr = 0x82467690;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// blt 0x824678b0
	if (ctx.cr0.lt) goto loc_824678B0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x824676A4;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824678ac
	if (ctx.cr0.lt) goto loc_824678AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824785e8
	ctx.lr = 0x824676B8;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678c4
	if (ctx.cr0.lt) goto loc_824678C4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x824676dc
	if (!ctx.cr6.eq) goto loc_824676DC;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x824676e4
	goto loc_824676E4;
loc_824676DC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
loc_824676E4:
	// bl 0x826a1e70
	ctx.lr = 0x824676E8;
	sub_826A1E70(ctx, base);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824677f8
	if (ctx.cr6.eq) goto loc_824677F8;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824676F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82478758
	ctx.lr = 0x82467710;
	sub_82478758(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r17
	REX_STORE_U32(ctx.r11.u32 + r17.u32, ctx.r3.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824678cc
	if (ctx.cr6.eq) goto loc_824678CC;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r28,r11,r9
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r27,r11,r9
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824780d8
	ctx.lr = 0x82467760;
	sub_824780D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678cc
	if (ctx.cr0.lt) goto loc_824678CC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824781d0
	ctx.lr = 0x82467774;
	sub_824781D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824678cc
	if (ctx.cr0.lt) goto loc_824678CC;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r10,r11,r16
	REX_STORE_U32(ctx.r11.u32 + r16.u32, ctx.r10.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r18.u32, ctx.xer);
	// bne cr6,0x824677d8
	if (!ctx.cr6.eq) goto loc_824677D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x824677e4
	goto loc_824677E4;
loc_824677D8:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_824677E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x824676f8
	if (ctx.cr6.lt) goto loc_824676F8;
loc_824677F8:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_82467804:
	// lwz r25,2396(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 2396);
loc_82467808:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_8246780C:
	// cmplw cr6,r22,r19
	ctx.cr6.compare<uint32_t>(r22.u32, r19.u32, ctx.xer);
	// bge cr6,0x824678ec
	if (!ctx.cr6.lt) goto loc_824678EC;
	// b 0x82466ca0
	goto loc_82466CA0;
loc_82467818:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4831
	ctx.r5.s64 = 4831;
	// addi r6,r11,26880
	ctx.r6.s64 = ctx.r11.s64 + 26880;
loc_82467824:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,60(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x82467830;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824678f0
	goto loc_824678F0;
loc_8246783C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4832
	ctx.r5.s64 = 4832;
	// addi r6,r11,26828
	ctx.r6.s64 = ctx.r11.s64 + 26828;
	// b 0x82467824
	goto loc_82467824;
loc_8246784C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824678f0
	goto loc_824678F0;
loc_82467858:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4833
	ctx.r5.s64 = 4833;
	// addi r6,r11,26796
	ctx.r6.s64 = ctx.r11.s64 + 26796;
	// b 0x82467824
	goto loc_82467824;
loc_82467868:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8246786C:
	// bl 0x82130e88
	ctx.lr = 0x82467870;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82467878;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824678f0
	goto loc_824678F0;
loc_82467880:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4832
	ctx.r5.s64 = 4832;
	// addi r6,r11,26736
	ctx.r6.s64 = ctx.r11.s64 + 26736;
	// b 0x82467824
	goto loc_82467824;
loc_82467890:
	// lwz r11,2396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2396);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// b 0x824678ec
	goto loc_824678EC;
loc_8246789C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4500
	ctx.r5.s64 = 4500;
	// addi r6,r11,26704
	ctx.r6.s64 = ctx.r11.s64 + 26704;
	// b 0x82467824
	goto loc_82467824;
loc_824678AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_824678B0:
	// bl 0x82130e88
	ctx.lr = 0x824678B4;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x824678BC;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824678f0
	goto loc_824678F0;
loc_824678C4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824678ac
	goto loc_824678AC;
loc_824678CC:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824678ac
	goto loc_824678AC;
loc_824678D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4833
	ctx.r5.s64 = 4833;
	// addi r6,r11,26664
	ctx.r6.s64 = ctx.r11.s64 + 26664;
	// b 0x82467824
	goto loc_82467824;
loc_824678E8:
	// stw r22,0(r25)
	REX_STORE_U32(r25.u32 + 0, r22.u32);
loc_824678EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824678F0:
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824C45A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C45A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c45e8
	if (!ctx.cr0.eq) goto loc_824C45E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6988
	ctx.r4.s64 = ctx.r11.s64 + 6988;
	// bl 0x8243c410
	ctx.lr = 0x824C45D0;
	sub_8243C410(ctx, base);
loc_824C45D0:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824c4654
	if (ctx.cr6.eq) goto loc_824C4654;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6960
	ctx.r4.s64 = ctx.r11.s64 + 6960;
	// b 0x824c45fc
	goto loc_824C45FC;
loc_824C45E8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c4610
	if (ctx.cr0.eq) goto loc_824C4610;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6936
	ctx.r4.s64 = ctx.r11.s64 + 6936;
loc_824C45F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824C45FC:
	// bl 0x8243c448
	ctx.lr = 0x824C4600;
	sub_8243C448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3fa8
	ctx.lr = 0x824C460C;
	sub_824C3FA8(ctx, base);
	// b 0x824c4734
	goto loc_824C4734;
loc_824C4610:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c462c
	if (ctx.cr0.eq) goto loc_824C462C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6912
	ctx.r4.s64 = ctx.r11.s64 + 6912;
	// bl 0x8243c448
	ctx.lr = 0x824C4628;
	sub_8243C448(ctx, base);
	// b 0x824c45d0
	goto loc_824C45D0;
loc_824C462C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824c45d0
	if (ctx.cr6.eq) goto loc_824C45D0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c45d0
	if (ctx.cr0.eq) goto loc_824C45D0;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c45d0
	if (!ctx.cr0.eq) goto loc_824C45D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6888
	ctx.r4.s64 = ctx.r11.s64 + 6888;
	// b 0x824c45f8
	goto loc_824C45F8;
loc_824C4654:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82442258
	ctx.lr = 0x824C4660;
	sub_82442258(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C4670;
	sub_8243C628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3fa8
	ctx.lr = 0x824C467C;
	sub_824C3FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824c4734
	if (!ctx.cr0.eq) goto loc_824C4734;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4734
	if (ctx.cr0.eq) goto loc_824C4734;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c4704
	if (ctx.cr0.eq) goto loc_824C4704;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfd f0,6880(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 6880);
	// lfd f13,6872(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 6872);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824c4704
	if (!ctx.cr6.gt) goto loc_824C4704;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6816
	ctx.r4.s64 = ctx.r11.s64 + 6816;
	// bl 0x8243c448
	ctx.lr = 0x824C4700;
	sub_8243C448(ctx, base);
	// b 0x824c4734
	goto loc_824C4734;
loc_824C4704:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,17272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17272);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,1584(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 1584, temp.u32);
	// bl 0x8243f3f8
	ctx.lr = 0x824C4734;
	sub_8243F3F8(ctx, base);
loc_824C4734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824CBED8) {
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
	ctx.lr = 0x824CBEE0;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r29.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r7,328(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r29,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, r29.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r27,28(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r26,32(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,36(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r24,40(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r23,44(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r22,48(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r21,52(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r20,56(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r19,60(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r18,8(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r17,12(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r16,16(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// blt 0x824cc09c
	if (ctx.cr0.lt) goto loc_824CC09C;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,-4
	r30.s64 = ctx.r6.s64 + -4;
loc_824CBF44:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r28,12(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwzu r8,4(r30)
	ea = 4 + r30.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r31,r28,r10
	r31.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r30,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r30.u32);
	// stw r10,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// beq cr6,0x824cc090
	if (ctx.cr6.eq) goto loc_824CC090;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// subf r30,r11,r6
	r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r29,r11,r5
	r29.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r28,r11,r31
	r28.u64 = r31.u64 - ctx.r11.u64;
loc_824CBF90:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// rotlwi r4,r9,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzx r15,r28,r11
	r15.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r8,r5,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r16.u32);
	// lwzx r5,r5,r18
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r18.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwzx r31,r4,r17
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + r17.u32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r6,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 16;
	// subfic r8,r15,255
	ctx.xer.ca = r15.u32 <= 255;
	ctx.r8.u64 = static_cast<uint64_t>(255) - r15.u64;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r5,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// add r5,r31,r9
	ctx.r5.u64 = r31.u64 + ctx.r9.u64;
	// rotlwi r9,r6,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbzx r6,r4,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r4,r8,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r31,r9,r27
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// mullw r4,r31,r4
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// lwzx r31,r6,r24
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + r24.u32);
	// lwzx r15,r5,r21
	r15.u64 = REX_LOAD_U32(ctx.r5.u32 + r21.u32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r15
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r15.s32);
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lwzx r4,r5,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// lwzx r31,r9,r26
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// lwzx r15,r6,r23
	r15.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// lwzx r14,r8,r3
	r14.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mullw r15,r15,r14
	r15.s64 = int64_t(r15.s32) * int64_t(r14.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r15,r4
	ctx.r4.s64 = int64_t(r15.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lwzx r9,r9,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// lwzx r6,r6,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r22.u32);
	// lwzx r4,r8,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r5,r5,r19
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r19.u32);
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r5,r8,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r4,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r8,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// stbu r6,3(r10)
	ea = 3 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824cbf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CBF90;
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r30,44(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r9,-168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r29,52(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_824CC090:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r29,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, r29.u32);
	// bge 0x824cbf44
	if (!ctx.cr0.lt) goto loc_824CBF44;
loc_824CC09C:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824D7FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8000;
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
	// ble cr6,0x824d807c
	if (!ctx.cr6.gt) goto loc_824D807C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8028
	if (!ctx.cr6.lt) goto loc_824D8028;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8028:
	// mulli r4,r30,24
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8034;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d804c
	if (!ctx.cr0.eq) goto loc_824D804C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d807c
	goto loc_824D807C;
loc_824D804C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8078
	if (ctx.cr6.eq) goto loc_824D8078;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// bl 0x826a1e70
	ctx.lr = 0x824D806C;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824D8078;
	sub_824E5B08(ctx, base);
loc_824D8078:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D807C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DAB68) {
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
	// ble cr6,0x824dab9c
	if (!ctx.cr6.gt) goto loc_824DAB9C;
	// bl 0x824d8478
	ctx.lr = 0x824DAB9C;
	sub_824D8478(ctx, base);
loc_824DAB9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,276
	ctx.r5.s64 = 276;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DABB8;
	sub_826A1E70(ctx, base);
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

DEFINE_REX_FUNC(sub_824DC558) {
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
	ctx.lr = 0x824DC560;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// beq 0x824dc698
	if (ctx.cr0.eq) goto loc_824DC698;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-26856
	r31.s64 = ctx.r11.s64 + -26856;
loc_824DC588:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824dc5e8
	if (!ctx.cr6.lt) goto loc_824DC5E8;
loc_824DC5A8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824DC5B0:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// beq 0x824dc5d4
	if (ctx.cr0.eq) goto loc_824DC5D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824dc5b0
	if (ctx.cr6.eq) goto loc_824DC5B0;
loc_824DC5D4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824dc6cc
	if (ctx.cr0.eq) goto loc_824DC6CC;
	// addi r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 + 276;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824dc5a8
	if (ctx.cr6.lt) goto loc_824DC5A8;
loc_824DC5E8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// bl 0x8269cd20
	ctx.lr = 0x824DC600;
	sub_8269CD20(ctx, base);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stb r11,339(r1)
	REX_STORE_U8(ctx.r1.u32 + 339, ctx.r11.u8);
	// stw r11,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x824dc664
	if (!ctx.cr6.eq) goto loc_824DC664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ede98
	ctx.lr = 0x824DC640;
	sub_823EDE98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824dc664
	if (ctx.cr6.eq) goto loc_824DC664;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b4010
	ctx.lr = 0x824DC65C;
	sub_826B4010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed360
	ctx.lr = 0x824DC664;
	sub_823ED360(ctx, base);
loc_824DC664:
	// addi r31,r29,144
	r31.s64 = r29.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dab68
	ctx.lr = 0x824DC678;
	sub_824DAB68(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc68c
	if (ctx.cr6.lt) goto loc_824DC68C;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_824DC68C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_824DC690:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d04
	return;
loc_824DC698:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_824DC69C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824dc69c
	if (!ctx.cr6.eq) goto loc_824DC69C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// blt cr6,0x824dc588
	if (ctx.cr6.lt) goto loc_824DC588;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824dc690
	goto loc_824DC690;
loc_824DC6CC:
	// lwz r11,260(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x824dc690
	goto loc_824DC690;
}

DEFINE_REX_FUNC(sub_824E4FC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x824e3dd0
	ctx.lr = 0x824E5008;
	sub_824E3DD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_824E5010:
	// lwz r5,260(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x824e3e10
	ctx.lr = 0x824E5020;
	sub_824E3E10(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824e50bc
	if (!ctx.cr6.eq) goto loc_824E50BC;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x826a4760
	ctx.lr = 0x824E503C;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e5064
	if (ctx.cr6.eq) goto loc_824E5064;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x824e4a80
	ctx.lr = 0x824E505C;
	sub_824E4A80(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// b 0x824e50bc
	goto loc_824E50BC;
loc_824E5064:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	REX_STORE_U8(r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x824e4bf0
	ctx.lr = 0x824E507C;
	sub_824E4BF0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x824e4cd0
	ctx.lr = 0x824E50B8;
	sub_824E4CD0(ctx, base);
	// b 0x824e50c8
	goto loc_824E50C8;
loc_824E50BC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e5010
	if (ctx.cr6.eq) goto loc_824E5010;
loc_824E50C8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824e50e8
	goto loc_824E50E8;
loc_824E50E8:
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x824e4b60
	ctx.lr = 0x824E50F4;
	sub_824E4B60(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EDF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EDF90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ee064
	if (ctx.cr6.eq) goto loc_824EE064;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,-26736
	r30.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824edfd8
	if (!ctx.cr6.eq) goto loc_824EDFD8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-26536
	ctx.r5.s64 = ctx.r11.s64 + -26536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDFD8;
	sub_824EA978(ctx, base);
loc_824EDFD8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee000
	if (!ctx.cr6.eq) goto loc_824EE000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-26556
	ctx.r5.s64 = ctx.r11.s64 + -26556;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE000;
	sub_824EA978(ctx, base);
loc_824EE000:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ee028
	if (ctx.cr6.eq) goto loc_824EE028;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-26616
	ctx.r5.s64 = ctx.r11.s64 + -26616;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE028;
	sub_824EA978(ctx, base);
loc_824EE028:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ee050
	if (ctx.cr6.eq) goto loc_824EE050;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-26644
	ctx.r5.s64 = ctx.r11.s64 + -26644;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE050;
	sub_824EA978(ctx, base);
loc_824EE050:
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
loc_824EE064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824F0E58) {
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
	// bne cr6,0x824f0e94
	if (!ctx.cr6.eq) goto loc_824F0E94;
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
	// li r7,1795
	ctx.r7.s64 = 1795;
	// bl 0x824ea978
	ctx.lr = 0x824F0E94;
	sub_824EA978(ctx, base);
loc_824F0E94:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
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

DEFINE_REX_FUNC(sub_824F3028) {
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
	ctx.lr = 0x824F3030;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// rlwinm r28,r5,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-23616
	r26.s64 = ctx.r10.s64 + -23616;
	// bne cr6,0x824f307c
	if (!ctx.cr6.eq) goto loc_824F307C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-23632
	ctx.r5.s64 = ctx.r11.s64 + -23632;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F307C;
	sub_824EA978(ctx, base);
loc_824F307C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825a5ea8
	ctx.lr = 0x824F308C;
	sub_825A5EA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f30ac
	if (ctx.cr0.eq) goto loc_824F30AC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// b 0x824f313c
	goto loc_824F313C;
loc_824F30AC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f2d40
	ctx.lr = 0x824F30BC;
	sub_824F2D40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f30e8
	if (!ctx.cr0.eq) goto loc_824F30E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-23436
	ctx.r5.s64 = ctx.r11.s64 + -23436;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,521
	ctx.r7.s64 = 521;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F30E0;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f3140
	goto loc_824F3140;
loc_824F30E8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x825a5a10
	ctx.lr = 0x824F30F8;
	sub_825A5A10(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x825a5de8
	ctx.lr = 0x824F310C;
	sub_825A5DE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x824f3134
	if (ctx.cr6.gt) goto loc_824F3134;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-23352
	ctx.r5.s64 = ctx.r11.s64 + -23352;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,535
	ctx.r7.s64 = 535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F3134;
	sub_824EA978(ctx, base);
loc_824F3134:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_824F313C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F3140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FE4B0) {
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
	ctx.lr = 0x824FE4B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824fe4e8
	if (ctx.cr6.eq) goto loc_824FE4E8;
loc_824FE4D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824fe5c0
	if (ctx.cr6.eq) goto loc_824FE5C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fe4d0
	if (!ctx.cr6.eq) goto loc_824FE4D0;
loc_824FE4E8:
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824fe5c0
	if (ctx.cr0.lt) goto loc_824FE5C0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824fe5c0
	if (ctx.cr0.lt) goto loc_824FE5C0;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r10,10(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// rlwinm r8,r10,3,13,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r26,r28,32
	r26.u64 = r28.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpld cr6,r9,r26
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, r26.u64, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// clrlwi. r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r29,0
	r29.s64 = 0;
	// ble 0x824fe5b8
	if (!ctx.cr0.gt) goto loc_824FE5B8;
loc_824FE550:
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824fe458
	ctx.lr = 0x824FE564;
	sub_824FE458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe5a0
	if (ctx.cr0.lt) goto loc_824FE5A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r26.u64, ctx.xer);
	// bgt cr6,0x824fe5c0
	if (ctx.cr6.gt) goto loc_824FE5C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x824fe4b0
	ctx.lr = 0x824FE598;
	sub_824FE4B0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_824FE5A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824fe5c8
	if (ctx.cr6.lt) goto loc_824FE5C8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x824fe550
	if (ctx.cr6.lt) goto loc_824FE550;
loc_824FE5B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824fe5c8
	goto loc_824FE5C8;
loc_824FE5C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FE5C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82505E70) {
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
	ctx.lr = 0x82505E78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82505f5c
	if (ctx.cr6.eq) goto loc_82505F5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// bl 0x82501ce0
	ctx.lr = 0x82505EA0;
	sub_82501CE0(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82505f5c
	if (ctx.cr6.gt) goto loc_82505F5C;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82505EB8:
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_82505EC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82505ee4
	if (ctx.cr6.eq) goto loc_82505EE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82505ee4
	if (!ctx.cr0.eq) goto loc_82505EE4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82505ec8
	goto loc_82505EC8;
loc_82505EE4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwimi r29,r11,19,20,27
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF0) | (r29.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r29,r29,20
	r29.u64 = r29.u32 & 0xFFF;
	// bl 0x82503e18
	ctx.lr = 0x82505F00;
	sub_82503E18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwimi r11,r29,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bl 0x82505840
	ctx.lr = 0x82505F18;
	sub_82505840(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825047b8
	ctx.lr = 0x82505F28;
	sub_825047B8(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x82505f40
	if (!ctx.cr6.eq) goto loc_82505F40;
	// li r30,-1
	r30.s64 = -1;
	// b 0x82505f54
	goto loc_82505F54;
loc_82505F40:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,88(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 88);
	// bl 0x82501ce0
	ctx.lr = 0x82505F50;
	sub_82501CE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82505F54:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// ble cr6,0x82505eb8
	if (!ctx.cr6.gt) goto loc_82505EB8;
loc_82505F5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825122E0) {
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
	ctx.lr = 0x825122E8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251230c
	if (!ctx.cr0.eq) goto loc_8251230C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512790
	if (ctx.cr0.eq) goto loc_82512790;
loc_8251230C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512790
	if (!ctx.cr0.eq) goto loc_82512790;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// b 0x82512784
	goto loc_82512784;
loc_82512320:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512774
	if (!ctx.cr0.eq) goto loc_82512774;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82512774
	if (ctx.cr0.eq) goto loc_82512774;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10624
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10624, ctx.xer);
	// bne cr6,0x82512774
	if (!ctx.cr6.eq) goto loc_82512774;
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x82512454
	if (ctx.cr0.eq) goto loc_82512454;
	// lwz r30,64(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82512454
	if (ctx.cr6.eq) goto loc_82512454;
loc_82512368:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251237c
	if (ctx.cr0.eq) goto loc_8251237C;
	// li r31,0
	r31.s64 = 0;
	// b 0x82512388
	goto loc_82512388;
loc_8251237C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_82512388:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251243c
	if (!ctx.cr0.eq) goto loc_8251243C;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x8251244c
	if (!ctx.cr6.eq) goto loc_8251244C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825123B4;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-20
	ctx.r10.s64 = r31.s64 + -20;
	// lwz r11,616(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 616);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825123f4
	goto loc_825123F4;
loc_825123D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825123e4
	goto loc_825123E4;
loc_825123D8:
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825123f0
	if (ctx.cr0.eq) goto loc_825123F0;
loc_825123E4:
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825123d8
	if (!ctx.cr6.eq) goto loc_825123D8;
loc_825123F0:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825123F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825123d0
	if (!ctx.cr0.eq) goto loc_825123D0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825129e4
	if (!ctx.cr0.eq) goto loc_825129E4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825129e4
	if (ctx.cr0.eq) goto loc_825129E4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10880
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10880, ctx.xer);
	// bne cr6,0x825129e4
	if (!ctx.cr6.eq) goto loc_825129E4;
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251244c
	if (ctx.cr0.eq) goto loc_8251244C;
loc_8251243C:
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r30,64(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82512368
	if (!ctx.cr6.eq) goto loc_82512368;
loc_8251244C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825124ac
	if (!ctx.cr6.eq) goto loc_825124AC;
loc_82512454:
	// lwz r31,64(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82512774
	if (ctx.cr6.eq) goto loc_82512774;
loc_82512460:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512474
	if (ctx.cr0.eq) goto loc_82512474;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82512480
	goto loc_82512480;
loc_82512474:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
loc_82512480:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x824f7510
	ctx.lr = 0x82512488;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x825124a0
	if (ctx.cr6.eq) goto loc_825124A0;
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82512460
	if (!ctx.cr6.eq) goto loc_82512460;
	// b 0x825124a4
	goto loc_825124A4;
loc_825124A0:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_825124A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82512774
	if (ctx.cr6.eq) goto loc_82512774;
loc_825124AC:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825129f0
	if (!ctx.cr0.eq) goto loc_825129F0;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r31.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825129f0
	if (ctx.cr0.eq) goto loc_825129F0;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
loc_825124E0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512520
	if (ctx.cr0.eq) goto loc_82512520;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512520
	if (!ctx.cr0.eq) goto loc_82512520;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512520
	if (ctx.cr0.eq) goto loc_82512520;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// beq cr6,0x8251253c
	if (ctx.cr6.eq) goto loc_8251253C;
loc_82512520:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825129f0
	if (!ctx.cr0.eq) goto loc_825129F0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r31.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825124e0
	if (!ctx.cr0.eq) goto loc_825124E0;
loc_8251253C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825129f0
	if (ctx.cr6.eq) goto loc_825129F0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512684
	if (!ctx.cr0.eq) goto loc_82512684;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8251255C;
	sub_824FFCC0(ctx, base);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// oris r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 2147483648;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x825c69a0
	ctx.lr = 0x825125A8;
	sub_825C69A0(ctx, base);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,83
	ctx.r6.s64 = 83;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x825125C4;
	sub_825BB860(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825125dc
	if (ctx.cr0.eq) goto loc_825125DC;
	// li r29,0
	r29.s64 = 0;
	// b 0x825125e8
	goto loc_825125E8;
loc_825125DC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	r29.s64 = ctx.r11.s64 + -40;
loc_825125E8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x82512600;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82512610:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82512668
	if (ctx.cr6.eq) goto loc_82512668;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82512630
	goto loc_82512630;
loc_82512628:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82512630:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82512628
	if (!ctx.cr6.eq) goto loc_82512628;
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
	// bne cr6,0x82512610
	if (!ctx.cr6.eq) goto loc_82512610;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82512610
	goto loc_82512610;
loc_82512668:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251267C;
	sub_825C2288(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82512684;
	sub_8257DFD8(ctx, base);
loc_82512684:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_82512688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825126ac
	if (ctx.cr6.eq) goto loc_825126AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825126a4
	if (ctx.cr6.eq) goto loc_825126A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82512688
	goto loc_82512688;
loc_825126A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825126b0
	goto loc_825126B0;
loc_825126AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825126B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512774
	if (!ctx.cr0.eq) goto loc_82512774;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825126C8;
	sub_825C69A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82512758
	if (ctx.cr6.eq) goto loc_82512758;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x825126F0;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82512700:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82512758
	if (ctx.cr6.eq) goto loc_82512758;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82512720
	goto loc_82512720;
loc_82512718:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82512720:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82512718
	if (!ctx.cr6.eq) goto loc_82512718;
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
	// bne cr6,0x82512700
	if (!ctx.cr6.eq) goto loc_82512700;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82512700
	goto loc_82512700;
loc_82512758:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251276C;
	sub_825C2288(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82512774;
	sub_8257DFD8(ctx, base);
loc_82512774:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82512790
	if (!ctx.cr0.eq) goto loc_82512790;
loc_82512784:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r28.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82512320
	if (!ctx.cr0.eq) goto loc_82512320;
loc_82512790:
	// lwz r11,40(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 40);
	// andi. r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 & 260;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82514830
	if (ctx.cr0.eq) goto loc_82514830;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// li r14,2
	r14.s64 = 2;
	// li r15,-1
	r15.s64 = -1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82512a38
	if (!ctx.cr0.eq) goto loc_82512A38;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82512a38
	if (ctx.cr0.eq) goto loc_82512A38;
	// li r24,1
	r24.s64 = 1;
loc_825127C4:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512a18
	if (ctx.cr0.eq) goto loc_82512A18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250d8b0
	ctx.lr = 0x825127E0;
	sub_8250D8B0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82512a18
	if (ctx.cr0.eq) goto loc_82512A18;
	// lwz r8,40(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r9,28,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7FFFFFF;
	// rlwinm r7,r9,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r11,31
	ctx.r6.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r15,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw. r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512a18
	if (ctx.cr0.eq) goto loc_82512A18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82512a18
	if (ctx.cr6.eq) goto loc_82512A18;
	// lwz r11,44(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 44);
	// mr r31,r29
	r31.u64 = r29.u64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,44(r18)
	REX_STORE_U32(r18.u32 + 44, ctx.r11.u32);
loc_82512860:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x825128a8
	if (ctx.cr6.eq) goto loc_825128A8;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r24,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512a18
	if (ctx.cr0.eq) goto loc_82512A18;
loc_825128A8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x825129fc
	if (ctx.cr6.eq) goto loc_825129FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825128BC;
	sub_8250B3D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825129fc
	if (ctx.cr0.eq) goto loc_825129FC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// beq cr6,0x825129fc
	if (ctx.cr6.eq) goto loc_825129FC;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r27,r31,12
	r27.s64 = r31.s64 + 12;
loc_825128DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825129fc
	if (ctx.cr6.eq) goto loc_825129FC;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// beq cr6,0x825129cc
	if (ctx.cr6.eq) goto loc_825129CC;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825129cc
	if (!ctx.cr0.eq) goto loc_825129CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82512938
	if (ctx.cr6.eq) goto loc_82512938;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne cr6,0x8251293c
	if (!ctx.cr6.eq) goto loc_8251293C;
loc_82512938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251293C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825129cc
	if (ctx.cr0.eq) goto loc_825129CC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6c90
	ctx.lr = 0x82512950;
	sub_825C6C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825129cc
	if (!ctx.cr0.eq) goto loc_825129CC;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825129b4
	if (ctx.cr0.eq) goto loc_825129B4;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825129b4
	if (ctx.cr0.eq) goto loc_825129B4;
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
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_825129B4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x825129CC;
	sub_8257C0C0(ctx, base);
loc_825129CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x825129dc
	if (!ctx.cr6.eq) goto loc_825129DC;
	// addi r27,r28,8
	r27.s64 = r28.s64 + 8;
loc_825129DC:
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x825128dc
	goto loc_825128DC;
loc_825129E4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825129F0;
	sub_824E4368(ctx, base);
loc_825129F0:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825129FC;
	sub_824E4368(ctx, base);
loc_825129FC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82512a18
	if (!ctx.cr0.eq) goto loc_82512A18;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82512860
	if (!ctx.cr6.eq) goto loc_82512860;
loc_82512A18:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82512a3c
	if (!ctx.cr0.eq) goto loc_82512A3C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825127c4
	if (!ctx.cr6.eq) goto loc_825127C4;
	// b 0x82512a3c
	goto loc_82512A3C;
loc_82512A38:
	// li r24,1
	r24.s64 = 1;
loc_82512A3C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// lwz r16,92(r18)
	r16.u64 = REX_LOAD_U32(r18.u32 + 92);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251446c
	if (!ctx.cr0.eq) goto loc_8251446C;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251446c
	if (ctx.cr0.eq) goto loc_8251446C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r17,68
	r17.s64 = 68;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_82512A64:
	// lwz r11,40(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
	// lwz r11,36(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825143d0
	if (!ctx.cr0.eq) goto loc_825143D0;
	// lwz r11,32(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r23,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r23.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x825143d0
	if (ctx.cr0.eq) goto loc_825143D0;
	// lwz r31,8(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// beq cr6,0x82512ad4
	if (ctx.cr6.eq) goto loc_82512AD4;
	// li r21,0
	r21.s64 = 0;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x82512adc
	goto loc_82512ADC;
loc_82512AD4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// li r21,0
	r21.s64 = 0;
loc_82512ADC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143d0
	if (ctx.cr0.eq) goto loc_825143D0;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// beq cr6,0x82513e1c
	if (ctx.cr6.eq) goto loc_82513E1C;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x82512AFC;
	sub_824F71B8(ctx, base);
	// addi r11,r23,-16
	ctx.r11.s64 = r23.s64 + -16;
	// add r20,r3,r11
	r20.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82512b18
	if (ctx.cr0.eq) goto loc_82512B18;
	// li r22,7
	r22.s64 = 7;
	// b 0x82512b34
	goto loc_82512B34;
loc_82512B18:
	// rlwinm r22,r11,30,28,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// beq cr6,0x82512b48
	if (ctx.cr6.eq) goto loc_82512B48;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(r22.s32, 3, ctx.xer);
	// beq cr6,0x82512b48
	if (ctx.cr6.eq) goto loc_82512B48;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x82512b48
	if (ctx.cr6.eq) goto loc_82512B48;
loc_82512B34:
	// lwz r11,76(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512b48
	if (!ctx.cr0.eq) goto loc_82512B48;
	// rlwinm. r11,r31,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
loc_82512B48:
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(r22.s32, 8, ctx.xer);
	// beq cr6,0x825138c8
	if (ctx.cr6.eq) goto loc_825138C8;
	// cmpwi cr6,r22,9
	ctx.cr6.compare<int32_t>(r22.s32, 9, ctx.xer);
	// beq cr6,0x825138c8
	if (ctx.cr6.eq) goto loc_825138C8;
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// rlwinm r21,r19,0,0,30
	r21.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r25,r11,13
	r25.u64 = ctx.r11.u32 & 0x7FFFF;
loc_82512B64:
	// lwz r8,4(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513030
	if (!ctx.cr0.eq) goto loc_82513030;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82513030
	if (ctx.cr6.eq) goto loc_82513030;
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_82512B94:
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512c20
	if (ctx.cr0.eq) goto loc_82512C20;
	// rlwinm r11,r25,28,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0x7FFFFFF;
	// lwz r5,40(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r4,r25,1,27,30
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// slw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r3,r15,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r4.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// srw. r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512c20
	if (ctx.cr0.eq) goto loc_82512C20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82512c20
	if (ctx.cr6.eq) goto loc_82512C20;
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_82512C20:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512c38
	if (!ctx.cr0.eq) goto loc_82512C38;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82512b94
	if (!ctx.cr6.eq) goto loc_82512B94;
loc_82512C38:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82513030
	if (ctx.cr6.eq) goto loc_82513030;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143e8
	if (ctx.cr0.eq) goto loc_825143E8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824ff9c0
	ctx.lr = 0x82512C54;
	sub_824FF9C0(ctx, base);
	// lwz r26,12(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x825143ac
	if (ctx.cr6.eq) goto loc_825143AC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x82512fb8
	if (!ctx.cr6.eq) goto loc_82512FB8;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// beq cr6,0x82512d94
	if (ctx.cr6.eq) goto loc_82512D94;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// bl 0x8250cee0
	ctx.lr = 0x82512C94;
	sub_8250CEE0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82512f70
	if (!ctx.cr6.eq) goto loc_82512F70;
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b7c0
	ctx.lr = 0x82512CC0;
	sub_8250B7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512f70
	if (ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82512f70
	if (ctx.cr6.eq) goto loc_82512F70;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82512f70
	if (!ctx.cr6.eq) goto loc_82512F70;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512d0c
	if (ctx.cr0.eq) goto loc_82512D0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250f440
	ctx.lr = 0x82512D0C;
	sub_8250F440(ctx, base);
loc_82512D0C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250afa0
	ctx.lr = 0x82512D1C;
	sub_8250AFA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82512d3c
	if (!ctx.cr0.eq) goto loc_82512D3C;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82512D3C;
	sub_8257C0C0(ctx, base);
loc_82512D3C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825115a0
	ctx.lr = 0x82512D5C;
	sub_825115A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512f70
	if (ctx.cr0.eq) goto loc_82512F70;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c6828
	ctx.lr = 0x82512D74;
	sub_825C6828(ctx, base);
loc_82512D74:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2288
	ctx.lr = 0x82512D88;
	sub_825C2288(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82512D90;
	sub_8257DFD8(ctx, base);
	// b 0x825143ac
	goto loc_825143AC;
loc_82512D94:
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,87
	ctx.r6.s64 = ctx.r1.s64 + 87;
	// bl 0x8250cee0
	ctx.lr = 0x82512DA4;
	sub_8250CEE0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82512f70
	if (!ctx.cr6.eq) goto loc_82512F70;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b7c0
	ctx.lr = 0x82512DCC;
	sub_8250B7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512f70
	if (ctx.cr0.eq) goto loc_82512F70;
	// lwz r27,108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b7c0
	ctx.lr = 0x82512DF4;
	sub_8250B7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512f70
	if (ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82512f70
	if (!ctx.cr0.eq) goto loc_82512F70;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82512f70
	if (!ctx.cr6.eq) goto loc_82512F70;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512e54
	if (ctx.cr0.eq) goto loc_82512E54;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250f440
	ctx.lr = 0x82512E54;
	sub_8250F440(ctx, base);
loc_82512E54:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250afa0
	ctx.lr = 0x82512E64;
	sub_8250AFA0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250afa0
	ctx.lr = 0x82512E78;
	sub_8250AFA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82512ea4
	if (!ctx.cr6.eq) goto loc_82512EA4;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82512EA0;
	sub_8257C0C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82512EA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82512ecc
	if (!ctx.cr6.eq) goto loc_82512ECC;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82512EC8;
	sub_8257C0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82512ECC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82512ED0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82512f48
	if (ctx.cr6.eq) goto loc_82512F48;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82512eec
	if (ctx.cr6.eq) goto loc_82512EEC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82512ef4
	if (!ctx.cr6.eq) goto loc_82512EF4;
loc_82512EEC:
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82512ed0
	goto loc_82512ED0;
loc_82512EF4:
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825143f4
	if (!ctx.cr0.eq) goto loc_825143F4;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82512F40;
	sub_8257C0C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82512F48:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lbz r6,87(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825115a0
	ctx.lr = 0x82512F68;
	sub_825115A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825130ac
	if (!ctx.cr0.eq) goto loc_825130AC;
loc_82512F70:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82512f84
	if (ctx.cr0.eq) goto loc_82512F84;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82512f8c
	goto loc_82512F8C;
loc_82512F84:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_82512F8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512fa0
	if (ctx.cr0.eq) goto loc_82512FA0;
	// li r4,3588
	ctx.r4.s64 = 3588;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4270
	ctx.lr = 0x82512FA0;
	sub_824E4270(ctx, base);
loc_82512FA0:
	// lwz r11,76(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512fb8
	if (!ctx.cr0.eq) goto loc_82512FB8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
loc_82512FB8:
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// beq cr6,0x82513174
	if (ctx.cr6.eq) goto loc_82513174;
	// lwz r10,12(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// subfic r9,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82513174
	if (ctx.cr6.eq) goto loc_82513174;
	// lwz r9,12(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 12);
loc_82512FE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82513000
	if (ctx.cr6.eq) goto loc_82513000;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82513004
	if (!ctx.cr6.eq) goto loc_82513004;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82512fe0
	goto loc_82512FE0;
loc_82513000:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82513004:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r9,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r10.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x8251302C;
	sub_8257DFD8(ctx, base);
	// b 0x82512b64
	goto loc_82512B64;
loc_82513030:
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251304c
	if (ctx.cr6.eq) goto loc_8251304C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82513050
	if (!ctx.cr6.eq) goto loc_82513050;
loc_8251304C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82513050:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513070
	if (ctx.cr0.eq) goto loc_82513070;
	// lwz r11,76(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825143dc
	if (!ctx.cr0.eq) goto loc_825143DC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825143dc
	if (!ctx.cr0.eq) goto loc_825143DC;
loc_82513070:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x825143ac
	if (!ctx.cr6.eq) goto loc_825143AC;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251308c
	if (ctx.cr0.eq) goto loc_8251308C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82513094
	goto loc_82513094;
loc_8251308C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_82513094:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
	// li r4,3588
	ctx.r4.s64 = 3588;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4270
	ctx.lr = 0x825130A8;
	sub_824E4270(ctx, base);
	// b 0x825143ac
	goto loc_825143AC;
loc_825130AC:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c6828
	ctx.lr = 0x825130BC;
	sub_825C6828(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x825130CC;
	sub_825C6828(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825130DC;
	sub_825C69A0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82512d74
	if (!ctx.cr0.eq) goto loc_82512D74;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82512d74
	if (ctx.cr0.eq) goto loc_82512D74;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82513134
	if (ctx.cr6.eq) goto loc_82513134;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82513134
	if (ctx.cr6.eq) goto loc_82513134;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82513134
	if (ctx.cr6.eq) goto loc_82513134;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82513134
	if (ctx.cr6.eq) goto loc_82513134;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82513134
	if (ctx.cr6.eq) goto loc_82513134;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82513138
	if (!ctx.cr6.eq) goto loc_82513138;
loc_82513134:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82513138:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512d74
	if (ctx.cr0.eq) goto loc_82512D74;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82513158;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82512d74
	if (!ctx.cr6.eq) goto loc_82512D74;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// b 0x82512d74
	goto loc_82512D74;
loc_82513174:
	// lwz r11,108(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 108);
	// li r22,1
	r22.s64 = 1;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// stw r28,108(r18)
	REX_STORE_U32(r18.u32 + 108, r28.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,12(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// slw r5,r22,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x8250dda0
	ctx.lr = 0x825131B8;
	sub_8250DDA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// beq cr6,0x825143fc
	if (ctx.cr6.eq) goto loc_825143FC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8250d8b0
	ctx.lr = 0x825131D4;
	sub_8250D8B0(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825131f0
	if (ctx.cr0.eq) goto loc_825131F0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b568
	ctx.lr = 0x825131F0;
	sub_8250B568(ctx, base);
loc_825131F0:
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// clrlwi. r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r11.u32);
	// bne 0x82513210
	if (!ctx.cr0.eq) goto loc_82513210;
	// lwz r11,76(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825138b8
	if (ctx.cr0.eq) goto loc_825138B8;
loc_82513210:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250bc38
	ctx.lr = 0x8251321C;
	sub_8250BC38(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825132cc
	if (!ctx.cr0.eq) goto loc_825132CC;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x825132c4
	goto loc_825132C4;
loc_82513238:
	// cmplw cr6,r4,r19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r19.u32, ctx.xer);
	// beq cr6,0x825132cc
	if (ctx.cr6.eq) goto loc_825132CC;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bge cr6,0x825132b0
	if (!ctx.cr6.lt) goto loc_825132B0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_82513254:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825132b0
	if (ctx.cr6.eq) goto loc_825132B0;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82513298
	if (ctx.cr6.eq) goto loc_82513298;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r7,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r7,r22,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825132d8
	if (ctx.cr0.eq) goto loc_825132D8;
loc_82513298:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bge cr6,0x825132d8
	if (!ctx.cr6.lt) goto loc_825132D8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82513254
	goto loc_82513254;
loc_825132B0:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825132cc
	if (!ctx.cr0.eq) goto loc_825132CC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_825132C4:
	// addic. r4,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r4.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82513238
	if (!ctx.cr0.eq) goto loc_82513238;
loc_825132CC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825132D8;
	sub_824E4368(ctx, base);
loc_825132D8:
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513308
	if (!ctx.cr0.eq) goto loc_82513308;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82513314
	goto loc_82513314;
loc_825132E8:
	// lwz r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// blt cr6,0x82513320
	if (ctx.cr6.lt) goto loc_82513320;
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82513310
	if (ctx.cr0.eq) goto loc_82513310;
loc_82513308:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82513318
	goto loc_82513318;
loc_82513310:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82513314:
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_82513318:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825132e8
	if (!ctx.cr6.eq) goto loc_825132E8;
loc_82513320:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e208
	ctx.lr = 0x82513334;
	sub_8250E208(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r22,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825134d0
	if (ctx.cr0.eq) goto loc_825134D0;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825133b4
	if (!ctx.cr0.eq) goto loc_825133B4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825133b4
	if (ctx.cr0.eq) goto loc_825133B4;
loc_8251338C:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251339c
	if (!ctx.cr6.eq) goto loc_8251339C;
	// stw r28,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r28.u32);
loc_8251339C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825133b4
	if (!ctx.cr0.eq) goto loc_825133B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251338c
	if (!ctx.cr6.eq) goto loc_8251338C;
loc_825133B4:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x825133c4
	if (ctx.cr6.eq) goto loc_825133C4;
	// stw r28,44(r30)
	REX_STORE_U32(r30.u32 + 44, r28.u32);
loc_825133C4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x825133d4
	if (!ctx.cr6.eq) goto loc_825133D4;
	// stw r28,44(r24)
	REX_STORE_U32(r24.u32 + 44, r28.u32);
loc_825133D4:
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r10,84(r24)
	REX_STORE_U32(r24.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82513424
	if (ctx.cr6.eq) goto loc_82513424;
loc_825133E8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r19,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r19.u32);
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// beq cr6,0x82513424
	if (ctx.cr6.eq) goto loc_82513424;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82513424
	if (!ctx.cr0.eq) goto loc_82513424;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825133e8
	if (!ctx.cr6.eq) goto loc_825133E8;
loc_82513424:
	// lwz r31,4(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 4);
	// b 0x825134c0
	goto loc_825134C0;
loc_8251342C:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// beq cr6,0x825134d0
	if (ctx.cr6.eq) goto loc_825134D0;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82513438:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825134b8
	if (ctx.cr6.eq) goto loc_825134B8;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x825134b0
	if (ctx.cr6.eq) goto loc_825134B0;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// bne cr6,0x82513470
	if (!ctx.cr6.eq) goto loc_82513470;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251349c
	if (ctx.cr6.eq) goto loc_8251349C;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8251349c
	goto loc_8251349C;
loc_82513470:
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
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
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825134b0
	if (!ctx.cr0.eq) goto loc_825134B0;
loc_8251349C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e748
	ctx.lr = 0x825134B0;
	sub_8250E748(ctx, base);
loc_825134B0:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82513438
	goto loc_82513438;
loc_825134B8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825134C0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825134d0
	if (!ctx.cr0.eq) goto loc_825134D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251342c
	if (!ctx.cr6.eq) goto loc_8251342C;
loc_825134D0:
	// lwz r10,12(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// slw r25,r22,r10
	r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82513568
	goto loc_82513568;
loc_825134F0:
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r9,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251355c
	if (ctx.cr0.eq) goto loc_8251355C;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513538
	if (ctx.cr0.eq) goto loc_82513538;
	// b 0x8251351c
	goto loc_8251351C;
loc_82513510:
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513528
	if (ctx.cr0.eq) goto loc_82513528;
loc_8251351C:
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82513510
	if (!ctx.cr6.eq) goto loc_82513510;
loc_82513528:
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8251351c
	if (!ctx.cr0.eq) goto loc_8251351C;
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_82513538:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x8251355c
	if (!ctx.cr6.eq) goto loc_8251355C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// stw r19,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r19.u32);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8251355C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82513568:
	// bne 0x82513574
	if (!ctx.cr0.eq) goto loc_82513574;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825134f0
	if (!ctx.cr6.eq) goto loc_825134F0;
loc_82513574:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825138b8
	if (!ctx.cr0.eq) goto loc_825138B8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825138b8
	if (ctx.cr6.eq) goto loc_825138B8;
loc_8251358C:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// beq cr6,0x825138a4
	if (ctx.cr6.eq) goto loc_825138A4;
	// lwz r8,40(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r7,28,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x7FFFFFF;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r14,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r7,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1E;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// slw r8,r15,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82513888
	if (ctx.cr6.eq) goto loc_82513888;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82513610
	if (ctx.cr0.eq) goto loc_82513610;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82513618
	goto loc_82513618;
loc_82513610:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_82513618:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e208
	ctx.lr = 0x82513630;
	sub_8250E208(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82513868
	if (!ctx.cr0.eq) goto loc_82513868;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82513868
	if (ctx.cr0.eq) goto loc_82513868;
loc_82513658:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82513660:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825136b8
	if (ctx.cr6.eq) goto loc_825136B8;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r6,r22,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825137f8
	if (!ctx.cr0.eq) goto loc_825137F8;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82513660
	goto loc_82513660;
loc_825136B8:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82514404
	if (!ctx.cr6.eq) goto loc_82514404;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
loc_825136C8:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825137d4
	if (ctx.cr6.eq) goto loc_825137D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825137c0
	if (ctx.cr6.eq) goto loc_825137C0;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x825136fc
	goto loc_825136FC;
loc_825136F4:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_825136FC:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825136f4
	if (!ctx.cr6.eq) goto loc_825136F4;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513740
	if (ctx.cr0.eq) goto loc_82513740;
	// rlwinm. r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513740
	if (ctx.cr0.eq) goto loc_82513740;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82513740:
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513754
	if (ctx.cr0.eq) goto loc_82513754;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82513754:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513768
	if (ctx.cr0.eq) goto loc_82513768;
	// rlwinm. r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82513768
	if (ctx.cr0.eq) goto loc_82513768;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82513768:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r10,r8,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// rlwinm r5,r10,26,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwinm r4,r10,28,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r3,r3,27,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0xFF;
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r9,r3,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r5,r9,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825137C0:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825136c8
	if (!ctx.cr6.eq) goto loc_825136C8;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// b 0x825136c8
	goto loc_825136C8;
loc_825137D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x825137DC;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// beq 0x82514410
	if (ctx.cr0.eq) goto loc_82514410;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x825137F8;
	sub_825C2288(ctx, base);
loc_825137F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82513838
	if (ctx.cr6.eq) goto loc_82513838;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251382c
	if (!ctx.cr6.eq) goto loc_8251382C;
loc_82513820:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_8251382C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82513868
	if (!ctx.cr0.eq) goto loc_82513868;
	// b 0x8251385c
	goto loc_8251385C;
loc_82513838:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
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
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82513820
	if (ctx.cr6.eq) goto loc_82513820;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82513868
	if (!ctx.cr6.eq) goto loc_82513868;
loc_8251385C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82513658
	if (!ctx.cr6.eq) goto loc_82513658;
loc_82513868:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// subfic r25,r25,3
	ctx.xer.ca = r25.u32 <= 3;
	r25.u64 = static_cast<uint64_t>(3) - r25.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// oris r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 12582912;
	// stw r19,112(r30)
	REX_STORE_U32(r30.u32 + 112, r19.u32);
	// oris r10,r10,2176
	ctx.r10.u64 = ctx.r10.u64 | 142606336;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_82513888:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825138a4
	if (!ctx.cr0.eq) goto loc_825138A4;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251358c
	if (!ctx.cr6.eq) goto loc_8251358C;
loc_825138A4:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x825138b8
	if (!ctx.cr6.gt) goto loc_825138B8;
	// lwz r11,44(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 44);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,44(r18)
	REX_STORE_U32(r18.u32 + 44, ctx.r11.u32);
loc_825138B8:
	// lwz r11,40(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,40(r18)
	REX_STORE_U32(r18.u32 + 40, ctx.r11.u32);
	// b 0x825143ac
	goto loc_825143AC;
loc_825138C8:
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r11.u32);
	// bl 0x8250bc38
	ctx.lr = 0x825138E0;
	sub_8250BC38(ctx, base);
	// lwz r11,68(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 68);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r21
	r25.u64 = r21.u64;
	// beq 0x82513924
	if (ctx.cr0.eq) goto loc_82513924;
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r25,r10,r11
	r25.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82513924:
	// rlwinm r27,r19,0,0,30
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x825139c8
	goto loc_825139C8;
loc_82513930:
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r24,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825139c0
	if (ctx.cr0.eq) goto loc_825139C0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c6c90
	ctx.lr = 0x8251397C;
	sub_825C6C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514418
	if (ctx.cr0.eq) goto loc_82514418;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825139c0
	if (!ctx.cr0.eq) goto loc_825139C0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825139c0
	if (ctx.cr0.eq) goto loc_825139C0;
loc_82513998:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x825139e0
	if (ctx.cr6.eq) goto loc_825139E0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825139c0
	if (!ctx.cr0.eq) goto loc_825139C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82513998
	if (!ctx.cr6.eq) goto loc_82513998;
loc_825139C0:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825139C8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82513c50
	if (!ctx.cr0.eq) goto loc_82513C50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne cr6,0x82513930
	if (!ctx.cr6.eq) goto loc_82513930;
	// b 0x82513c50
	goto loc_82513C50;
loc_825139E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba3a0
	ctx.lr = 0x82513A04;
	sub_825BA3A0(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x824f6ec8
	ctx.lr = 0x82513A0C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251442c
	if (ctx.cr0.eq) goto loc_8251442C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
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
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82513a5c
	if (!ctx.cr6.eq) goto loc_82513A5C;
	// lwz r10,12(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 12);
loc_82513A38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82513a54
	if (ctx.cr6.eq) goto loc_82513A54;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82513a58
	if (!ctx.cr6.eq) goto loc_82513A58;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82513a38
	goto loc_82513A38;
loc_82513A54:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82513A58:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82513A5C:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c6828
	ctx.lr = 0x82513A6C;
	sub_825C6828(ctx, base);
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
loc_82513A70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82513a94
	if (ctx.cr6.eq) goto loc_82513A94;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82513a8c
	if (ctx.cr6.eq) goto loc_82513A8C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82513a70
	goto loc_82513A70;
loc_82513A8C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x82513a98
	goto loc_82513A98;
loc_82513A94:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82513A98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513ab0
	if (!ctx.cr0.eq) goto loc_82513AB0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82513AB0;
	sub_825C69A0(ctx, base);
loc_82513AB0:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82513ac0
	if (!ctx.cr6.eq) goto loc_82513AC0;
	// stw r28,0(r20)
	REX_STORE_U32(r20.u32 + 0, r28.u32);
loc_82513AC0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x82513c34
	goto loc_82513C34;
loc_82513AC8:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x82513c48
	if (ctx.cr6.eq) goto loc_82513C48;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r24,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513c2c
	if (ctx.cr0.eq) goto loc_82513C2C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_82513B14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82513b38
	if (ctx.cr6.eq) goto loc_82513B38;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82513b30
	if (ctx.cr6.eq) goto loc_82513B30;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82513b14
	goto loc_82513B14;
loc_82513B30:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x82513b3c
	goto loc_82513B3C;
loc_82513B38:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82513B3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513c2c
	if (ctx.cr0.eq) goto loc_82513C2C;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x82513B54;
	sub_825C6828(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_82513B58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82513b7c
	if (ctx.cr6.eq) goto loc_82513B7C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82513b74
	if (ctx.cr6.eq) goto loc_82513B74;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82513b58
	goto loc_82513B58;
loc_82513B74:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x82513b80
	goto loc_82513B80;
loc_82513B7C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82513B80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513b98
	if (!ctx.cr0.eq) goto loc_82513B98;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82513B98;
	sub_825C69A0(ctx, base);
loc_82513B98:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513c2c
	if (!ctx.cr0.eq) goto loc_82513C2C;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82513c2c
	if (ctx.cr0.eq) goto loc_82513C2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82513bf0
	if (ctx.cr6.eq) goto loc_82513BF0;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82513bf0
	if (ctx.cr6.eq) goto loc_82513BF0;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82513bf0
	if (ctx.cr6.eq) goto loc_82513BF0;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82513bf0
	if (ctx.cr6.eq) goto loc_82513BF0;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82513bf0
	if (ctx.cr6.eq) goto loc_82513BF0;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x82513bf4
	if (!ctx.cr6.eq) goto loc_82513BF4;
loc_82513BF0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82513BF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513c2c
	if (ctx.cr0.eq) goto loc_82513C2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82513C14;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82513c2c
	if (!ctx.cr6.eq) goto loc_82513C2C;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_82513C2C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82513C34:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82513c48
	if (!ctx.cr0.eq) goto loc_82513C48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne cr6,0x82513ac8
	if (!ctx.cr6.eq) goto loc_82513AC8;
loc_82513C48:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82513C50;
	sub_8257DFD8(ctx, base);
loc_82513C50:
	// lwz r31,4(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r24
	r27.u64 = r24.u64;
	// bne 0x82514438
	if (!ctx.cr0.eq) goto loc_82514438;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82514438
	if (ctx.cr6.eq) goto loc_82514438;
loc_82513C70:
	// lwz r11,48(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 48);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// slw r6,r24,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r8,13
	ctx.r11.u64 = ctx.r8.u32 & 0x7FFFF;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513da4
	if (ctx.cr0.eq) goto loc_82513DA4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513cf0
	if (ctx.cr0.eq) goto loc_82513CF0;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subf r11,r31,r25
	ctx.r11.u64 = r25.u64 - r31.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r21,112(r31)
	REX_STORE_U32(r31.u32 + 112, r21.u32);
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r21,108(r31)
	REX_STORE_U32(r31.u32 + 108, r21.u32);
	// rlwinm r10,r10,0,10,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC3FFFFF;
	// stw r21,72(r31)
	REX_STORE_U32(r31.u32 + 72, r21.u32);
	// rlwinm r9,r9,0,6,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// and r27,r11,r27
	r27.u64 = ctx.r11.u64 & r27.u64;
loc_82513CF0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82513da4
	if (!ctx.cr6.eq) goto loc_82513DA4;
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82513D4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82513da0
	if (ctx.cr6.eq) goto loc_82513DA0;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6c90
	ctx.lr = 0x82513D64;
	sub_825C6C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513d98
	if (!ctx.cr0.eq) goto loc_82513D98;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
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
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82513da4
	if (ctx.cr0.eq) goto loc_82513DA4;
loc_82513D98:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82513d4c
	goto loc_82513D4C;
loc_82513DA0:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82513DA4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513dbc
	if (!ctx.cr0.eq) goto loc_82513DBC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82513c70
	if (!ctx.cr6.eq) goto loc_82513C70;
loc_82513DBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82514438
	if (ctx.cr6.eq) goto loc_82514438;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e208
	ctx.lr = 0x82513DE0;
	sub_8250E208(ctx, base);
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825143ac
	if (!ctx.cr0.eq) goto loc_825143AC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82513E1C;
	sub_824E4368(ctx, base);
loc_82513E1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x824f71b8
	ctx.lr = 0x82513E2C;
	sub_824F71B8(ctx, base);
	// addi r10,r23,-20
	ctx.r10.s64 = r23.s64 + -20;
	// lwz r11,616(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 616);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82513e88
	if (ctx.cr6.eq) goto loc_82513E88;
	// b 0x82513e7c
	goto loc_82513E7C;
loc_82513E54:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// b 0x82513e68
	goto loc_82513E68;
loc_82513E5C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82513e74
	if (ctx.cr0.eq) goto loc_82513E74;
loc_82513E68:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82513e5c
	if (!ctx.cr6.eq) goto loc_82513E5C;
loc_82513E74:
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82513E7C:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513e54
	if (!ctx.cr0.eq) goto loc_82513E54;
loc_82513E88:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82513ef4
	if (ctx.cr6.eq) goto loc_82513EF4;
	// b 0x82513ec0
	goto loc_82513EC0;
loc_82513E98:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x82513eac
	goto loc_82513EAC;
loc_82513EA0:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82513eb8
	if (ctx.cr0.eq) goto loc_82513EB8;
loc_82513EAC:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82513ea0
	if (!ctx.cr6.eq) goto loc_82513EA0;
loc_82513EB8:
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82513EC0:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513e98
	if (!ctx.cr0.eq) goto loc_82513E98;
	// b 0x82513ef4
	goto loc_82513EF4;
loc_82513ED0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82513ee4
	goto loc_82513EE4;
loc_82513ED8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82513ef0
	if (ctx.cr0.eq) goto loc_82513EF0;
loc_82513EE4:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82513ed8
	if (!ctx.cr6.eq) goto loc_82513ED8;
loc_82513EF0:
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_82513EF4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82513ed0
	if (!ctx.cr0.eq) goto loc_82513ED0;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82514444
	if (!ctx.cr0.eq) goto loc_82514444;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82514444
	if (ctx.cr0.eq) goto loc_82514444;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x82514444
	if (!ctx.cr6.eq) goto loc_82514444;
	// lwz r11,76(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514188
	if (ctx.cr0.eq) goto loc_82514188;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82514450
	if (ctx.cr6.eq) goto loc_82514450;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82514450
	if (!ctx.cr6.eq) goto loc_82514450;
	// rlwinm. r11,r9,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82514048
	if (!ctx.cr0.eq) goto loc_82514048;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82514048
	if (!ctx.cr0.eq) goto loc_82514048;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x82513F84;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// ori r6,r9,64
	ctx.r6.u64 = ctx.r9.u64 | 64;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82503400
	ctx.lr = 0x82513FDC;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82513FE8;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r10,76(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 76);
	// rlwinm r10,r10,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8250ac70
	ctx.lr = 0x82514014;
	sub_8250AC70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82514024;
	sub_8250AD28(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwimi r10,r11,30,7,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1FFE000) | (ctx.r10.u64 & 0xFFFFFFFFFE001FFF);
	// rlwimi r10,r24,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r11,r24,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x825143ac
	goto loc_825143AC;
loc_82514048:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82514060
	if (!ctx.cr6.eq) goto loc_82514060;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825599f0
	ctx.lr = 0x82514060;
	sub_825599F0(ctx, base);
loc_82514060:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250bb20
	ctx.lr = 0x8251406C;
	sub_8250BB20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r7,66
	ctx.r7.s64 = 66;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e208
	ctx.lr = 0x8251408C;
	sub_8250E208(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb908
	ctx.lr = 0x82514098;
	sub_825BB908(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825140AC;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825140B8;
	sub_8250AD28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825140C4;
	sub_8250AB60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ce40
	ctx.lr = 0x825140D4;
	sub_8250CE40(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r5,96(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825140fc
	if (ctx.cr6.eq) goto loc_825140FC;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8250b4d8
	ctx.lr = 0x825140FC;
	sub_8250B4D8(ctx, base);
loc_825140FC:
	// stw r30,96(r19)
	REX_STORE_U32(r19.u32 + 96, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82514168
	if (!ctx.cr0.eq) goto loc_82514168;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82514168
	if (ctx.cr0.eq) goto loc_82514168;
loc_82514120:
	// lwz r10,616(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 616);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// divw r9,r10,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(ctx.r10.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r10.s32 / r17.s32 : 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82514150
	if (ctx.cr0.eq) goto loc_82514150;
	// stw r19,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r19.u32);
loc_82514150:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82514168
	if (!ctx.cr0.eq) goto loc_82514168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82514120
	if (!ctx.cr6.eq) goto loc_82514120;
loc_82514168:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e2f0
	ctx.lr = 0x82514184;
	sub_8250E2F0(ctx, base);
	// b 0x825143ac
	goto loc_825143AC;
loc_82514188:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825143ac
	if (ctx.cr0.eq) goto loc_825143AC;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251445c
	if (ctx.cr6.eq) goto loc_8251445C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251445c
	if (!ctx.cr6.eq) goto loc_8251445C;
	// rlwinm. r11,r9,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251427c
	if (!ctx.cr0.eq) goto loc_8251427C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x825141CC;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// ori r6,r9,64
	ctx.r6.u64 = ctx.r9.u64 | 64;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82503400
	ctx.lr = 0x82514224;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82514230;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8251424C;
	sub_8250AC70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8251425C;
	sub_8250AD28(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwimi r10,r11,30,7,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1FFE000) | (ctx.r10.u64 & 0xFFFFFFFFFE001FFF);
	// rlwimi r10,r24,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r11,r24,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8251427C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825142f0
	if (!ctx.cr0.eq) goto loc_825142F0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825142f0
	if (ctx.cr0.eq) goto loc_825142F0;
loc_82514290:
	// lwz r10,616(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 616);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// divw r9,r10,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(ctx.r10.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r10.s32 / r17.s32 : 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825142d8
	if (ctx.cr0.eq) goto loc_825142D8;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r19,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r19.u32);
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
loc_825142D8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825142f0
	if (!ctx.cr0.eq) goto loc_825142F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82514290
	if (!ctx.cr6.eq) goto loc_82514290;
loc_825142F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8251430C;
	sub_825C1A18(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82514320;
	sub_8250AC70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ce40
	ctx.lr = 0x82514330;
	sub_8250CE40(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r5,96(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82514358
	if (ctx.cr6.eq) goto loc_82514358;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8250b4d8
	ctx.lr = 0x82514358;
	sub_8250B4D8(ctx, base);
loc_82514358:
	// stw r30,96(r19)
	REX_STORE_U32(r19.u32 + 96, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e2f0
	ctx.lr = 0x82514378;
	sub_8250E2F0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82514390
	if (!ctx.cr6.eq) goto loc_82514390;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825599f0
	ctx.lr = 0x82514390;
	sub_825599F0(ctx, base);
loc_82514390:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r7,66
	ctx.r7.s64 = 66;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e208
	ctx.lr = 0x825143AC;
	sub_8250E208(ctx, base);
loc_825143AC:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82514468
	if (!ctx.cr0.eq) goto loc_82514468;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82514468
	if (ctx.cr6.eq) goto loc_82514468;
	// li r24,1
	r24.s64 = 1;
	// b 0x82512a64
	goto loc_82512A64;
loc_825143D0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825143DC;
	sub_824E4368(ctx, base);
loc_825143DC:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825143E8;
	sub_824E4368(ctx, base);
loc_825143E8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x825143F4;
	sub_824E4368(ctx, base);
loc_825143F4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x825143FC;
	sub_824E4368(ctx, base);
loc_825143FC:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// bl 0x824e4368
	ctx.lr = 0x82514404;
	sub_824E4368(ctx, base);
loc_82514404:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514410;
	sub_824E4368(ctx, base);
loc_82514410:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82514418;
	sub_824E4368(ctx, base);
loc_82514418:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-21900
	ctx.r5.s64 = ctx.r11.s64 + -21900;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251442C;
	sub_824E4368(ctx, base);
loc_8251442C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514438;
	sub_824E4368(ctx, base);
loc_82514438:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514444;
	sub_824E4368(ctx, base);
loc_82514444:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514450;
	sub_824E4368(ctx, base);
loc_82514450:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251445C;
	sub_824E4368(ctx, base);
loc_8251445C:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514468;
	sub_824E4368(ctx, base);
loc_82514468:
	// li r24,1
	r24.s64 = 1;
loc_8251446C:
	// lwz r11,44(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514824
	if (ctx.cr0.eq) goto loc_82514824;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825146b4
	if (!ctx.cr0.eq) goto loc_825146B4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825146b4
	if (ctx.cr0.eq) goto loc_825146B4;
loc_82514490:
	// lwz r29,96(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82514698
	if (ctx.cr6.eq) goto loc_82514698;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8448
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8448, ctx.xer);
	// bne cr6,0x82514698
	if (!ctx.cr6.eq) goto loc_82514698;
	// lwz r30,8(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_825144B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82514698
	if (ctx.cr6.eq) goto loc_82514698;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82514510
	goto loc_82514510;
loc_825144C0:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// beq cr6,0x82514524
	if (ctx.cr6.eq) goto loc_82514524;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82514520
	if (!ctx.cr6.eq) goto loc_82514520;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825144f4
	if (ctx.cr6.eq) goto loc_825144F4;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne cr6,0x825144f8
	if (!ctx.cr6.eq) goto loc_825144F8;
loc_825144F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825144F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82514520
	if (!ctx.cr0.eq) goto loc_82514520;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82514510
	if (ctx.cr6.eq) goto loc_82514510;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82514510:
	// lwz r4,96(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825144c0
	if (!ctx.cr6.eq) goto loc_825144C0;
	// b 0x825145c4
	goto loc_825145C4;
loc_82514520:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82514524:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825145c4
	if (ctx.cr6.eq) goto loc_825145C4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x82514534;
	sub_8250A7B0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// beq cr6,0x82514550
	if (ctx.cr6.eq) goto loc_82514550;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x82514708
	if (!ctx.cr6.eq) goto loc_82514708;
loc_82514550:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x825145ac
	goto loc_825145AC;
loc_82514558:
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825145a8
	if (ctx.cr6.eq) goto loc_825145A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8448
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8448, ctx.xer);
	// bne cr6,0x825145a8
	if (!ctx.cr6.eq) goto loc_825145A8;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82514578:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825145a8
	if (ctx.cr6.eq) goto loc_825145A8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,96(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825145a0
	if (ctx.cr6.eq) goto loc_825145A0;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,8320
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8320, ctx.xer);
	// beq cr6,0x825145cc
	if (ctx.cr6.eq) goto loc_825145CC;
loc_825145A0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82514578
	goto loc_82514578;
loc_825145A8:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_825145AC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825145c4
	if (!ctx.cr0.eq) goto loc_825145C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82514558
	if (!ctx.cr6.eq) goto loc_82514558;
loc_825145C4:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x825144b0
	goto loc_825144B0;
loc_825145CC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x825145D4;
	sub_8250A7B0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// beq cr6,0x825145ec
	if (ctx.cr6.eq) goto loc_825145EC;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x82514714
	if (!ctx.cr6.eq) goto loc_82514714;
loc_825145EC:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514720
	if (ctx.cr0.eq) goto loc_82514720;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8251463c
	goto loc_8251463C;
loc_82514634:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8251463C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82514634
	if (!ctx.cr6.eq) goto loc_82514634;
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
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82514678
	goto loc_82514678;
loc_82514670:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82514678:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82514670
	if (!ctx.cr6.eq) goto loc_82514670;
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
loc_82514698:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825146b4
	if (!ctx.cr0.eq) goto loc_825146B4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82514490
	if (!ctx.cr6.eq) goto loc_82514490;
loc_825146B4:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82514824
	if (!ctx.cr0.eq) goto loc_82514824;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82514824
	if (ctx.cr0.eq) goto loc_82514824;
loc_825146CC:
	// lwz r28,96(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82514808
	if (ctx.cr6.eq) goto loc_82514808;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,8320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8320, ctx.xer);
	// bne cr6,0x82514808
	if (!ctx.cr6.eq) goto loc_82514808;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514808
	if (ctx.cr0.eq) goto loc_82514808;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x825146FC;
	sub_8250A7B0(ctx, base);
	// lwz r29,52(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82514800
	goto loc_82514800;
loc_82514708:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514714;
	sub_824E4368(ctx, base);
loc_82514714:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82514720;
	sub_824E4368(ctx, base);
loc_82514720:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251472C;
	sub_824E4368(ctx, base);
loc_8251472C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x82514738;
	sub_8250B3D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82514758
	if (ctx.cr0.eq) goto loc_82514758;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82514758
	if (ctx.cr0.eq) goto loc_82514758;
	// bl 0x824ff9c0
	ctx.lr = 0x82514750;
	sub_824FF9C0(ctx, base);
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8251475c
	goto loc_8251475C;
loc_82514758:
	// lwz r31,96(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 96);
loc_8251475C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825147a0
	if (ctx.cr6.eq) goto loc_825147A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8251476C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825147a0
	if (ctx.cr0.eq) goto loc_825147A0;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82514808
	if (ctx.cr6.eq) goto loc_82514808;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825147a0
	if (ctx.cr0.eq) goto loc_825147A0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e400
	ctx.lr = 0x8251479C;
	sub_8250E400(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825147A0:
	// lwz r31,28(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825147fc
	if (!ctx.cr0.eq) goto loc_825147FC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825147fc
	if (ctx.cr0.eq) goto loc_825147FC;
loc_825147B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13952, ctx.xer);
	// bne cr6,0x825147e4
	if (!ctx.cr6.eq) goto loc_825147E4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82514808
	if (ctx.cr6.eq) goto loc_82514808;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250e400
	ctx.lr = 0x825147E0;
	sub_8250E400(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825147E4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825147fc
	if (!ctx.cr0.eq) goto loc_825147FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825147b4
	if (!ctx.cr6.eq) goto loc_825147B4;
loc_825147FC:
	// lwz r29,52(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 52);
loc_82514800:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8251472c
	if (!ctx.cr6.eq) goto loc_8251472C;
loc_82514808:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82514824
	if (!ctx.cr0.eq) goto loc_82514824;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825146cc
	if (!ctx.cr6.eq) goto loc_825146CC;
loc_82514824:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8256c548
	ctx.lr = 0x82514830;
	sub_8256C548(ctx, base);
loc_82514830:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8264E678) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264E6A4;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e6b8
	if (ctx.cr0.lt) goto loc_8264E6B8;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E6B8;
	sub_8264FAD8(ctx, base);
loc_8264E6B8:
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

DEFINE_REX_FUNC(sub_8264EE08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264EE10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x8264ee78
	if (ctx.cr6.gt) goto loc_8264EE78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x8264e648
	ctx.lr = 0x8264EE34;
	sub_8264E648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264ee80
	if (ctx.cr0.lt) goto loc_8264EE80;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8264ee50
	if (ctx.cr6.eq) goto loc_8264EE50;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8264EE50:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne 0x8264ee80
	if (!ctx.cr0.eq) goto loc_8264EE80;
loc_8264EE78:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8264EE80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82651D80) {
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
	ctx.lr = 0x82651D88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// blt cr6,0x82651e88
	if (ctx.cr6.lt) goto loc_82651E88;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// ble cr6,0x82651dd4
	if (!ctx.cr6.gt) goto loc_82651DD4;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bne cr6,0x82651e88
	if (!ctx.cr6.eq) goto loc_82651E88;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82651e74
	if (ctx.cr6.lt) goto loc_82651E74;
	// lwz r11,100(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82651e7c
	goto loc_82651E7C;
loc_82651DD4:
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82651e88
	if (!ctx.cr0.eq) goto loc_82651E88;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// ori r30,r11,65534
	r30.u64 = ctx.r11.u64 | 65534;
loc_82651DF0:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// bne cr6,0x82651e00
	if (!ctx.cr6.eq) goto loc_82651E00;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// b 0x82651e20
	goto loc_82651E20;
loc_82651E00:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// bne cr6,0x82651e14
	if (!ctx.cr6.eq) goto loc_82651E14;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// oris r5,r11,65016
	ctx.r5.u64 = ctx.r11.u64 | 4260888576;
	// b 0x82651e24
	goto loc_82651E24;
loc_82651E14:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,65530
	ctx.r11.u64 = ctx.r11.u64 | 65530;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
loc_82651E20:
	// oris r5,r11,65532
	ctx.r5.u64 = ctx.r11.u64 | 4294705152;
loc_82651E24:
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// lwz r4,100(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 100);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,400(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 400);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// bl 0x8265d780
	ctx.lr = 0x82651E40;
	sub_8265D780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82651e90
	if (ctx.cr0.lt) goto loc_82651E90;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82651df0
	if (ctx.cr6.lt) goto loc_82651DF0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82651e74
	if (ctx.cr6.lt) goto loc_82651E74;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82651e7c
	goto loc_82651E7C;
loc_82651E74:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_82651E7C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// b 0x82651e90
	goto loc_82651E90;
loc_82651E88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82651E90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8265B4F8) {
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
	ctx.lr = 0x8265B500;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8265b54c
	if (!ctx.cr6.eq) goto loc_8265B54C;
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// ori r4,r4,1226
	ctx.r4.u64 = ctx.r4.u64 | 1226;
	// bl 0x82654028
	ctx.lr = 0x8265B524;
	sub_82654028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265b6e0
	if (ctx.cr0.lt) goto loc_8265B6E0;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x82654550
	ctx.lr = 0x8265B548;
	sub_82654550(ctx, base);
	// b 0x8265b6e0
	goto loc_8265B6E0;
loc_8265B54C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8265b568
	if (ctx.cr6.lt) goto loc_8265B568;
loc_8265B554:
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// bl 0x8265f6a8
	ctx.lr = 0x8265B55C;
	sub_8265F6A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// b 0x8265b6dc
	goto loc_8265B6DC;
loc_8265B568:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8265b57c
	if (!ctx.cr6.eq) goto loc_8265B57C;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b554
	if (!ctx.cr0.eq) goto loc_8265B554;
loc_8265B57C:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r27,r31,248
	r27.s64 = r31.s64 + 248;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8265b63c
	if (ctx.cr6.eq) goto loc_8265B63C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8265b63c
	if (ctx.cr0.eq) goto loc_8265B63C;
loc_8265B59C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r29,r28,-92
	r29.s64 = r28.s64 + -92;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// subf r9,r10,r27
	ctx.r9.u64 = r27.u64 - ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r10
	r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// beq cr6,0x8265b634
	if (ctx.cr6.eq) goto loc_8265B634;
	// lwz r4,100(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b5d8
	if (!ctx.cr6.eq) goto loc_8265B5D8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8265b634
	if (!ctx.cr6.eq) goto loc_8265B634;
loc_8265B5D8:
	// lwz r11,396(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b634
	if (ctx.cr0.eq) goto loc_8265B634;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b630
	if (ctx.cr6.eq) goto loc_8265B630;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265b60c
	if (ctx.cr6.eq) goto loc_8265B60C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,100(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 100);
	// bl 0x8265d758
	ctx.lr = 0x8265B604;
	sub_8265D758(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8265b614
	goto loc_8265B614;
loc_8265B60C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8265B614:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265b630
	if (ctx.cr6.lt) goto loc_8265B630;
	// bne cr6,0x8265b634
	if (!ctx.cr6.eq) goto loc_8265B634;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b634
	if (!ctx.cr6.lt) goto loc_8265B634;
loc_8265B630:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8265B634:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8265b59c
	if (!ctx.cr6.eq) goto loc_8265B59C;
loc_8265B63C:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// beq 0x8265b6b4
	if (ctx.cr0.eq) goto loc_8265B6B4;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265f6a8
	ctx.lr = 0x8265B684;
	sub_8265F6A8(ctx, base);
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264fec0
	ctx.lr = 0x8265B690;
	sub_8264FEC0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x826a1e70
	ctx.lr = 0x8265B6A0;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a750
	ctx.lr = 0x8265B6A8;
	sub_8265A750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265b6c4
	if (!ctx.cr0.lt) goto loc_8265B6C4;
	// b 0x8265b6e0
	goto loc_8265B6E0;
loc_8265B6B4:
	// bl 0x8265f6a8
	ctx.lr = 0x8265B6B8;
	sub_8265F6A8(ctx, base);
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264fec0
	ctx.lr = 0x8265B6C4;
	sub_8264FEC0(ctx, base);
loc_8265B6C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B6DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B6E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82664C58) {
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
	// lwz r4,88(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82664cac
	if (ctx.cr6.eq) goto loc_82664CAC;
loc_82664C80:
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
	// bne 0x82664c80
	if (!ctx.cr0.eq) goto loc_82664C80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82664cac
	if (!ctx.cr6.eq) goto loc_82664CAC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82664CAC;
	sub_8265D850(ctx, base);
loc_82664CAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82664cd0
	if (ctx.cr6.eq) goto loc_82664CD0;
loc_82664CB4:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82664cb4
	if (!ctx.cr0.eq) goto loc_82664CB4;
loc_82664CD0:
	// stw r31,88(r30)
	REX_STORE_U32(r30.u32 + 88, r31.u32);
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

DEFINE_REX_FUNC(sub_8266ADB8) {
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
	ctx.lr = 0x8266ADC0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r24,128
	r24.s64 = 128;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r23,r10,1
	r23.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// beq 0x8266adec
	if (ctx.cr0.eq) goto loc_8266ADEC;
	// li r24,1153
	r24.s64 = 1153;
loc_8266ADEC:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266adf8
	if (ctx.cr0.eq) goto loc_8266ADF8;
	// ori r24,r24,2
	r24.u64 = r24.u64 | 2;
loc_8266ADF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ae0c
	if (ctx.cr0.eq) goto loc_8266AE0C;
	// ori r24,r24,1024
	r24.u64 = r24.u64 | 1024;
loc_8266AE0C:
	// rlwinm. r11,r24,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ae38
	if (ctx.cr0.eq) goto loc_8266AE38;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82675cf8
	ctx.lr = 0x8266AE20;
	sub_82675CF8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r25,r10,r11
	r25.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8266ae3c
	goto loc_8266AE3C;
loc_8266AE38:
	// li r25,0
	r25.s64 = 0;
loc_8266AE3C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82676128
	ctx.lr = 0x8266AE50;
	sub_82676128(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266ae64
	if (!ctx.cr0.eq) goto loc_8266AE64;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8266b02c
	goto loc_8266B02C;
loc_8266AE64:
	// addi r11,r29,28
	ctx.r11.s64 = r29.s64 + 28;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8266af9c
	if (ctx.cr6.eq) goto loc_8266AF9C;
	// li r27,4
	r27.s64 = 4;
	// li r26,0
	r26.s64 = 0;
loc_8266AE88:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r8,200(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 200);
	// clrlwi r9,r27,29
	ctx.r9.u64 = r27.u32 & 0x7;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r31,r26,r8
	r31.u64 = REX_LOAD_U32(r26.u32 + ctx.r8.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266af84
	if (ctx.cr0.eq) goto loc_8266AF84;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266af2c
	if (!ctx.cr0.eq) goto loc_8266AF2C;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266af2c
	if (!ctx.cr6.eq) goto loc_8266AF2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82670660
	ctx.lr = 0x8266AED4;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266af2c
	if (ctx.cr0.eq) goto loc_8266AF2C;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826711d8
	ctx.lr = 0x8266AEF4;
	sub_826711D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,16(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r11,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// bl 0x82671478
	ctx.lr = 0x8266AF14;
	sub_82671478(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82671270
	ctx.lr = 0x8266AF20;
	sub_82671270(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8266afe4
	if (ctx.cr0.lt) goto loc_8266AFE4;
	// b 0x8266af84
	goto loc_8266AF84;
loc_8266AF2C:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lis r7,-32646
	ctx.r7.s64 = -2139488256;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266af44
	if (ctx.cr0.eq) goto loc_8266AF44;
	// ori r7,r7,4113
	ctx.r7.u64 = ctx.r7.u64 | 4113;
	// b 0x8266af5c
	goto loc_8266AF5C;
loc_8266AF44:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266af58
	if (ctx.cr6.eq) goto loc_8266AF58;
	// ori r7,r7,4120
	ctx.r7.u64 = ctx.r7.u64 | 4120;
	// b 0x8266af5c
	goto loc_8266AF5C;
loc_8266AF58:
	// ori r7,r7,4101
	ctx.r7.u64 = ctx.r7.u64 | 4101;
loc_8266AF5C:
	// rlwinm. r11,r24,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266af84
	if (ctx.cr0.eq) goto loc_8266AF84;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82669e58
	ctx.lr = 0x8266AF7C;
	sub_82669E58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266afe4
	if (!ctx.cr0.eq) goto loc_8266AFE4;
loc_8266AF84:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266ae88
	if (ctx.cr6.lt) goto loc_8266AE88;
loc_8266AF9C:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266AFA0:
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
	// bne 0x8266afa0
	if (!ctx.cr0.eq) goto loc_8266AFA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266afdc
	if (!ctx.cr6.eq) goto loc_8266AFDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AFDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AFDC:
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_8266AFE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8266b02c
	if (ctx.cr6.eq) goto loc_8266B02C;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266AFF0:
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
	// bne 0x8266aff0
	if (!ctx.cr0.eq) goto loc_8266AFF0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266b02c
	if (!ctx.cr6.eq) goto loc_8266B02C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B02C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82679220) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1012);
	// addi r10,r3,1008
	ctx.r10.s64 = ctx.r3.s64 + 1008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82679284
	if (ctx.cr6.eq) goto loc_82679284;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82679284
	if (ctx.cr0.eq) goto loc_82679284;
	// lwz r8,60(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
loc_8267923C:
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82679270
	if (!ctx.cr6.lt) goto loc_82679270;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826792a4
	if (!ctx.cr6.eq) goto loc_826792A4;
	// lhz r9,332(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 332);
	// lhz r7,316(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 316);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// blt cr6,0x826792a4
	if (ctx.cr6.lt) goto loc_826792A4;
loc_82679270:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82679284
	if (ctx.cr6.eq) goto loc_82679284;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267923c
	if (!ctx.cr0.eq) goto loc_8267923C;
loc_82679284:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r10,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r9,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826792A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r9,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267C270) {
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
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267c304
	if (ctx.cr6.eq) goto loc_8267C304;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r3,r3,612
	ctx.r3.s64 = ctx.r3.s64 + 612;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 616);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,616(r30)
	REX_STORE_U32(r30.u32 + 616, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8267c304
	if (!ctx.cr6.lt) goto loc_8267C304;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x826793d0
	ctx.lr = 0x8267C304;
	sub_826793D0(ctx, base);
loc_8267C304:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,592(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 592);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r10,2,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x826830f8
	ctx.lr = 0x8267C328;
	sub_826830F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267C330;
	sub_82676D18(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,668(r30)
	REX_STORE_U32(r30.u32 + 668, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82681DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82681DD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82681e30
	if (ctx.cr0.eq) goto loc_82681E30;
	// addi r30,r3,72
	r30.s64 = ctx.r3.s64 + 72;
loc_82681DF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681e1c
	if (ctx.cr6.eq) goto loc_82681E1C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681E1C:
	// lhz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 328);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82681df8
	if (ctx.cr6.lt) goto loc_82681DF8;
loc_82681E30:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	REX_STORE_U16(r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82683ED8) {
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
	// ld r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82683f14
	if (!ctx.cr6.lt) goto loc_82683F14;
	// bl 0x823ef900
	ctx.lr = 0x82683F04;
	sub_823EF900(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82682d50
	ctx.lr = 0x82683F14;
	sub_82682D50(ctx, base);
loc_82683F14:
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

DEFINE_REX_FUNC(sub_82685C58) {
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
	ctx.lr = 0x82685C60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,64(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,560(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,560(r11)
	REX_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// beq cr6,0x82685c94
	if (ctx.cr6.eq) goto loc_82685C94;
	// lwz r10,564(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,564(r11)
	REX_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
loc_82685C94:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r25,r31,48
	r25.s64 = r31.s64 + 48;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subf r7,r8,r25
	ctx.r7.u64 = r25.u64 - ctx.r8.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x823ef900
	ctx.lr = 0x82685CE0;
	sub_823EF900(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r30,r28,12
	r30.s64 = r28.s64 + 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82685dc4
	if (ctx.cr6.eq) goto loc_82685DC4;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82685da4
	if (!ctx.cr6.eq) goto loc_82685DA4;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r9,r9,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82685da4
	if (!ctx.cr0.eq) goto loc_82685DA4;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82685d58
	if (!ctx.cr6.eq) goto loc_82685D58;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82682a90
	ctx.lr = 0x82685D54;
	sub_82682A90(ctx, base);
	// b 0x82685da4
	goto loc_82685DA4;
loc_82685D58:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82685da4
	if (ctx.cr6.eq) goto loc_82685DA4;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x826829f0
	ctx.lr = 0x82685DA4;
	sub_826829F0(ctx, base);
loc_82685DA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,0(r30)
	REX_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	REX_STORE_U32(r30.u32 + 4, r30.u32);
loc_82685DC4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x82682dc0
	ctx.lr = 0x82685DD4;
	sub_82682DC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// lwz r4,64(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 64);
	// bl 0x82682dc0
	ctx.lr = 0x82685DE4;
	sub_82682DC0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82685f40
	if (ctx.cr6.eq) goto loc_82685F40;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82685f40
	if (!ctx.cr0.eq) goto loc_82685F40;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82685e10
	if (ctx.cr6.eq) goto loc_82685E10;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
	// bne 0x82685e14
	if (!ctx.cr0.eq) goto loc_82685E14;
loc_82685E10:
	// li r26,0
	r26.s64 = 0;
loc_82685E14:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82685e78
	if (!ctx.cr6.eq) goto loc_82685E78;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82685e38
	if (!ctx.cr6.eq) goto loc_82685E38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82685610
	ctx.lr = 0x82685E34;
	sub_82685610(ctx, base);
	// b 0x82685e78
	goto loc_82685E78;
loc_82685E38:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// ld r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 24);
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r3,r9,540
	ctx.r3.s64 = ctx.r9.s64 + 540;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82685e5c
	if (ctx.cr6.lt) goto loc_82685E5C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82685E5C:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82685e74
	if (ctx.cr6.eq) goto loc_82685E74;
	// bl 0x826793d0
	ctx.lr = 0x82685E70;
	sub_826793D0(ctx, base);
	// b 0x82685e78
	goto loc_82685E78;
loc_82685E74:
	// bl 0x82682e88
	ctx.lr = 0x82685E78;
	sub_82682E88(ctx, base);
loc_82685E78:
	// lhz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 76);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82685f40
	if (ctx.cr0.eq) goto loc_82685F40;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r27,r31,172
	r27.s64 = r31.s64 + 172;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82685f40
	if (ctx.cr6.eq) goto loc_82685F40;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82685E98:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subf r8,r10,r27
	ctx.r8.u64 = r27.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r9,r10
	r29.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bne cr6,0x82685f38
	if (!ctx.cr6.eq) goto loc_82685F38;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r30,r11,-48
	r30.s64 = ctx.r11.s64 + -48;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82685f00
	if (!ctx.cr6.eq) goto loc_82685F00;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82685f00
	if (ctx.cr6.eq) goto loc_82685F00;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82685610
	ctx.lr = 0x82685F00;
	sub_82685610(ctx, base);
loc_82685F00:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// bne 0x82685f20
	if (!ctx.cr0.eq) goto loc_82685F20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8267c588
	ctx.lr = 0x82685F1C;
	sub_8267C588(ctx, base);
	// b 0x82685f38
	goto loc_82685F38;
loc_82685F20:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82685f38
	if (ctx.cr6.eq) goto loc_82685F38;
	// ld r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r4,r11,5,59
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 5) & 0x1F;
	// bl 0x826864a0
	ctx.lr = 0x82685F38;
	sub_826864A0(ctx, base);
loc_82685F38:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82685e98
	if (!ctx.cr6.eq) goto loc_82685E98;
loc_82685F40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8269C3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269C3A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// lwz r11,26384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26384);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8269C3D8;
	sub_826A2E60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed488
	ctx.lr = 0x8269C3E8;
	sub_823ED488(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8269c440
	if (!ctx.cr0.eq) goto loc_8269C440;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269c404
	if (!ctx.cr0.eq) goto loc_8269C404;
	// li r30,22
	r30.s64 = 22;
	// b 0x8269c440
	goto loc_8269C440;
loc_8269C404:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8888);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8269c41c
	if (!ctx.cr6.eq) goto loc_8269C41C;
	// li r30,1
	r30.s64 = 1;
	// b 0x8269c440
	goto loc_8269C440;
loc_8269C41C:
	// lwz r11,8888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8888);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8269c440
	if (!ctx.cr0.lt) goto loc_8269C440;
	// li r30,1167
	r30.s64 = 1167;
loc_8269C440:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x826a5af0
	ctx.lr = 0x8269C448;
	sub_826A5AF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269EA68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8269EA70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8269eae0
	if (!ctx.cr6.eq) goto loc_8269EAE0;
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269eae0
	if (ctx.cr0.eq) goto loc_8269EAE0;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r30,r29,r11
	r30.u64 = ctx.r11.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8269eae0
	if (!ctx.cr0.gt) goto loc_8269EAE0;
	// bl 0x826a3320
	ctx.lr = 0x8269EAAC;
	sub_826A3320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a9bd0
	ctx.lr = 0x8269EAB8;
	sub_826A9BD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bne cr6,0x8269ead4
	if (!ctx.cr6.eq) goto loc_8269EAD4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269eae0
	if (ctx.cr0.eq) goto loc_8269EAE0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x8269eadc
	goto loc_8269EADC;
loc_8269EAD4:
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_8269EADC:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8269EAE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(__restgprlr_19) {
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

DEFINE_REX_FUNC(__restfpr_18) {
	REX_FUNC_PROLOGUE();
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
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__savevmx_67) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
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
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B3DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826B3DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b3e14
	if (ctx.cr6.eq) goto loc_826B3E14;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_826B3E14:
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x826b3e30
	if (!ctx.cr6.eq) goto loc_826B3E30;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4388
	ctx.lr = 0x826B3E2C;
	sub_826B4388(ctx, base);
	// b 0x826b3ea0
	goto loc_826B3EA0;
loc_826B3E30:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x826b3e48
	if (!ctx.cr6.eq) goto loc_826B3E48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a5ac8
	ctx.lr = 0x826B3E40;
	sub_826A5AC8(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// b 0x826b3e4c
	goto loc_826B3E4C;
loc_826B3E48:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_826B3E4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826b3e5c
	if (!ctx.cr6.eq) goto loc_826B3E5C;
loc_826B3E54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826b3ea0
	goto loc_826B3EA0;
loc_826B3E5C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x826b3e94
	if (ctx.cr6.lt) goto loc_826B3E94;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x826b3e94
	if (ctx.cr6.lt) goto loc_826B3E94;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82793b34
	ctx.lr = 0x826B3E84;
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826b3e54
	if (!ctx.cr0.lt) goto loc_826B3E54;
	// bl 0x82793b74
	ctx.lr = 0x826B3E90;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x826b3e98
	goto loc_826B3E98;
loc_826B3E94:
	// li r3,122
	ctx.r3.s64 = 122;
loc_826B3E98:
	// bl 0x823f0188
	ctx.lr = 0x826B3E9C;
	sub_823F0188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3EA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826B9220) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x826B9228;
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// li r17,0
	r17.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	r30.s64 = r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82147138
	ctx.lr = 0x826B9260;
	sub_82147138(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63c0
	ctx.lr = 0x826B926C;
	sub_826B63C0(ctx, base);
	// rlwinm r24,r3,29,3,31
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// bne cr6,0x826b9284
	if (!ctx.cr6.eq) goto loc_826B9284;
	// li r24,4
	r24.s64 = 4;
	// li r19,1
	r19.s64 = 1;
loc_826B9284:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mullw r10,r24,r26
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r26.s32);
	// divwu r25,r11,r10
	r25.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// divwu r20,r21,r10
	r20.u64 = uint32_t(ctx.r10.u32 ? r21.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r18,10000
	r18.s64 = 10000;
	// subf r23,r25,r20
	r23.u64 = r20.u64 - r25.u64;
	// lfd f30,3728(r9)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// lfd f31,27936(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 27936);
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
loc_826B92BC:
	// lwz r11,676(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9460
	if (ctx.cr6.eq) goto loc_826B9460;
	// subf r23,r25,r20
	r23.u64 = r20.u64 - r25.u64;
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(r23.u32, 16, ctx.xer);
	// blt cr6,0x826b9460
	if (ctx.cr6.lt) goto loc_826B9460;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// subf r29,r11,r21
	r29.u64 = r21.u64 - ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B92F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,116(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826B930C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r6,r25,r24
	ctx.r6.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mullw r5,r6,r26
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// addi r8,r31,104
	ctx.r8.s64 = r31.s64 + 104;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c1580
	ctx.lr = 0x826B9338;
	sub_826C1580(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9454
	if (ctx.cr6.eq) goto loc_826B9454;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x826b9374
	if (ctx.cr6.lt) goto loc_826B9374;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x826b9374
	if (!ctx.cr6.eq) goto loc_826B9374;
	// ld r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 104);
	// divd r10,r11,r18
	ctx.r10.s64 = (r18.s64 && !(ctx.r11.s64 == INT64_MIN && r18.s64 == -1)) ? ctx.r11.s64 / r18.s64 : 0;
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
loc_826B9374:
	// lwz r11,676(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 676);
	// add r25,r25,r29
	r25.u64 = r25.u64 + r29.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r10,676(r27)
	REX_STORE_U32(r27.u32 + 676, ctx.r10.u32);
	// beq cr6,0x826b9440
	if (ctx.cr6.eq) goto loc_826B9440;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
loc_826B93BC:
	// stw r7,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b9440
	if (!ctx.cr6.lt) goto loc_826B9440;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r6,r9,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826b9408
	if (ctx.cr6.eq) goto loc_826B9408;
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// std r9,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmsub f12,f13,f31,f30
	ctx.f12.f64 = std::fma(ctx.f13.f64, f31.f64, -f30.f64);
	// b 0x826b941c
	goto loc_826B941C;
loc_826B9408:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * f31.f64;
loc_826B941C:
	// frsp f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x826b93bc
	goto loc_826B93BC;
loc_826B9440:
	// mullw r11,r25,r24
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b92bc
	goto loc_826B92BC;
loc_826B9454:
	// lis r17,-32768
	r17.s64 = -2147483648;
	// ori r17,r17,16389
	r17.u64 = r17.u64 | 16389;
	// stw r17,100(r31)
	REX_STORE_U32(r31.u32 + 100, r17.u32);
loc_826B9460:
	// li r11,16
	ctx.r11.s64 = 16;
	// subfc r10,r11,r23
	ctx.xer.ca = r23.u32 >= ctx.r11.u32;
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r7.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b9490
	goto loc_826B9490;
loc_826B9490:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_826D13A8) {
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
	// lwz r11,444(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 444);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1444
	if (ctx.cr6.eq) goto loc_826D1444;
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r6,432(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 432);
	// lwz r5,428(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// lwz r9,304(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x826e4140
	ctx.lr = 0x826D13F0;
	sub_826E4140(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,304(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 304);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ble cr6,0x826d1430
	if (!ctx.cr6.gt) goto loc_826D1430;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_826D140C:
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826d141c
	if (!ctx.cr6.gt) goto loc_826D141C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_826D141C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x826d140c
	if (ctx.cr6.lt) goto loc_826D140C;
loc_826D1430:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_826D1444:
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

DEFINE_REX_FUNC(sub_826D8380) {
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
	ctx.lr = 0x826D8388;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,28(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r24,r4,-24
	r24.s64 = ctx.r4.s64 + -24;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D83D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// cmplwi cr6,r24,16
	ctx.cr6.compare<uint32_t>(r24.u32, 16, ctx.xer);
	// blt cr6,0x826d8584
	if (ctx.cr6.lt) goto loc_826D8584;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r25,16
	r25.s64 = 16;
	// bl 0x826d4080
	ctx.lr = 0x826D8404;
	sub_826D4080(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// blt cr6,0x826d8584
	if (ctx.cr6.lt) goto loc_826D8584;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r25,32
	r25.s64 = 32;
	// bl 0x826d3eb0
	ctx.lr = 0x826D8434;
	sub_826D3EB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r8,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D846C;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D8498;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r29,0(r27)
	REX_STORE_U8(r27.u32 + 0, r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r11.u32);
	// beq cr6,0x826d858c
	if (ctx.cr6.eq) goto loc_826D858C;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// lwz r3,224(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 224);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D84D0;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x826D84F0;
	sub_826A2E60(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x826d858c
	if (!ctx.cr6.gt) goto loc_826D858C;
	// li r29,38
	r29.s64 = 38;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_826D8508:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826d8584
	if (ctx.cr6.gt) goto loc_826D8584;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r25,r25,6
	r25.s64 = r25.s64 + 6;
	// addi r29,r29,6
	r29.s64 = r29.s64 + 6;
	// bl 0x826d3d18
	ctx.lr = 0x826D8530;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// bl 0x826d3b98
	ctx.lr = 0x826D855C;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r11,8(r26)
	ea = 8 + r26.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r26.u32 = ea;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826d8508
	if (ctx.cr6.lt) goto loc_826D8508;
	// b 0x826d858c
	goto loc_826D858C;
loc_826D8584:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_826D858C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// subf. r30,r25,r10
	r30.u64 = ctx.r10.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d85d0
	if (ctx.cr0.eq) goto loc_826D85D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D85B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d858c
	if (ctx.cr6.lt) goto loc_826D858C;
	// ld r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U64(r23.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r23)
	REX_STORE_U64(r23.u32 + 8, ctx.r11.u64);
loc_826D85D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826E2250) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E2D80) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x826e2ce0
	ctx.lr = 0x826E2D94;
	sub_826E2CE0(ctx, base);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// lhz r7,110(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 110);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// addi r9,r11,29360
	ctx.r9.s64 = ctx.r11.s64 + 29360;
	// addi r8,r10,28168
	ctx.r8.s64 = ctx.r10.s64 + 28168;
	// stw r9,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r9.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// stw r8,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r8.u32);
	// bgt cr6,0x826e2ddc
	if (ctx.cr6.gt) goto loc_826E2DDC;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// lis r8,-32145
	ctx.r8.s64 = -2106654720;
	// addi r7,r11,14168
	ctx.r7.s64 = ctx.r11.s64 + 14168;
	// addi r5,r10,15232
	ctx.r5.s64 = ctx.r10.s64 + 15232;
	// addi r4,r9,17104
	ctx.r4.s64 = ctx.r9.s64 + 17104;
	// addi r3,r8,18088
	ctx.r3.s64 = ctx.r8.s64 + 18088;
	// b 0x826e2dfc
	goto loc_826E2DFC;
loc_826E2DDC:
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// lis r8,-32145
	ctx.r8.s64 = -2106654720;
	// addi r7,r11,14712
	ctx.r7.s64 = ctx.r11.s64 + 14712;
	// addi r5,r10,15960
	ctx.r5.s64 = ctx.r10.s64 + 15960;
	// addi r4,r9,18560
	ctx.r4.s64 = ctx.r9.s64 + 18560;
	// addi r3,r8,19496
	ctx.r3.s64 = ctx.r8.s64 + 19496;
loc_826E2DFC:
	// lwz r11,280(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 280);
	// stw r3,512(r6)
	REX_STORE_U32(ctx.r6.u32 + 512, ctx.r3.u32);
	// stw r4,508(r6)
	REX_STORE_U32(ctx.r6.u32 + 508, ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r5,504(r6)
	REX_STORE_U32(ctx.r6.u32 + 504, ctx.r5.u32);
	// stw r7,500(r6)
	REX_STORE_U32(ctx.r6.u32 + 500, ctx.r7.u32);
	// bne cr6,0x826e2e38
	if (!ctx.cr6.eq) goto loc_826E2E38;
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826e2e2c
	if (!ctx.cr6.eq) goto loc_826E2E2C;
	// stw r11,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r11.u32);
	// b 0x826e2e44
	goto loc_826E2E44;
loc_826E2E2C:
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// addi r10,r11,22888
	ctx.r10.s64 = ctx.r11.s64 + 22888;
	// b 0x826e2e40
	goto loc_826E2E40;
loc_826E2E38:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// addi r10,r11,-24664
	ctx.r10.s64 = ctx.r11.s64 + -24664;
loc_826E2E40:
	// stw r10,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r10.u32);
loc_826E2E44:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// addi r9,r11,-27208
	ctx.r9.s64 = ctx.r11.s64 + -27208;
	// addi r8,r10,-25744
	ctx.r8.s64 = ctx.r10.s64 + -25744;
	// stw r9,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826EEB08) {
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
	ctx.lr = 0x826EEB10;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x826ef018
	if (ctx.cr6.lt) goto loc_826EF018;
	// beq cr6,0x826eeb68
	if (ctx.cr6.eq) goto loc_826EEB68;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x826eeb60
	if (ctx.cr6.lt) goto loc_826EEB60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_826EEB60:
	// li r20,1
	r20.s64 = 1;
	// b 0x826eeb6c
	goto loc_826EEB6C;
loc_826EEB68:
	// li r20,0
	r20.s64 = 0;
loc_826EEB6C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826eeb84
	if (!ctx.cr6.eq) goto loc_826EEB84;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ef018
	if (ctx.cr6.eq) goto loc_826EF018;
loc_826EEB84:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826eeb98
	if (!ctx.cr6.eq) goto loc_826EEB98;
	// lis r23,16
	r23.s64 = 1048576;
	// b 0x826eeba8
	goto loc_826EEBA8;
loc_826EEB98:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,30208
	ctx.r9.s64 = ctx.r11.s64 + 30208;
	// lwzx r23,r10,r9
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_826EEBA8:
	// lwz r25,120(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x826eebe0
	if (!ctx.cr6.gt) goto loc_826EEBE0;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826EEBC0:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,388(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 388);
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
	// bdnz 0x826eebc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EEBC0;
loc_826EEBE0:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x826eebf8
	if (!ctx.cr6.lt) goto loc_826EEBF8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x826eec04
	goto loc_826EEC04;
loc_826EEBF8:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x826eec04
	if (!ctx.cr6.gt) goto loc_826EEC04;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826EEC04:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x826ef018
	if (ctx.cr6.lt) goto loc_826EF018;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826EEC1C:
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
	// bdnz 0x826eec1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EEC1C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ef018
	if (!ctx.cr6.gt) goto loc_826EF018;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,100
	r26.s64 = ctx.r1.s64 + 100;
	// lfs f29,14888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	f29.f64 = double(temp.f32);
	// ori r22,r8,65535
	r22.u64 = ctx.r8.u64 | 65535;
	// lfs f30,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_826EEC70:
	// lwz r28,-4(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + -4);
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x826eed84
	if (!ctx.cr6.gt) goto loc_826EED84;
	// lwz r8,388(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_826EEC90:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x826eed6c
	if (!ctx.cr6.lt) goto loc_826EED6C;
	// subf r9,r28,r29
	ctx.r9.u64 = r29.u64 - r28.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x826eed38
	if (ctx.cr6.lt) goto loc_826EED38;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_826EECB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x826eecc8
	if (ctx.cr6.gt) goto loc_826EECC8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826EECC8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826eecd4
	if (!ctx.cr6.gt) goto loc_826EECD4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826EECD4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x826eece4
	if (ctx.cr6.gt) goto loc_826EECE4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826EECE4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826eecf0
	if (!ctx.cr6.gt) goto loc_826EECF0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826EECF0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x826eed00
	if (ctx.cr6.gt) goto loc_826EED00;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826EED00:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826eed0c
	if (!ctx.cr6.gt) goto loc_826EED0C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826EED0C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x826eed1c
	if (ctx.cr6.gt) goto loc_826EED1C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826EED1C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826eed28
	if (!ctx.cr6.gt) goto loc_826EED28;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826EED28:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826eecb8
	if (ctx.cr6.lt) goto loc_826EECB8;
loc_826EED38:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x826eed6c
	if (!ctx.cr6.lt) goto loc_826EED6C;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826EED48:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x826eed58
	if (ctx.cr6.gt) goto loc_826EED58;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826EED58:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826eed64
	if (!ctx.cr6.gt) goto loc_826EED64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826EED64:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826eed48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EED48;
loc_826EED6C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x826eed78
	if (!ctx.cr6.gt) goto loc_826EED78;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_826EED78:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x826eec90
	if (!ctx.cr0.eq) goto loc_826EEC90;
loc_826EED84:
	// lfs f0,128(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x826eeda8
	if (!ctx.cr6.lt) goto loc_826EEDA8;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826eedb8
	goto loc_826EEDB8;
loc_826EEDA8:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826EEDB8:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x826eedf0
	if (!ctx.cr6.lt) goto loc_826EEDF0;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x826eeddc
	if (!ctx.cr6.lt) goto loc_826EEDDC;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826eedf4
	goto loc_826EEDF4;
loc_826EEDDC:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826eedf4
	goto loc_826EEDF4;
loc_826EEDF0:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_826EEDF4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826eeea0
	if (ctx.cr6.eq) goto loc_826EEEA0;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r23
	ctx.r9.s64 = r23.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826eee7c
	if (ctx.cr6.eq) goto loc_826EEE7C;
	// lwz r5,296(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 296);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// mulld r4,r7,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r3,280(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// sradi r5,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// srawi r11,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 13;
	// clrlwi r3,r4,19
	ctx.r3.u64 = ctx.r4.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x826eeeac
	goto loc_826EEEAC;
loc_826EEE7C:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x826eeeac
	goto loc_826EEEAC;
loc_826EEEA0:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_826EEEAC:
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x826eeecc
	if (!ctx.cr6.lt) goto loc_826EEECC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826eeedc
	goto loc_826EEEDC;
loc_826EEECC:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826EEEDC:
	// subf r30,r28,r29
	r30.u64 = r29.u64 - r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x826ee4b8
	ctx.lr = 0x826EEEEC;
	sub_826EE4B8(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826eef10
	if (ctx.cr0.eq) goto loc_826EEF10;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826eef10
	if (!ctx.cr6.gt) goto loc_826EEF10;
loc_826EEF00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826eef00
	if (ctx.cr6.gt) goto loc_826EEF00;
loc_826EEF10:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x826eef20
	if (ctx.cr6.gt) goto loc_826EEF20;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_826EEF20:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826eef2c
	if (ctx.cr6.gt) goto loc_826EEF2C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_826EEF2C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826eef4c
	if (!ctx.cr6.gt) goto loc_826EEF4C;
loc_826EEF3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826eef3c
	if (ctx.cr6.gt) goto loc_826EEF3C;
loc_826EEF4C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x826ef008
	if (!ctx.cr6.gt) goto loc_826EF008;
	// lwz r8,388(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_826EEF78:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x826eeffc
	if (!ctx.cr6.lt) goto loc_826EEFFC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x826eefd8
	if (ctx.cr6.lt) goto loc_826EEFD8;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_826EEF98:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x826eef98
	if (ctx.cr6.lt) goto loc_826EEF98;
loc_826EEFD8:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x826eeffc
	if (!ctx.cr6.lt) goto loc_826EEFFC;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826EEFEC:
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
	// bdnz 0x826eefec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EEFEC;
loc_826EEFFC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x826eef78
	if (!ctx.cr0.eq) goto loc_826EEF78;
loc_826EF008:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x826eec70
	if (!ctx.cr0.eq) goto loc_826EEC70;
loc_826EF018:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

DEFINE_REX_FUNC(sub_82723AF0) {
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
	ctx.lr = 0x82723AF8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,300(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lhz r27,14(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82723b38
	if (!ctx.cr6.eq) goto loc_82723B38;
	// bl 0x82722b38
	ctx.lr = 0x82723B30;
	sub_82722B38(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cec
	return;
loc_82723B38:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82723bd4
	if (!ctx.cr6.eq) goto loc_82723BD4;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82723d50
	if (ctx.cr6.eq) goto loc_82723D50;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// bgt cr6,0x82723b64
	if (ctx.cr6.gt) goto loc_82723B64;
	// neg r22,r9
	r22.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_82723B64:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r21,8(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// bl 0x82722ec0
	ctx.lr = 0x82723BAC;
	sub_82722EC0(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722b38
	ctx.lr = 0x82723BCC;
	sub_82722B38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82723d40
	goto loc_82723D40;
loc_82723BD4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82723c54
	if (!ctx.cr6.eq) goto loc_82723C54;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82723d50
	if (ctx.cr6.eq) goto loc_82723D50;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722b38
	ctx.lr = 0x82723C00;
	sub_82722B38(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// lwz r24,20(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,308(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 308);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82722ec0
	ctx.lr = 0x82723C50;
	sub_82722EC0(ctx, base);
	// b 0x82723d40
	goto loc_82723D40;
loc_82723C54:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82723d50
	if (!ctx.cr6.eq) goto loc_82723D50;
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82723d50
	if (ctx.cr6.eq) goto loc_82723D50;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82723d50
	if (ctx.cr6.eq) goto loc_82723D50;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt cr6,0x82723c8c
	if (ctx.cr6.gt) goto loc_82723C8C;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_82723C8C:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// bl 0x82722ec0
	ctx.lr = 0x82723CD4;
	sub_82722EC0(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722b38
	ctx.lr = 0x82723CF4;
	sub_82722B38(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r24,20(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,308(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 308);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82722ec0
	ctx.lr = 0x82723D40;
	sub_82722EC0(ctx, base);
loc_82723D40:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82723d54
	if (!ctx.cr6.eq) goto loc_82723D54;
loc_82723D50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82723D54:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_827375A8) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vspltisw128 v62,11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xB)));
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// vupkhsb128 v61,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// li r6,112
	ctx.r6.s64 = 112;
	// vspltisw128 v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x2)));
	// addi r7,r8,32080
	ctx.r7.s64 = ctx.r8.s64 + 32080;
	// vspltisw128 v59,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x4)));
	// lvx128 v58,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v57,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vupkhsb128 v56,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// li r8,64
	ctx.r8.s64 = 64;
	// vupkhsb128 v55,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// li r31,80
	r31.s64 = 80;
	// lvx128 v10,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v9,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// vcsxwfp128 v53,v56,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// lvx128 v54,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v55,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// lvx128 v8,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v51,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v6,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v0,v61,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v13,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v50,3
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_set1_epi32(int(0x3)));
	// vcsxwfp128 v49,v51,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vspltisw128 v48,8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_set1_epi32(int(0x8)));
	// vspltisw128 v47,14
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_set1_epi32(int(0xE)));
	// lvx128 v5,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v0,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r4,-16
	ctx.r4.s64 = -16;
	// vmulfp128 v46,v10,v53
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v45,v9,v53
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v44,v8,v52
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v43,v7,v52
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v42,v5,v49
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v41,v6,v49
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v12,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v11,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpsxws128 v4,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// vcfpsxws128 v3,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpsxws128 v1,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpsxws128 v2,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// vsubsws v29,v11,v4
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v4.s32[0]);
	v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v4.s32[1]);
	v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v4.s32[2]);
	v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v4.s32[3]);
	v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v28,v12,v3
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v3.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v3.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v3.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v3.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vor v4,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vaddsws v3,v0,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v29,v0,v1
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v1.s32[0]);
	v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v1.s32[1]);
	v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v1.s32[2]);
	v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v1.s32[3]);
	v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v27,v0,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v11,v11,v4
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v26,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v21,v3,v31
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v31.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v31.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v31.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v31.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v25,v12,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v24,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v23,v11,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v11,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v2,v0,v2
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v1,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v4,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// vaddsws v20,v22,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v19,v1,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v12,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vaddsws v18,v28,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v17,v12,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v16,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v3,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v12,v16,v48
	ctx.v12.s32[0] = v16.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v12.s32[1] = v16.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v12.s32[2] = v16.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v12.s32[3] = v16.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsubsws v3,v29,v30
	temp.s64 = int64_t(v29.s32[0]) - int64_t(v30.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[1]) - int64_t(v30.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[2]) - int64_t(v30.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[3]) - int64_t(v30.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v14,v29,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v30,v4,v12
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(ctx.v12.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(ctx.v12.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(ctx.v12.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(ctx.v12.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v40,v26,v48
	ctx.v40.s32[0] = v26.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v40.s32[1] = v26.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v40.s32[2] = v26.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v40.s32[3] = v26.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v12,v1,v48
	ctx.v12.s32[0] = ctx.v1.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v12.s32[1] = ctx.v1.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v12.s32[2] = ctx.v1.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v12.s32[3] = ctx.v1.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v37,v31,v48
	ctx.v37.s32[0] = v31.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v37.s32[1] = v31.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v37.s32[2] = v31.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v37.s32[3] = v31.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v39,v14,v48
	ctx.v39.s32[0] = v14.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v39.s32[1] = v14.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v39.s32[2] = v14.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v39.s32[3] = v14.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v36,v3,v48
	ctx.v36.s32[0] = ctx.v3.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v3.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v3.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v3.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vaddsws v29,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v28,v2,v12
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(ctx.v12.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(ctx.v12.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(ctx.v12.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(ctx.v12.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v35,v30,v48
	ctx.v35.s32[0] = v30.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v35.s32[1] = v30.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v35.s32[2] = v30.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v35.s32[3] = v30.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vmrghw128 v34,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vsraw128 v38,v21,v48
	ctx.v38.s32[0] = v21.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v38.s32[1] = v21.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v38.s32[2] = v21.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v38.s32[3] = v21.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vmrglw128 v33,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vsraw128 v32,v29,v48
	ctx.v32.s32[0] = v29.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v32.s32[1] = v29.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v32.s32[2] = v29.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v32.s32[3] = v29.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v63,v28,v48
	ctx.v63.s32[0] = v28.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v63.s32[1] = v28.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v63.s32[2] = v28.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v63.s32[3] = v28.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vmrghw128 v62,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrglw128 v61,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v58,v40,v32
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// vmrglw128 v57,v40,v32
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// vmrghw128 v56,v63,v38
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v55,v63,v38
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v54,v58,v34
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrglw128 v53,v57,v33
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrglw128 v52,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v51,v61,v55
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v4,v54,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vmrghw128 v49,v57,v33
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v2,v53,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v46,v61,v55
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v1,v52,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrghw128 v45,v58,v34
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v31,v51,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v44,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v3,v49,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v30,v46,0
	simde_mm_store_ps(v30.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v27,v45,v48
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v45.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v48.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v44,v48
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v44.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v48.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v12,v27,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v26,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmaddfp v29,v9,v4,v0
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v28,v8,v2,v0
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v1,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v8,v31,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v2,v7,v2,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v10,v4,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v7,v31,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v1,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v27,v6,v3,v0
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v6,v6,v30,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v3,v5,v3,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v5,v30,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcfpsxws128 v43,v29,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v29.f32)));
	// vcfpsxws128 v42,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// vcfpsxws128 v41,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v40,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v38,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v39,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v34,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v37,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v36,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// vcfpsxws128 v35,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v33,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v32,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vsraw128 v0,v43,v50
	ctx.v0.s32[0] = ctx.v43.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v43.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v43.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v43.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v10,v42,v50
	ctx.v10.s32[0] = ctx.v42.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v42.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v42.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v42.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v7,v41,v50
	ctx.v7.s32[0] = ctx.v41.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v41.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v41.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v41.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v6,v40,v50
	ctx.v6.s32[0] = ctx.v40.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v40.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v40.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v40.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v8,v38,v50
	ctx.v8.s32[0] = ctx.v38.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v38.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v38.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v38.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v9,v39,v50
	ctx.v9.s32[0] = ctx.v39.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v39.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v39.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v39.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsubsws v23,v0,v10
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v10.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v10.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v10.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v10.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v25,v7,v6
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v6.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v6.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v6.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v6.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v3,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v5,v37,v50
	ctx.v5.s32[0] = ctx.v37.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v37.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v37.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v37.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsubsws v24,v9,v8
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v8.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v8.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v8.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v8.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vsraw128 v7,v34,v50
	ctx.v7.s32[0] = ctx.v34.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v34.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v34.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v34.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vaddsws v30,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r7,80
	ctx.r7.s64 = 80;
	// vsubsws v8,v5,v7
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// li r5,112
	ctx.r5.s64 = 112;
	// vaddsws v29,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v7,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vor v9,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vaddsws v4,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v0,v36,v50
	ctx.v0.s32[0] = ctx.v36.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v36.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v36.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v36.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vaddsws v20,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v10,v35,v50
	ctx.v10.s32[0] = ctx.v35.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v35.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v35.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v35.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vaddsws v22,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v17,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v21,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v19,v11,v10
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v10.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v10.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v10.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v10.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v0,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vsubsws v9,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v10,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vsubsws v8,v6,v8
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v16,v0,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v15,v0,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v14,v10,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v7,v10,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v6,v9,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v1,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v31,v8,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v28,v8,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v5,v15,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v2,v7,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v26,v1,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v25,v28,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v6,v32,v50
	ctx.v6.s32[0] = ctx.v32.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v32.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v32.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v32.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vsraw128 v7,v33,v50
	ctx.v7.s32[0] = ctx.v33.s32[0] >> (ctx.v50.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v33.s32[1] >> (ctx.v50.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v33.s32[2] >> (ctx.v50.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v33.s32[3] >> (ctx.v50.u8[12] & 0x1F);
	// vaddsws v28,v0,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v0,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vor v10,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vaddsws v1,v12,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v11,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v23,v0,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v24,v5,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v10,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v20,v2,v50
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v16,v31,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v1,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v9,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v0,v8,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v28,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v27,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v63,v16,v47
	ctx.v63.s32[0] = v16.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v63.s32[1] = v16.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v63.s32[2] = v16.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v63.s32[3] = v16.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v62,v15,v47
	ctx.v62.s32[0] = v15.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v62.s32[1] = v15.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v62.s32[2] = v15.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v62.s32[3] = v15.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vaddsws v5,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v27,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswss128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsubsws v11,v11,v6
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v6.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v6.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v6.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v6.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v12,v12,v7
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v6,v5,v48
	ctx.v6.s32[0] = ctx.v5.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v5.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v5.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v5.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vor v0,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v21.u8));
	// vor v8,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vsraw128 v13,v27,v48
	ctx.v13.s32[0] = v27.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v13.s32[1] = v27.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v13.s32[2] = v27.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v13.s32[3] = v27.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vor v10,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// stvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vsraw128 v5,v28,v48
	ctx.v5.s32[0] = v28.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v5.s32[1] = v28.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v5.s32[2] = v28.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v5.s32[3] = v28.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vsraw128 v7,v2,v48
	ctx.v7.s32[0] = ctx.v2.s32[0] >> (ctx.v48.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v2.s32[1] >> (ctx.v48.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v2.s32[2] >> (ctx.v48.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v2.s32[3] >> (ctx.v48.u8[12] & 0x1F);
	// vaddsws v26,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v25,v10,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v22,v11,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v20,v11,v29
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(v29.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(v29.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(v29.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(v29.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v19,v12,v30
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(v30.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(v30.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(v30.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(v30.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v18,v8,v5
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v5.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v5.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v5.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v5.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v17,v9,v6
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v6.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v6.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v6.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v6.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v16,v0,v13
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v13.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v13.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v13.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v13.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v15,v10,v7
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v7.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v7.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v7.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v7.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v14,v31,v3
	temp.s64 = int64_t(v31.s32[0]) - int64_t(ctx.v3.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(ctx.v3.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(ctx.v3.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(ctx.v3.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v0,v1,v4
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v60,v26,v47
	ctx.v60.s32[0] = v26.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v60.s32[1] = v26.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v60.s32[2] = v26.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v60.s32[3] = v26.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v59,v25,v47
	ctx.v59.s32[0] = v25.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v59.s32[1] = v25.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v59.s32[2] = v25.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v59.s32[3] = v25.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v58,v23,v47
	ctx.v58.s32[0] = v23.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v58.s32[1] = v23.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v58.s32[2] = v23.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v58.s32[3] = v23.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v57,v24,v47
	ctx.v57.s32[0] = v24.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v57.s32[1] = v24.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v57.s32[2] = v24.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v57.s32[3] = v24.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v56,v22,v47
	ctx.v56.s32[0] = v22.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v56.s32[1] = v22.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v56.s32[2] = v22.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v56.s32[3] = v22.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v55,v21,v47
	ctx.v55.s32[0] = v21.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v55.s32[1] = v21.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v55.s32[2] = v21.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v55.s32[3] = v21.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vpkswss128 v54,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v54.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// vsraw128 v53,v20,v47
	ctx.v53.s32[0] = v20.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v53.s32[1] = v20.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v53.s32[2] = v20.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v53.s32[3] = v20.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v52,v19,v47
	ctx.v52.s32[0] = v19.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v52.s32[1] = v19.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v52.s32[2] = v19.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v52.s32[3] = v19.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vpkswss128 v51,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v57.s32)));
	// vsraw128 v50,v18,v47
	ctx.v50.s32[0] = v18.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v50.s32[1] = v18.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v50.s32[2] = v18.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v50.s32[3] = v18.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v49,v17,v47
	ctx.v49.s32[0] = v17.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v49.s32[1] = v17.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v49.s32[2] = v17.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v49.s32[3] = v17.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vpkswss128 v48,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// vsraw128 v46,v16,v47
	ctx.v46.s32[0] = v16.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v46.s32[1] = v16.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v46.s32[2] = v16.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v46.s32[3] = v16.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vsraw128 v45,v15,v47
	ctx.v45.s32[0] = v15.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v45.s32[1] = v15.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v45.s32[2] = v15.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v45.s32[3] = v15.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vpkswss128 v44,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v44.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vsraw128 v43,v14,v47
	ctx.v43.s32[0] = v14.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v43.s32[1] = v14.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v43.s32[2] = v14.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v43.s32[3] = v14.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// stvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v42,v0,v47
	ctx.v42.s32[0] = ctx.v0.s32[0] >> (ctx.v47.u8[0] & 0x1F);
	ctx.v42.s32[1] = ctx.v0.s32[1] >> (ctx.v47.u8[4] & 0x1F);
	ctx.v42.s32[2] = ctx.v0.s32[2] >> (ctx.v47.u8[8] & 0x1F);
	ctx.v42.s32[3] = ctx.v0.s32[3] >> (ctx.v47.u8[12] & 0x1F);
	// vpkswss128 v41,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v41.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// stvx128 v51,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v40,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v40.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// stvx128 v48,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v39,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v39.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// stvx128 v44,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B83C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x827B83C8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v58,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v59,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v63,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v57,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lvsl v6,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsubshs v2,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v3,v54,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vsubshs v31,v10,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v27,v8,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v14,v16,v10
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v11,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v52,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// stvx128 v53,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r27,-96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stw r27,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r27.u32);
	// stvx128 v52,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-72(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r27,-80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r29,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r29.u32);
	// stwx r27,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, r27.u32);
	// stwx r28,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r28.u32);
	// bne cr6,0x827b8514
	if (!ctx.cr6.eq) goto loc_827B8514;
	// lwz r29,-92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r28,-84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r27,-76(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r26,-68(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// stw r26,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r26.u32);
loc_827B8514:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x827b8634
	if (!ctx.cr6.eq) goto loc_827B8634;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r30,r3
	ctx.r8.u64 = r30.u64 + ctx.r3.u64;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v51,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v44,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v45,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v46,v47,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v30,v45,v44,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vsubshs v29,v11,v8
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v10,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v27,v0,v30
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v9,v10
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v25,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v27,v9
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v20,v1
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v19,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v13,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v14,v18,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v12,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v43,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v10,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v42,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v43,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-68(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stwux r3,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// stvx128 v42,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r31,-72(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,-68(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stwux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r31,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_827B8634:
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827D3438) {
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
	ctx.lr = 0x827D3440;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,50(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// lwz r30,292(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r9,348(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r6,284(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r31,r7,6,0,25
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r3,r11,1,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - r31.u64;
	// subf r10,r3,r31
	ctx.r10.u64 = r31.u64 - ctx.r3.u64;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r27,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r27.s64 = ctx.r11.s32 >> 16;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// clrlwi r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// clrlwi r10,r27,30
	ctx.r10.u64 = r27.u32 & 0x3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addis r3,r8,115
	ctx.r3.s64 = ctx.r8.s64 + 7536640;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r3,115
	ctx.r3.s64 = ctx.r3.s64 + 115;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r23.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// srawi r22,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r22.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d3510
	if (ctx.cr6.eq) goto loc_827D3510;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827d3298
	ctx.lr = 0x827D3508;
	sub_827D3298(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_827D3510:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r5.s64 = r31.s32 >> 1;
	// rlwimi r11,r22,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r6,r7,59
	ctx.r6.s64 = ctx.r7.s64 + 3866624;
	// addi r6,r6,59
	ctx.r6.s64 = ctx.r6.s64 + 59;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3564
	if (ctx.cr6.eq) goto loc_827D3564;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827d3368
	ctx.lr = 0x827D355C;
	sub_827D3368(ctx, base);
	// lwz r23,104(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,108(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_827D3564:
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lhz r31,74(r29)
	r31.u64 = REX_LOAD_U16(r29.u32 + 74);
	// srawi r11,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r11.s64 = r27.s32 >> 2;
	// srawi r8,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r8.s64 = r28.s32 >> 2;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// lwz r11,14272(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14272);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x827d360c
	if (!ctx.cr0.eq) goto loc_827D360C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// dcbt r10,r30
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r30
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r30
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r30
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - r31.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r30
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_827D360C:
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// dcbt r8,r30
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// dcbt r7,r30
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r31,r10
	ctx.r6.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// mulli r10,r31,11
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(11));
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// dcbt r4,r30
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// dcbt r10,r30
	// mulli r10,r31,13
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(13));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// dcbt r8,r30
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - r31.u64;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// dcbt r3,r30
	// clrlwi r27,r27,30
	r27.u64 = r27.u32 & 0x3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r10,r28,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stw r11,14272(r9)
	REX_STORE_U32(ctx.r9.u32 + 14272, ctx.r11.u32);
	// clrlwi r28,r28,30
	r28.u64 = r28.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwzx r3,r4,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + r29.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x827D36DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827d370c
	if (ctx.cr6.eq) goto loc_827D370C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827826a0
	ctx.lr = 0x827D370C;
	sub_827826A0(ctx, base);
loc_827D370C:
	// lis r27,-32119
	r27.s64 = -2104950784;
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 76);
	// srawi r11,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	ctx.r11.s64 = r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r9.s64 = r23.s32 >> 2;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r11,14276(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14276);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + r21.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r20
	r31.u64 = ctx.r10.u64 + r20.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x827d37b4
	if (!ctx.cr0.eq) goto loc_827D37B4;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_827D37B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// clrlwi r30,r22,30
	r30.u64 = r22.u32 & 0x3;
	// stw r11,14276(r27)
	REX_STORE_U32(r27.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r23,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xC;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// clrlwi r28,r23,30
	r28.u64 = r23.u32 & 0x3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D37FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14276(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14276);
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x827d3888
	if (!ctx.cr0.eq) goto loc_827D3888;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r31
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r31
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r31
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r31
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r31
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_827D3888:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,14276(r27)
	REX_STORE_U32(r27.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// bctrl 
	ctx.lr = 0x827D38CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

