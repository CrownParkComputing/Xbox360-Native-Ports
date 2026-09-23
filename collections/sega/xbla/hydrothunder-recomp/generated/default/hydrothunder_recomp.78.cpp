#include "hydrothunder_funcs.78.h"

DEFINE_REX_FUNC(sub_82125070) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc18
	ctx.lr = 0x8212508C;
	sub_823ECC18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212509c
	if (!ctx.cr0.eq) goto loc_8212509C;
loc_82125094:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821250c0
	goto loc_821250C0;
loc_8212509C:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// bl 0x823ecc50
	ctx.lr = 0x821250AC;
	sub_823ECC50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82125094
	if (ctx.cr0.eq) goto loc_82125094;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_821250C0:
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

DEFINE_REX_FUNC(sub_82128AE0) {
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
	ctx.lr = 0x82128AE8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,200
	ctx.r3.s64 = 200;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x82128AFC;
	sub_822F6280(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82128b18
	if (ctx.cr0.eq) goto loc_82128B18;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82126778
	ctx.lr = 0x82128B10;
	sub_82126778(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82128b1c
	goto loc_82128B1C;
loc_82128B18:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82128B1C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// std r27,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r27.u64);
	// bl 0x82160340
	ctx.lr = 0x82128B30;
	sub_82160340(ctx, base);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r31,r28,136
	r31.s64 = r28.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r25,6072(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 6072);
	// bl 0x8215f5f8
	ctx.lr = 0x82128B48;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24588
	ctx.r4.s64 = ctx.r11.s64 + -24588;
	// bl 0x8215f670
	ctx.lr = 0x82128B54;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82128B58;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82126238
	ctx.lr = 0x82128B80;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82160388
	ctx.lr = 0x82128B90;
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
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82128BAC;
	sub_82120AC0(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq 0x82128be8
	if (ctx.cr0.eq) goto loc_82128BE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82128bc4
	if (ctx.cr6.eq) goto loc_82128BC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127160
	ctx.lr = 0x82128BC4;
	sub_82127160(ctx, base);
loc_82128BC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82120ac0
	ctx.lr = 0x82128BD4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82128BDC;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82128BE0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf8
	return;
loc_82128BE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82128BF4;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24512
	ctx.r4.s64 = ctx.r11.s64 + -24512;
	// bl 0x8215f670
	ctx.lr = 0x82128C00;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82128C04;
	sub_8215F990(ctx, base);
	// stw r3,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82128C14;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24496
	ctx.r4.s64 = ctx.r11.s64 + -24496;
	// bl 0x8215f670
	ctx.lr = 0x82128C20;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82128C24;
	sub_8215F990(ctx, base);
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82128C34;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24548
	ctx.r4.s64 = ctx.r11.s64 + -24548;
	// bl 0x8215f670
	ctx.lr = 0x82128C40;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82128C44;
	sub_8215F990(ctx, base);
	// stw r3,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r3.u32);
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82128d18
	goto loc_82128D18;
loc_82128C58:
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f3b8
	ctx.lr = 0x82128C68;
	sub_8215F3B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82128d08
	if (ctx.cr0.eq) goto loc_82128D08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f5f8
	ctx.lr = 0x82128C7C;
	sub_8215F5F8(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82128C80;
	sub_8215FA30(ctx, base);
	// lwz r11,6072(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6072);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r27,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r27.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82126238
	ctx.lr = 0x82128CB4;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82160388
	ctx.lr = 0x82128CC4;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82128CE0;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne 0x82128d58
	if (!ctx.cr0.eq) goto loc_82128D58;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82129e28
	ctx.lr = 0x82128CF8;
	sub_82129E28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82128d68
	if (ctx.cr0.eq) goto loc_82128D68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x82128D08;
	sub_8215F0F0(ctx, base);
loc_82128D08:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8212aa28
	ctx.lr = 0x82128D10;
	sub_8212AA28(ctx, base);
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82128D18:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82128c58
	if (!ctx.cr6.eq) goto loc_82128C58;
	// lwz r11,92(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128d38
	if (ctx.cr6.eq) goto loc_82128D38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82129190
	ctx.lr = 0x82128D38;
	sub_82129190(ctx, base);
loc_82128D38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,68
	ctx.r3.s64 = r28.s64 + 68;
	// bl 0x82145710
	ctx.lr = 0x82128D44;
	sub_82145710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82129260
	ctx.lr = 0x82128D50;
	sub_82129260(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x82128d7c
	goto loc_82128D7C;
loc_82128D58:
	// bl 0x82127160
	ctx.lr = 0x82128D5C;
	sub_82127160(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x82128D64;
	sub_8215F0F0(ctx, base);
	// b 0x82128bc4
	goto loc_82128BC4;
loc_82128D68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127160
	ctx.lr = 0x82128D70;
	sub_82127160(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x82128D78;
	sub_8215F0F0(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82128D7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82120ac0
	ctx.lr = 0x82128D8C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82128D94;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82128be0
	goto loc_82128BE0;
}

DEFINE_REX_FUNC(sub_8213D230) {
	REX_FUNC_PROLOGUE();
	// lbz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 96);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213D700) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6220(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8213d724
	if (!ctx.cr6.eq) goto loc_8213D724;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213D724:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8213F1D8) {
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
	ctx.lr = 0x8213F1E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 25);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213f208
	if (ctx.cr0.eq) goto loc_8213F208;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26916
	ctx.r3.s64 = ctx.r11.s64 + -26916;
	// bl 0x822f6058
	ctx.lr = 0x8213F208;
	sub_822F6058(ctx, base);
loc_8213F208:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8213f658
	ctx.lr = 0x8213F214;
	sub_8213F658(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x8213f230
	if (ctx.cr0.eq) goto loc_8213F230;
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x8213f254
	goto loc_8213F254;
loc_8213F230:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lbz r10,25(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213f248
	if (ctx.cr0.eq) goto loc_8213F248;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8213f254
	goto loc_8213F254;
loc_8213F248:
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f32c
	if (!ctx.cr6.eq) goto loc_8213F32C;
loc_8213F254:
	// lbz r11,25(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213f268
	if (!ctx.cr0.eq) goto loc_8213F268;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8213F268:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f280
	if (!ctx.cr6.eq) goto loc_8213F280;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8213f298
	goto loc_8213F298;
loc_8213F280:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f294
	if (!ctx.cr6.eq) goto loc_8213F294;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8213f298
	goto loc_8213F298;
loc_8213F294:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8213F298:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f2e0
	if (!ctx.cr6.eq) goto loc_8213F2E0;
	// lbz r11,25(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213f2bc
	if (ctx.cr0.eq) goto loc_8213F2BC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8213f2dc
	goto loc_8213F2DC;
loc_8213F2BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8213f2d0
	goto loc_8213F2D0;
loc_8213F2C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213F2D0:
	// lbz r8,25(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213f2c8
	if (ctx.cr0.eq) goto loc_8213F2C8;
loc_8213F2DC:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8213F2E0:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f3c0
	if (!ctx.cr6.eq) goto loc_8213F3C0;
	// lbz r11,25(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213f304
	if (ctx.cr0.eq) goto loc_8213F304;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8213f324
	goto loc_8213F324;
loc_8213F304:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8213f318
	goto loc_8213F318;
loc_8213F310:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8213F318:
	// lbz r8,25(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213f310
	if (ctx.cr0.eq) goto loc_8213F310;
loc_8213F324:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8213f3c0
	goto loc_8213F3C0;
loc_8213F32C:
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
	// bne cr6,0x8213f34c
	if (!ctx.cr6.eq) goto loc_8213F34C;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x8213f374
	goto loc_8213F374;
loc_8213F34C:
	// lbz r11,25(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213f360
	if (!ctx.cr0.eq) goto loc_8213F360;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8213F360:
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
loc_8213F374:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f38c
	if (!ctx.cr6.eq) goto loc_8213F38C;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// b 0x8213f3a8
	goto loc_8213F3A8;
loc_8213F38C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8213f3a4
	if (!ctx.cr6.eq) goto loc_8213F3A4;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// b 0x8213f3a8
	goto loc_8213F3A8;
loc_8213F3A4:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_8213F3A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// lbz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 24);
	// lbz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 24);
	// stb r10,24(r25)
	REX_STORE_U8(r25.u32 + 24, ctx.r10.u8);
	// stb r11,24(r26)
	REX_STORE_U8(r26.u32 + 24, ctx.r11.u8);
loc_8213F3C0:
	// lbz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213f558
	if (!ctx.cr6.eq) goto loc_8213F558;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213f554
	if (ctx.cr6.eq) goto loc_8213F554;
	// li r29,0
	r29.s64 = 0;
loc_8213F3E4:
	// lbz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213f554
	if (!ctx.cr6.eq) goto loc_8213F554;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213f49c
	if (!ctx.cr6.eq) goto loc_8213F49C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213f424
	if (!ctx.cr0.eq) goto loc_8213F424;
	// stb r30,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	REX_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213f588
	ctx.lr = 0x8213F420;
	sub_8213F588(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8213F424:
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213f4f0
	if (!ctx.cr0.eq) goto loc_8213F4F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213f450
	if (!ctx.cr6.eq) goto loc_8213F450;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8213f4ec
	if (ctx.cr6.eq) goto loc_8213F4EC;
loc_8213F450:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213f478
	if (!ctx.cr6.eq) goto loc_8213F478;
	// stb r30,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213f5f0
	ctx.lr = 0x8213F474;
	sub_8213F5F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8213F478:
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r30.u8);
	// bl 0x8213f588
	ctx.lr = 0x8213F498;
	sub_8213F588(ctx, base);
	// b 0x8213f554
	goto loc_8213F554;
loc_8213F49C:
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213f4c0
	if (!ctx.cr0.eq) goto loc_8213F4C0;
	// stb r30,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	REX_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213f5f0
	ctx.lr = 0x8213F4BC;
	sub_8213F5F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8213F4C0:
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213f4f0
	if (!ctx.cr0.eq) goto loc_8213F4F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213f50c
	if (!ctx.cr6.eq) goto loc_8213F50C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213f50c
	if (!ctx.cr6.eq) goto loc_8213F50C;
loc_8213F4EC:
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
loc_8213F4F0:
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
	// bne cr6,0x8213f3e4
	if (!ctx.cr6.eq) goto loc_8213F3E4;
	// b 0x8213f554
	goto loc_8213F554;
loc_8213F50C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213f534
	if (!ctx.cr6.eq) goto loc_8213F534;
	// stb r30,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213f588
	ctx.lr = 0x8213F530;
	sub_8213F588(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8213F534:
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r30.u8);
	// bl 0x8213f5f0
	ctx.lr = 0x8213F554;
	sub_8213F5F0(ctx, base);
loc_8213F554:
	// stb r30,24(r28)
	REX_STORE_U8(r28.u32 + 24, r30.u8);
loc_8213F558:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213F560;
	sub_8269CE98(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f574
	if (ctx.cr6.eq) goto loc_8213F574;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_8213F574:
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8215BF90) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bfbc
	if (!ctx.cr6.eq) goto loc_8215BFBC;
	// li r30,0
	r30.s64 = 0;
	// b 0x8215bfe8
	goto loc_8215BFE8;
loc_8215BFBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215c0d0
	ctx.lr = 0x8215BFC4;
	sub_8215C0D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	r30.u64 = ctx.r11.u64 & r31.u64;
	// bl 0x8269ef08
	ctx.lr = 0x8215BFDC;
	sub_8269EF08(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_8215BFE8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215c018
	ctx.lr = 0x8215BFF8;
	sub_8215C018(ctx, base);
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

DEFINE_REX_FUNC(sub_8215F530) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f5a4
	if (ctx.cr6.lt) goto loc_8215F5A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8215f560
	if (!ctx.cr6.eq) goto loc_8215F560;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8215f564
	goto loc_8215F564;
loc_8215F560:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F564:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215f5a4
	if (!ctx.cr6.lt) goto loc_8215F5A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8215f598
	if (!ctx.cr6.gt) goto loc_8215F598;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8215F588:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x8215F590;
	sub_8212A9B0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8215f588
	if (!ctx.cr0.eq) goto loc_8215F588;
loc_8215F598:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x8215f5e4
	goto loc_8215F5E4;
loc_8215F5A4:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,8604
	r31.s64 = ctx.r11.s64 + 8604;
	// lwz r11,8632(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8215f5e0
	if (!ctx.cr0.eq) goto loc_8215F5E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8632(r10)
	REX_STORE_U32(ctx.r10.u32 + 8632, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x8215F5D4;
	sub_82120AC0(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// bl 0x8269d008
	ctx.lr = 0x8215F5E0;
	sub_8269D008(ctx, base);
loc_8215F5E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215F5E4:
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

DEFINE_REX_FUNC(sub_82168080) {
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
	ctx.lr = 0x821680B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821680C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8216A1F0) {
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
	ctx.lr = 0x8216A1F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,52427
	ctx.r10.u64 = ctx.r10.u64 | 52427;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216a260
	if (ctx.cr6.lt) goto loc_8216A260;
	// lbz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 28);
	// addi r31,r7,16
	r31.s64 = ctx.r7.s64 + 16;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216a234
	if (ctx.cr0.eq) goto loc_8216A234;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8216A234;
	sub_8269D1B8(ctx, base);
loc_8216A234:
	// li r27,0
	r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// bl 0x8269ce98
	ctx.lr = 0x8216A254;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8216A260;
	sub_822F6020(ctx, base);
loc_8216A260:
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
	// bne cr6,0x8216a28c
	if (!ctx.cr6.eq) goto loc_8216A28C;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8216a2c4
	goto loc_8216A2C4;
loc_8216A28C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216a2b0
	if (ctx.cr0.eq) goto loc_8216A2B0;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8216a2c8
	if (!ctx.cr6.eq) goto loc_8216A2C8;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x8216a2c8
	goto loc_8216A2C8;
loc_8216A2B0:
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8216a2c8
	if (!ctx.cr6.eq) goto loc_8216A2C8;
loc_8216A2C4:
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_8216A2C8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8216a3c8
	if (!ctx.cr0.eq) goto loc_8216A3C8;
	// li r27,0
	r27.s64 = 0;
loc_8216A2E4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8216a348
	if (!ctx.cr6.eq) goto loc_8216A348;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8216a358
	if (ctx.cr0.eq) goto loc_8216A358;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216a320
	if (!ctx.cr6.eq) goto loc_8216A320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82169a90
	ctx.lr = 0x8216A320;
	sub_82169A90(ctx, base);
loc_8216A320:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82237648
	ctx.lr = 0x8216A344;
	sub_82237648(ctx, base);
	// b 0x8216a3b8
	goto loc_8216A3B8;
loc_8216A348:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8216a37c
	if (!ctx.cr0.eq) goto loc_8216A37C;
loc_8216A358:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r28,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, r28.u8);
	// stb r28,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8216a3b8
	goto loc_8216A3B8;
loc_8216A37C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216a394
	if (!ctx.cr6.eq) goto loc_8216A394;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82237648
	ctx.lr = 0x8216A394;
	sub_82237648(ctx, base);
loc_8216A394:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82169a90
	ctx.lr = 0x8216A3B8;
	sub_82169A90(ctx, base);
loc_8216A3B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216a2e4
	if (ctx.cr0.eq) goto loc_8216A2E4;
loc_8216A3C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8217A438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217A440;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r10,r5
	r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8217a474
	if (!ctx.cr6.gt) goto loc_8217A474;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8217a2e0
	ctx.lr = 0x8217A474;
	sub_8217A2E0(ctx, base);
loc_8217A474:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8269cc20
	ctx.lr = 0x8217A490;
	sub_8269CC20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217C430) {
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
	// bl 0x8217ab98
	ctx.lr = 0x8217C450;
	sub_8217AB98(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217a390
	ctx.lr = 0x8217C464;
	sub_8217A390(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217a390
	ctx.lr = 0x8217C478;
	sub_8217A390(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217a390
	ctx.lr = 0x8217C48C;
	sub_8217A390(ctx, base);
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

DEFINE_REX_FUNC(sub_8217F7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217F7F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,29744
	r30.s64 = ctx.r11.s64 + 29744;
	// bne cr6,0x8217f82c
	if (!ctx.cr6.eq) goto loc_8217F82C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8217F82C;
	sub_821231D0(ctx, base);
loc_8217F82C:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(r29.u32, 6, ctx.xer);
	// bge cr6,0x8217f848
	if (!ctx.cr6.lt) goto loc_8217F848;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8217F848;
	sub_821231D0(ctx, base);
loc_8217F848:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8217f868
	if (ctx.cr6.eq) goto loc_8217F868;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8217F868;
	sub_821231D0(ctx, base);
loc_8217F868:
	// lwz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82185CA0) {
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
	ctx.lr = 0x82185CA8;
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1188(r1)
	REX_STORE_U32(ctx.r1.u32 + 1188, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185db8
	if (ctx.cr6.eq) goto loc_82185DB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,1188
	ctx.r4.s64 = ctx.r1.s64 + 1188;
	// stw r11,1104(r1)
	REX_STORE_U32(ctx.r1.u32 + 1104, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82186440
	ctx.lr = 0x82185CD4;
	sub_82186440(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r10,31988
	r28.s64 = ctx.r10.s64 + 31988;
	// addi r27,r11,-21824
	r27.s64 = ctx.r11.s64 + -21824;
	// lwz r31,1104(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
loc_82185CEC:
	// bgt cr6,0x82185d00
	if (ctx.cr6.gt) goto loc_82185D00;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,155
	ctx.r5.s64 = 155;
	// bl 0x821231d0
	ctx.lr = 0x82185D00;
	sub_821231D0(ctx, base);
loc_82185D00:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x821864c8
	ctx.lr = 0x82185D18;
	sub_821864C8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82185d5c
	if (ctx.cr6.gt) goto loc_82185D5C;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82185d5c
	if (ctx.cr6.lt) goto loc_82185D5C;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82185d5c
	if (ctx.cr6.gt) goto loc_82185D5C;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82185d60
	if (!ctx.cr6.lt) goto loc_82185D60;
loc_82185D5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82185D60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82185dac
	if (ctx.cr0.eq) goto loc_82185DAC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185d94
	if (!ctx.cr6.eq) goto loc_82185D94;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82185D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82185dac
	goto loc_82185DAC;
loc_82185D94:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82186440
	ctx.lr = 0x82185DA0;
	sub_82186440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82186440
	ctx.lr = 0x82185DAC;
	sub_82186440(ctx, base);
loc_82185DAC:
	// lwz r31,1104(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82185cec
	if (!ctx.cr6.eq) goto loc_82185CEC;
loc_82185DB8:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8218E520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8218E528;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,6096(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x8218E540;
	sub_82135FB8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218E550:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8218e550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E550;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216d040
	ctx.lr = 0x8218E568;
	sub_8216D040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x8218E590;
	sub_821884B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x8218E59C;
	sub_82139870(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,192
	ctx.r11.s64 = 192;
	// li r9,255
	ctx.r9.s64 = 255;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r6,32
	ctx.r6.s64 = 32;
	// lfs f0,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136b58
	ctx.lr = 0x8218E5E4;
	sub_82136B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135f08
	ctx.lr = 0x8218E5EC;
	sub_82135F08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82193C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82193C58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82193c88
	if (!ctx.cr6.eq) goto loc_82193C88;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82193c8c
	if (ctx.cr6.eq) goto loc_82193C8C;
loc_82193C88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82193C8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82193da0
	if (ctx.cr0.eq) goto loc_82193DA0;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193ca8
	if (ctx.cr6.eq) goto loc_82193CA8;
	// bl 0x821357c8
	ctx.lr = 0x82193CA4;
	sub_821357C8(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_82193CA8:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193cc8
	if (ctx.cr6.eq) goto loc_82193CC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_82193CC8:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193ce8
	if (ctx.cr6.eq) goto loc_82193CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_82193CE8:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// bl 0x82177510
	ctx.lr = 0x82193D04;
	sub_82177510(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// and r29,r11,r10
	r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_82193DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219BF68) {
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
	ctx.lr = 0x8219BF70;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// bl 0x82197018
	ctx.lr = 0x8219BF90;
	sub_82197018(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r21,84(r31)
	REX_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r8,r8,-29540
	ctx.r8.s64 = ctx.r8.s64 + -29540;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r19,r31,132
	r19.s64 = r31.s64 + 132;
	// lfs f30,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f30.f64 = double(temp.f32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f30,88(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r11,103(r31)
	REX_STORE_U8(r31.u32 + 103, ctx.r11.u8);
	// stb r11,102(r31)
	REX_STORE_U8(r31.u32 + 102, ctx.r11.u8);
	// lfs f0,572(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,101(r31)
	REX_STORE_U8(r31.u32 + 101, ctx.r11.u8);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// stfs f30,104(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r25,r31,88
	r25.s64 = r31.s64 + 88;
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r24,r31,92
	r24.s64 = r31.s64 + 92;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r23,r31,96
	r23.s64 = r31.s64 + 96;
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// addi r22,r31,104
	r22.s64 = r31.s64 + 104;
	// addi r26,r31,112
	r26.s64 = r31.s64 + 112;
	// addi r20,r31,128
	r20.s64 = r31.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8219C020;
	sub_82120AC0(ctx, base);
	// addi r11,r31,172
	ctx.r11.s64 = r31.s64 + 172;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// stfs f30,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r9,r31,180
	ctx.r9.s64 = r31.s64 + 180;
	// stw r21,164(r31)
	REX_STORE_U32(r31.u32 + 164, r21.u32);
	// addi r8,r31,184
	ctx.r8.s64 = r31.s64 + 184;
	// stw r21,168(r31)
	REX_STORE_U32(r31.u32 + 168, r21.u32);
	// addi r7,r31,188
	ctx.r7.s64 = r31.s64 + 188;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,0(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stb r6,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r18,r31,160
	r18.s64 = r31.s64 + 160;
	// stfs f30,0(r8)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r17,r31,164
	r17.s64 = r31.s64 + 164;
	// stb r21,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r21.u8);
	// addi r16,r31,168
	r16.s64 = r31.s64 + 168;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x822f6280
	ctx.lr = 0x8219C080;
	sub_822F6280(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r15,r11,-17220
	r15.s64 = ctx.r11.s64 + -17220;
	// addi r14,r10,10360
	r14.s64 = ctx.r10.s64 + 10360;
	// beq 0x8219c0d0
	if (ctx.cr0.eq) goto loc_8219C0D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-29880
	ctx.r4.s64 = ctx.r11.s64 + -29880;
	// bl 0x82120600
	ctx.lr = 0x8219C0A8;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x8219C0BC;
	sub_82197628(ctx, base);
	// addi r11,r15,-48
	ctx.r11.s64 = r15.s64 + -48;
	// stw r14,0(r28)
	REX_STORE_U32(r28.u32 + 0, r14.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r11,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r11.u32);
	// b 0x8219c0d4
	goto loc_8219C0D4;
loc_8219C0D0:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C0D4:
	// addi r27,r31,28
	r27.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C0E4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c100
	if (ctx.cr0.eq) goto loc_8219C100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8219C100;
	sub_82120AC0(ctx, base);
loc_8219C100:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C108;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219c13c
	if (ctx.cr0.eq) goto loc_8219C13C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-29868
	ctx.r4.s64 = ctx.r11.s64 + -29868;
	// bl 0x82120600
	ctx.lr = 0x8219C120;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x8219C134;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c140
	goto loc_8219C140;
loc_8219C13C:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C140:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C14C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c168
	if (ctx.cr0.eq) goto loc_8219C168;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8219C168;
	sub_82120AC0(ctx, base);
loc_8219C168:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C170;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219c1a4
	if (ctx.cr0.eq) goto loc_8219C1A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-29856
	ctx.r4.s64 = ctx.r11.s64 + -29856;
	// bl 0x82120600
	ctx.lr = 0x8219C188;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8219C19C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c1a8
	goto loc_8219C1A8;
loc_8219C1A4:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C1A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C1B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c1d0
	if (ctx.cr0.eq) goto loc_8219C1D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8219C1D0;
	sub_82120AC0(ctx, base);
loc_8219C1D0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C1D8;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219c20c
	if (ctx.cr0.eq) goto loc_8219C20C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-29840
	ctx.r4.s64 = ctx.r11.s64 + -29840;
	// bl 0x82120600
	ctx.lr = 0x8219C1F0;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x8219C204;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c210
	goto loc_8219C210;
loc_8219C20C:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C210:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C21C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c238
	if (ctx.cr0.eq) goto loc_8219C238;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8219C238;
	sub_82120AC0(ctx, base);
loc_8219C238:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C240;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219c274
	if (ctx.cr0.eq) goto loc_8219C274;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82120600
	ctx.lr = 0x8219C258;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x8219C26C;
	sub_8219D708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c278
	goto loc_8219C278;
loc_8219C274:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C278:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C284;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c2a0
	if (ctx.cr0.eq) goto loc_8219C2A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C2A0;
	sub_82120AC0(ctx, base);
loc_8219C2A0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C2A8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c2dc
	if (ctx.cr0.eq) goto loc_8219C2DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,19512
	ctx.r4.s64 = ctx.r11.s64 + 19512;
	// bl 0x82120600
	ctx.lr = 0x8219C2C0;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x8219C2D4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c2e0
	goto loc_8219C2E0;
loc_8219C2DC:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C2E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C2EC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c308
	if (ctx.cr0.eq) goto loc_8219C308;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C308;
	sub_82120AC0(ctx, base);
loc_8219C308:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219C310;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c344
	if (ctx.cr0.eq) goto loc_8219C344;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-29820
	ctx.r4.s64 = ctx.r11.s64 + -29820;
	// bl 0x82120600
	ctx.lr = 0x8219C328;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x8219db58
	ctx.lr = 0x8219C33C;
	sub_8219DB58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c348
	goto loc_8219C348;
loc_8219C344:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C348:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C354;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c370
	if (ctx.cr0.eq) goto loc_8219C370;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C370;
	sub_82120AC0(ctx, base);
loc_8219C370:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C378;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c3ac
	if (ctx.cr0.eq) goto loc_8219C3AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,-29804
	ctx.r4.s64 = ctx.r11.s64 + -29804;
	// bl 0x82120600
	ctx.lr = 0x8219C390;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82196ba8
	ctx.lr = 0x8219C3A4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c3b0
	goto loc_8219C3B0;
loc_8219C3AC:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C3B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C3BC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c3d8
	if (ctx.cr0.eq) goto loc_8219C3D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x8219C3D8;
	sub_82120AC0(ctx, base);
loc_8219C3D8:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8219C3E0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c410
	if (ctx.cr0.eq) goto loc_8219C410;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-29788
	ctx.r4.s64 = ctx.r11.s64 + -29788;
	// bl 0x82120600
	ctx.lr = 0x8219C3F8;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x8219e000
	ctx.lr = 0x8219C40C;
	sub_8219E000(ctx, base);
	// b 0x8219c414
	goto loc_8219C414;
loc_8219C410:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8219C414:
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C428;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c444
	if (ctx.cr0.eq) goto loc_8219C444;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C444;
	sub_82120AC0(ctx, base);
loc_8219C444:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C44C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c480
	if (ctx.cr0.eq) goto loc_8219C480;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-29772
	ctx.r4.s64 = ctx.r11.s64 + -29772;
	// bl 0x82120600
	ctx.lr = 0x8219C464;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x82196ba8
	ctx.lr = 0x8219C478;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c484
	goto loc_8219C484;
loc_8219C480:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C484:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C490;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c4ac
	if (ctx.cr0.eq) goto loc_8219C4AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C4AC;
	sub_82120AC0(ctx, base);
loc_8219C4AC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x8219C4B4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c4f4
	if (ctx.cr0.eq) goto loc_8219C4F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-29756
	ctx.r4.s64 = ctx.r11.s64 + -29756;
	// bl 0x82120600
	ctx.lr = 0x8219C4CC;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x82197628
	ctx.lr = 0x8219C4E0;
	sub_82197628(ctx, base);
	// addi r11,r15,-24
	ctx.r11.s64 = r15.s64 + -24;
	// stw r14,0(r29)
	REX_STORE_U32(r29.u32 + 0, r14.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// b 0x8219c4f8
	goto loc_8219C4F8;
loc_8219C4F4:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C4F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C504;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c520
	if (ctx.cr0.eq) goto loc_8219C520;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C520;
	sub_82120AC0(ctx, base);
loc_8219C520:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x8219C528;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c564
	if (ctx.cr0.eq) goto loc_8219C564;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-29744
	ctx.r4.s64 = ctx.r11.s64 + -29744;
	// bl 0x82120600
	ctx.lr = 0x8219C540;
	sub_82120600(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x82197628
	ctx.lr = 0x8219C554;
	sub_82197628(ctx, base);
	// stw r14,0(r29)
	REX_STORE_U32(r29.u32 + 0, r14.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r15,52(r29)
	REX_STORE_U32(r29.u32 + 52, r15.u32);
	// b 0x8219c568
	goto loc_8219C568;
loc_8219C564:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C568:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C574;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c590
	if (ctx.cr0.eq) goto loc_8219C590;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C590;
	sub_82120AC0(ctx, base);
loc_8219C590:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C598;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c5cc
	if (ctx.cr0.eq) goto loc_8219C5CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-29724
	ctx.r4.s64 = ctx.r11.s64 + -29724;
	// bl 0x82120600
	ctx.lr = 0x8219C5B0;
	sub_82120600(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x8219C5C4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c5d0
	goto loc_8219C5D0;
loc_8219C5CC:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C5D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C5DC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c5f8
	if (ctx.cr0.eq) goto loc_8219C5F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C5F8;
	sub_82120AC0(ctx, base);
loc_8219C5F8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C600;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c634
	if (ctx.cr0.eq) goto loc_8219C634;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-29708
	ctx.r4.s64 = ctx.r11.s64 + -29708;
	// bl 0x82120600
	ctx.lr = 0x8219C618;
	sub_82120600(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x8219C62C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c638
	goto loc_8219C638;
loc_8219C634:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C638:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C644;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c660
	if (ctx.cr0.eq) goto loc_8219C660;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C660;
	sub_82120AC0(ctx, base);
loc_8219C660:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8219C668;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c69c
	if (ctx.cr0.eq) goto loc_8219C69C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-29692
	ctx.r4.s64 = ctx.r11.s64 + -29692;
	// bl 0x82120600
	ctx.lr = 0x8219C680;
	sub_82120600(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82191600
	ctx.lr = 0x8219C694;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c6a0
	goto loc_8219C6A0;
loc_8219C69C:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C6A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C6AC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c6c8
	if (ctx.cr0.eq) goto loc_8219C6C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rlwinm r30,r30,0,18,16
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C6C8;
	sub_82120AC0(ctx, base);
loc_8219C6C8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219C6D0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c704
	if (ctx.cr0.eq) goto loc_8219C704;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,23132
	ctx.r4.s64 = ctx.r11.s64 + 23132;
	// bl 0x82120600
	ctx.lr = 0x8219C6E8;
	sub_82120600(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
	// bl 0x82196ba8
	ctx.lr = 0x8219C6FC;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c708
	goto loc_8219C708;
loc_8219C704:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C708:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C714;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c730
	if (ctx.cr0.eq) goto loc_8219C730;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rlwinm r30,r30,0,17,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219C730;
	sub_82120AC0(ctx, base);
loc_8219C730:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8219C738;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219c76c
	if (ctx.cr0.eq) goto loc_8219C76C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82120600
	ctx.lr = 0x8219C750;
	sub_82120600(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// oris r30,r30,1
	r30.u64 = r30.u64 | 65536;
	// bl 0x82191600
	ctx.lr = 0x8219C764;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219c770
	goto loc_8219C770;
loc_8219C76C:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_8219C770:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8219C77C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c794
	if (ctx.cr0.eq) goto loc_8219C794;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x8219C794;
	sub_82120AC0(ctx, base);
loc_8219C794:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821D94C8) {
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
	ctx.lr = 0x821D94D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,819
	ctx.r10.s64 = 53673984;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,13106
	ctx.r10.u64 = ctx.r10.u64 | 13106;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821d9524
	if (ctx.cr6.lt) goto loc_821D9524;
	// addi r31,r7,12
	r31.s64 = ctx.r7.s64 + 12;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x821a8d60
	ctx.lr = 0x821D9500;
	sub_821A8D60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821D9510;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D9518;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x821D9524;
	sub_822F6020(ctx, base);
loc_821D9524:
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
	// bne cr6,0x821d9550
	if (!ctx.cr6.eq) goto loc_821D9550;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x821d9588
	goto loc_821D9588;
loc_821D9550:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9574
	if (ctx.cr0.eq) goto loc_821D9574;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d958c
	if (!ctx.cr6.eq) goto loc_821D958C;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x821d958c
	goto loc_821D958C;
loc_821D9574:
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d958c
	if (!ctx.cr6.eq) goto loc_821D958C;
loc_821D9588:
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_821D958C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d968c
	if (!ctx.cr0.eq) goto loc_821D968C;
	// li r27,0
	r27.s64 = 0;
loc_821D95A8:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d960c
	if (!ctx.cr6.eq) goto loc_821D960C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d961c
	if (ctx.cr0.eq) goto loc_821D961C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d95e4
	if (!ctx.cr6.eq) goto loc_821D95E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821a8a58
	ctx.lr = 0x821D95E4;
	sub_821A8A58(ctx, base);
loc_821D95E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821a8ac0
	ctx.lr = 0x821D9608;
	sub_821A8AC0(ctx, base);
	// b 0x821d967c
	goto loc_821D967C;
loc_821D960C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821d9640
	if (!ctx.cr0.eq) goto loc_821D9640;
loc_821D961C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r28,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, r28.u8);
	// stb r28,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821d967c
	goto loc_821D967C;
loc_821D9640:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d9658
	if (!ctx.cr6.eq) goto loc_821D9658;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821a8ac0
	ctx.lr = 0x821D9658;
	sub_821A8AC0(ctx, base);
loc_821D9658:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821a8a58
	ctx.lr = 0x821D967C;
	sub_821A8A58(ctx, base);
loc_821D967C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d95a8
	if (ctx.cr0.eq) goto loc_821D95A8;
loc_821D968C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E4D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r6,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r9,16592
	ctx.r6.s64 = ctx.r9.s64 + 16592;
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f13,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lfs f12,232(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,16592(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16592);
	ctx.f9.f64 = double(temp.f32);
	// stb r5,136(r3)
	REX_STORE_U8(ctx.r3.u32 + 136, ctx.r5.u8);
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lfs f10,220(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f10,128(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f9,140(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f12,152(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
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

DEFINE_REX_FUNC(sub_821EC908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EC910;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x821911f8
	ctx.lr = 0x821EC924;
	sub_821911F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// addi r10,r10,15784
	ctx.r10.s64 = ctx.r10.s64 + 15784;
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ec95c
	if (ctx.cr0.eq) goto loc_821EC95C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
loc_821EC95C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EFFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EFFE0;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12688(r1)
	ea = -12688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822e6808
	ctx.lr = 0x821EFFF4;
	sub_822E6808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,16676
	ctx.r4.s64 = ctx.r11.s64 + 16676;
	// bl 0x82120600
	ctx.lr = 0x821F0004;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,6384
	ctx.r3.s64 = ctx.r1.s64 + 6384;
	// addi r31,r11,19748
	r31.s64 = ctx.r11.s64 + 19748;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F0018;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16696
	ctx.r4.s64 = ctx.r11.s64 + 16696;
	// bl 0x82120600
	ctx.lr = 0x821F0028;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r7,r11,29224
	ctx.r7.s64 = ctx.r11.s64 + 29224;
	// addi r5,r1,6384
	ctx.r5.s64 = ctx.r1.s64 + 6384;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// bl 0x8213ac58
	ctx.lr = 0x821F0048;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821F0058;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6384
	ctx.r3.s64 = ctx.r1.s64 + 6384;
	// bl 0x82120ac0
	ctx.lr = 0x821F0068;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821F0078;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6448
	ctx.r3.s64 = ctx.r1.s64 + 6448;
	// addi r4,r11,16724
	ctx.r4.s64 = ctx.r11.s64 + 16724;
	// bl 0x82120600
	ctx.lr = 0x821F0088;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120600
	ctx.lr = 0x821F0094;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9520
	ctx.r3.s64 = ctx.r1.s64 + 9520;
	// addi r4,r11,16752
	ctx.r4.s64 = ctx.r11.s64 + 16752;
	// bl 0x82120600
	ctx.lr = 0x821F00A4;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,6448
	ctx.r6.s64 = ctx.r1.s64 + 6448;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,28616
	ctx.r7.s64 = ctx.r11.s64 + 28616;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,9520
	ctx.r4.s64 = ctx.r1.s64 + 9520;
	// bl 0x8213ac58
	ctx.lr = 0x821F00C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9520
	ctx.r3.s64 = ctx.r1.s64 + 9520;
	// bl 0x82120ac0
	ctx.lr = 0x821F00D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821F00E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6448
	ctx.r3.s64 = ctx.r1.s64 + 6448;
	// bl 0x82120ac0
	ctx.lr = 0x821F00F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,16788
	ctx.r4.s64 = ctx.r11.s64 + 16788;
	// bl 0x82120600
	ctx.lr = 0x821F0100;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,12528
	ctx.r3.s64 = ctx.r1.s64 + 12528;
	// bl 0x82120600
	ctx.lr = 0x821F010C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,16816
	ctx.r4.s64 = ctx.r11.s64 + 16816;
	// bl 0x82120600
	ctx.lr = 0x821F011C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r7,r11,27496
	ctx.r7.s64 = ctx.r11.s64 + 27496;
	// addi r5,r1,12528
	ctx.r5.s64 = ctx.r1.s64 + 12528;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x8213ac58
	ctx.lr = 0x821F0138;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821F0148;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12528
	ctx.r3.s64 = ctx.r1.s64 + 12528;
	// bl 0x82120ac0
	ctx.lr = 0x821F0158;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x821F0168;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9584
	ctx.r3.s64 = ctx.r1.s64 + 9584;
	// addi r4,r11,16848
	ctx.r4.s64 = ctx.r11.s64 + 16848;
	// bl 0x82120600
	ctx.lr = 0x821F0178;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120600
	ctx.lr = 0x821F0184;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6512
	ctx.r3.s64 = ctx.r1.s64 + 6512;
	// addi r4,r11,16856
	ctx.r4.s64 = ctx.r11.s64 + 16856;
	// bl 0x82120600
	ctx.lr = 0x821F0194;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,9584
	ctx.r6.s64 = ctx.r1.s64 + 9584;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,26912
	ctx.r7.s64 = ctx.r11.s64 + 26912;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,6512
	ctx.r4.s64 = ctx.r1.s64 + 6512;
	// bl 0x8213ac58
	ctx.lr = 0x821F01B0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6512
	ctx.r3.s64 = ctx.r1.s64 + 6512;
	// bl 0x82120ac0
	ctx.lr = 0x821F01C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x821F01D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9584
	ctx.r3.s64 = ctx.r1.s64 + 9584;
	// bl 0x82120ac0
	ctx.lr = 0x821F01E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,16872
	ctx.r4.s64 = ctx.r11.s64 + 16872;
	// bl 0x82120600
	ctx.lr = 0x821F01F0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6576
	ctx.r3.s64 = ctx.r1.s64 + 6576;
	// bl 0x82120600
	ctx.lr = 0x821F01FC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,16888
	ctx.r4.s64 = ctx.r11.s64 + 16888;
	// bl 0x82120600
	ctx.lr = 0x821F020C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,560
	ctx.r6.s64 = ctx.r1.s64 + 560;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,25512
	ctx.r7.s64 = ctx.r11.s64 + 25512;
	// addi r5,r1,6576
	ctx.r5.s64 = ctx.r1.s64 + 6576;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x8213ac58
	ctx.lr = 0x821F0228;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82120ac0
	ctx.lr = 0x821F0238;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6576
	ctx.r3.s64 = ctx.r1.s64 + 6576;
	// bl 0x82120ac0
	ctx.lr = 0x821F0248;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82120ac0
	ctx.lr = 0x821F0258;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6640
	ctx.r3.s64 = ctx.r1.s64 + 6640;
	// addi r4,r11,16908
	ctx.r4.s64 = ctx.r11.s64 + 16908;
	// bl 0x82120600
	ctx.lr = 0x821F0268;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120600
	ctx.lr = 0x821F0274;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11120
	ctx.r3.s64 = ctx.r1.s64 + 11120;
	// addi r4,r11,16920
	ctx.r4.s64 = ctx.r11.s64 + 16920;
	// bl 0x82120600
	ctx.lr = 0x821F0284;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,6640
	ctx.r6.s64 = ctx.r1.s64 + 6640;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,24696
	ctx.r7.s64 = ctx.r11.s64 + 24696;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,11120
	ctx.r4.s64 = ctx.r1.s64 + 11120;
	// bl 0x8213ac58
	ctx.lr = 0x821F02A0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11120
	ctx.r3.s64 = ctx.r1.s64 + 11120;
	// bl 0x82120ac0
	ctx.lr = 0x821F02B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x821F02C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6640
	ctx.r3.s64 = ctx.r1.s64 + 6640;
	// bl 0x82120ac0
	ctx.lr = 0x821F02D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,16940
	ctx.r4.s64 = ctx.r11.s64 + 16940;
	// bl 0x82120600
	ctx.lr = 0x821F02E0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9648
	ctx.r3.s64 = ctx.r1.s64 + 9648;
	// bl 0x82120600
	ctx.lr = 0x821F02EC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,16956
	ctx.r4.s64 = ctx.r11.s64 + 16956;
	// bl 0x82120600
	ctx.lr = 0x821F02FC;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,21936
	ctx.r7.s64 = ctx.r11.s64 + 21936;
	// addi r5,r1,9648
	ctx.r5.s64 = ctx.r1.s64 + 9648;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x8213ac58
	ctx.lr = 0x821F0318;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82120ac0
	ctx.lr = 0x821F0328;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9648
	ctx.r3.s64 = ctx.r1.s64 + 9648;
	// bl 0x82120ac0
	ctx.lr = 0x821F0338;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82120ac0
	ctx.lr = 0x821F0348;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11888
	ctx.r3.s64 = ctx.r1.s64 + 11888;
	// addi r4,r11,16980
	ctx.r4.s64 = ctx.r11.s64 + 16980;
	// bl 0x82120600
	ctx.lr = 0x821F0358;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82120600
	ctx.lr = 0x821F0364;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6704
	ctx.r3.s64 = ctx.r1.s64 + 6704;
	// addi r4,r11,17004
	ctx.r4.s64 = ctx.r11.s64 + 17004;
	// bl 0x82120600
	ctx.lr = 0x821F0374;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,11888
	ctx.r6.s64 = ctx.r1.s64 + 11888;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,22592
	ctx.r7.s64 = ctx.r11.s64 + 22592;
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,6704
	ctx.r4.s64 = ctx.r1.s64 + 6704;
	// bl 0x8213ac58
	ctx.lr = 0x821F0390;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6704
	ctx.r3.s64 = ctx.r1.s64 + 6704;
	// bl 0x82120ac0
	ctx.lr = 0x821F03A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82120ac0
	ctx.lr = 0x821F03B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11888
	ctx.r3.s64 = ctx.r1.s64 + 11888;
	// bl 0x82120ac0
	ctx.lr = 0x821F03C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// addi r4,r11,17036
	ctx.r4.s64 = ctx.r11.s64 + 17036;
	// bl 0x82120600
	ctx.lr = 0x821F03D0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6768
	ctx.r3.s64 = ctx.r1.s64 + 6768;
	// bl 0x82120600
	ctx.lr = 0x821F03DC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,17052
	ctx.r4.s64 = ctx.r11.s64 + 17052;
	// bl 0x82120600
	ctx.lr = 0x821F03EC;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,23528
	ctx.r7.s64 = ctx.r11.s64 + 23528;
	// addi r5,r1,6768
	ctx.r5.s64 = ctx.r1.s64 + 6768;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// bl 0x8213ac58
	ctx.lr = 0x821F0408;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82120ac0
	ctx.lr = 0x821F0418;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6768
	ctx.r3.s64 = ctx.r1.s64 + 6768;
	// bl 0x82120ac0
	ctx.lr = 0x821F0428;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82120ac0
	ctx.lr = 0x821F0438;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6832
	ctx.r3.s64 = ctx.r1.s64 + 6832;
	// addi r4,r11,17076
	ctx.r4.s64 = ctx.r11.s64 + 17076;
	// bl 0x82120600
	ctx.lr = 0x821F0448;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82120600
	ctx.lr = 0x821F0454;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9712
	ctx.r3.s64 = ctx.r1.s64 + 9712;
	// addi r4,r11,17092
	ctx.r4.s64 = ctx.r11.s64 + 17092;
	// bl 0x82120600
	ctx.lr = 0x821F0464;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,6832
	ctx.r6.s64 = ctx.r1.s64 + 6832;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,21008
	ctx.r7.s64 = ctx.r11.s64 + 21008;
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// addi r4,r1,9712
	ctx.r4.s64 = ctx.r1.s64 + 9712;
	// bl 0x8213ac58
	ctx.lr = 0x821F0480;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9712
	ctx.r3.s64 = ctx.r1.s64 + 9712;
	// bl 0x82120ac0
	ctx.lr = 0x821F0490;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82120ac0
	ctx.lr = 0x821F04A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6832
	ctx.r3.s64 = ctx.r1.s64 + 6832;
	// bl 0x82120ac0
	ctx.lr = 0x821F04B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// addi r4,r11,17116
	ctx.r4.s64 = ctx.r11.s64 + 17116;
	// bl 0x82120600
	ctx.lr = 0x821F04C0;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,11184
	ctx.r3.s64 = ctx.r1.s64 + 11184;
	// addi r31,r11,20272
	r31.s64 = ctx.r11.s64 + 20272;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F04D4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// bl 0x82120600
	ctx.lr = 0x821F04E4;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,19408
	ctx.r7.s64 = ctx.r11.s64 + 19408;
	// addi r5,r1,11184
	ctx.r5.s64 = ctx.r1.s64 + 11184;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// bl 0x8213ac58
	ctx.lr = 0x821F0500;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82120ac0
	ctx.lr = 0x821F0510;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11184
	ctx.r3.s64 = ctx.r1.s64 + 11184;
	// bl 0x82120ac0
	ctx.lr = 0x821F0520;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82120ac0
	ctx.lr = 0x821F0530;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9776
	ctx.r3.s64 = ctx.r1.s64 + 9776;
	// addi r4,r11,17148
	ctx.r4.s64 = ctx.r11.s64 + 17148;
	// bl 0x82120600
	ctx.lr = 0x821F0540;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82120600
	ctx.lr = 0x821F054C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6896
	ctx.r3.s64 = ctx.r1.s64 + 6896;
	// addi r4,r11,17168
	ctx.r4.s64 = ctx.r11.s64 + 17168;
	// bl 0x82120600
	ctx.lr = 0x821F055C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,9776
	ctx.r6.s64 = ctx.r1.s64 + 9776;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,19904
	ctx.r7.s64 = ctx.r11.s64 + 19904;
	// addi r5,r1,1200
	ctx.r5.s64 = ctx.r1.s64 + 1200;
	// addi r4,r1,6896
	ctx.r4.s64 = ctx.r1.s64 + 6896;
	// bl 0x8213ac58
	ctx.lr = 0x821F0578;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6896
	ctx.r3.s64 = ctx.r1.s64 + 6896;
	// bl 0x82120ac0
	ctx.lr = 0x821F0588;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82120ac0
	ctx.lr = 0x821F0598;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9776
	ctx.r3.s64 = ctx.r1.s64 + 9776;
	// bl 0x82120ac0
	ctx.lr = 0x821F05A8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// addi r4,r11,17196
	ctx.r4.s64 = ctx.r11.s64 + 17196;
	// bl 0x82120600
	ctx.lr = 0x821F05B8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6960
	ctx.r3.s64 = ctx.r1.s64 + 6960;
	// bl 0x82120600
	ctx.lr = 0x821F05C4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// addi r4,r11,17216
	ctx.r4.s64 = ctx.r11.s64 + 17216;
	// bl 0x82120600
	ctx.lr = 0x821F05D4;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,1328
	ctx.r6.s64 = ctx.r1.s64 + 1328;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,20272
	ctx.r7.s64 = ctx.r11.s64 + 20272;
	// addi r5,r1,6960
	ctx.r5.s64 = ctx.r1.s64 + 6960;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// bl 0x8213ac58
	ctx.lr = 0x821F05F0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82120ac0
	ctx.lr = 0x821F0600;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6960
	ctx.r3.s64 = ctx.r1.s64 + 6960;
	// bl 0x82120ac0
	ctx.lr = 0x821F0610;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82120ac0
	ctx.lr = 0x821F0620;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7024
	ctx.r3.s64 = ctx.r1.s64 + 7024;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// bl 0x82120600
	ctx.lr = 0x821F0630;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82120600
	ctx.lr = 0x821F063C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12272
	ctx.r3.s64 = ctx.r1.s64 + 12272;
	// addi r4,r11,17268
	ctx.r4.s64 = ctx.r11.s64 + 17268;
	// bl 0x82120600
	ctx.lr = 0x821F064C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,7024
	ctx.r6.s64 = ctx.r1.s64 + 7024;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,20640
	ctx.r7.s64 = ctx.r11.s64 + 20640;
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// addi r4,r1,12272
	ctx.r4.s64 = ctx.r1.s64 + 12272;
	// bl 0x8213ac58
	ctx.lr = 0x821F0668;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12272
	ctx.r3.s64 = ctx.r1.s64 + 12272;
	// bl 0x82120ac0
	ctx.lr = 0x821F0678;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82120ac0
	ctx.lr = 0x821F0688;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7024
	ctx.r3.s64 = ctx.r1.s64 + 7024;
	// bl 0x82120ac0
	ctx.lr = 0x821F0698;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// addi r4,r11,17300
	ctx.r4.s64 = ctx.r11.s64 + 17300;
	// bl 0x82120600
	ctx.lr = 0x821F06A8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9840
	ctx.r3.s64 = ctx.r1.s64 + 9840;
	// bl 0x82120600
	ctx.lr = 0x821F06B4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// addi r4,r11,17320
	ctx.r4.s64 = ctx.r11.s64 + 17320;
	// bl 0x82120600
	ctx.lr = 0x821F06C4;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,1520
	ctx.r6.s64 = ctx.r1.s64 + 1520;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,18736
	ctx.r7.s64 = ctx.r11.s64 + 18736;
	// addi r5,r1,9840
	ctx.r5.s64 = ctx.r1.s64 + 9840;
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// bl 0x8213ac58
	ctx.lr = 0x821F06E0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82120ac0
	ctx.lr = 0x821F06F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9840
	ctx.r3.s64 = ctx.r1.s64 + 9840;
	// bl 0x82120ac0
	ctx.lr = 0x821F0700;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82120ac0
	ctx.lr = 0x821F0710;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11248
	ctx.r3.s64 = ctx.r1.s64 + 11248;
	// addi r4,r11,17348
	ctx.r4.s64 = ctx.r11.s64 + 17348;
	// bl 0x82120600
	ctx.lr = 0x821F0720;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82120600
	ctx.lr = 0x821F072C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7088
	ctx.r3.s64 = ctx.r1.s64 + 7088;
	// addi r4,r11,17364
	ctx.r4.s64 = ctx.r11.s64 + 17364;
	// bl 0x82120600
	ctx.lr = 0x821F073C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,11248
	ctx.r6.s64 = ctx.r1.s64 + 11248;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,16928
	ctx.r7.s64 = ctx.r11.s64 + 16928;
	// addi r5,r1,1584
	ctx.r5.s64 = ctx.r1.s64 + 1584;
	// addi r4,r1,7088
	ctx.r4.s64 = ctx.r1.s64 + 7088;
	// bl 0x8213ac58
	ctx.lr = 0x821F0758;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7088
	ctx.r3.s64 = ctx.r1.s64 + 7088;
	// bl 0x82120ac0
	ctx.lr = 0x821F0768;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82120ac0
	ctx.lr = 0x821F0778;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11248
	ctx.r3.s64 = ctx.r1.s64 + 11248;
	// bl 0x82120ac0
	ctx.lr = 0x821F0788;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82120600
	ctx.lr = 0x821F0798;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7152
	ctx.r3.s64 = ctx.r1.s64 + 7152;
	// addi r31,r11,17396
	r31.s64 = ctx.r11.s64 + 17396;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F07AC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// addi r4,r11,17404
	ctx.r4.s64 = ctx.r11.s64 + 17404;
	// bl 0x82120600
	ctx.lr = 0x821F07BC;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,1712
	ctx.r6.s64 = ctx.r1.s64 + 1712;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-176
	ctx.r7.s64 = ctx.r11.s64 + -176;
	// addi r5,r1,7152
	ctx.r5.s64 = ctx.r1.s64 + 7152;
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// bl 0x8213ac58
	ctx.lr = 0x821F07D8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82120ac0
	ctx.lr = 0x821F07E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7152
	ctx.r3.s64 = ctx.r1.s64 + 7152;
	// bl 0x82120ac0
	ctx.lr = 0x821F07F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82120ac0
	ctx.lr = 0x821F0808;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7216
	ctx.r3.s64 = ctx.r1.s64 + 7216;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82120600
	ctx.lr = 0x821F0818;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82120600
	ctx.lr = 0x821F0824;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9904
	ctx.r3.s64 = ctx.r1.s64 + 9904;
	// addi r4,r11,17436
	ctx.r4.s64 = ctx.r11.s64 + 17436;
	// bl 0x82120600
	ctx.lr = 0x821F0834;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,7216
	ctx.r6.s64 = ctx.r1.s64 + 7216;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-8792
	ctx.r7.s64 = ctx.r11.s64 + -8792;
	// addi r5,r1,1776
	ctx.r5.s64 = ctx.r1.s64 + 1776;
	// addi r4,r1,9904
	ctx.r4.s64 = ctx.r1.s64 + 9904;
	// bl 0x8213ac58
	ctx.lr = 0x821F0850;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9904
	ctx.r3.s64 = ctx.r1.s64 + 9904;
	// bl 0x82120ac0
	ctx.lr = 0x821F0860;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82120ac0
	ctx.lr = 0x821F0870;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7216
	ctx.r3.s64 = ctx.r1.s64 + 7216;
	// bl 0x82120ac0
	ctx.lr = 0x821F0880;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82120600
	ctx.lr = 0x821F0890;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,11952
	ctx.r3.s64 = ctx.r1.s64 + 11952;
	// bl 0x82120600
	ctx.lr = 0x821F089C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// addi r4,r11,17460
	ctx.r4.s64 = ctx.r11.s64 + 17460;
	// bl 0x82120600
	ctx.lr = 0x821F08AC;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,1904
	ctx.r6.s64 = ctx.r1.s64 + 1904;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-20064
	ctx.r7.s64 = ctx.r11.s64 + -20064;
	// addi r5,r1,11952
	ctx.r5.s64 = ctx.r1.s64 + 11952;
	// addi r4,r1,1840
	ctx.r4.s64 = ctx.r1.s64 + 1840;
	// bl 0x8213ac58
	ctx.lr = 0x821F08C8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82120ac0
	ctx.lr = 0x821F08D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11952
	ctx.r3.s64 = ctx.r1.s64 + 11952;
	// bl 0x82120ac0
	ctx.lr = 0x821F08E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82120ac0
	ctx.lr = 0x821F08F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9968
	ctx.r3.s64 = ctx.r1.s64 + 9968;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82120600
	ctx.lr = 0x821F0908;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82120600
	ctx.lr = 0x821F0914;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7280
	ctx.r3.s64 = ctx.r1.s64 + 7280;
	// addi r4,r11,17492
	ctx.r4.s64 = ctx.r11.s64 + 17492;
	// bl 0x82120600
	ctx.lr = 0x821F0924;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,9968
	ctx.r6.s64 = ctx.r1.s64 + 9968;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-31160
	ctx.r7.s64 = ctx.r11.s64 + -31160;
	// addi r5,r1,1968
	ctx.r5.s64 = ctx.r1.s64 + 1968;
	// addi r4,r1,7280
	ctx.r4.s64 = ctx.r1.s64 + 7280;
	// bl 0x8213ac58
	ctx.lr = 0x821F0940;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7280
	ctx.r3.s64 = ctx.r1.s64 + 7280;
	// bl 0x82120ac0
	ctx.lr = 0x821F0950;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82120ac0
	ctx.lr = 0x821F0960;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9968
	ctx.r3.s64 = ctx.r1.s64 + 9968;
	// bl 0x82120ac0
	ctx.lr = 0x821F0970;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// addi r4,r11,17516
	ctx.r4.s64 = ctx.r11.s64 + 17516;
	// bl 0x82120600
	ctx.lr = 0x821F0980;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7344
	ctx.r3.s64 = ctx.r1.s64 + 7344;
	// addi r31,r11,20780
	r31.s64 = ctx.r11.s64 + 20780;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F0994;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// addi r4,r11,17532
	ctx.r4.s64 = ctx.r11.s64 + 17532;
	// bl 0x82120600
	ctx.lr = 0x821F09A4;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,2096
	ctx.r6.s64 = ctx.r1.s64 + 2096;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-32496
	ctx.r7.s64 = ctx.r11.s64 + -32496;
	// addi r5,r1,7344
	ctx.r5.s64 = ctx.r1.s64 + 7344;
	// addi r4,r1,2032
	ctx.r4.s64 = ctx.r1.s64 + 2032;
	// bl 0x8213ac58
	ctx.lr = 0x821F09C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82120ac0
	ctx.lr = 0x821F09D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7344
	ctx.r3.s64 = ctx.r1.s64 + 7344;
	// bl 0x82120ac0
	ctx.lr = 0x821F09E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82120ac0
	ctx.lr = 0x821F09F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7408
	ctx.r3.s64 = ctx.r1.s64 + 7408;
	// addi r4,r11,17556
	ctx.r4.s64 = ctx.r11.s64 + 17556;
	// bl 0x82120600
	ctx.lr = 0x821F0A00;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82120600
	ctx.lr = 0x821F0A0C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11312
	ctx.r3.s64 = ctx.r1.s64 + 11312;
	// addi r4,r11,17576
	ctx.r4.s64 = ctx.r11.s64 + 17576;
	// bl 0x82120600
	ctx.lr = 0x821F0A1C;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,7408
	ctx.r6.s64 = ctx.r1.s64 + 7408;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,32264
	ctx.r7.s64 = ctx.r11.s64 + 32264;
	// addi r5,r1,2160
	ctx.r5.s64 = ctx.r1.s64 + 2160;
	// addi r4,r1,11312
	ctx.r4.s64 = ctx.r1.s64 + 11312;
	// bl 0x8213ac58
	ctx.lr = 0x821F0A38;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11312
	ctx.r3.s64 = ctx.r1.s64 + 11312;
	// bl 0x82120ac0
	ctx.lr = 0x821F0A48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82120ac0
	ctx.lr = 0x821F0A58;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7408
	ctx.r3.s64 = ctx.r1.s64 + 7408;
	// bl 0x82120ac0
	ctx.lr = 0x821F0A68;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// addi r4,r11,17604
	ctx.r4.s64 = ctx.r11.s64 + 17604;
	// bl 0x82120600
	ctx.lr = 0x821F0A78;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10032
	ctx.r3.s64 = ctx.r1.s64 + 10032;
	// bl 0x82120600
	ctx.lr = 0x821F0A84;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// addi r4,r11,17636
	ctx.r4.s64 = ctx.r11.s64 + 17636;
	// bl 0x82120600
	ctx.lr = 0x821F0A94;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2288
	ctx.r6.s64 = ctx.r1.s64 + 2288;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-32632
	ctx.r7.s64 = ctx.r11.s64 + -32632;
	// addi r5,r1,10032
	ctx.r5.s64 = ctx.r1.s64 + 10032;
	// addi r4,r1,2224
	ctx.r4.s64 = ctx.r1.s64 + 2224;
	// bl 0x8213ac58
	ctx.lr = 0x821F0AB0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82120ac0
	ctx.lr = 0x821F0AC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10032
	ctx.r3.s64 = ctx.r1.s64 + 10032;
	// bl 0x82120ac0
	ctx.lr = 0x821F0AD0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82120ac0
	ctx.lr = 0x821F0AE0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12464
	ctx.r3.s64 = ctx.r1.s64 + 12464;
	// addi r4,r11,17676
	ctx.r4.s64 = ctx.r11.s64 + 17676;
	// bl 0x82120600
	ctx.lr = 0x821F0AF0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82120600
	ctx.lr = 0x821F0AFC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7472
	ctx.r3.s64 = ctx.r1.s64 + 7472;
	// addi r4,r11,17696
	ctx.r4.s64 = ctx.r11.s64 + 17696;
	// bl 0x82120600
	ctx.lr = 0x821F0B0C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,12464
	ctx.r6.s64 = ctx.r1.s64 + 12464;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-32192
	ctx.r7.s64 = ctx.r11.s64 + -32192;
	// addi r5,r1,2352
	ctx.r5.s64 = ctx.r1.s64 + 2352;
	// addi r4,r1,7472
	ctx.r4.s64 = ctx.r1.s64 + 7472;
	// bl 0x8213ac58
	ctx.lr = 0x821F0B28;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7472
	ctx.r3.s64 = ctx.r1.s64 + 7472;
	// bl 0x82120ac0
	ctx.lr = 0x821F0B38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82120ac0
	ctx.lr = 0x821F0B48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12464
	ctx.r3.s64 = ctx.r1.s64 + 12464;
	// bl 0x82120ac0
	ctx.lr = 0x821F0B58;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// addi r4,r11,17724
	ctx.r4.s64 = ctx.r11.s64 + 17724;
	// bl 0x82120600
	ctx.lr = 0x821F0B68;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7536
	ctx.r3.s64 = ctx.r1.s64 + 7536;
	// bl 0x82120600
	ctx.lr = 0x821F0B74;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// addi r4,r11,17748
	ctx.r4.s64 = ctx.r11.s64 + 17748;
	// bl 0x82120600
	ctx.lr = 0x821F0B84;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2480
	ctx.r6.s64 = ctx.r1.s64 + 2480;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-31544
	ctx.r7.s64 = ctx.r11.s64 + -31544;
	// addi r5,r1,7536
	ctx.r5.s64 = ctx.r1.s64 + 7536;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// bl 0x8213ac58
	ctx.lr = 0x821F0BA0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82120ac0
	ctx.lr = 0x821F0BB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7536
	ctx.r3.s64 = ctx.r1.s64 + 7536;
	// bl 0x82120ac0
	ctx.lr = 0x821F0BC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82120ac0
	ctx.lr = 0x821F0BD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7600
	ctx.r3.s64 = ctx.r1.s64 + 7600;
	// addi r4,r11,17780
	ctx.r4.s64 = ctx.r11.s64 + 17780;
	// bl 0x82120600
	ctx.lr = 0x821F0BE0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82120600
	ctx.lr = 0x821F0BEC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10096
	ctx.r3.s64 = ctx.r1.s64 + 10096;
	// addi r4,r11,17792
	ctx.r4.s64 = ctx.r11.s64 + 17792;
	// bl 0x82120600
	ctx.lr = 0x821F0BFC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,7600
	ctx.r6.s64 = ctx.r1.s64 + 7600;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-30984
	ctx.r7.s64 = ctx.r11.s64 + -30984;
	// addi r5,r1,2544
	ctx.r5.s64 = ctx.r1.s64 + 2544;
	// addi r4,r1,10096
	ctx.r4.s64 = ctx.r1.s64 + 10096;
	// bl 0x8213ac58
	ctx.lr = 0x821F0C18;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10096
	ctx.r3.s64 = ctx.r1.s64 + 10096;
	// bl 0x82120ac0
	ctx.lr = 0x821F0C28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82120ac0
	ctx.lr = 0x821F0C38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7600
	ctx.r3.s64 = ctx.r1.s64 + 7600;
	// bl 0x82120ac0
	ctx.lr = 0x821F0C48;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// addi r4,r11,17812
	ctx.r4.s64 = ctx.r11.s64 + 17812;
	// bl 0x82120600
	ctx.lr = 0x821F0C58;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,11376
	ctx.r3.s64 = ctx.r1.s64 + 11376;
	// bl 0x82120600
	ctx.lr = 0x821F0C64;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// addi r4,r11,17832
	ctx.r4.s64 = ctx.r11.s64 + 17832;
	// bl 0x82120600
	ctx.lr = 0x821F0C74;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2672
	ctx.r6.s64 = ctx.r1.s64 + 2672;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-30512
	ctx.r7.s64 = ctx.r11.s64 + -30512;
	// addi r5,r1,11376
	ctx.r5.s64 = ctx.r1.s64 + 11376;
	// addi r4,r1,2608
	ctx.r4.s64 = ctx.r1.s64 + 2608;
	// bl 0x8213ac58
	ctx.lr = 0x821F0C90;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82120ac0
	ctx.lr = 0x821F0CA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11376
	ctx.r3.s64 = ctx.r1.s64 + 11376;
	// bl 0x82120ac0
	ctx.lr = 0x821F0CB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82120ac0
	ctx.lr = 0x821F0CC0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10160
	ctx.r3.s64 = ctx.r1.s64 + 10160;
	// addi r4,r11,17852
	ctx.r4.s64 = ctx.r11.s64 + 17852;
	// bl 0x82120600
	ctx.lr = 0x821F0CD0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82120600
	ctx.lr = 0x821F0CDC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7664
	ctx.r3.s64 = ctx.r1.s64 + 7664;
	// addi r4,r11,17872
	ctx.r4.s64 = ctx.r11.s64 + 17872;
	// bl 0x82120600
	ctx.lr = 0x821F0CEC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,10160
	ctx.r6.s64 = ctx.r1.s64 + 10160;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-27800
	ctx.r7.s64 = ctx.r11.s64 + -27800;
	// addi r5,r1,2736
	ctx.r5.s64 = ctx.r1.s64 + 2736;
	// addi r4,r1,7664
	ctx.r4.s64 = ctx.r1.s64 + 7664;
	// bl 0x8213ac58
	ctx.lr = 0x821F0D08;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7664
	ctx.r3.s64 = ctx.r1.s64 + 7664;
	// bl 0x82120ac0
	ctx.lr = 0x821F0D18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82120ac0
	ctx.lr = 0x821F0D28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10160
	ctx.r3.s64 = ctx.r1.s64 + 10160;
	// bl 0x82120ac0
	ctx.lr = 0x821F0D38;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// addi r4,r11,17896
	ctx.r4.s64 = ctx.r11.s64 + 17896;
	// bl 0x82120600
	ctx.lr = 0x821F0D48;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,7728
	ctx.r3.s64 = ctx.r1.s64 + 7728;
	// addi r31,r11,20428
	r31.s64 = ctx.r11.s64 + 20428;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F0D5C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// addi r4,r11,17904
	ctx.r4.s64 = ctx.r11.s64 + 17904;
	// bl 0x82120600
	ctx.lr = 0x821F0D6C;
	sub_82120600(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r1,2864
	ctx.r6.s64 = ctx.r1.s64 + 2864;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-32624
	ctx.r7.s64 = ctx.r11.s64 + -32624;
	// addi r5,r1,7728
	ctx.r5.s64 = ctx.r1.s64 + 7728;
	// addi r4,r1,2800
	ctx.r4.s64 = ctx.r1.s64 + 2800;
	// bl 0x8213ac58
	ctx.lr = 0x821F0D88;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// bl 0x82120ac0
	ctx.lr = 0x821F0D98;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7728
	ctx.r3.s64 = ctx.r1.s64 + 7728;
	// bl 0x82120ac0
	ctx.lr = 0x821F0DA8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82120ac0
	ctx.lr = 0x821F0DB8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7792
	ctx.r3.s64 = ctx.r1.s64 + 7792;
	// addi r4,r11,17920
	ctx.r4.s64 = ctx.r11.s64 + 17920;
	// bl 0x82120600
	ctx.lr = 0x821F0DC8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82120600
	ctx.lr = 0x821F0DD4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12016
	ctx.r3.s64 = ctx.r1.s64 + 12016;
	// addi r4,r11,17932
	ctx.r4.s64 = ctx.r11.s64 + 17932;
	// bl 0x82120600
	ctx.lr = 0x821F0DE4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,7792
	ctx.r6.s64 = ctx.r1.s64 + 7792;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,32160
	ctx.r7.s64 = ctx.r11.s64 + 32160;
	// addi r5,r1,2928
	ctx.r5.s64 = ctx.r1.s64 + 2928;
	// addi r4,r1,12016
	ctx.r4.s64 = ctx.r1.s64 + 12016;
	// bl 0x8213ac58
	ctx.lr = 0x821F0E00;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12016
	ctx.r3.s64 = ctx.r1.s64 + 12016;
	// bl 0x82120ac0
	ctx.lr = 0x821F0E10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82120ac0
	ctx.lr = 0x821F0E20;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7792
	ctx.r3.s64 = ctx.r1.s64 + 7792;
	// bl 0x82120ac0
	ctx.lr = 0x821F0E30;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// addi r4,r11,17952
	ctx.r4.s64 = ctx.r11.s64 + 17952;
	// bl 0x82120600
	ctx.lr = 0x821F0E40;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10224
	ctx.r3.s64 = ctx.r1.s64 + 10224;
	// bl 0x82120600
	ctx.lr = 0x821F0E4C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// addi r4,r11,17968
	ctx.r4.s64 = ctx.r11.s64 + 17968;
	// bl 0x82120600
	ctx.lr = 0x821F0E5C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,3056
	ctx.r6.s64 = ctx.r1.s64 + 3056;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,31328
	ctx.r7.s64 = ctx.r11.s64 + 31328;
	// addi r5,r1,10224
	ctx.r5.s64 = ctx.r1.s64 + 10224;
	// addi r4,r1,2992
	ctx.r4.s64 = ctx.r1.s64 + 2992;
	// bl 0x8213ac58
	ctx.lr = 0x821F0E78;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x82120ac0
	ctx.lr = 0x821F0E88;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10224
	ctx.r3.s64 = ctx.r1.s64 + 10224;
	// bl 0x82120ac0
	ctx.lr = 0x821F0E98;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// bl 0x82120ac0
	ctx.lr = 0x821F0EA8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11440
	ctx.r3.s64 = ctx.r1.s64 + 11440;
	// addi r4,r11,17992
	ctx.r4.s64 = ctx.r11.s64 + 17992;
	// bl 0x82120600
	ctx.lr = 0x821F0EB8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82120600
	ctx.lr = 0x821F0EC4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7856
	ctx.r3.s64 = ctx.r1.s64 + 7856;
	// addi r4,r11,18008
	ctx.r4.s64 = ctx.r11.s64 + 18008;
	// bl 0x82120600
	ctx.lr = 0x821F0ED4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,11440
	ctx.r6.s64 = ctx.r1.s64 + 11440;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,30400
	ctx.r7.s64 = ctx.r11.s64 + 30400;
	// addi r5,r1,3120
	ctx.r5.s64 = ctx.r1.s64 + 3120;
	// addi r4,r1,7856
	ctx.r4.s64 = ctx.r1.s64 + 7856;
	// bl 0x8213ac58
	ctx.lr = 0x821F0EF0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7856
	ctx.r3.s64 = ctx.r1.s64 + 7856;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F00;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11440
	ctx.r3.s64 = ctx.r1.s64 + 11440;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F20;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// addi r4,r11,18032
	ctx.r4.s64 = ctx.r11.s64 + 18032;
	// bl 0x82120600
	ctx.lr = 0x821F0F30;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7920
	ctx.r3.s64 = ctx.r1.s64 + 7920;
	// bl 0x82120600
	ctx.lr = 0x821F0F3C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// addi r4,r11,18048
	ctx.r4.s64 = ctx.r11.s64 + 18048;
	// bl 0x82120600
	ctx.lr = 0x821F0F4C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,3248
	ctx.r6.s64 = ctx.r1.s64 + 3248;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,28928
	ctx.r7.s64 = ctx.r11.s64 + 28928;
	// addi r5,r1,7920
	ctx.r5.s64 = ctx.r1.s64 + 7920;
	// addi r4,r1,3184
	ctx.r4.s64 = ctx.r1.s64 + 3184;
	// bl 0x8213ac58
	ctx.lr = 0x821F0F68;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7920
	ctx.r3.s64 = ctx.r1.s64 + 7920;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F88;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82120ac0
	ctx.lr = 0x821F0F98;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7984
	ctx.r3.s64 = ctx.r1.s64 + 7984;
	// addi r4,r11,18080
	ctx.r4.s64 = ctx.r11.s64 + 18080;
	// bl 0x82120600
	ctx.lr = 0x821F0FA8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82120600
	ctx.lr = 0x821F0FB4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10288
	ctx.r3.s64 = ctx.r1.s64 + 10288;
	// addi r4,r11,18096
	ctx.r4.s64 = ctx.r11.s64 + 18096;
	// bl 0x82120600
	ctx.lr = 0x821F0FC4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,7984
	ctx.r6.s64 = ctx.r1.s64 + 7984;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,28448
	ctx.r7.s64 = ctx.r11.s64 + 28448;
	// addi r5,r1,3312
	ctx.r5.s64 = ctx.r1.s64 + 3312;
	// addi r4,r1,10288
	ctx.r4.s64 = ctx.r1.s64 + 10288;
	// bl 0x8213ac58
	ctx.lr = 0x821F0FE0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10288
	ctx.r3.s64 = ctx.r1.s64 + 10288;
	// bl 0x82120ac0
	ctx.lr = 0x821F0FF0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82120ac0
	ctx.lr = 0x821F1000;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7984
	ctx.r3.s64 = ctx.r1.s64 + 7984;
	// bl 0x82120ac0
	ctx.lr = 0x821F1010;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
	// bl 0x82120600
	ctx.lr = 0x821F1020;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,12336
	ctx.r3.s64 = ctx.r1.s64 + 12336;
	// bl 0x82120600
	ctx.lr = 0x821F102C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// addi r4,r11,18128
	ctx.r4.s64 = ctx.r11.s64 + 18128;
	// bl 0x82120600
	ctx.lr = 0x821F103C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,3440
	ctx.r6.s64 = ctx.r1.s64 + 3440;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,21912
	ctx.r7.s64 = ctx.r11.s64 + 21912;
	// addi r5,r1,12336
	ctx.r5.s64 = ctx.r1.s64 + 12336;
	// addi r4,r1,3376
	ctx.r4.s64 = ctx.r1.s64 + 3376;
	// bl 0x8213ac58
	ctx.lr = 0x821F1058;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// bl 0x82120ac0
	ctx.lr = 0x821F1068;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12336
	ctx.r3.s64 = ctx.r1.s64 + 12336;
	// bl 0x82120ac0
	ctx.lr = 0x821F1078;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82120ac0
	ctx.lr = 0x821F1088;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10352
	ctx.r3.s64 = ctx.r1.s64 + 10352;
	// addi r4,r11,18144
	ctx.r4.s64 = ctx.r11.s64 + 18144;
	// bl 0x82120600
	ctx.lr = 0x821F1098;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82120600
	ctx.lr = 0x821F10A4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8048
	ctx.r3.s64 = ctx.r1.s64 + 8048;
	// addi r4,r11,18160
	ctx.r4.s64 = ctx.r11.s64 + 18160;
	// bl 0x82120600
	ctx.lr = 0x821F10B4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,10352
	ctx.r6.s64 = ctx.r1.s64 + 10352;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,20936
	ctx.r7.s64 = ctx.r11.s64 + 20936;
	// addi r5,r1,3504
	ctx.r5.s64 = ctx.r1.s64 + 3504;
	// addi r4,r1,8048
	ctx.r4.s64 = ctx.r1.s64 + 8048;
	// bl 0x8213ac58
	ctx.lr = 0x821F10D0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8048
	ctx.r3.s64 = ctx.r1.s64 + 8048;
	// bl 0x82120ac0
	ctx.lr = 0x821F10E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82120ac0
	ctx.lr = 0x821F10F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10352
	ctx.r3.s64 = ctx.r1.s64 + 10352;
	// bl 0x82120ac0
	ctx.lr = 0x821F1100;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// addi r4,r11,18184
	ctx.r4.s64 = ctx.r11.s64 + 18184;
	// bl 0x82120600
	ctx.lr = 0x821F1110;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8112
	ctx.r3.s64 = ctx.r1.s64 + 8112;
	// bl 0x82120600
	ctx.lr = 0x821F111C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// addi r4,r11,18200
	ctx.r4.s64 = ctx.r11.s64 + 18200;
	// bl 0x82120600
	ctx.lr = 0x821F112C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,3632
	ctx.r6.s64 = ctx.r1.s64 + 3632;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,16136
	ctx.r7.s64 = ctx.r11.s64 + 16136;
	// addi r5,r1,8112
	ctx.r5.s64 = ctx.r1.s64 + 8112;
	// addi r4,r1,3568
	ctx.r4.s64 = ctx.r1.s64 + 3568;
	// bl 0x8213ac58
	ctx.lr = 0x821F1148;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// bl 0x82120ac0
	ctx.lr = 0x821F1158;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8112
	ctx.r3.s64 = ctx.r1.s64 + 8112;
	// bl 0x82120ac0
	ctx.lr = 0x821F1168;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82120ac0
	ctx.lr = 0x821F1178;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8176
	ctx.r3.s64 = ctx.r1.s64 + 8176;
	// addi r4,r11,18224
	ctx.r4.s64 = ctx.r11.s64 + 18224;
	// bl 0x82120600
	ctx.lr = 0x821F1188;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82120600
	ctx.lr = 0x821F1194;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11504
	ctx.r3.s64 = ctx.r1.s64 + 11504;
	// addi r4,r11,18240
	ctx.r4.s64 = ctx.r11.s64 + 18240;
	// bl 0x82120600
	ctx.lr = 0x821F11A4;
	sub_82120600(ctx, base);
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,8176
	ctx.r6.s64 = ctx.r1.s64 + 8176;
	// addi r7,r11,9528
	ctx.r7.s64 = ctx.r11.s64 + 9528;
	// addi r5,r1,3696
	ctx.r5.s64 = ctx.r1.s64 + 3696;
	// addi r4,r1,11504
	ctx.r4.s64 = ctx.r1.s64 + 11504;
	// bl 0x8213ac58
	ctx.lr = 0x821F11C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11504
	ctx.r3.s64 = ctx.r1.s64 + 11504;
	// bl 0x82120ac0
	ctx.lr = 0x821F11D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82120ac0
	ctx.lr = 0x821F11E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8176
	ctx.r3.s64 = ctx.r1.s64 + 8176;
	// bl 0x82120ac0
	ctx.lr = 0x821F11F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// addi r4,r11,-21280
	ctx.r4.s64 = ctx.r11.s64 + -21280;
	// bl 0x82120600
	ctx.lr = 0x821F1200;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10416
	ctx.r3.s64 = ctx.r1.s64 + 10416;
	// bl 0x82120600
	ctx.lr = 0x821F120C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// addi r4,r11,18264
	ctx.r4.s64 = ctx.r11.s64 + 18264;
	// bl 0x82120600
	ctx.lr = 0x821F121C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,3824
	ctx.r6.s64 = ctx.r1.s64 + 3824;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,8912
	ctx.r7.s64 = ctx.r11.s64 + 8912;
	// addi r5,r1,10416
	ctx.r5.s64 = ctx.r1.s64 + 10416;
	// addi r4,r1,3760
	ctx.r4.s64 = ctx.r1.s64 + 3760;
	// bl 0x8213ac58
	ctx.lr = 0x821F1238;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// bl 0x82120ac0
	ctx.lr = 0x821F1248;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10416
	ctx.r3.s64 = ctx.r1.s64 + 10416;
	// bl 0x82120ac0
	ctx.lr = 0x821F1258;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82120ac0
	ctx.lr = 0x821F1268;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12080
	ctx.r3.s64 = ctx.r1.s64 + 12080;
	// addi r4,r11,18280
	ctx.r4.s64 = ctx.r11.s64 + 18280;
	// bl 0x82120600
	ctx.lr = 0x821F1278;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82120600
	ctx.lr = 0x821F1284;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8240
	ctx.r3.s64 = ctx.r1.s64 + 8240;
	// addi r4,r11,18292
	ctx.r4.s64 = ctx.r11.s64 + 18292;
	// bl 0x82120600
	ctx.lr = 0x821F1294;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,12080
	ctx.r6.s64 = ctx.r1.s64 + 12080;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,2936
	ctx.r7.s64 = ctx.r11.s64 + 2936;
	// addi r5,r1,3888
	ctx.r5.s64 = ctx.r1.s64 + 3888;
	// addi r4,r1,8240
	ctx.r4.s64 = ctx.r1.s64 + 8240;
	// bl 0x8213ac58
	ctx.lr = 0x821F12B0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8240
	ctx.r3.s64 = ctx.r1.s64 + 8240;
	// bl 0x82120ac0
	ctx.lr = 0x821F12C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82120ac0
	ctx.lr = 0x821F12D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12080
	ctx.r3.s64 = ctx.r1.s64 + 12080;
	// bl 0x82120ac0
	ctx.lr = 0x821F12E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// addi r4,r11,18312
	ctx.r4.s64 = ctx.r11.s64 + 18312;
	// bl 0x82120600
	ctx.lr = 0x821F12F0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8304
	ctx.r3.s64 = ctx.r1.s64 + 8304;
	// bl 0x82120600
	ctx.lr = 0x821F12FC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// addi r4,r11,18336
	ctx.r4.s64 = ctx.r11.s64 + 18336;
	// bl 0x82120600
	ctx.lr = 0x821F130C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4016
	ctx.r6.s64 = ctx.r1.s64 + 4016;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,536
	ctx.r7.s64 = ctx.r11.s64 + 536;
	// addi r5,r1,8304
	ctx.r5.s64 = ctx.r1.s64 + 8304;
	// addi r4,r1,3952
	ctx.r4.s64 = ctx.r1.s64 + 3952;
	// bl 0x8213ac58
	ctx.lr = 0x821F1328;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x82120ac0
	ctx.lr = 0x821F1338;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8304
	ctx.r3.s64 = ctx.r1.s64 + 8304;
	// bl 0x82120ac0
	ctx.lr = 0x821F1348;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82120ac0
	ctx.lr = 0x821F1358;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// addi r4,r11,18368
	ctx.r4.s64 = ctx.r11.s64 + 18368;
	// bl 0x82120600
	ctx.lr = 0x821F1368;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82120600
	ctx.lr = 0x821F1374;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10480
	ctx.r3.s64 = ctx.r1.s64 + 10480;
	// addi r4,r11,18384
	ctx.r4.s64 = ctx.r11.s64 + 18384;
	// bl 0x82120600
	ctx.lr = 0x821F1384;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,8368
	ctx.r6.s64 = ctx.r1.s64 + 8368;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-1392
	ctx.r7.s64 = ctx.r11.s64 + -1392;
	// addi r5,r1,4080
	ctx.r5.s64 = ctx.r1.s64 + 4080;
	// addi r4,r1,10480
	ctx.r4.s64 = ctx.r1.s64 + 10480;
	// bl 0x8213ac58
	ctx.lr = 0x821F13A0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10480
	ctx.r3.s64 = ctx.r1.s64 + 10480;
	// bl 0x82120ac0
	ctx.lr = 0x821F13B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82120ac0
	ctx.lr = 0x821F13C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x82120ac0
	ctx.lr = 0x821F13D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// addi r4,r11,18408
	ctx.r4.s64 = ctx.r11.s64 + 18408;
	// bl 0x82120600
	ctx.lr = 0x821F13E0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,11568
	ctx.r3.s64 = ctx.r1.s64 + 11568;
	// bl 0x82120600
	ctx.lr = 0x821F13EC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// addi r4,r11,18420
	ctx.r4.s64 = ctx.r11.s64 + 18420;
	// bl 0x82120600
	ctx.lr = 0x821F13FC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4208
	ctx.r6.s64 = ctx.r1.s64 + 4208;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-4352
	ctx.r7.s64 = ctx.r11.s64 + -4352;
	// addi r5,r1,11568
	ctx.r5.s64 = ctx.r1.s64 + 11568;
	// addi r4,r1,4144
	ctx.r4.s64 = ctx.r1.s64 + 4144;
	// bl 0x8213ac58
	ctx.lr = 0x821F1418;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// bl 0x82120ac0
	ctx.lr = 0x821F1428;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11568
	ctx.r3.s64 = ctx.r1.s64 + 11568;
	// bl 0x82120ac0
	ctx.lr = 0x821F1438;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82120ac0
	ctx.lr = 0x821F1448;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10544
	ctx.r3.s64 = ctx.r1.s64 + 10544;
	// addi r4,r11,18440
	ctx.r4.s64 = ctx.r11.s64 + 18440;
	// bl 0x82120600
	ctx.lr = 0x821F1458;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82120600
	ctx.lr = 0x821F1464;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8432
	ctx.r3.s64 = ctx.r1.s64 + 8432;
	// addi r4,r11,18448
	ctx.r4.s64 = ctx.r11.s64 + 18448;
	// bl 0x82120600
	ctx.lr = 0x821F1474;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,10544
	ctx.r6.s64 = ctx.r1.s64 + 10544;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-6248
	ctx.r7.s64 = ctx.r11.s64 + -6248;
	// addi r5,r1,4272
	ctx.r5.s64 = ctx.r1.s64 + 4272;
	// addi r4,r1,8432
	ctx.r4.s64 = ctx.r1.s64 + 8432;
	// bl 0x8213ac58
	ctx.lr = 0x821F1490;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8432
	ctx.r3.s64 = ctx.r1.s64 + 8432;
	// bl 0x82120ac0
	ctx.lr = 0x821F14A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82120ac0
	ctx.lr = 0x821F14B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10544
	ctx.r3.s64 = ctx.r1.s64 + 10544;
	// bl 0x82120ac0
	ctx.lr = 0x821F14C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// addi r4,r11,18464
	ctx.r4.s64 = ctx.r11.s64 + 18464;
	// bl 0x82120600
	ctx.lr = 0x821F14D0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8496
	ctx.r3.s64 = ctx.r1.s64 + 8496;
	// bl 0x82120600
	ctx.lr = 0x821F14DC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// addi r4,r11,18476
	ctx.r4.s64 = ctx.r11.s64 + 18476;
	// bl 0x82120600
	ctx.lr = 0x821F14EC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4400
	ctx.r6.s64 = ctx.r1.s64 + 4400;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-8920
	ctx.r7.s64 = ctx.r11.s64 + -8920;
	// addi r5,r1,8496
	ctx.r5.s64 = ctx.r1.s64 + 8496;
	// addi r4,r1,4336
	ctx.r4.s64 = ctx.r1.s64 + 4336;
	// bl 0x8213ac58
	ctx.lr = 0x821F1508;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// bl 0x82120ac0
	ctx.lr = 0x821F1518;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8496
	ctx.r3.s64 = ctx.r1.s64 + 8496;
	// bl 0x82120ac0
	ctx.lr = 0x821F1528;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82120ac0
	ctx.lr = 0x821F1538;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8560
	ctx.r3.s64 = ctx.r1.s64 + 8560;
	// addi r4,r11,18496
	ctx.r4.s64 = ctx.r11.s64 + 18496;
	// bl 0x82120600
	ctx.lr = 0x821F1548;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82120600
	ctx.lr = 0x821F1554;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12592
	ctx.r3.s64 = ctx.r1.s64 + 12592;
	// addi r4,r11,18508
	ctx.r4.s64 = ctx.r11.s64 + 18508;
	// bl 0x82120600
	ctx.lr = 0x821F1564;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r6,r1,8560
	ctx.r6.s64 = ctx.r1.s64 + 8560;
	// addi r7,r11,-9832
	ctx.r7.s64 = ctx.r11.s64 + -9832;
	// addi r5,r1,4464
	ctx.r5.s64 = ctx.r1.s64 + 4464;
	// addi r4,r1,12592
	ctx.r4.s64 = ctx.r1.s64 + 12592;
	// bl 0x8213ac58
	ctx.lr = 0x821F1580;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12592
	ctx.r3.s64 = ctx.r1.s64 + 12592;
	// bl 0x82120ac0
	ctx.lr = 0x821F1590;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82120ac0
	ctx.lr = 0x821F15A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8560
	ctx.r3.s64 = ctx.r1.s64 + 8560;
	// bl 0x82120ac0
	ctx.lr = 0x821F15B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// addi r4,r11,18528
	ctx.r4.s64 = ctx.r11.s64 + 18528;
	// bl 0x82120600
	ctx.lr = 0x821F15C0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10608
	ctx.r3.s64 = ctx.r1.s64 + 10608;
	// bl 0x82120600
	ctx.lr = 0x821F15CC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// addi r4,r11,18544
	ctx.r4.s64 = ctx.r11.s64 + 18544;
	// bl 0x82120600
	ctx.lr = 0x821F15DC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4592
	ctx.r6.s64 = ctx.r1.s64 + 4592;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-12648
	ctx.r7.s64 = ctx.r11.s64 + -12648;
	// addi r5,r1,10608
	ctx.r5.s64 = ctx.r1.s64 + 10608;
	// addi r4,r1,4528
	ctx.r4.s64 = ctx.r1.s64 + 4528;
	// bl 0x8213ac58
	ctx.lr = 0x821F15F8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// bl 0x82120ac0
	ctx.lr = 0x821F1608;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10608
	ctx.r3.s64 = ctx.r1.s64 + 10608;
	// bl 0x82120ac0
	ctx.lr = 0x821F1618;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82120ac0
	ctx.lr = 0x821F1628;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11632
	ctx.r3.s64 = ctx.r1.s64 + 11632;
	// addi r4,r11,18568
	ctx.r4.s64 = ctx.r11.s64 + 18568;
	// bl 0x82120600
	ctx.lr = 0x821F1638;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82120600
	ctx.lr = 0x821F1644;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8624
	ctx.r3.s64 = ctx.r1.s64 + 8624;
	// addi r4,r11,18580
	ctx.r4.s64 = ctx.r11.s64 + 18580;
	// bl 0x82120600
	ctx.lr = 0x821F1654;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,11632
	ctx.r6.s64 = ctx.r1.s64 + 11632;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-13512
	ctx.r7.s64 = ctx.r11.s64 + -13512;
	// addi r5,r1,4656
	ctx.r5.s64 = ctx.r1.s64 + 4656;
	// addi r4,r1,8624
	ctx.r4.s64 = ctx.r1.s64 + 8624;
	// bl 0x8213ac58
	ctx.lr = 0x821F1670;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8624
	ctx.r3.s64 = ctx.r1.s64 + 8624;
	// bl 0x82120ac0
	ctx.lr = 0x821F1680;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82120ac0
	ctx.lr = 0x821F1690;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11632
	ctx.r3.s64 = ctx.r1.s64 + 11632;
	// bl 0x82120ac0
	ctx.lr = 0x821F16A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// addi r4,r11,18600
	ctx.r4.s64 = ctx.r11.s64 + 18600;
	// bl 0x82120600
	ctx.lr = 0x821F16B0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8688
	ctx.r3.s64 = ctx.r1.s64 + 8688;
	// bl 0x82120600
	ctx.lr = 0x821F16BC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// addi r4,r11,18616
	ctx.r4.s64 = ctx.r11.s64 + 18616;
	// bl 0x82120600
	ctx.lr = 0x821F16CC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4784
	ctx.r6.s64 = ctx.r1.s64 + 4784;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-18024
	ctx.r7.s64 = ctx.r11.s64 + -18024;
	// addi r5,r1,8688
	ctx.r5.s64 = ctx.r1.s64 + 8688;
	// addi r4,r1,4720
	ctx.r4.s64 = ctx.r1.s64 + 4720;
	// bl 0x8213ac58
	ctx.lr = 0x821F16E8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// bl 0x82120ac0
	ctx.lr = 0x821F16F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8688
	ctx.r3.s64 = ctx.r1.s64 + 8688;
	// bl 0x82120ac0
	ctx.lr = 0x821F1708;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82120ac0
	ctx.lr = 0x821F1718;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8752
	ctx.r3.s64 = ctx.r1.s64 + 8752;
	// addi r4,r11,18640
	ctx.r4.s64 = ctx.r11.s64 + 18640;
	// bl 0x82120600
	ctx.lr = 0x821F1728;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// addi r31,r11,18652
	r31.s64 = ctx.r11.s64 + 18652;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F173C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10672
	ctx.r3.s64 = ctx.r1.s64 + 10672;
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
	// bl 0x82120600
	ctx.lr = 0x821F174C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,8752
	ctx.r6.s64 = ctx.r1.s64 + 8752;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-25832
	ctx.r7.s64 = ctx.r11.s64 + -25832;
	// addi r5,r1,4848
	ctx.r5.s64 = ctx.r1.s64 + 4848;
	// addi r4,r1,10672
	ctx.r4.s64 = ctx.r1.s64 + 10672;
	// bl 0x8213ac58
	ctx.lr = 0x821F1768;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10672
	ctx.r3.s64 = ctx.r1.s64 + 10672;
	// bl 0x82120ac0
	ctx.lr = 0x821F1778;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// bl 0x82120ac0
	ctx.lr = 0x821F1788;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8752
	ctx.r3.s64 = ctx.r1.s64 + 8752;
	// bl 0x82120ac0
	ctx.lr = 0x821F1798;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// addi r4,r11,18684
	ctx.r4.s64 = ctx.r11.s64 + 18684;
	// bl 0x82120600
	ctx.lr = 0x821F17A8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,12144
	ctx.r3.s64 = ctx.r1.s64 + 12144;
	// bl 0x82120600
	ctx.lr = 0x821F17B4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// addi r4,r11,18696
	ctx.r4.s64 = ctx.r11.s64 + 18696;
	// bl 0x82120600
	ctx.lr = 0x821F17C4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,4976
	ctx.r6.s64 = ctx.r1.s64 + 4976;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-25360
	ctx.r7.s64 = ctx.r11.s64 + -25360;
	// addi r5,r1,12144
	ctx.r5.s64 = ctx.r1.s64 + 12144;
	// addi r4,r1,4912
	ctx.r4.s64 = ctx.r1.s64 + 4912;
	// bl 0x8213ac58
	ctx.lr = 0x821F17E0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// bl 0x82120ac0
	ctx.lr = 0x821F17F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12144
	ctx.r3.s64 = ctx.r1.s64 + 12144;
	// bl 0x82120ac0
	ctx.lr = 0x821F1800;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// bl 0x82120ac0
	ctx.lr = 0x821F1810;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10736
	ctx.r3.s64 = ctx.r1.s64 + 10736;
	// addi r4,r11,18720
	ctx.r4.s64 = ctx.r11.s64 + 18720;
	// bl 0x82120600
	ctx.lr = 0x821F1820;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// bl 0x82120600
	ctx.lr = 0x821F182C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8816
	ctx.r3.s64 = ctx.r1.s64 + 8816;
	// addi r4,r11,18732
	ctx.r4.s64 = ctx.r11.s64 + 18732;
	// bl 0x82120600
	ctx.lr = 0x821F183C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,10736
	ctx.r6.s64 = ctx.r1.s64 + 10736;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-25208
	ctx.r7.s64 = ctx.r11.s64 + -25208;
	// addi r5,r1,5040
	ctx.r5.s64 = ctx.r1.s64 + 5040;
	// addi r4,r1,8816
	ctx.r4.s64 = ctx.r1.s64 + 8816;
	// bl 0x8213ac58
	ctx.lr = 0x821F1858;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8816
	ctx.r3.s64 = ctx.r1.s64 + 8816;
	// bl 0x82120ac0
	ctx.lr = 0x821F1868;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// bl 0x82120ac0
	ctx.lr = 0x821F1878;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10736
	ctx.r3.s64 = ctx.r1.s64 + 10736;
	// bl 0x82120ac0
	ctx.lr = 0x821F1888;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// addi r4,r11,18752
	ctx.r4.s64 = ctx.r11.s64 + 18752;
	// bl 0x82120600
	ctx.lr = 0x821F1898;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8880
	ctx.r3.s64 = ctx.r1.s64 + 8880;
	// bl 0x82120600
	ctx.lr = 0x821F18A4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// addi r4,r11,18772
	ctx.r4.s64 = ctx.r11.s64 + 18772;
	// bl 0x82120600
	ctx.lr = 0x821F18B4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,5168
	ctx.r6.s64 = ctx.r1.s64 + 5168;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-24704
	ctx.r7.s64 = ctx.r11.s64 + -24704;
	// addi r5,r1,8880
	ctx.r5.s64 = ctx.r1.s64 + 8880;
	// addi r4,r1,5104
	ctx.r4.s64 = ctx.r1.s64 + 5104;
	// bl 0x8213ac58
	ctx.lr = 0x821F18D0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// bl 0x82120ac0
	ctx.lr = 0x821F18E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8880
	ctx.r3.s64 = ctx.r1.s64 + 8880;
	// bl 0x82120ac0
	ctx.lr = 0x821F18F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// bl 0x82120ac0
	ctx.lr = 0x821F1900;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8944
	ctx.r3.s64 = ctx.r1.s64 + 8944;
	// addi r4,r11,18804
	ctx.r4.s64 = ctx.r11.s64 + 18804;
	// bl 0x82120600
	ctx.lr = 0x821F1910;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// bl 0x82120600
	ctx.lr = 0x821F191C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11696
	ctx.r3.s64 = ctx.r1.s64 + 11696;
	// addi r4,r11,18824
	ctx.r4.s64 = ctx.r11.s64 + 18824;
	// bl 0x82120600
	ctx.lr = 0x821F192C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r6,r1,8944
	ctx.r6.s64 = ctx.r1.s64 + 8944;
	// addi r7,r11,-24552
	ctx.r7.s64 = ctx.r11.s64 + -24552;
	// addi r5,r1,5232
	ctx.r5.s64 = ctx.r1.s64 + 5232;
	// addi r4,r1,11696
	ctx.r4.s64 = ctx.r1.s64 + 11696;
	// bl 0x8213ac58
	ctx.lr = 0x821F1948;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11696
	ctx.r3.s64 = ctx.r1.s64 + 11696;
	// bl 0x82120ac0
	ctx.lr = 0x821F1958;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// bl 0x82120ac0
	ctx.lr = 0x821F1968;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8944
	ctx.r3.s64 = ctx.r1.s64 + 8944;
	// bl 0x82120ac0
	ctx.lr = 0x821F1978;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// addi r4,r11,18852
	ctx.r4.s64 = ctx.r11.s64 + 18852;
	// bl 0x82120600
	ctx.lr = 0x821F1988;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10800
	ctx.r3.s64 = ctx.r1.s64 + 10800;
	// bl 0x82120600
	ctx.lr = 0x821F1994;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// addi r4,r11,18868
	ctx.r4.s64 = ctx.r11.s64 + 18868;
	// bl 0x82120600
	ctx.lr = 0x821F19A4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,5360
	ctx.r6.s64 = ctx.r1.s64 + 5360;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-24368
	ctx.r7.s64 = ctx.r11.s64 + -24368;
	// addi r5,r1,10800
	ctx.r5.s64 = ctx.r1.s64 + 10800;
	// addi r4,r1,5296
	ctx.r4.s64 = ctx.r1.s64 + 5296;
	// bl 0x8213ac58
	ctx.lr = 0x821F19C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// bl 0x82120ac0
	ctx.lr = 0x821F19D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10800
	ctx.r3.s64 = ctx.r1.s64 + 10800;
	// bl 0x82120ac0
	ctx.lr = 0x821F19E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// bl 0x82120ac0
	ctx.lr = 0x821F19F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12400
	ctx.r3.s64 = ctx.r1.s64 + 12400;
	// addi r4,r11,18892
	ctx.r4.s64 = ctx.r11.s64 + 18892;
	// bl 0x82120600
	ctx.lr = 0x821F1A00;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// bl 0x82120600
	ctx.lr = 0x821F1A0C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9008
	ctx.r3.s64 = ctx.r1.s64 + 9008;
	// addi r4,r11,18904
	ctx.r4.s64 = ctx.r11.s64 + 18904;
	// bl 0x82120600
	ctx.lr = 0x821F1A1C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,12400
	ctx.r6.s64 = ctx.r1.s64 + 12400;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-24040
	ctx.r7.s64 = ctx.r11.s64 + -24040;
	// addi r5,r1,5424
	ctx.r5.s64 = ctx.r1.s64 + 5424;
	// addi r4,r1,9008
	ctx.r4.s64 = ctx.r1.s64 + 9008;
	// bl 0x8213ac58
	ctx.lr = 0x821F1A38;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9008
	ctx.r3.s64 = ctx.r1.s64 + 9008;
	// bl 0x82120ac0
	ctx.lr = 0x821F1A48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// bl 0x82120ac0
	ctx.lr = 0x821F1A58;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12400
	ctx.r3.s64 = ctx.r1.s64 + 12400;
	// bl 0x82120ac0
	ctx.lr = 0x821F1A68;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// addi r4,r11,18928
	ctx.r4.s64 = ctx.r11.s64 + 18928;
	// bl 0x82120600
	ctx.lr = 0x821F1A78;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9072
	ctx.r3.s64 = ctx.r1.s64 + 9072;
	// bl 0x82120600
	ctx.lr = 0x821F1A84;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// addi r4,r11,18940
	ctx.r4.s64 = ctx.r11.s64 + 18940;
	// bl 0x82120600
	ctx.lr = 0x821F1A94;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,5552
	ctx.r6.s64 = ctx.r1.s64 + 5552;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-23424
	ctx.r7.s64 = ctx.r11.s64 + -23424;
	// addi r5,r1,9072
	ctx.r5.s64 = ctx.r1.s64 + 9072;
	// addi r4,r1,5488
	ctx.r4.s64 = ctx.r1.s64 + 5488;
	// bl 0x8213ac58
	ctx.lr = 0x821F1AB0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// bl 0x82120ac0
	ctx.lr = 0x821F1AC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9072
	ctx.r3.s64 = ctx.r1.s64 + 9072;
	// bl 0x82120ac0
	ctx.lr = 0x821F1AD0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// bl 0x82120ac0
	ctx.lr = 0x821F1AE0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9136
	ctx.r3.s64 = ctx.r1.s64 + 9136;
	// addi r4,r11,18964
	ctx.r4.s64 = ctx.r11.s64 + 18964;
	// bl 0x82120600
	ctx.lr = 0x821F1AF0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// bl 0x82120600
	ctx.lr = 0x821F1AFC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10864
	ctx.r3.s64 = ctx.r1.s64 + 10864;
	// addi r4,r11,18976
	ctx.r4.s64 = ctx.r11.s64 + 18976;
	// bl 0x82120600
	ctx.lr = 0x821F1B0C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,9136
	ctx.r6.s64 = ctx.r1.s64 + 9136;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-26984
	ctx.r7.s64 = ctx.r11.s64 + -26984;
	// addi r5,r1,5616
	ctx.r5.s64 = ctx.r1.s64 + 5616;
	// addi r4,r1,10864
	ctx.r4.s64 = ctx.r1.s64 + 10864;
	// bl 0x8213ac58
	ctx.lr = 0x821F1B28;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10864
	ctx.r3.s64 = ctx.r1.s64 + 10864;
	// bl 0x82120ac0
	ctx.lr = 0x821F1B38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// bl 0x82120ac0
	ctx.lr = 0x821F1B48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9136
	ctx.r3.s64 = ctx.r1.s64 + 9136;
	// bl 0x82120ac0
	ctx.lr = 0x821F1B58;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5744
	ctx.r3.s64 = ctx.r1.s64 + 5744;
	// addi r4,r11,18996
	ctx.r4.s64 = ctx.r11.s64 + 18996;
	// bl 0x82120600
	ctx.lr = 0x821F1B68;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,11760
	ctx.r3.s64 = ctx.r1.s64 + 11760;
	// bl 0x82120600
	ctx.lr = 0x821F1B74;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5680
	ctx.r3.s64 = ctx.r1.s64 + 5680;
	// addi r4,r11,19012
	ctx.r4.s64 = ctx.r11.s64 + 19012;
	// bl 0x82120600
	ctx.lr = 0x821F1B84;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,5744
	ctx.r6.s64 = ctx.r1.s64 + 5744;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-26800
	ctx.r7.s64 = ctx.r11.s64 + -26800;
	// addi r5,r1,11760
	ctx.r5.s64 = ctx.r1.s64 + 11760;
	// addi r4,r1,5680
	ctx.r4.s64 = ctx.r1.s64 + 5680;
	// bl 0x8213ac58
	ctx.lr = 0x821F1BA0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5680
	ctx.r3.s64 = ctx.r1.s64 + 5680;
	// bl 0x82120ac0
	ctx.lr = 0x821F1BB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11760
	ctx.r3.s64 = ctx.r1.s64 + 11760;
	// bl 0x82120ac0
	ctx.lr = 0x821F1BC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5744
	ctx.r3.s64 = ctx.r1.s64 + 5744;
	// bl 0x82120ac0
	ctx.lr = 0x821F1BD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10928
	ctx.r3.s64 = ctx.r1.s64 + 10928;
	// addi r4,r11,19040
	ctx.r4.s64 = ctx.r11.s64 + 19040;
	// bl 0x82120600
	ctx.lr = 0x821F1BE0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5808
	ctx.r3.s64 = ctx.r1.s64 + 5808;
	// bl 0x82120600
	ctx.lr = 0x821F1BEC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9200
	ctx.r3.s64 = ctx.r1.s64 + 9200;
	// addi r4,r11,19060
	ctx.r4.s64 = ctx.r11.s64 + 19060;
	// bl 0x82120600
	ctx.lr = 0x821F1BFC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,10928
	ctx.r6.s64 = ctx.r1.s64 + 10928;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-26568
	ctx.r7.s64 = ctx.r11.s64 + -26568;
	// addi r5,r1,5808
	ctx.r5.s64 = ctx.r1.s64 + 5808;
	// addi r4,r1,9200
	ctx.r4.s64 = ctx.r1.s64 + 9200;
	// bl 0x8213ac58
	ctx.lr = 0x821F1C18;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9200
	ctx.r3.s64 = ctx.r1.s64 + 9200;
	// bl 0x82120ac0
	ctx.lr = 0x821F1C28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5808
	ctx.r3.s64 = ctx.r1.s64 + 5808;
	// bl 0x82120ac0
	ctx.lr = 0x821F1C38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10928
	ctx.r3.s64 = ctx.r1.s64 + 10928;
	// bl 0x82120ac0
	ctx.lr = 0x821F1C48;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5936
	ctx.r3.s64 = ctx.r1.s64 + 5936;
	// addi r4,r11,19088
	ctx.r4.s64 = ctx.r11.s64 + 19088;
	// bl 0x82120600
	ctx.lr = 0x821F1C58;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9264
	ctx.r3.s64 = ctx.r1.s64 + 9264;
	// bl 0x82120600
	ctx.lr = 0x821F1C64;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5872
	ctx.r3.s64 = ctx.r1.s64 + 5872;
	// addi r4,r11,19104
	ctx.r4.s64 = ctx.r11.s64 + 19104;
	// bl 0x82120600
	ctx.lr = 0x821F1C74;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,5936
	ctx.r6.s64 = ctx.r1.s64 + 5936;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-26336
	ctx.r7.s64 = ctx.r11.s64 + -26336;
	// addi r5,r1,9264
	ctx.r5.s64 = ctx.r1.s64 + 9264;
	// addi r4,r1,5872
	ctx.r4.s64 = ctx.r1.s64 + 5872;
	// bl 0x8213ac58
	ctx.lr = 0x821F1C90;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5872
	ctx.r3.s64 = ctx.r1.s64 + 5872;
	// bl 0x82120ac0
	ctx.lr = 0x821F1CA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9264
	ctx.r3.s64 = ctx.r1.s64 + 9264;
	// bl 0x82120ac0
	ctx.lr = 0x821F1CB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5936
	ctx.r3.s64 = ctx.r1.s64 + 5936;
	// bl 0x82120ac0
	ctx.lr = 0x821F1CC0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9328
	ctx.r3.s64 = ctx.r1.s64 + 9328;
	// addi r4,r11,19128
	ctx.r4.s64 = ctx.r11.s64 + 19128;
	// bl 0x82120600
	ctx.lr = 0x821F1CD0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6000
	ctx.r3.s64 = ctx.r1.s64 + 6000;
	// bl 0x82120600
	ctx.lr = 0x821F1CDC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12208
	ctx.r3.s64 = ctx.r1.s64 + 12208;
	// addi r4,r11,19136
	ctx.r4.s64 = ctx.r11.s64 + 19136;
	// bl 0x82120600
	ctx.lr = 0x821F1CEC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,9328
	ctx.r6.s64 = ctx.r1.s64 + 9328;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-23264
	ctx.r7.s64 = ctx.r11.s64 + -23264;
	// addi r5,r1,6000
	ctx.r5.s64 = ctx.r1.s64 + 6000;
	// addi r4,r1,12208
	ctx.r4.s64 = ctx.r1.s64 + 12208;
	// bl 0x8213ac58
	ctx.lr = 0x821F1D08;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12208
	ctx.r3.s64 = ctx.r1.s64 + 12208;
	// bl 0x82120ac0
	ctx.lr = 0x821F1D18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6000
	ctx.r3.s64 = ctx.r1.s64 + 6000;
	// bl 0x82120ac0
	ctx.lr = 0x821F1D28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9328
	ctx.r3.s64 = ctx.r1.s64 + 9328;
	// bl 0x82120ac0
	ctx.lr = 0x821F1D38;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6128
	ctx.r3.s64 = ctx.r1.s64 + 6128;
	// addi r4,r11,19160
	ctx.r4.s64 = ctx.r11.s64 + 19160;
	// bl 0x82120600
	ctx.lr = 0x821F1D48;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10992
	ctx.r3.s64 = ctx.r1.s64 + 10992;
	// bl 0x82120600
	ctx.lr = 0x821F1D54;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6064
	ctx.r3.s64 = ctx.r1.s64 + 6064;
	// addi r4,r11,19184
	ctx.r4.s64 = ctx.r11.s64 + 19184;
	// bl 0x82120600
	ctx.lr = 0x821F1D64;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,6128
	ctx.r6.s64 = ctx.r1.s64 + 6128;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-22984
	ctx.r7.s64 = ctx.r11.s64 + -22984;
	// addi r5,r1,10992
	ctx.r5.s64 = ctx.r1.s64 + 10992;
	// addi r4,r1,6064
	ctx.r4.s64 = ctx.r1.s64 + 6064;
	// bl 0x8213ac58
	ctx.lr = 0x821F1D80;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6064
	ctx.r3.s64 = ctx.r1.s64 + 6064;
	// bl 0x82120ac0
	ctx.lr = 0x821F1D90;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10992
	ctx.r3.s64 = ctx.r1.s64 + 10992;
	// bl 0x82120ac0
	ctx.lr = 0x821F1DA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6128
	ctx.r3.s64 = ctx.r1.s64 + 6128;
	// bl 0x82120ac0
	ctx.lr = 0x821F1DB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11824
	ctx.r3.s64 = ctx.r1.s64 + 11824;
	// addi r4,r11,19216
	ctx.r4.s64 = ctx.r11.s64 + 19216;
	// bl 0x82120600
	ctx.lr = 0x821F1DC0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6192
	ctx.r3.s64 = ctx.r1.s64 + 6192;
	// bl 0x82120600
	ctx.lr = 0x821F1DCC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9392
	ctx.r3.s64 = ctx.r1.s64 + 9392;
	// addi r4,r11,19236
	ctx.r4.s64 = ctx.r11.s64 + 19236;
	// bl 0x82120600
	ctx.lr = 0x821F1DDC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,11824
	ctx.r6.s64 = ctx.r1.s64 + 11824;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-22752
	ctx.r7.s64 = ctx.r11.s64 + -22752;
	// addi r5,r1,6192
	ctx.r5.s64 = ctx.r1.s64 + 6192;
	// addi r4,r1,9392
	ctx.r4.s64 = ctx.r1.s64 + 9392;
	// bl 0x8213ac58
	ctx.lr = 0x821F1DF8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9392
	ctx.r3.s64 = ctx.r1.s64 + 9392;
	// bl 0x82120ac0
	ctx.lr = 0x821F1E08;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6192
	ctx.r3.s64 = ctx.r1.s64 + 6192;
	// bl 0x82120ac0
	ctx.lr = 0x821F1E18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11824
	ctx.r3.s64 = ctx.r1.s64 + 11824;
	// bl 0x82120ac0
	ctx.lr = 0x821F1E28;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6320
	ctx.r3.s64 = ctx.r1.s64 + 6320;
	// addi r4,r11,19264
	ctx.r4.s64 = ctx.r11.s64 + 19264;
	// bl 0x82120600
	ctx.lr = 0x821F1E38;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9456
	ctx.r3.s64 = ctx.r1.s64 + 9456;
	// bl 0x82120600
	ctx.lr = 0x821F1E44;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6256
	ctx.r3.s64 = ctx.r1.s64 + 6256;
	// addi r4,r11,19280
	ctx.r4.s64 = ctx.r11.s64 + 19280;
	// bl 0x82120600
	ctx.lr = 0x821F1E54;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,6320
	ctx.r6.s64 = ctx.r1.s64 + 6320;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-22320
	ctx.r7.s64 = ctx.r11.s64 + -22320;
	// addi r5,r1,9456
	ctx.r5.s64 = ctx.r1.s64 + 9456;
	// addi r4,r1,6256
	ctx.r4.s64 = ctx.r1.s64 + 6256;
	// bl 0x8213ac58
	ctx.lr = 0x821F1E70;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6256
	ctx.r3.s64 = ctx.r1.s64 + 6256;
	// bl 0x82120ac0
	ctx.lr = 0x821F1E80;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9456
	ctx.r3.s64 = ctx.r1.s64 + 9456;
	// bl 0x82120ac0
	ctx.lr = 0x821F1E90;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6320
	ctx.r3.s64 = ctx.r1.s64 + 6320;
	// bl 0x82120ac0
	ctx.lr = 0x821F1EA0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,19304
	ctx.r4.s64 = ctx.r11.s64 + 19304;
	// bl 0x82120600
	ctx.lr = 0x821F1EB0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821F1EBC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11056
	ctx.r3.s64 = ctx.r1.s64 + 11056;
	// addi r4,r11,19316
	ctx.r4.s64 = ctx.r11.s64 + 19316;
	// bl 0x82120600
	ctx.lr = 0x821F1ECC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-21944
	ctx.r7.s64 = ctx.r11.s64 + -21944;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,11056
	ctx.r4.s64 = ctx.r1.s64 + 11056;
	// bl 0x8213ac58
	ctx.lr = 0x821F1EE8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11056
	ctx.r3.s64 = ctx.r1.s64 + 11056;
	// bl 0x82120ac0
	ctx.lr = 0x821F1EF8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F1F08;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821F1F18;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,19340
	ctx.r4.s64 = ctx.r11.s64 + 19340;
	// bl 0x82120600
	ctx.lr = 0x821F1F28;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120600
	ctx.lr = 0x821F1F34;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,19356
	ctx.r4.s64 = ctx.r11.s64 + 19356;
	// bl 0x82120600
	ctx.lr = 0x821F1F44;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-21568
	ctx.r7.s64 = ctx.r11.s64 + -21568;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x8213ac58
	ctx.lr = 0x821F1F60;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821F1F70;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x821F1F80;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x821F1F90;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,19380
	ctx.r4.s64 = ctx.r11.s64 + 19380;
	// bl 0x82120600
	ctx.lr = 0x821F1FA0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120600
	ctx.lr = 0x821F1FAC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,19400
	ctx.r4.s64 = ctx.r11.s64 + 19400;
	// bl 0x82120600
	ctx.lr = 0x821F1FBC;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,25200
	ctx.r7.s64 = ctx.r11.s64 + 25200;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x8213ac58
	ctx.lr = 0x821F1FD8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x821F1FE8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x821F1FF8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120ac0
	ctx.lr = 0x821F2008;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,19428
	ctx.r4.s64 = ctx.r11.s64 + 19428;
	// bl 0x82120600
	ctx.lr = 0x821F2018;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82120600
	ctx.lr = 0x821F2024;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,19448
	ctx.r4.s64 = ctx.r11.s64 + 19448;
	// bl 0x82120600
	ctx.lr = 0x821F2034;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,720
	ctx.r6.s64 = ctx.r1.s64 + 720;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-21416
	ctx.r7.s64 = ctx.r11.s64 + -21416;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x8213ac58
	ctx.lr = 0x821F2050;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120ac0
	ctx.lr = 0x821F2060;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82120ac0
	ctx.lr = 0x821F2070;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82120ac0
	ctx.lr = 0x821F2080;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r4,r11,19476
	ctx.r4.s64 = ctx.r11.s64 + 19476;
	// bl 0x82120600
	ctx.lr = 0x821F2090;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82120600
	ctx.lr = 0x821F209C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,19504
	ctx.r4.s64 = ctx.r11.s64 + 19504;
	// bl 0x82120600
	ctx.lr = 0x821F20AC;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-20816
	ctx.r7.s64 = ctx.r11.s64 + -20816;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x8213ac58
	ctx.lr = 0x821F20C8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82120ac0
	ctx.lr = 0x821F20D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82120ac0
	ctx.lr = 0x821F20E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82120ac0
	ctx.lr = 0x821F20F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r4,r11,19540
	ctx.r4.s64 = ctx.r11.s64 + 19540;
	// bl 0x82120600
	ctx.lr = 0x821F2108;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82120600
	ctx.lr = 0x821F2114;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r4,r11,19564
	ctx.r4.s64 = ctx.r11.s64 + 19564;
	// bl 0x82120600
	ctx.lr = 0x821F2124;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-20656
	ctx.r7.s64 = ctx.r11.s64 + -20656;
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// bl 0x8213ac58
	ctx.lr = 0x821F2140;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82120ac0
	ctx.lr = 0x821F2150;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82120ac0
	ctx.lr = 0x821F2160;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82120ac0
	ctx.lr = 0x821F2170;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// addi r4,r11,19596
	ctx.r4.s64 = ctx.r11.s64 + 19596;
	// bl 0x82120600
	ctx.lr = 0x821F2180;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82120600
	ctx.lr = 0x821F218C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r4,r11,19620
	ctx.r4.s64 = ctx.r11.s64 + 19620;
	// bl 0x82120600
	ctx.lr = 0x821F219C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,1296
	ctx.r6.s64 = ctx.r1.s64 + 1296;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-20472
	ctx.r7.s64 = ctx.r11.s64 + -20472;
	// addi r5,r1,1232
	ctx.r5.s64 = ctx.r1.s64 + 1232;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// bl 0x8213ac58
	ctx.lr = 0x821F21B8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82120ac0
	ctx.lr = 0x821F21C8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82120ac0
	ctx.lr = 0x821F21D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82120ac0
	ctx.lr = 0x821F21E8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// addi r4,r11,19652
	ctx.r4.s64 = ctx.r11.s64 + 19652;
	// bl 0x82120600
	ctx.lr = 0x821F21F8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82120600
	ctx.lr = 0x821F2204;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// addi r4,r11,19676
	ctx.r4.s64 = ctx.r11.s64 + 19676;
	// bl 0x82120600
	ctx.lr = 0x821F2214;
	sub_82120600(ctx, base);
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,1488
	ctx.r6.s64 = ctx.r1.s64 + 1488;
	// addi r7,r11,-18888
	ctx.r7.s64 = ctx.r11.s64 + -18888;
	// addi r5,r1,1424
	ctx.r5.s64 = ctx.r1.s64 + 1424;
	// addi r4,r1,1360
	ctx.r4.s64 = ctx.r1.s64 + 1360;
	// bl 0x8213ac58
	ctx.lr = 0x821F2230;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82120ac0
	ctx.lr = 0x821F2240;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82120ac0
	ctx.lr = 0x821F2250;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82120ac0
	ctx.lr = 0x821F2260;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// addi r4,r11,19708
	ctx.r4.s64 = ctx.r11.s64 + 19708;
	// bl 0x82120600
	ctx.lr = 0x821F2270;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82120600
	ctx.lr = 0x821F227C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// addi r4,r11,19732
	ctx.r4.s64 = ctx.r11.s64 + 19732;
	// bl 0x82120600
	ctx.lr = 0x821F228C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,1680
	ctx.r6.s64 = ctx.r1.s64 + 1680;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-18440
	ctx.r7.s64 = ctx.r11.s64 + -18440;
	// addi r5,r1,1616
	ctx.r5.s64 = ctx.r1.s64 + 1616;
	// addi r4,r1,1552
	ctx.r4.s64 = ctx.r1.s64 + 1552;
	// bl 0x8213ac58
	ctx.lr = 0x821F22A8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82120ac0
	ctx.lr = 0x821F22B8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82120ac0
	ctx.lr = 0x821F22C8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82120ac0
	ctx.lr = 0x821F22D8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// addi r4,r11,19764
	ctx.r4.s64 = ctx.r11.s64 + 19764;
	// bl 0x82120600
	ctx.lr = 0x821F22E8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82120600
	ctx.lr = 0x821F22F4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r4,r11,19788
	ctx.r4.s64 = ctx.r11.s64 + 19788;
	// bl 0x82120600
	ctx.lr = 0x821F2304;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,1872
	ctx.r6.s64 = ctx.r1.s64 + 1872;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-18144
	ctx.r7.s64 = ctx.r11.s64 + -18144;
	// addi r5,r1,1808
	ctx.r5.s64 = ctx.r1.s64 + 1808;
	// addi r4,r1,1744
	ctx.r4.s64 = ctx.r1.s64 + 1744;
	// bl 0x8213ac58
	ctx.lr = 0x821F2320;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82120ac0
	ctx.lr = 0x821F2330;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82120ac0
	ctx.lr = 0x821F2340;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82120ac0
	ctx.lr = 0x821F2350;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// addi r4,r11,19824
	ctx.r4.s64 = ctx.r11.s64 + 19824;
	// bl 0x82120600
	ctx.lr = 0x821F2360;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82120600
	ctx.lr = 0x821F236C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// addi r4,r11,19844
	ctx.r4.s64 = ctx.r11.s64 + 19844;
	// bl 0x82120600
	ctx.lr = 0x821F237C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2064
	ctx.r6.s64 = ctx.r1.s64 + 2064;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-19984
	ctx.r7.s64 = ctx.r11.s64 + -19984;
	// addi r5,r1,2000
	ctx.r5.s64 = ctx.r1.s64 + 2000;
	// addi r4,r1,1936
	ctx.r4.s64 = ctx.r1.s64 + 1936;
	// bl 0x8213ac58
	ctx.lr = 0x821F2398;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82120ac0
	ctx.lr = 0x821F23A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82120ac0
	ctx.lr = 0x821F23B8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82120ac0
	ctx.lr = 0x821F23C8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// addi r4,r11,19872
	ctx.r4.s64 = ctx.r11.s64 + 19872;
	// bl 0x82120600
	ctx.lr = 0x821F23D8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82120600
	ctx.lr = 0x821F23E4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// addi r4,r11,19888
	ctx.r4.s64 = ctx.r11.s64 + 19888;
	// bl 0x82120600
	ctx.lr = 0x821F23F4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2256
	ctx.r6.s64 = ctx.r1.s64 + 2256;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-19912
	ctx.r7.s64 = ctx.r11.s64 + -19912;
	// addi r5,r1,2192
	ctx.r5.s64 = ctx.r1.s64 + 2192;
	// addi r4,r1,2128
	ctx.r4.s64 = ctx.r1.s64 + 2128;
	// bl 0x8213ac58
	ctx.lr = 0x821F2410;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82120ac0
	ctx.lr = 0x821F2420;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82120ac0
	ctx.lr = 0x821F2430;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82120ac0
	ctx.lr = 0x821F2440;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// addi r4,r11,19916
	ctx.r4.s64 = ctx.r11.s64 + 19916;
	// bl 0x82120600
	ctx.lr = 0x821F2450;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82120600
	ctx.lr = 0x821F245C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// addi r4,r11,19932
	ctx.r4.s64 = ctx.r11.s64 + 19932;
	// bl 0x82120600
	ctx.lr = 0x821F246C;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2448
	ctx.r6.s64 = ctx.r1.s64 + 2448;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-30064
	ctx.r7.s64 = ctx.r11.s64 + -30064;
	// addi r5,r1,2384
	ctx.r5.s64 = ctx.r1.s64 + 2384;
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// bl 0x8213ac58
	ctx.lr = 0x821F2488;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82120ac0
	ctx.lr = 0x821F2498;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82120ac0
	ctx.lr = 0x821F24A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82120ac0
	ctx.lr = 0x821F24B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// addi r4,r11,19956
	ctx.r4.s64 = ctx.r11.s64 + 19956;
	// bl 0x82120600
	ctx.lr = 0x821F24C8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82120600
	ctx.lr = 0x821F24D4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// addi r4,r11,19976
	ctx.r4.s64 = ctx.r11.s64 + 19976;
	// bl 0x82120600
	ctx.lr = 0x821F24E4;
	sub_82120600(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,2640
	ctx.r6.s64 = ctx.r1.s64 + 2640;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-28968
	ctx.r7.s64 = ctx.r11.s64 + -28968;
	// addi r5,r1,2576
	ctx.r5.s64 = ctx.r1.s64 + 2576;
	// addi r4,r1,2512
	ctx.r4.s64 = ctx.r1.s64 + 2512;
	// bl 0x8213ac58
	ctx.lr = 0x821F2500;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82120ac0
	ctx.lr = 0x821F2510;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82120ac0
	ctx.lr = 0x821F2520;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82120ac0
	ctx.lr = 0x821F2530;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// bl 0x82120600
	ctx.lr = 0x821F2540;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// addi r29,r11,20004
	r29.s64 = ctx.r11.s64 + 20004;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120600
	ctx.lr = 0x821F2554;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// addi r4,r11,20016
	ctx.r4.s64 = ctx.r11.s64 + 20016;
	// bl 0x82120600
	ctx.lr = 0x821F2564;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,2832
	ctx.r6.s64 = ctx.r1.s64 + 2832;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,25128
	ctx.r7.s64 = ctx.r11.s64 + 25128;
	// addi r5,r1,2768
	ctx.r5.s64 = ctx.r1.s64 + 2768;
	// addi r4,r1,2704
	ctx.r4.s64 = ctx.r1.s64 + 2704;
	// bl 0x8213ac58
	ctx.lr = 0x821F2580;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82120ac0
	ctx.lr = 0x821F2590;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82120ac0
	ctx.lr = 0x821F25A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82120ac0
	ctx.lr = 0x821F25B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// addi r4,r11,20036
	ctx.r4.s64 = ctx.r11.s64 + 20036;
	// bl 0x82120600
	ctx.lr = 0x821F25C0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x82120600
	ctx.lr = 0x821F25CC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// addi r4,r11,20048
	ctx.r4.s64 = ctx.r11.s64 + 20048;
	// bl 0x82120600
	ctx.lr = 0x821F25DC;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3024
	ctx.r6.s64 = ctx.r1.s64 + 3024;
	// addi r7,r11,23184
	ctx.r7.s64 = ctx.r11.s64 + 23184;
	// addi r5,r1,2960
	ctx.r5.s64 = ctx.r1.s64 + 2960;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r4,r1,2896
	ctx.r4.s64 = ctx.r1.s64 + 2896;
	// bl 0x8213ac58
	ctx.lr = 0x821F25F8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// bl 0x82120ac0
	ctx.lr = 0x821F2608;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x82120ac0
	ctx.lr = 0x821F2618;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82120ac0
	ctx.lr = 0x821F2628;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// bl 0x82120600
	ctx.lr = 0x821F2638;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82120600
	ctx.lr = 0x821F2644;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// addi r4,r11,20068
	ctx.r4.s64 = ctx.r11.s64 + 20068;
	// bl 0x82120600
	ctx.lr = 0x821F2654;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3216
	ctx.r6.s64 = ctx.r1.s64 + 3216;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,16552
	ctx.r7.s64 = ctx.r11.s64 + 16552;
	// addi r5,r1,3152
	ctx.r5.s64 = ctx.r1.s64 + 3152;
	// addi r4,r1,3088
	ctx.r4.s64 = ctx.r1.s64 + 3088;
	// bl 0x8213ac58
	ctx.lr = 0x821F2670;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// bl 0x82120ac0
	ctx.lr = 0x821F2680;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82120ac0
	ctx.lr = 0x821F2690;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82120ac0
	ctx.lr = 0x821F26A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// addi r4,r11,20088
	ctx.r4.s64 = ctx.r11.s64 + 20088;
	// bl 0x82120600
	ctx.lr = 0x821F26B0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82120600
	ctx.lr = 0x821F26BC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// addi r4,r11,20108
	ctx.r4.s64 = ctx.r11.s64 + 20108;
	// bl 0x82120600
	ctx.lr = 0x821F26CC;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3408
	ctx.r6.s64 = ctx.r1.s64 + 3408;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,10504
	ctx.r7.s64 = ctx.r11.s64 + 10504;
	// addi r5,r1,3344
	ctx.r5.s64 = ctx.r1.s64 + 3344;
	// addi r4,r1,3280
	ctx.r4.s64 = ctx.r1.s64 + 3280;
	// bl 0x8213ac58
	ctx.lr = 0x821F26E8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// bl 0x82120ac0
	ctx.lr = 0x821F26F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82120ac0
	ctx.lr = 0x821F2708;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82120ac0
	ctx.lr = 0x821F2718;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// addi r4,r11,20136
	ctx.r4.s64 = ctx.r11.s64 + 20136;
	// bl 0x82120600
	ctx.lr = 0x821F2728;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82120600
	ctx.lr = 0x821F2734;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// addi r4,r11,20156
	ctx.r4.s64 = ctx.r11.s64 + 20156;
	// bl 0x82120600
	ctx.lr = 0x821F2744;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3600
	ctx.r6.s64 = ctx.r1.s64 + 3600;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,5784
	ctx.r7.s64 = ctx.r11.s64 + 5784;
	// addi r5,r1,3536
	ctx.r5.s64 = ctx.r1.s64 + 3536;
	// addi r4,r1,3472
	ctx.r4.s64 = ctx.r1.s64 + 3472;
	// bl 0x8213ac58
	ctx.lr = 0x821F2760;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// bl 0x82120ac0
	ctx.lr = 0x821F2770;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82120ac0
	ctx.lr = 0x821F2780;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82120ac0
	ctx.lr = 0x821F2790;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// addi r4,r11,20184
	ctx.r4.s64 = ctx.r11.s64 + 20184;
	// bl 0x82120600
	ctx.lr = 0x821F27A0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82120600
	ctx.lr = 0x821F27AC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// addi r4,r11,20196
	ctx.r4.s64 = ctx.r11.s64 + 20196;
	// bl 0x82120600
	ctx.lr = 0x821F27BC;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3792
	ctx.r6.s64 = ctx.r1.s64 + 3792;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-872
	ctx.r7.s64 = ctx.r11.s64 + -872;
	// addi r5,r1,3728
	ctx.r5.s64 = ctx.r1.s64 + 3728;
	// addi r4,r1,3664
	ctx.r4.s64 = ctx.r1.s64 + 3664;
	// bl 0x8213ac58
	ctx.lr = 0x821F27D8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// bl 0x82120ac0
	ctx.lr = 0x821F27E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82120ac0
	ctx.lr = 0x821F27F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82120ac0
	ctx.lr = 0x821F2808;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// addi r4,r11,20216
	ctx.r4.s64 = ctx.r11.s64 + 20216;
	// bl 0x82120600
	ctx.lr = 0x821F2818;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82120600
	ctx.lr = 0x821F2824;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// addi r4,r11,20228
	ctx.r4.s64 = ctx.r11.s64 + 20228;
	// bl 0x82120600
	ctx.lr = 0x821F2834;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,3984
	ctx.r6.s64 = ctx.r1.s64 + 3984;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-12688
	ctx.r7.s64 = ctx.r11.s64 + -12688;
	// addi r5,r1,3920
	ctx.r5.s64 = ctx.r1.s64 + 3920;
	// addi r4,r1,3856
	ctx.r4.s64 = ctx.r1.s64 + 3856;
	// bl 0x8213ac58
	ctx.lr = 0x821F2850;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82120ac0
	ctx.lr = 0x821F2860;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82120ac0
	ctx.lr = 0x821F2870;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// bl 0x82120ac0
	ctx.lr = 0x821F2880;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// addi r4,r11,20248
	ctx.r4.s64 = ctx.r11.s64 + 20248;
	// bl 0x82120600
	ctx.lr = 0x821F2890;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82120600
	ctx.lr = 0x821F289C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// addi r4,r11,20260
	ctx.r4.s64 = ctx.r11.s64 + 20260;
	// bl 0x82120600
	ctx.lr = 0x821F28AC;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,4176
	ctx.r6.s64 = ctx.r1.s64 + 4176;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-14984
	ctx.r7.s64 = ctx.r11.s64 + -14984;
	// addi r5,r1,4112
	ctx.r5.s64 = ctx.r1.s64 + 4112;
	// addi r4,r1,4048
	ctx.r4.s64 = ctx.r1.s64 + 4048;
	// bl 0x8213ac58
	ctx.lr = 0x821F28C8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x82120ac0
	ctx.lr = 0x821F28D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82120ac0
	ctx.lr = 0x821F28E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82120ac0
	ctx.lr = 0x821F28F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// bl 0x82120600
	ctx.lr = 0x821F2908;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82120600
	ctx.lr = 0x821F2914;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// addi r4,r11,20296
	ctx.r4.s64 = ctx.r11.s64 + 20296;
	// bl 0x82120600
	ctx.lr = 0x821F2924;
	sub_82120600(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r1,4368
	ctx.r6.s64 = ctx.r1.s64 + 4368;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-27176
	ctx.r7.s64 = ctx.r11.s64 + -27176;
	// addi r5,r1,4304
	ctx.r5.s64 = ctx.r1.s64 + 4304;
	// addi r4,r1,4240
	ctx.r4.s64 = ctx.r1.s64 + 4240;
	// bl 0x8213ac58
	ctx.lr = 0x821F2940;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// bl 0x82120ac0
	ctx.lr = 0x821F2950;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82120ac0
	ctx.lr = 0x821F2960;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82120ac0
	ctx.lr = 0x821F2970;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// bl 0x82120600
	ctx.lr = 0x821F2980;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82120600
	ctx.lr = 0x821F298C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// addi r4,r11,20332
	ctx.r4.s64 = ctx.r11.s64 + 20332;
	// bl 0x82120600
	ctx.lr = 0x821F299C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r6,r1,4560
	ctx.r6.s64 = ctx.r1.s64 + 4560;
	// addi r7,r11,28184
	ctx.r7.s64 = ctx.r11.s64 + 28184;
	// addi r5,r1,4496
	ctx.r5.s64 = ctx.r1.s64 + 4496;
	// addi r4,r1,4432
	ctx.r4.s64 = ctx.r1.s64 + 4432;
	// bl 0x8213ac58
	ctx.lr = 0x821F29B8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x82120ac0
	ctx.lr = 0x821F29C8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82120ac0
	ctx.lr = 0x821F29D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82120ac0
	ctx.lr = 0x821F29E8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// addi r4,r11,20352
	ctx.r4.s64 = ctx.r11.s64 + 20352;
	// bl 0x82120600
	ctx.lr = 0x821F29F8;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82120600
	ctx.lr = 0x821F2A04;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// addi r4,r11,20364
	ctx.r4.s64 = ctx.r11.s64 + 20364;
	// bl 0x82120600
	ctx.lr = 0x821F2A14;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,4752
	ctx.r6.s64 = ctx.r1.s64 + 4752;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,16072
	ctx.r7.s64 = ctx.r11.s64 + 16072;
	// addi r5,r1,4688
	ctx.r5.s64 = ctx.r1.s64 + 4688;
	// addi r4,r1,4624
	ctx.r4.s64 = ctx.r1.s64 + 4624;
	// bl 0x8213ac58
	ctx.lr = 0x821F2A30;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// bl 0x82120ac0
	ctx.lr = 0x821F2A40;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82120ac0
	ctx.lr = 0x821F2A50;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82120ac0
	ctx.lr = 0x821F2A60;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x82120600
	ctx.lr = 0x821F2A70;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82120600
	ctx.lr = 0x821F2A7C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// addi r4,r11,20388
	ctx.r4.s64 = ctx.r11.s64 + 20388;
	// bl 0x82120600
	ctx.lr = 0x821F2A8C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,4944
	ctx.r6.s64 = ctx.r1.s64 + 4944;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,11856
	ctx.r7.s64 = ctx.r11.s64 + 11856;
	// addi r5,r1,4880
	ctx.r5.s64 = ctx.r1.s64 + 4880;
	// addi r4,r1,4816
	ctx.r4.s64 = ctx.r1.s64 + 4816;
	// bl 0x8213ac58
	ctx.lr = 0x821F2AA8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// bl 0x82120ac0
	ctx.lr = 0x821F2AB8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82120ac0
	ctx.lr = 0x821F2AC8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// bl 0x82120ac0
	ctx.lr = 0x821F2AD8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// addi r4,r11,20404
	ctx.r4.s64 = ctx.r11.s64 + 20404;
	// bl 0x82120600
	ctx.lr = 0x821F2AE8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// bl 0x82120600
	ctx.lr = 0x821F2AF4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// addi r4,r11,20420
	ctx.r4.s64 = ctx.r11.s64 + 20420;
	// bl 0x82120600
	ctx.lr = 0x821F2B04;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,5136
	ctx.r6.s64 = ctx.r1.s64 + 5136;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,15344
	ctx.r7.s64 = ctx.r11.s64 + 15344;
	// addi r5,r1,5072
	ctx.r5.s64 = ctx.r1.s64 + 5072;
	// addi r4,r1,5008
	ctx.r4.s64 = ctx.r1.s64 + 5008;
	// bl 0x8213ac58
	ctx.lr = 0x821F2B20;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// bl 0x82120ac0
	ctx.lr = 0x821F2B30;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// bl 0x82120ac0
	ctx.lr = 0x821F2B40;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// bl 0x82120ac0
	ctx.lr = 0x821F2B50;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// addi r4,r11,20444
	ctx.r4.s64 = ctx.r11.s64 + 20444;
	// bl 0x82120600
	ctx.lr = 0x821F2B60;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// addi r31,r11,20468
	r31.s64 = ctx.r11.s64 + 20468;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F2B74;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// addi r4,r11,20484
	ctx.r4.s64 = ctx.r11.s64 + 20484;
	// bl 0x82120600
	ctx.lr = 0x821F2B84;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,5328
	ctx.r6.s64 = ctx.r1.s64 + 5328;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,11744
	ctx.r7.s64 = ctx.r11.s64 + 11744;
	// addi r5,r1,5264
	ctx.r5.s64 = ctx.r1.s64 + 5264;
	// addi r4,r1,5200
	ctx.r4.s64 = ctx.r1.s64 + 5200;
	// bl 0x8213ac58
	ctx.lr = 0x821F2BA0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82120ac0
	ctx.lr = 0x821F2BB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// bl 0x82120ac0
	ctx.lr = 0x821F2BC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// bl 0x82120ac0
	ctx.lr = 0x821F2BD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// addi r4,r11,20508
	ctx.r4.s64 = ctx.r11.s64 + 20508;
	// bl 0x82120600
	ctx.lr = 0x821F2BE0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// bl 0x82120600
	ctx.lr = 0x821F2BEC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// addi r4,r11,20532
	ctx.r4.s64 = ctx.r11.s64 + 20532;
	// bl 0x82120600
	ctx.lr = 0x821F2BFC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,5520
	ctx.r6.s64 = ctx.r1.s64 + 5520;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,11552
	ctx.r7.s64 = ctx.r11.s64 + 11552;
	// addi r5,r1,5456
	ctx.r5.s64 = ctx.r1.s64 + 5456;
	// addi r4,r1,5392
	ctx.r4.s64 = ctx.r1.s64 + 5392;
	// bl 0x8213ac58
	ctx.lr = 0x821F2C18;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// bl 0x82120ac0
	ctx.lr = 0x821F2C28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// bl 0x82120ac0
	ctx.lr = 0x821F2C38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// bl 0x82120ac0
	ctx.lr = 0x821F2C48;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5712
	ctx.r3.s64 = ctx.r1.s64 + 5712;
	// addi r4,r11,20556
	ctx.r4.s64 = ctx.r11.s64 + 20556;
	// bl 0x82120600
	ctx.lr = 0x821F2C58;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// bl 0x82120600
	ctx.lr = 0x821F2C64;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// addi r4,r11,20568
	ctx.r4.s64 = ctx.r11.s64 + 20568;
	// bl 0x82120600
	ctx.lr = 0x821F2C74;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,5712
	ctx.r6.s64 = ctx.r1.s64 + 5712;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,10984
	ctx.r7.s64 = ctx.r11.s64 + 10984;
	// addi r5,r1,5648
	ctx.r5.s64 = ctx.r1.s64 + 5648;
	// addi r4,r1,5584
	ctx.r4.s64 = ctx.r1.s64 + 5584;
	// bl 0x8213ac58
	ctx.lr = 0x821F2C90;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// bl 0x82120ac0
	ctx.lr = 0x821F2CA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// bl 0x82120ac0
	ctx.lr = 0x821F2CB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5712
	ctx.r3.s64 = ctx.r1.s64 + 5712;
	// bl 0x82120ac0
	ctx.lr = 0x821F2CC0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5904
	ctx.r3.s64 = ctx.r1.s64 + 5904;
	// addi r4,r11,20584
	ctx.r4.s64 = ctx.r11.s64 + 20584;
	// bl 0x82120600
	ctx.lr = 0x821F2CD0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5840
	ctx.r3.s64 = ctx.r1.s64 + 5840;
	// bl 0x82120600
	ctx.lr = 0x821F2CDC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5776
	ctx.r3.s64 = ctx.r1.s64 + 5776;
	// addi r4,r11,20596
	ctx.r4.s64 = ctx.r11.s64 + 20596;
	// bl 0x82120600
	ctx.lr = 0x821F2CEC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,5904
	ctx.r6.s64 = ctx.r1.s64 + 5904;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,10656
	ctx.r7.s64 = ctx.r11.s64 + 10656;
	// addi r5,r1,5840
	ctx.r5.s64 = ctx.r1.s64 + 5840;
	// addi r4,r1,5776
	ctx.r4.s64 = ctx.r1.s64 + 5776;
	// bl 0x8213ac58
	ctx.lr = 0x821F2D08;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5776
	ctx.r3.s64 = ctx.r1.s64 + 5776;
	// bl 0x82120ac0
	ctx.lr = 0x821F2D18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5840
	ctx.r3.s64 = ctx.r1.s64 + 5840;
	// bl 0x82120ac0
	ctx.lr = 0x821F2D28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5904
	ctx.r3.s64 = ctx.r1.s64 + 5904;
	// bl 0x82120ac0
	ctx.lr = 0x821F2D38;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6096
	ctx.r3.s64 = ctx.r1.s64 + 6096;
	// addi r4,r11,20612
	ctx.r4.s64 = ctx.r11.s64 + 20612;
	// bl 0x82120600
	ctx.lr = 0x821F2D48;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6032
	ctx.r3.s64 = ctx.r1.s64 + 6032;
	// addi r31,r11,20628
	r31.s64 = ctx.r11.s64 + 20628;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x821F2D5C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,5968
	ctx.r3.s64 = ctx.r1.s64 + 5968;
	// addi r4,r11,20640
	ctx.r4.s64 = ctx.r11.s64 + 20640;
	// bl 0x82120600
	ctx.lr = 0x821F2D6C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r6,r1,6096
	ctx.r6.s64 = ctx.r1.s64 + 6096;
	// addi r7,r11,10008
	ctx.r7.s64 = ctx.r11.s64 + 10008;
	// addi r5,r1,6032
	ctx.r5.s64 = ctx.r1.s64 + 6032;
	// addi r4,r1,5968
	ctx.r4.s64 = ctx.r1.s64 + 5968;
	// bl 0x8213ac58
	ctx.lr = 0x821F2D88;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,5968
	ctx.r3.s64 = ctx.r1.s64 + 5968;
	// bl 0x82120ac0
	ctx.lr = 0x821F2D98;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6032
	ctx.r3.s64 = ctx.r1.s64 + 6032;
	// bl 0x82120ac0
	ctx.lr = 0x821F2DA8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6096
	ctx.r3.s64 = ctx.r1.s64 + 6096;
	// bl 0x82120ac0
	ctx.lr = 0x821F2DB8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6288
	ctx.r3.s64 = ctx.r1.s64 + 6288;
	// addi r4,r11,20664
	ctx.r4.s64 = ctx.r11.s64 + 20664;
	// bl 0x82120600
	ctx.lr = 0x821F2DC8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6224
	ctx.r3.s64 = ctx.r1.s64 + 6224;
	// bl 0x82120600
	ctx.lr = 0x821F2DD4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6160
	ctx.r3.s64 = ctx.r1.s64 + 6160;
	// addi r4,r11,20672
	ctx.r4.s64 = ctx.r11.s64 + 20672;
	// bl 0x82120600
	ctx.lr = 0x821F2DE4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,6288
	ctx.r6.s64 = ctx.r1.s64 + 6288;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,3032
	ctx.r7.s64 = ctx.r11.s64 + 3032;
	// addi r5,r1,6224
	ctx.r5.s64 = ctx.r1.s64 + 6224;
	// addi r4,r1,6160
	ctx.r4.s64 = ctx.r1.s64 + 6160;
	// bl 0x8213ac58
	ctx.lr = 0x821F2E00;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6160
	ctx.r3.s64 = ctx.r1.s64 + 6160;
	// bl 0x82120ac0
	ctx.lr = 0x821F2E10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6224
	ctx.r3.s64 = ctx.r1.s64 + 6224;
	// bl 0x82120ac0
	ctx.lr = 0x821F2E20;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6288
	ctx.r3.s64 = ctx.r1.s64 + 6288;
	// bl 0x82120ac0
	ctx.lr = 0x821F2E30;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6480
	ctx.r3.s64 = ctx.r1.s64 + 6480;
	// addi r4,r11,20692
	ctx.r4.s64 = ctx.r11.s64 + 20692;
	// bl 0x82120600
	ctx.lr = 0x821F2E40;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6416
	ctx.r3.s64 = ctx.r1.s64 + 6416;
	// bl 0x82120600
	ctx.lr = 0x821F2E4C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6352
	ctx.r3.s64 = ctx.r1.s64 + 6352;
	// addi r4,r11,20708
	ctx.r4.s64 = ctx.r11.s64 + 20708;
	// bl 0x82120600
	ctx.lr = 0x821F2E5C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,6480
	ctx.r6.s64 = ctx.r1.s64 + 6480;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,592
	ctx.r7.s64 = ctx.r11.s64 + 592;
	// addi r5,r1,6416
	ctx.r5.s64 = ctx.r1.s64 + 6416;
	// addi r4,r1,6352
	ctx.r4.s64 = ctx.r1.s64 + 6352;
	// bl 0x8213ac58
	ctx.lr = 0x821F2E78;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6352
	ctx.r3.s64 = ctx.r1.s64 + 6352;
	// bl 0x82120ac0
	ctx.lr = 0x821F2E88;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6416
	ctx.r3.s64 = ctx.r1.s64 + 6416;
	// bl 0x82120ac0
	ctx.lr = 0x821F2E98;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6480
	ctx.r3.s64 = ctx.r1.s64 + 6480;
	// bl 0x82120ac0
	ctx.lr = 0x821F2EA8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6672
	ctx.r3.s64 = ctx.r1.s64 + 6672;
	// addi r4,r11,20736
	ctx.r4.s64 = ctx.r11.s64 + 20736;
	// bl 0x82120600
	ctx.lr = 0x821F2EB8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6608
	ctx.r3.s64 = ctx.r1.s64 + 6608;
	// bl 0x82120600
	ctx.lr = 0x821F2EC4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6544
	ctx.r3.s64 = ctx.r1.s64 + 6544;
	// addi r4,r11,20756
	ctx.r4.s64 = ctx.r11.s64 + 20756;
	// bl 0x82120600
	ctx.lr = 0x821F2ED4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,6672
	ctx.r6.s64 = ctx.r1.s64 + 6672;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-13136
	ctx.r7.s64 = ctx.r11.s64 + -13136;
	// addi r5,r1,6608
	ctx.r5.s64 = ctx.r1.s64 + 6608;
	// addi r4,r1,6544
	ctx.r4.s64 = ctx.r1.s64 + 6544;
	// bl 0x8213ac58
	ctx.lr = 0x821F2EF0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6544
	ctx.r3.s64 = ctx.r1.s64 + 6544;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F00;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6608
	ctx.r3.s64 = ctx.r1.s64 + 6608;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6672
	ctx.r3.s64 = ctx.r1.s64 + 6672;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F20;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6864
	ctx.r3.s64 = ctx.r1.s64 + 6864;
	// addi r4,r11,20788
	ctx.r4.s64 = ctx.r11.s64 + 20788;
	// bl 0x82120600
	ctx.lr = 0x821F2F30;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6800
	ctx.r3.s64 = ctx.r1.s64 + 6800;
	// bl 0x82120600
	ctx.lr = 0x821F2F3C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6736
	ctx.r3.s64 = ctx.r1.s64 + 6736;
	// addi r4,r11,20808
	ctx.r4.s64 = ctx.r11.s64 + 20808;
	// bl 0x82120600
	ctx.lr = 0x821F2F4C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,6864
	ctx.r6.s64 = ctx.r1.s64 + 6864;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-11920
	ctx.r7.s64 = ctx.r11.s64 + -11920;
	// addi r5,r1,6800
	ctx.r5.s64 = ctx.r1.s64 + 6800;
	// addi r4,r1,6736
	ctx.r4.s64 = ctx.r1.s64 + 6736;
	// bl 0x8213ac58
	ctx.lr = 0x821F2F68;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6736
	ctx.r3.s64 = ctx.r1.s64 + 6736;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6800
	ctx.r3.s64 = ctx.r1.s64 + 6800;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F88;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6864
	ctx.r3.s64 = ctx.r1.s64 + 6864;
	// bl 0x82120ac0
	ctx.lr = 0x821F2F98;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7056
	ctx.r3.s64 = ctx.r1.s64 + 7056;
	// addi r4,r11,20844
	ctx.r4.s64 = ctx.r11.s64 + 20844;
	// bl 0x82120600
	ctx.lr = 0x821F2FA8;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,6992
	ctx.r3.s64 = ctx.r1.s64 + 6992;
	// bl 0x82120600
	ctx.lr = 0x821F2FB4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,6928
	ctx.r3.s64 = ctx.r1.s64 + 6928;
	// addi r4,r11,20864
	ctx.r4.s64 = ctx.r11.s64 + 20864;
	// bl 0x82120600
	ctx.lr = 0x821F2FC4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,7056
	ctx.r6.s64 = ctx.r1.s64 + 7056;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-688
	ctx.r7.s64 = ctx.r11.s64 + -688;
	// addi r5,r1,6992
	ctx.r5.s64 = ctx.r1.s64 + 6992;
	// addi r4,r1,6928
	ctx.r4.s64 = ctx.r1.s64 + 6928;
	// bl 0x8213ac58
	ctx.lr = 0x821F2FE0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6928
	ctx.r3.s64 = ctx.r1.s64 + 6928;
	// bl 0x82120ac0
	ctx.lr = 0x821F2FF0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,6992
	ctx.r3.s64 = ctx.r1.s64 + 6992;
	// bl 0x82120ac0
	ctx.lr = 0x821F3000;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7056
	ctx.r3.s64 = ctx.r1.s64 + 7056;
	// bl 0x82120ac0
	ctx.lr = 0x821F3010;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7248
	ctx.r3.s64 = ctx.r1.s64 + 7248;
	// addi r4,r11,20896
	ctx.r4.s64 = ctx.r11.s64 + 20896;
	// bl 0x82120600
	ctx.lr = 0x821F3020;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7184
	ctx.r3.s64 = ctx.r1.s64 + 7184;
	// bl 0x82120600
	ctx.lr = 0x821F302C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7120
	ctx.r3.s64 = ctx.r1.s64 + 7120;
	// addi r4,r11,20916
	ctx.r4.s64 = ctx.r11.s64 + 20916;
	// bl 0x82120600
	ctx.lr = 0x821F303C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,7248
	ctx.r6.s64 = ctx.r1.s64 + 7248;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-11336
	ctx.r7.s64 = ctx.r11.s64 + -11336;
	// addi r5,r1,7184
	ctx.r5.s64 = ctx.r1.s64 + 7184;
	// addi r4,r1,7120
	ctx.r4.s64 = ctx.r1.s64 + 7120;
	// bl 0x8213ac58
	ctx.lr = 0x821F3058;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7120
	ctx.r3.s64 = ctx.r1.s64 + 7120;
	// bl 0x82120ac0
	ctx.lr = 0x821F3068;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7184
	ctx.r3.s64 = ctx.r1.s64 + 7184;
	// bl 0x82120ac0
	ctx.lr = 0x821F3078;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7248
	ctx.r3.s64 = ctx.r1.s64 + 7248;
	// bl 0x82120ac0
	ctx.lr = 0x821F3088;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7440
	ctx.r3.s64 = ctx.r1.s64 + 7440;
	// addi r4,r11,20948
	ctx.r4.s64 = ctx.r11.s64 + 20948;
	// bl 0x82120600
	ctx.lr = 0x821F3098;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7376
	ctx.r3.s64 = ctx.r1.s64 + 7376;
	// bl 0x82120600
	ctx.lr = 0x821F30A4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7312
	ctx.r3.s64 = ctx.r1.s64 + 7312;
	// addi r4,r11,20968
	ctx.r4.s64 = ctx.r11.s64 + 20968;
	// bl 0x82120600
	ctx.lr = 0x821F30B4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,7440
	ctx.r6.s64 = ctx.r1.s64 + 7440;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-11040
	ctx.r7.s64 = ctx.r11.s64 + -11040;
	// addi r5,r1,7376
	ctx.r5.s64 = ctx.r1.s64 + 7376;
	// addi r4,r1,7312
	ctx.r4.s64 = ctx.r1.s64 + 7312;
	// bl 0x8213ac58
	ctx.lr = 0x821F30D0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7312
	ctx.r3.s64 = ctx.r1.s64 + 7312;
	// bl 0x82120ac0
	ctx.lr = 0x821F30E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7376
	ctx.r3.s64 = ctx.r1.s64 + 7376;
	// bl 0x82120ac0
	ctx.lr = 0x821F30F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7440
	ctx.r3.s64 = ctx.r1.s64 + 7440;
	// bl 0x82120ac0
	ctx.lr = 0x821F3100;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7632
	ctx.r3.s64 = ctx.r1.s64 + 7632;
	// addi r4,r11,21000
	ctx.r4.s64 = ctx.r11.s64 + 21000;
	// bl 0x82120600
	ctx.lr = 0x821F3110;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7568
	ctx.r3.s64 = ctx.r1.s64 + 7568;
	// bl 0x82120600
	ctx.lr = 0x821F311C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7504
	ctx.r3.s64 = ctx.r1.s64 + 7504;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// bl 0x82120600
	ctx.lr = 0x821F312C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,7632
	ctx.r6.s64 = ctx.r1.s64 + 7632;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-9792
	ctx.r7.s64 = ctx.r11.s64 + -9792;
	// addi r5,r1,7568
	ctx.r5.s64 = ctx.r1.s64 + 7568;
	// addi r4,r1,7504
	ctx.r4.s64 = ctx.r1.s64 + 7504;
	// bl 0x8213ac58
	ctx.lr = 0x821F3148;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7504
	ctx.r3.s64 = ctx.r1.s64 + 7504;
	// bl 0x82120ac0
	ctx.lr = 0x821F3158;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7568
	ctx.r3.s64 = ctx.r1.s64 + 7568;
	// bl 0x82120ac0
	ctx.lr = 0x821F3168;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7632
	ctx.r3.s64 = ctx.r1.s64 + 7632;
	// bl 0x82120ac0
	ctx.lr = 0x821F3178;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7824
	ctx.r3.s64 = ctx.r1.s64 + 7824;
	// addi r4,r11,21052
	ctx.r4.s64 = ctx.r11.s64 + 21052;
	// bl 0x82120600
	ctx.lr = 0x821F3188;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7760
	ctx.r3.s64 = ctx.r1.s64 + 7760;
	// bl 0x82120600
	ctx.lr = 0x821F3194;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7696
	ctx.r3.s64 = ctx.r1.s64 + 7696;
	// addi r4,r11,21080
	ctx.r4.s64 = ctx.r11.s64 + 21080;
	// bl 0x82120600
	ctx.lr = 0x821F31A4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,7824
	ctx.r6.s64 = ctx.r1.s64 + 7824;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-12568
	ctx.r7.s64 = ctx.r11.s64 + -12568;
	// addi r5,r1,7760
	ctx.r5.s64 = ctx.r1.s64 + 7760;
	// addi r4,r1,7696
	ctx.r4.s64 = ctx.r1.s64 + 7696;
	// bl 0x8213ac58
	ctx.lr = 0x821F31C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7696
	ctx.r3.s64 = ctx.r1.s64 + 7696;
	// bl 0x82120ac0
	ctx.lr = 0x821F31D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7760
	ctx.r3.s64 = ctx.r1.s64 + 7760;
	// bl 0x82120ac0
	ctx.lr = 0x821F31E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7824
	ctx.r3.s64 = ctx.r1.s64 + 7824;
	// bl 0x82120ac0
	ctx.lr = 0x821F31F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8016
	ctx.r3.s64 = ctx.r1.s64 + 8016;
	// addi r4,r11,21120
	ctx.r4.s64 = ctx.r11.s64 + 21120;
	// bl 0x82120600
	ctx.lr = 0x821F3200;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,7952
	ctx.r3.s64 = ctx.r1.s64 + 7952;
	// bl 0x82120600
	ctx.lr = 0x821F320C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,7888
	ctx.r3.s64 = ctx.r1.s64 + 7888;
	// addi r4,r11,21140
	ctx.r4.s64 = ctx.r11.s64 + 21140;
	// bl 0x82120600
	ctx.lr = 0x821F321C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8016
	ctx.r6.s64 = ctx.r1.s64 + 8016;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-880
	ctx.r7.s64 = ctx.r11.s64 + -880;
	// addi r5,r1,7952
	ctx.r5.s64 = ctx.r1.s64 + 7952;
	// addi r4,r1,7888
	ctx.r4.s64 = ctx.r1.s64 + 7888;
	// bl 0x8213ac58
	ctx.lr = 0x821F3238;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7888
	ctx.r3.s64 = ctx.r1.s64 + 7888;
	// bl 0x82120ac0
	ctx.lr = 0x821F3248;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,7952
	ctx.r3.s64 = ctx.r1.s64 + 7952;
	// bl 0x82120ac0
	ctx.lr = 0x821F3258;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8016
	ctx.r3.s64 = ctx.r1.s64 + 8016;
	// bl 0x82120ac0
	ctx.lr = 0x821F3268;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8208
	ctx.r3.s64 = ctx.r1.s64 + 8208;
	// addi r4,r11,21172
	ctx.r4.s64 = ctx.r11.s64 + 21172;
	// bl 0x82120600
	ctx.lr = 0x821F3278;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8144
	ctx.r3.s64 = ctx.r1.s64 + 8144;
	// bl 0x82120600
	ctx.lr = 0x821F3284;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8080
	ctx.r3.s64 = ctx.r1.s64 + 8080;
	// addi r4,r11,21192
	ctx.r4.s64 = ctx.r11.s64 + 21192;
	// bl 0x82120600
	ctx.lr = 0x821F3294;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8208
	ctx.r6.s64 = ctx.r1.s64 + 8208;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-1592
	ctx.r7.s64 = ctx.r11.s64 + -1592;
	// addi r5,r1,8144
	ctx.r5.s64 = ctx.r1.s64 + 8144;
	// addi r4,r1,8080
	ctx.r4.s64 = ctx.r1.s64 + 8080;
	// bl 0x8213ac58
	ctx.lr = 0x821F32B0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8080
	ctx.r3.s64 = ctx.r1.s64 + 8080;
	// bl 0x82120ac0
	ctx.lr = 0x821F32C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8144
	ctx.r3.s64 = ctx.r1.s64 + 8144;
	// bl 0x82120ac0
	ctx.lr = 0x821F32D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8208
	ctx.r3.s64 = ctx.r1.s64 + 8208;
	// bl 0x82120ac0
	ctx.lr = 0x821F32E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8400
	ctx.r3.s64 = ctx.r1.s64 + 8400;
	// addi r4,r11,21224
	ctx.r4.s64 = ctx.r11.s64 + 21224;
	// bl 0x82120600
	ctx.lr = 0x821F32F0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8336
	ctx.r3.s64 = ctx.r1.s64 + 8336;
	// bl 0x82120600
	ctx.lr = 0x821F32FC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8272
	ctx.r3.s64 = ctx.r1.s64 + 8272;
	// addi r4,r11,21248
	ctx.r4.s64 = ctx.r11.s64 + 21248;
	// bl 0x82120600
	ctx.lr = 0x821F330C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8400
	ctx.r6.s64 = ctx.r1.s64 + 8400;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-2304
	ctx.r7.s64 = ctx.r11.s64 + -2304;
	// addi r5,r1,8336
	ctx.r5.s64 = ctx.r1.s64 + 8336;
	// addi r4,r1,8272
	ctx.r4.s64 = ctx.r1.s64 + 8272;
	// bl 0x8213ac58
	ctx.lr = 0x821F3328;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8272
	ctx.r3.s64 = ctx.r1.s64 + 8272;
	// bl 0x82120ac0
	ctx.lr = 0x821F3338;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8336
	ctx.r3.s64 = ctx.r1.s64 + 8336;
	// bl 0x82120ac0
	ctx.lr = 0x821F3348;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8400
	ctx.r3.s64 = ctx.r1.s64 + 8400;
	// bl 0x82120ac0
	ctx.lr = 0x821F3358;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8592
	ctx.r3.s64 = ctx.r1.s64 + 8592;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// bl 0x82120600
	ctx.lr = 0x821F3368;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8528
	ctx.r3.s64 = ctx.r1.s64 + 8528;
	// bl 0x82120600
	ctx.lr = 0x821F3374;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8464
	ctx.r3.s64 = ctx.r1.s64 + 8464;
	// addi r4,r11,21304
	ctx.r4.s64 = ctx.r11.s64 + 21304;
	// bl 0x82120600
	ctx.lr = 0x821F3384;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8592
	ctx.r6.s64 = ctx.r1.s64 + 8592;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-2696
	ctx.r7.s64 = ctx.r11.s64 + -2696;
	// addi r5,r1,8528
	ctx.r5.s64 = ctx.r1.s64 + 8528;
	// addi r4,r1,8464
	ctx.r4.s64 = ctx.r1.s64 + 8464;
	// bl 0x8213ac58
	ctx.lr = 0x821F33A0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8464
	ctx.r3.s64 = ctx.r1.s64 + 8464;
	// bl 0x82120ac0
	ctx.lr = 0x821F33B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8528
	ctx.r3.s64 = ctx.r1.s64 + 8528;
	// bl 0x82120ac0
	ctx.lr = 0x821F33C0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8592
	ctx.r3.s64 = ctx.r1.s64 + 8592;
	// bl 0x82120ac0
	ctx.lr = 0x821F33D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8784
	ctx.r3.s64 = ctx.r1.s64 + 8784;
	// addi r4,r11,21340
	ctx.r4.s64 = ctx.r11.s64 + 21340;
	// bl 0x82120600
	ctx.lr = 0x821F33E0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8720
	ctx.r3.s64 = ctx.r1.s64 + 8720;
	// bl 0x82120600
	ctx.lr = 0x821F33EC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8656
	ctx.r3.s64 = ctx.r1.s64 + 8656;
	// addi r4,r11,21364
	ctx.r4.s64 = ctx.r11.s64 + 21364;
	// bl 0x82120600
	ctx.lr = 0x821F33FC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8784
	ctx.r6.s64 = ctx.r1.s64 + 8784;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-3040
	ctx.r7.s64 = ctx.r11.s64 + -3040;
	// addi r5,r1,8720
	ctx.r5.s64 = ctx.r1.s64 + 8720;
	// addi r4,r1,8656
	ctx.r4.s64 = ctx.r1.s64 + 8656;
	// bl 0x8213ac58
	ctx.lr = 0x821F3418;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8656
	ctx.r3.s64 = ctx.r1.s64 + 8656;
	// bl 0x82120ac0
	ctx.lr = 0x821F3428;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8720
	ctx.r3.s64 = ctx.r1.s64 + 8720;
	// bl 0x82120ac0
	ctx.lr = 0x821F3438;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8784
	ctx.r3.s64 = ctx.r1.s64 + 8784;
	// bl 0x82120ac0
	ctx.lr = 0x821F3448;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8976
	ctx.r3.s64 = ctx.r1.s64 + 8976;
	// addi r4,r11,21400
	ctx.r4.s64 = ctx.r11.s64 + 21400;
	// bl 0x82120600
	ctx.lr = 0x821F3458;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,8912
	ctx.r3.s64 = ctx.r1.s64 + 8912;
	// bl 0x82120600
	ctx.lr = 0x821F3464;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,8848
	ctx.r3.s64 = ctx.r1.s64 + 8848;
	// addi r4,r11,21420
	ctx.r4.s64 = ctx.r11.s64 + 21420;
	// bl 0x82120600
	ctx.lr = 0x821F3474;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,8976
	ctx.r6.s64 = ctx.r1.s64 + 8976;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-3264
	ctx.r7.s64 = ctx.r11.s64 + -3264;
	// addi r5,r1,8912
	ctx.r5.s64 = ctx.r1.s64 + 8912;
	// addi r4,r1,8848
	ctx.r4.s64 = ctx.r1.s64 + 8848;
	// bl 0x8213ac58
	ctx.lr = 0x821F3490;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8848
	ctx.r3.s64 = ctx.r1.s64 + 8848;
	// bl 0x82120ac0
	ctx.lr = 0x821F34A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8912
	ctx.r3.s64 = ctx.r1.s64 + 8912;
	// bl 0x82120ac0
	ctx.lr = 0x821F34B0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,8976
	ctx.r3.s64 = ctx.r1.s64 + 8976;
	// bl 0x82120ac0
	ctx.lr = 0x821F34C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9168
	ctx.r3.s64 = ctx.r1.s64 + 9168;
	// addi r4,r11,21452
	ctx.r4.s64 = ctx.r11.s64 + 21452;
	// bl 0x82120600
	ctx.lr = 0x821F34D0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9104
	ctx.r3.s64 = ctx.r1.s64 + 9104;
	// bl 0x82120600
	ctx.lr = 0x821F34DC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9040
	ctx.r3.s64 = ctx.r1.s64 + 9040;
	// addi r4,r11,21472
	ctx.r4.s64 = ctx.r11.s64 + 21472;
	// bl 0x82120600
	ctx.lr = 0x821F34EC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,9168
	ctx.r6.s64 = ctx.r1.s64 + 9168;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-7456
	ctx.r7.s64 = ctx.r11.s64 + -7456;
	// addi r5,r1,9104
	ctx.r5.s64 = ctx.r1.s64 + 9104;
	// addi r4,r1,9040
	ctx.r4.s64 = ctx.r1.s64 + 9040;
	// bl 0x8213ac58
	ctx.lr = 0x821F3508;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9040
	ctx.r3.s64 = ctx.r1.s64 + 9040;
	// bl 0x82120ac0
	ctx.lr = 0x821F3518;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9104
	ctx.r3.s64 = ctx.r1.s64 + 9104;
	// bl 0x82120ac0
	ctx.lr = 0x821F3528;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9168
	ctx.r3.s64 = ctx.r1.s64 + 9168;
	// bl 0x82120ac0
	ctx.lr = 0x821F3538;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9360
	ctx.r3.s64 = ctx.r1.s64 + 9360;
	// addi r4,r11,21504
	ctx.r4.s64 = ctx.r11.s64 + 21504;
	// bl 0x82120600
	ctx.lr = 0x821F3548;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9296
	ctx.r3.s64 = ctx.r1.s64 + 9296;
	// bl 0x82120600
	ctx.lr = 0x821F3554;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9232
	ctx.r3.s64 = ctx.r1.s64 + 9232;
	// addi r4,r11,21528
	ctx.r4.s64 = ctx.r11.s64 + 21528;
	// bl 0x82120600
	ctx.lr = 0x821F3564;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,9360
	ctx.r6.s64 = ctx.r1.s64 + 9360;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-6456
	ctx.r7.s64 = ctx.r11.s64 + -6456;
	// addi r5,r1,9296
	ctx.r5.s64 = ctx.r1.s64 + 9296;
	// addi r4,r1,9232
	ctx.r4.s64 = ctx.r1.s64 + 9232;
	// bl 0x8213ac58
	ctx.lr = 0x821F3580;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9232
	ctx.r3.s64 = ctx.r1.s64 + 9232;
	// bl 0x82120ac0
	ctx.lr = 0x821F3590;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9296
	ctx.r3.s64 = ctx.r1.s64 + 9296;
	// bl 0x82120ac0
	ctx.lr = 0x821F35A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9360
	ctx.r3.s64 = ctx.r1.s64 + 9360;
	// bl 0x82120ac0
	ctx.lr = 0x821F35B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9552
	ctx.r3.s64 = ctx.r1.s64 + 9552;
	// addi r4,r11,21560
	ctx.r4.s64 = ctx.r11.s64 + 21560;
	// bl 0x82120600
	ctx.lr = 0x821F35C0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9488
	ctx.r3.s64 = ctx.r1.s64 + 9488;
	// bl 0x82120600
	ctx.lr = 0x821F35CC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9424
	ctx.r3.s64 = ctx.r1.s64 + 9424;
	// addi r4,r11,21584
	ctx.r4.s64 = ctx.r11.s64 + 21584;
	// bl 0x82120600
	ctx.lr = 0x821F35DC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,9552
	ctx.r6.s64 = ctx.r1.s64 + 9552;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-5368
	ctx.r7.s64 = ctx.r11.s64 + -5368;
	// addi r5,r1,9488
	ctx.r5.s64 = ctx.r1.s64 + 9488;
	// addi r4,r1,9424
	ctx.r4.s64 = ctx.r1.s64 + 9424;
	// bl 0x8213ac58
	ctx.lr = 0x821F35F8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9424
	ctx.r3.s64 = ctx.r1.s64 + 9424;
	// bl 0x82120ac0
	ctx.lr = 0x821F3608;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9488
	ctx.r3.s64 = ctx.r1.s64 + 9488;
	// bl 0x82120ac0
	ctx.lr = 0x821F3618;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9552
	ctx.r3.s64 = ctx.r1.s64 + 9552;
	// bl 0x82120ac0
	ctx.lr = 0x821F3628;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9744
	ctx.r3.s64 = ctx.r1.s64 + 9744;
	// addi r4,r11,21620
	ctx.r4.s64 = ctx.r11.s64 + 21620;
	// bl 0x82120600
	ctx.lr = 0x821F3638;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9680
	ctx.r3.s64 = ctx.r1.s64 + 9680;
	// bl 0x82120600
	ctx.lr = 0x821F3644;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9616
	ctx.r3.s64 = ctx.r1.s64 + 9616;
	// addi r4,r11,21648
	ctx.r4.s64 = ctx.r11.s64 + 21648;
	// bl 0x82120600
	ctx.lr = 0x821F3654;
	sub_82120600(ctx, base);
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,9744
	ctx.r6.s64 = ctx.r1.s64 + 9744;
	// addi r7,r11,-4320
	ctx.r7.s64 = ctx.r11.s64 + -4320;
	// addi r5,r1,9680
	ctx.r5.s64 = ctx.r1.s64 + 9680;
	// addi r4,r1,9616
	ctx.r4.s64 = ctx.r1.s64 + 9616;
	// bl 0x8213ac58
	ctx.lr = 0x821F3670;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9616
	ctx.r3.s64 = ctx.r1.s64 + 9616;
	// bl 0x82120ac0
	ctx.lr = 0x821F3680;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9680
	ctx.r3.s64 = ctx.r1.s64 + 9680;
	// bl 0x82120ac0
	ctx.lr = 0x821F3690;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9744
	ctx.r3.s64 = ctx.r1.s64 + 9744;
	// bl 0x82120ac0
	ctx.lr = 0x821F36A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9936
	ctx.r3.s64 = ctx.r1.s64 + 9936;
	// addi r4,r11,21688
	ctx.r4.s64 = ctx.r11.s64 + 21688;
	// bl 0x82120600
	ctx.lr = 0x821F36B0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,9872
	ctx.r3.s64 = ctx.r1.s64 + 9872;
	// bl 0x82120600
	ctx.lr = 0x821F36BC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,9808
	ctx.r3.s64 = ctx.r1.s64 + 9808;
	// addi r4,r11,21708
	ctx.r4.s64 = ctx.r11.s64 + 21708;
	// bl 0x82120600
	ctx.lr = 0x821F36CC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,9936
	ctx.r6.s64 = ctx.r1.s64 + 9936;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-8816
	ctx.r7.s64 = ctx.r11.s64 + -8816;
	// addi r5,r1,9872
	ctx.r5.s64 = ctx.r1.s64 + 9872;
	// addi r4,r1,9808
	ctx.r4.s64 = ctx.r1.s64 + 9808;
	// bl 0x8213ac58
	ctx.lr = 0x821F36E8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9808
	ctx.r3.s64 = ctx.r1.s64 + 9808;
	// bl 0x82120ac0
	ctx.lr = 0x821F36F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9872
	ctx.r3.s64 = ctx.r1.s64 + 9872;
	// bl 0x82120ac0
	ctx.lr = 0x821F3708;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,9936
	ctx.r3.s64 = ctx.r1.s64 + 9936;
	// bl 0x82120ac0
	ctx.lr = 0x821F3718;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10128
	ctx.r3.s64 = ctx.r1.s64 + 10128;
	// addi r4,r11,21740
	ctx.r4.s64 = ctx.r11.s64 + 21740;
	// bl 0x82120600
	ctx.lr = 0x821F3728;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10064
	ctx.r3.s64 = ctx.r1.s64 + 10064;
	// bl 0x82120600
	ctx.lr = 0x821F3734;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10000
	ctx.r3.s64 = ctx.r1.s64 + 10000;
	// addi r4,r11,21764
	ctx.r4.s64 = ctx.r11.s64 + 21764;
	// bl 0x82120600
	ctx.lr = 0x821F3744;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,10128
	ctx.r6.s64 = ctx.r1.s64 + 10128;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-8496
	ctx.r7.s64 = ctx.r11.s64 + -8496;
	// addi r5,r1,10064
	ctx.r5.s64 = ctx.r1.s64 + 10064;
	// addi r4,r1,10000
	ctx.r4.s64 = ctx.r1.s64 + 10000;
	// bl 0x8213ac58
	ctx.lr = 0x821F3760;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10000
	ctx.r3.s64 = ctx.r1.s64 + 10000;
	// bl 0x82120ac0
	ctx.lr = 0x821F3770;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10064
	ctx.r3.s64 = ctx.r1.s64 + 10064;
	// bl 0x82120ac0
	ctx.lr = 0x821F3780;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10128
	ctx.r3.s64 = ctx.r1.s64 + 10128;
	// bl 0x82120ac0
	ctx.lr = 0x821F3790;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10320
	ctx.r3.s64 = ctx.r1.s64 + 10320;
	// addi r4,r11,21796
	ctx.r4.s64 = ctx.r11.s64 + 21796;
	// bl 0x82120600
	ctx.lr = 0x821F37A0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10256
	ctx.r3.s64 = ctx.r1.s64 + 10256;
	// bl 0x82120600
	ctx.lr = 0x821F37AC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10192
	ctx.r3.s64 = ctx.r1.s64 + 10192;
	// addi r4,r11,21812
	ctx.r4.s64 = ctx.r11.s64 + 21812;
	// bl 0x82120600
	ctx.lr = 0x821F37BC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,10320
	ctx.r6.s64 = ctx.r1.s64 + 10320;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-8024
	ctx.r7.s64 = ctx.r11.s64 + -8024;
	// addi r5,r1,10256
	ctx.r5.s64 = ctx.r1.s64 + 10256;
	// addi r4,r1,10192
	ctx.r4.s64 = ctx.r1.s64 + 10192;
	// bl 0x8213ac58
	ctx.lr = 0x821F37D8;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10192
	ctx.r3.s64 = ctx.r1.s64 + 10192;
	// bl 0x82120ac0
	ctx.lr = 0x821F37E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10256
	ctx.r3.s64 = ctx.r1.s64 + 10256;
	// bl 0x82120ac0
	ctx.lr = 0x821F37F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10320
	ctx.r3.s64 = ctx.r1.s64 + 10320;
	// bl 0x82120ac0
	ctx.lr = 0x821F3808;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10512
	ctx.r3.s64 = ctx.r1.s64 + 10512;
	// addi r4,r11,21840
	ctx.r4.s64 = ctx.r11.s64 + 21840;
	// bl 0x82120600
	ctx.lr = 0x821F3818;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,10448
	ctx.r3.s64 = ctx.r1.s64 + 10448;
	// bl 0x82120600
	ctx.lr = 0x821F3824;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10384
	ctx.r3.s64 = ctx.r1.s64 + 10384;
	// addi r4,r11,21860
	ctx.r4.s64 = ctx.r11.s64 + 21860;
	// bl 0x82120600
	ctx.lr = 0x821F3834;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,10512
	ctx.r6.s64 = ctx.r1.s64 + 10512;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-7736
	ctx.r7.s64 = ctx.r11.s64 + -7736;
	// addi r5,r1,10448
	ctx.r5.s64 = ctx.r1.s64 + 10448;
	// addi r4,r1,10384
	ctx.r4.s64 = ctx.r1.s64 + 10384;
	// bl 0x8213ac58
	ctx.lr = 0x821F3850;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10384
	ctx.r3.s64 = ctx.r1.s64 + 10384;
	// bl 0x82120ac0
	ctx.lr = 0x821F3860;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10448
	ctx.r3.s64 = ctx.r1.s64 + 10448;
	// bl 0x82120ac0
	ctx.lr = 0x821F3870;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10512
	ctx.r3.s64 = ctx.r1.s64 + 10512;
	// bl 0x82120ac0
	ctx.lr = 0x821F3880;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10704
	ctx.r3.s64 = ctx.r1.s64 + 10704;
	// addi r4,r11,21888
	ctx.r4.s64 = ctx.r11.s64 + 21888;
	// bl 0x82120600
	ctx.lr = 0x821F3890;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10640
	ctx.r3.s64 = ctx.r1.s64 + 10640;
	// addi r29,r11,21908
	r29.s64 = ctx.r11.s64 + 21908;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120600
	ctx.lr = 0x821F38A4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10576
	ctx.r3.s64 = ctx.r1.s64 + 10576;
	// addi r4,r11,21920
	ctx.r4.s64 = ctx.r11.s64 + 21920;
	// bl 0x82120600
	ctx.lr = 0x821F38B4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,10704
	ctx.r6.s64 = ctx.r1.s64 + 10704;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-17616
	ctx.r7.s64 = ctx.r11.s64 + -17616;
	// addi r5,r1,10640
	ctx.r5.s64 = ctx.r1.s64 + 10640;
	// addi r4,r1,10576
	ctx.r4.s64 = ctx.r1.s64 + 10576;
	// bl 0x8213ac58
	ctx.lr = 0x821F38D0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10576
	ctx.r3.s64 = ctx.r1.s64 + 10576;
	// bl 0x82120ac0
	ctx.lr = 0x821F38E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10640
	ctx.r3.s64 = ctx.r1.s64 + 10640;
	// bl 0x82120ac0
	ctx.lr = 0x821F38F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10704
	ctx.r3.s64 = ctx.r1.s64 + 10704;
	// bl 0x82120ac0
	ctx.lr = 0x821F3900;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10896
	ctx.r3.s64 = ctx.r1.s64 + 10896;
	// addi r4,r11,21948
	ctx.r4.s64 = ctx.r11.s64 + 21948;
	// bl 0x82120600
	ctx.lr = 0x821F3910;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,10832
	ctx.r3.s64 = ctx.r1.s64 + 10832;
	// bl 0x82120600
	ctx.lr = 0x821F391C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10768
	ctx.r3.s64 = ctx.r1.s64 + 10768;
	// addi r4,r11,21960
	ctx.r4.s64 = ctx.r11.s64 + 21960;
	// bl 0x82120600
	ctx.lr = 0x821F392C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,10896
	ctx.r6.s64 = ctx.r1.s64 + 10896;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-17184
	ctx.r7.s64 = ctx.r11.s64 + -17184;
	// addi r5,r1,10832
	ctx.r5.s64 = ctx.r1.s64 + 10832;
	// addi r4,r1,10768
	ctx.r4.s64 = ctx.r1.s64 + 10768;
	// bl 0x8213ac58
	ctx.lr = 0x821F3948;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10768
	ctx.r3.s64 = ctx.r1.s64 + 10768;
	// bl 0x82120ac0
	ctx.lr = 0x821F3958;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10832
	ctx.r3.s64 = ctx.r1.s64 + 10832;
	// bl 0x82120ac0
	ctx.lr = 0x821F3968;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10896
	ctx.r3.s64 = ctx.r1.s64 + 10896;
	// bl 0x82120ac0
	ctx.lr = 0x821F3978;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11088
	ctx.r3.s64 = ctx.r1.s64 + 11088;
	// addi r4,r11,21980
	ctx.r4.s64 = ctx.r11.s64 + 21980;
	// bl 0x82120600
	ctx.lr = 0x821F3988;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11024
	ctx.r3.s64 = ctx.r1.s64 + 11024;
	// bl 0x82120600
	ctx.lr = 0x821F3994;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,10960
	ctx.r3.s64 = ctx.r1.s64 + 10960;
	// addi r4,r11,21996
	ctx.r4.s64 = ctx.r11.s64 + 21996;
	// bl 0x82120600
	ctx.lr = 0x821F39A4;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,11088
	ctx.r6.s64 = ctx.r1.s64 + 11088;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-15400
	ctx.r7.s64 = ctx.r11.s64 + -15400;
	// addi r5,r1,11024
	ctx.r5.s64 = ctx.r1.s64 + 11024;
	// addi r4,r1,10960
	ctx.r4.s64 = ctx.r1.s64 + 10960;
	// bl 0x8213ac58
	ctx.lr = 0x821F39C0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,10960
	ctx.r3.s64 = ctx.r1.s64 + 10960;
	// bl 0x82120ac0
	ctx.lr = 0x821F39D0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11024
	ctx.r3.s64 = ctx.r1.s64 + 11024;
	// bl 0x82120ac0
	ctx.lr = 0x821F39E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11088
	ctx.r3.s64 = ctx.r1.s64 + 11088;
	// bl 0x82120ac0
	ctx.lr = 0x821F39F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11280
	ctx.r3.s64 = ctx.r1.s64 + 11280;
	// addi r4,r11,22020
	ctx.r4.s64 = ctx.r11.s64 + 22020;
	// bl 0x82120600
	ctx.lr = 0x821F3A00;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11216
	ctx.r3.s64 = ctx.r1.s64 + 11216;
	// bl 0x82120600
	ctx.lr = 0x821F3A0C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11152
	ctx.r3.s64 = ctx.r1.s64 + 11152;
	// addi r4,r11,22040
	ctx.r4.s64 = ctx.r11.s64 + 22040;
	// bl 0x82120600
	ctx.lr = 0x821F3A1C;
	sub_82120600(ctx, base);
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,11280
	ctx.r6.s64 = ctx.r1.s64 + 11280;
	// addi r7,r11,-14872
	ctx.r7.s64 = ctx.r11.s64 + -14872;
	// addi r5,r1,11216
	ctx.r5.s64 = ctx.r1.s64 + 11216;
	// addi r4,r1,11152
	ctx.r4.s64 = ctx.r1.s64 + 11152;
	// bl 0x8213ac58
	ctx.lr = 0x821F3A38;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11152
	ctx.r3.s64 = ctx.r1.s64 + 11152;
	// bl 0x82120ac0
	ctx.lr = 0x821F3A48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11216
	ctx.r3.s64 = ctx.r1.s64 + 11216;
	// bl 0x82120ac0
	ctx.lr = 0x821F3A58;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11280
	ctx.r3.s64 = ctx.r1.s64 + 11280;
	// bl 0x82120ac0
	ctx.lr = 0x821F3A68;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11472
	ctx.r3.s64 = ctx.r1.s64 + 11472;
	// addi r4,r11,22068
	ctx.r4.s64 = ctx.r11.s64 + 22068;
	// bl 0x82120600
	ctx.lr = 0x821F3A78;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11408
	ctx.r3.s64 = ctx.r1.s64 + 11408;
	// bl 0x82120600
	ctx.lr = 0x821F3A84;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11344
	ctx.r3.s64 = ctx.r1.s64 + 11344;
	// addi r4,r11,22084
	ctx.r4.s64 = ctx.r11.s64 + 22084;
	// bl 0x82120600
	ctx.lr = 0x821F3A94;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,11472
	ctx.r6.s64 = ctx.r1.s64 + 11472;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-14528
	ctx.r7.s64 = ctx.r11.s64 + -14528;
	// addi r5,r1,11408
	ctx.r5.s64 = ctx.r1.s64 + 11408;
	// addi r4,r1,11344
	ctx.r4.s64 = ctx.r1.s64 + 11344;
	// bl 0x8213ac58
	ctx.lr = 0x821F3AB0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11344
	ctx.r3.s64 = ctx.r1.s64 + 11344;
	// bl 0x82120ac0
	ctx.lr = 0x821F3AC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11408
	ctx.r3.s64 = ctx.r1.s64 + 11408;
	// bl 0x82120ac0
	ctx.lr = 0x821F3AD0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11472
	ctx.r3.s64 = ctx.r1.s64 + 11472;
	// bl 0x82120ac0
	ctx.lr = 0x821F3AE0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11664
	ctx.r3.s64 = ctx.r1.s64 + 11664;
	// addi r4,r11,22112
	ctx.r4.s64 = ctx.r11.s64 + 22112;
	// bl 0x82120600
	ctx.lr = 0x821F3AF0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11600
	ctx.r3.s64 = ctx.r1.s64 + 11600;
	// bl 0x82120600
	ctx.lr = 0x821F3AFC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11536
	ctx.r3.s64 = ctx.r1.s64 + 11536;
	// addi r4,r11,22128
	ctx.r4.s64 = ctx.r11.s64 + 22128;
	// bl 0x82120600
	ctx.lr = 0x821F3B0C;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,11664
	ctx.r6.s64 = ctx.r1.s64 + 11664;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-14048
	ctx.r7.s64 = ctx.r11.s64 + -14048;
	// addi r5,r1,11600
	ctx.r5.s64 = ctx.r1.s64 + 11600;
	// addi r4,r1,11536
	ctx.r4.s64 = ctx.r1.s64 + 11536;
	// bl 0x8213ac58
	ctx.lr = 0x821F3B28;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11536
	ctx.r3.s64 = ctx.r1.s64 + 11536;
	// bl 0x82120ac0
	ctx.lr = 0x821F3B38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11600
	ctx.r3.s64 = ctx.r1.s64 + 11600;
	// bl 0x82120ac0
	ctx.lr = 0x821F3B48;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11664
	ctx.r3.s64 = ctx.r1.s64 + 11664;
	// bl 0x82120ac0
	ctx.lr = 0x821F3B58;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11856
	ctx.r3.s64 = ctx.r1.s64 + 11856;
	// addi r4,r11,22152
	ctx.r4.s64 = ctx.r11.s64 + 22152;
	// bl 0x82120600
	ctx.lr = 0x821F3B68;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11792
	ctx.r3.s64 = ctx.r1.s64 + 11792;
	// bl 0x82120600
	ctx.lr = 0x821F3B74;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11728
	ctx.r3.s64 = ctx.r1.s64 + 11728;
	// addi r4,r11,22172
	ctx.r4.s64 = ctx.r11.s64 + 22172;
	// bl 0x82120600
	ctx.lr = 0x821F3B84;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,11856
	ctx.r6.s64 = ctx.r1.s64 + 11856;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-13568
	ctx.r7.s64 = ctx.r11.s64 + -13568;
	// addi r5,r1,11792
	ctx.r5.s64 = ctx.r1.s64 + 11792;
	// addi r4,r1,11728
	ctx.r4.s64 = ctx.r1.s64 + 11728;
	// bl 0x8213ac58
	ctx.lr = 0x821F3BA0;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11728
	ctx.r3.s64 = ctx.r1.s64 + 11728;
	// bl 0x82120ac0
	ctx.lr = 0x821F3BB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11792
	ctx.r3.s64 = ctx.r1.s64 + 11792;
	// bl 0x82120ac0
	ctx.lr = 0x821F3BC0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11856
	ctx.r3.s64 = ctx.r1.s64 + 11856;
	// bl 0x82120ac0
	ctx.lr = 0x821F3BD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12048
	ctx.r3.s64 = ctx.r1.s64 + 12048;
	// addi r4,r11,22200
	ctx.r4.s64 = ctx.r11.s64 + 22200;
	// bl 0x82120600
	ctx.lr = 0x821F3BE0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,11984
	ctx.r3.s64 = ctx.r1.s64 + 11984;
	// bl 0x82120600
	ctx.lr = 0x821F3BEC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,11920
	ctx.r3.s64 = ctx.r1.s64 + 11920;
	// addi r4,r11,22220
	ctx.r4.s64 = ctx.r11.s64 + 22220;
	// bl 0x82120600
	ctx.lr = 0x821F3BFC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,12048
	ctx.r6.s64 = ctx.r1.s64 + 12048;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-15904
	ctx.r7.s64 = ctx.r11.s64 + -15904;
	// addi r5,r1,11984
	ctx.r5.s64 = ctx.r1.s64 + 11984;
	// addi r4,r1,11920
	ctx.r4.s64 = ctx.r1.s64 + 11920;
	// bl 0x8213ac58
	ctx.lr = 0x821F3C18;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11920
	ctx.r3.s64 = ctx.r1.s64 + 11920;
	// bl 0x82120ac0
	ctx.lr = 0x821F3C28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,11984
	ctx.r3.s64 = ctx.r1.s64 + 11984;
	// bl 0x82120ac0
	ctx.lr = 0x821F3C38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12048
	ctx.r3.s64 = ctx.r1.s64 + 12048;
	// bl 0x82120ac0
	ctx.lr = 0x821F3C48;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12240
	ctx.r3.s64 = ctx.r1.s64 + 12240;
	// addi r4,r11,22252
	ctx.r4.s64 = ctx.r11.s64 + 22252;
	// bl 0x82120600
	ctx.lr = 0x821F3C58;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,12176
	ctx.r3.s64 = ctx.r1.s64 + 12176;
	// bl 0x82120600
	ctx.lr = 0x821F3C64;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12112
	ctx.r3.s64 = ctx.r1.s64 + 12112;
	// addi r4,r11,22272
	ctx.r4.s64 = ctx.r11.s64 + 22272;
	// bl 0x82120600
	ctx.lr = 0x821F3C74;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,12240
	ctx.r6.s64 = ctx.r1.s64 + 12240;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-15504
	ctx.r7.s64 = ctx.r11.s64 + -15504;
	// addi r5,r1,12176
	ctx.r5.s64 = ctx.r1.s64 + 12176;
	// addi r4,r1,12112
	ctx.r4.s64 = ctx.r1.s64 + 12112;
	// bl 0x8213ac58
	ctx.lr = 0x821F3C90;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12112
	ctx.r3.s64 = ctx.r1.s64 + 12112;
	// bl 0x82120ac0
	ctx.lr = 0x821F3CA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12176
	ctx.r3.s64 = ctx.r1.s64 + 12176;
	// bl 0x82120ac0
	ctx.lr = 0x821F3CB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12240
	ctx.r3.s64 = ctx.r1.s64 + 12240;
	// bl 0x82120ac0
	ctx.lr = 0x821F3CC0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12432
	ctx.r3.s64 = ctx.r1.s64 + 12432;
	// addi r4,r11,22300
	ctx.r4.s64 = ctx.r11.s64 + 22300;
	// bl 0x82120600
	ctx.lr = 0x821F3CD0;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,12368
	ctx.r3.s64 = ctx.r1.s64 + 12368;
	// bl 0x82120600
	ctx.lr = 0x821F3CDC;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12304
	ctx.r3.s64 = ctx.r1.s64 + 12304;
	// addi r4,r11,22316
	ctx.r4.s64 = ctx.r11.s64 + 22316;
	// bl 0x82120600
	ctx.lr = 0x821F3CEC;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,12432
	ctx.r6.s64 = ctx.r1.s64 + 12432;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-20352
	ctx.r7.s64 = ctx.r11.s64 + -20352;
	// addi r5,r1,12368
	ctx.r5.s64 = ctx.r1.s64 + 12368;
	// addi r4,r1,12304
	ctx.r4.s64 = ctx.r1.s64 + 12304;
	// bl 0x8213ac58
	ctx.lr = 0x821F3D08;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12304
	ctx.r3.s64 = ctx.r1.s64 + 12304;
	// bl 0x82120ac0
	ctx.lr = 0x821F3D18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12368
	ctx.r3.s64 = ctx.r1.s64 + 12368;
	// bl 0x82120ac0
	ctx.lr = 0x821F3D28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12432
	ctx.r3.s64 = ctx.r1.s64 + 12432;
	// bl 0x82120ac0
	ctx.lr = 0x821F3D38;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12624
	ctx.r3.s64 = ctx.r1.s64 + 12624;
	// addi r4,r11,22340
	ctx.r4.s64 = ctx.r11.s64 + 22340;
	// bl 0x82120600
	ctx.lr = 0x821F3D48;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,12560
	ctx.r3.s64 = ctx.r1.s64 + 12560;
	// bl 0x82120600
	ctx.lr = 0x821F3D54;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,12496
	ctx.r3.s64 = ctx.r1.s64 + 12496;
	// addi r4,r11,22356
	ctx.r4.s64 = ctx.r11.s64 + 22356;
	// bl 0x82120600
	ctx.lr = 0x821F3D64;
	sub_82120600(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,12624
	ctx.r6.s64 = ctx.r1.s64 + 12624;
	// lwz r3,6132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6132);
	// addi r7,r11,-19112
	ctx.r7.s64 = ctx.r11.s64 + -19112;
	// addi r5,r1,12560
	ctx.r5.s64 = ctx.r1.s64 + 12560;
	// addi r4,r1,12496
	ctx.r4.s64 = ctx.r1.s64 + 12496;
	// bl 0x8213ac58
	ctx.lr = 0x821F3D80;
	sub_8213AC58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12496
	ctx.r3.s64 = ctx.r1.s64 + 12496;
	// bl 0x82120ac0
	ctx.lr = 0x821F3D90;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12560
	ctx.r3.s64 = ctx.r1.s64 + 12560;
	// bl 0x82120ac0
	ctx.lr = 0x821F3DA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,12624
	ctx.r3.s64 = ctx.r1.s64 + 12624;
	// bl 0x82120ac0
	ctx.lr = 0x821F3DB0;
	sub_82120AC0(ctx, base);
	// addi r1,r1,12688
	ctx.r1.s64 = ctx.r1.s64 + 12688;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82361EE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lfs f30,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x82361f20
	if (ctx.cr6.gt) goto loc_82361F20;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x82361f30
	if (!ctx.cr6.eq) goto loc_82361F30;
loc_82361F20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x82361fb8
	goto loc_82361FB8;
loc_82361F30:
	// fmuls f29,f1,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// lfs f0,11196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f29,f30
	f31.f64 = double(float(f29.f64 - f30.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82361F4C;
	sub_826A15C0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(f31.f64 * f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,8300(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f9,f12,f29,f30
	ctx.f9.f64 = double(float(-std::fma(ctx.f12.f64, f29.f64, -f30.f64)));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmsubs f12,f0,f0,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f8.f64)));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82361f88
	if (!ctx.cr6.lt) goto loc_82361F88;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82361F88:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(f31.f64 * ctx.f11.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82361fb4
	if (ctx.cr6.lt) goto loc_82361FB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82361fb8
	if (!ctx.cr6.gt) goto loc_82361FB8;
loc_82361FB4:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82361FB8:
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

DEFINE_REX_FUNC(sub_8236B328) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// bne cr6,0x8236b348
	if (!ctx.cr6.eq) goto loc_8236B348;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236B348:
	// lfs f0,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f1,312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236B36C;
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
}

DEFINE_REX_FUNC(sub_8236E570) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e580
	if (!ctx.cr6.eq) goto loc_8236E580;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E580:
	// b 0x8236e2e8
	sub_8236E2E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F920) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f930
	if (!ctx.cr6.eq) goto loc_8236F930;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236F930:
	// b 0x8236f4a8
	sub_8236F4A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82370A98) {
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
	ctx.lr = 0x82370AA0;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370bbc
	if (ctx.cr6.eq) goto loc_82370BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfs f30,8616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8616);
	f30.f64 = double(temp.f32);
	// lfs f31,9000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9000);
	f31.f64 = double(temp.f32);
loc_82370AE4:
	// lfs f13,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82370b04
	if (!ctx.cr6.eq) goto loc_82370B04;
	// lfs f12,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82370bd4
	if (ctx.cr6.eq) goto loc_82370BD4;
loc_82370B04:
	// lfs f12,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmadds f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, f30.f64)));
	// bge cr6,0x82370b28
	if (!ctx.cr6.lt) goto loc_82370B28;
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82370b44
	if (ctx.cr6.lt) goto loc_82370B44;
	// b 0x82370b40
	goto loc_82370B40;
loc_82370B28:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82370b44
	if (!ctx.cr6.gt) goto loc_82370B44;
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82370b44
	if (ctx.cr6.gt) goto loc_82370B44;
loc_82370B40:
	// stfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
loc_82370B44:
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82370b64
	if (!ctx.cr6.lt) goto loc_82370B64;
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82370b80
	if (ctx.cr6.lt) goto loc_82370B80;
	// b 0x82370b7c
	goto loc_82370B7C;
loc_82370B64:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82370b80
	if (!ctx.cr6.gt) goto loc_82370B80;
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82370b80
	if (ctx.cr6.gt) goto loc_82370B80;
loc_82370B7C:
	// stfs f0,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
loc_82370B80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236fa20
	ctx.lr = 0x82370B90;
	sub_8236FA20(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236fb40
	ctx.lr = 0x82370BA8;
	sub_8236FB40(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x82370ae4
	if (!ctx.cr0.eq) goto loc_82370AE4;
loc_82370BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_82370BD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82370c08
	if (!ctx.cr6.eq) goto loc_82370C08;
loc_82370BF0:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82370C04;
	sub_823EF2F8(ctx, base);
	// b 0x82370bbc
	goto loc_82370BBC;
loc_82370C08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82370bf0
	if (ctx.cr6.lt) goto loc_82370BF0;
	// lfs f0,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82370c68
	if (ctx.cr6.lt) goto loc_82370C68;
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82370C38;
	sub_823EF5F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82370bbc
	if (!ctx.cr6.gt) goto loc_82370BBC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r31,456
	ctx.r11.s64 = r31.s64 + 456;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82370C50:
	// stfs f0,-60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f0,-124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82370c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370C50;
	// b 0x82370bbc
	goto loc_82370BBC;
loc_82370C68:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236fb40
	ctx.lr = 0x82370C80;
	sub_8236FB40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8238A660) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// bl 0x823c8da8
	ctx.lr = 0x8238A688;
	sub_823C8DA8(ctx, base);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238a6c0
	if (!ctx.cr6.eq) goto loc_8238A6C0;
loc_8238A694:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a140
	ctx.lr = 0x8238A6A0;
	sub_8238A140(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,1256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// lwz r9,272(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238a694
	if (ctx.cr6.eq) goto loc_8238A694;
loc_8238A6C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c86b8
	ctx.lr = 0x8238A6C8;
	sub_823C86B8(ctx, base);
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

DEFINE_REX_FUNC(sub_82390D28) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// bl 0x823c8da8
	ctx.lr = 0x82390D50;
	sub_823C8DA8(ctx, base);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82390d88
	if (!ctx.cr6.eq) goto loc_82390D88;
loc_82390D5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823908d0
	ctx.lr = 0x82390D68;
	sub_823908D0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,1256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// lwz r9,272(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390d5c
	if (ctx.cr6.eq) goto loc_82390D5C;
loc_82390D88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c86b8
	ctx.lr = 0x82390D90;
	sub_823C86B8(ctx, base);
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

DEFINE_REX_FUNC(sub_82393B68) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82393b9c
	if (ctx.cr6.eq) goto loc_82393B9C;
	// lwz r11,-16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -16);
	// lwz r10,1272(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1272);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,1272(r3)
	REX_STORE_U32(ctx.r3.u32 + 1272, ctx.r9.u32);
loc_82393B9C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,20112
	ctx.r6.s64 = ctx.r10.s64 + 20112;
	// li r7,57
	ctx.r7.s64 = 57;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e48
	ctx.lr = 0x82393BC0;
	sub_82330E48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393bd4
	if (ctx.cr6.eq) goto loc_82393BD4;
	// lwz r11,1272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1272);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r11.u32);
loc_82393BD4:
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

DEFINE_REX_FUNC(sub_8239A6C8) {
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
	ctx.lr = 0x8239A6D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r27,r31,16096
	r27.s64 = r31.s64 + 16096;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239A6EC;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20368
	ctx.r11.s64 = ctx.r11.s64 + 20368;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,16096(r31)
	REX_STORE_U32(r31.u32 + 16096, ctx.r11.u32);
	// lis r28,-32198
	r28.s64 = -2110128128;
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// lis r29,-32199
	r29.s64 = -2110193664;
	// stw r9,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r9.u32);
	// lis r30,-32198
	r30.s64 = -2110128128;
	// addi r11,r28,-22864
	ctx.r11.s64 = r28.s64 + -22864;
	// addi r10,r29,26584
	ctx.r10.s64 = r29.s64 + 26584;
	// addi r9,r30,-31968
	ctx.r9.s64 = r30.s64 + -31968;
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// stw r10,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r10.u32);
	// lis r31,-32198
	r31.s64 = -2110128128;
	// stw r9,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r9.u32);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// addi r10,r3,-31920
	ctx.r10.s64 = ctx.r3.s64 + -31920;
	// addi r11,r31,-31944
	ctx.r11.s64 = r31.s64 + -31944;
	// addi r9,r4,-31896
	ctx.r9.s64 = ctx.r4.s64 + -31896;
	// stw r10,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r10.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r11,32(r27)
	REX_STORE_U32(r27.u32 + 32, ctx.r11.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r9,40(r27)
	REX_STORE_U32(r27.u32 + 40, ctx.r9.u32);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r11,r5,29128
	ctx.r11.s64 = ctx.r5.s64 + 29128;
	// addi r10,r6,26608
	ctx.r10.s64 = ctx.r6.s64 + 26608;
	// addi r9,r7,26712
	ctx.r9.s64 = ctx.r7.s64 + 26712;
	// stw r11,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r11.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r10,84(r27)
	REX_STORE_U32(r27.u32 + 84, ctx.r10.u32);
	// stw r9,88(r27)
	REX_STORE_U32(r27.u32 + 88, ctx.r9.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r8,29152
	ctx.r11.s64 = ctx.r8.s64 + 29152;
	// li r9,384
	ctx.r9.s64 = 384;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r9,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8239EDC8) {
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
	ctx.lr = 0x8239EDE0;
	sub_82343820(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20904
	ctx.r9.s64 = ctx.r10.s64 + 20904;
	// addi r10,r31,276
	ctx.r10.s64 = r31.s64 + 276;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// stw r10,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r8,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r8.u32);
	// stw r7,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r7.u32);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823A0788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823A0790;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a07dc
	if (!ctx.cr6.gt) goto loc_823A07DC;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A07B4:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A07CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a07b4
	if (ctx.cr6.lt) goto loc_823A07B4;
loc_823A07DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A2BD8) {
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
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a2c34
	if (ctx.cr6.eq) goto loc_823A2C34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823a2c34
	if (!ctx.cr6.lt) goto loc_823A2C34;
	// li r3,59
	ctx.r3.s64 = 59;
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
loc_823A2C34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82360bf8
	ctx.lr = 0x823A2C3C;
	sub_82360BF8(ctx, base);
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

DEFINE_REX_FUNC(sub_823A6978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A6980;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a6990
	if (!ctx.cr6.eq) goto loc_823A6990;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x826a1d0c
	return;
loc_823A6990:
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a6a38
	if (!ctx.cr6.gt) goto loc_823A6A38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_823A69B4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823a6a1c
	if (!ctx.cr6.gt) goto loc_823A6A1C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823A69CC:
	// lhz r31,38(r3)
	r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// bge cr6,0x823a6a08
	if (!ctx.cr6.lt) goto loc_823A6A08;
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// addi r29,r1,-48
	r29.s64 = ctx.r1.s64 + -48;
	// lhzx r31,r31,r10
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r10.u32);
	// stw r31,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, r31.u32);
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
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
	// stvx128 v62,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x823a6a0c
	goto loc_823A6A0C;
loc_823A6A08:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823A6A0C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x823a69cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A69CC;
loc_823A6A1C:
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823a69b4
	if (ctx.cr6.lt) goto loc_823A69B4;
loc_823A6A38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823AE8D8) {
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
	// bl 0x8239c0a8
	ctx.lr = 0x823AE8F0;
	sub_8239C0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ae900
	if (!ctx.cr6.eq) goto loc_823AE900;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823adff8
	ctx.lr = 0x823AE900;
	sub_823ADFF8(ctx, base);
loc_823AE900:
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

DEFINE_REX_FUNC(sub_823AFCC8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r9,r3,-28
	ctx.r9.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823afcdc
	if (!ctx.cr6.eq) goto loc_823AFCDC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823AFCDC:
	// lwz r11,332(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823afcf0
	if (!ctx.cr6.eq) goto loc_823AFCF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823AFCF0:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823afd00
	if (ctx.cr6.lt) goto loc_823AFD00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823AFD00:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,304(r9)
	REX_STORE_U32(ctx.r9.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B27B0) {
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
	// beq cr6,0x823b27c8
	if (ctx.cr6.eq) goto loc_823B27C8;
	// bl 0x8264ce68
	ctx.lr = 0x823B27C8;
	sub_8264CE68(ctx, base);
loc_823B27C8:
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

DEFINE_REX_FUNC(sub_823BAD50) {
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
	// lwz r4,1296(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1296);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823badac
	if (ctx.cr6.eq) goto loc_823BADAC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,32356
	ctx.r5.s64 = ctx.r10.s64 + 32356;
	// li r6,263
	ctx.r6.s64 = 263;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823BAD90;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1296(r31)
	REX_STORE_U32(r31.u32 + 1296, ctx.r9.u32);
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
loc_823BADAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1296(r31)
	REX_STORE_U32(r31.u32 + 1296, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823BE178) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32544
	ctx.r10.s64 = ctx.r11.s64 + 32544;
	// lfs f13,32544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x823be088
	sub_823BE088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BE260) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32568(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32568);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823be280
	if (ctx.cr6.lt) goto loc_823BE280;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823BE280:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C0948) {
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
	ctx.lr = 0x823C0950;
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r26,r29,r30
	r26.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// rlwinm r24,r26,2,0,29
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r24
	ctx.r11.s64 = static_cast<int64_t>(-r24.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823C0980;
	sub_826A2D14(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// addi r25,r31,96
	r25.s64 = r31.s64 + 96;
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// lwz r7,60(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 60);
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// lwz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// subfic r23,r27,412
	ctx.xer.ca = r27.u32 <= 412;
	r23.u64 = static_cast<uint64_t>(412) - r27.u64;
	// lwz r4,68(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// subfic r9,r27,512
	ctx.xer.ca = r27.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - r27.u64;
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x823d7420
	ctx.lr = 0x823C09CC;
	sub_823D7420(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// subfic r7,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r7.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// subf r10,r27,r7
	ctx.r10.u64 = ctx.r7.u64 - r27.u64;
	// subfic r11,r10,512
	ctx.xer.ca = ctx.r10.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r10.u64;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x823c09fc
	if (ctx.cr6.lt) goto loc_823C09FC;
loc_823C09EC:
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// bge cr6,0x823c09ec
	if (!ctx.cr6.lt) goto loc_823C09EC;
loc_823C09FC:
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bf5b8
	ctx.lr = 0x823C0A1C;
	sub_823BF5B8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// lfs f13,32432(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11252(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 11252);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823c0a84
	if (ctx.cr6.lt) goto loc_823C0A84;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C0A50:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f0,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f7,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f5,f7,f0,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f5,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823c0a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0A50;
loc_823C0A84:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x823c0ab0
	if (!ctx.cr6.lt) goto loc_823C0AB0;
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C0AA0:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c0aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0AA0;
loc_823C0AB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r3,60(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 60);
	// add r4,r3,r24
	ctx.r4.u64 = ctx.r3.u64 + r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r29,r10
	ctx.r11.u64 = ctx.r10.u64 - r29.u64;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x823C0AD4;
	sub_8269CC20(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,60(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 60);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bfa98
	ctx.lr = 0x823C0AF0;
	sub_823BFA98(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823c0cc0
	if (!ctx.cr6.gt) goto loc_823C0CC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r17,r30,2,0,29
	r17.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r18,r17,r19
	r18.u64 = r17.u64 + r19.u64;
	// lfd f13,-30976(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -30976);
	// lfs f0,-31272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -31272);
	ctx.f0.f64 = double(temp.f32);
loc_823C0B18:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x823c0c44
	if (ctx.cr6.lt) goto loc_823C0C44;
	// subfic r5,r29,515
	ctx.xer.ca = r29.u32 <= 515;
	ctx.r5.u64 = static_cast<uint64_t>(515) - r29.u64;
	// lwz r9,60(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 60);
	// subfic r4,r29,514
	ctx.xer.ca = r29.u32 <= 514;
	ctx.r4.u64 = static_cast<uint64_t>(514) - r29.u64;
	// lwz r7,56(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 56);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r29,513
	ctx.xer.ca = r29.u32 <= 513;
	ctx.r3.u64 = static_cast<uint64_t>(513) - r29.u64;
	// subfic r27,r29,512
	ctx.xer.ca = r29.u32 <= 512;
	r27.u64 = static_cast<uint64_t>(512) - r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// mullw r4,r4,r30
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// addi r26,r29,-4
	r26.s64 = r29.s64 + -4;
	// mullw r27,r27,r30
	r27.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// add r25,r6,r10
	r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r6,r26,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r27,r27,r10
	r27.u64 = r27.u64 + ctx.r10.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r24,2,0,29
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r5,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r4,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r27,2,0,29
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r11,r26
	ctx.r4.u64 = r26.u64 - ctx.r11.u64;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r27,r11,r25
	r27.u64 = r25.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r23,r11,r24
	r23.u64 = r24.u64 - ctx.r11.u64;
	// subf r21,r11,r3
	r21.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r22,r11,r22
	r22.u64 = r22.u64 - ctx.r11.u64;
	// subf r20,r11,r20
	r20.u64 = r20.u64 - ctx.r11.u64;
	// add r3,r5,r19
	ctx.r3.u64 = ctx.r5.u64 + r19.u64;
	// add r24,r4,r19
	r24.u64 = ctx.r4.u64 + r19.u64;
	// add r25,r27,r19
	r25.u64 = r27.u64 + r19.u64;
	// add r27,r23,r9
	r27.u64 = r23.u64 + ctx.r9.u64;
	// add r4,r22,r9
	ctx.r4.u64 = r22.u64 + ctx.r9.u64;
	// add r5,r21,r9
	ctx.r5.u64 = r21.u64 + ctx.r9.u64;
	// subf r26,r11,r18
	r26.u64 = r18.u64 - ctx.r11.u64;
	// add r9,r20,r9
	ctx.r9.u64 = r20.u64 + ctx.r9.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_823C0BDC:
	// lfsux f12,r9,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r9.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsx f11,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f10,r7,r8
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lfsux f12,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f9,r7,r8
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lfsux f12,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmadds f8,f9,f0,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f8,r7,r8
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// fmul f7,f10,f13
	ctx.f7.f64 = ctx.f10.f64 * ctx.f13.f64;
	// lfsux f12,r27,r11
	ea = r27.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r27.u32 = ea;
	// fmadds f6,f8,f0,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmul f5,f9,f13
	ctx.f5.f64 = ctx.f9.f64 * ctx.f13.f64;
	// stfsx f6,r7,r8
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// fmul f4,f8,f13
	ctx.f4.f64 = ctx.f8.f64 * ctx.f13.f64;
	// fmul f3,f6,f13
	ctx.f3.f64 = ctx.f6.f64 * ctx.f13.f64;
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// stfsux f2,r3,r11
	temp.f32 = float(ctx.f2.f64);
	ea = ctx.r3.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// stfsux f1,r26,r11
	temp.f32 = float(ctx.f1.f64);
	ea = r26.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfsux f12,r25,r11
	temp.f32 = float(ctx.f12.f64);
	ea = r25.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	r25.u32 = ea;
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfsux f11,r24,r11
	temp.f32 = float(ctx.f11.f64);
	ea = r24.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	r24.u32 = ea;
	// bdnz 0x823c0bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0BDC;
loc_823C0C44:
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// bge cr6,0x823c0cac
	if (!ctx.cr6.lt) goto loc_823C0CAC;
	// subf r11,r29,r6
	ctx.r11.u64 = ctx.r6.u64 - r29.u64;
	// lwz r5,60(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 60);
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// lwz r7,56(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 56);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r6,r29
	ctx.r6.u64 = r29.u64 - ctx.r6.u64;
	// subf r9,r17,r3
	ctx.r9.u64 = ctx.r3.u64 - r17.u64;
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - r17.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823C0C8C:
	// lfsux f12,r11,r17
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + r17.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsx f11,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f10,r7,r8
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// fmul f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfsux f8,r9,r17
	temp.f32 = float(ctx.f8.f64);
	ea = ctx.r9.u32 + r17.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823c0c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0C8C;
loc_823C0CAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x823c0b18
	if (ctx.cr6.lt) goto loc_823C0B18;
loc_823C0CC0:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_823D9018) {
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
	ctx.lr = 0x823D9020;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	r14.s64 = 0;
	// lwz r16,16(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r18,16
	r18.s64 = 16;
	// mr r21,r14
	r21.u64 = r14.u64;
	// rlwinm r17,r6,4,0,27
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
loc_823D903C:
	// add r11,r18,r21
	ctx.r11.u64 = r18.u64 + r21.u64;
	// mr r24,r14
	r24.u64 = r14.u64;
	// mr r23,r14
	r23.u64 = r14.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mr r19,r14
	r19.u64 = r14.u64;
	// mr r20,r14
	r20.u64 = r14.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x823d90b8
	if (ctx.cr6.lt) goto loc_823D90B8;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// subfic r29,r3,16
	ctx.xer.ca = ctx.r3.u32 <= 16;
	r29.u64 = static_cast<uint64_t>(16) - ctx.r3.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r4,-8
	r30.s64 = ctx.r4.s64 + -8;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// subf r22,r5,r4
	r22.u64 = ctx.r4.u64 - ctx.r5.u64;
	// rlwinm r20,r28,1,0,30
	r20.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_823D9080:
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwzx r26,r22,r11
	r26.u64 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	// lwzu r28,8(r30)
	ea = 8 + r30.u32;
	r28.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mullw r27,r31,r3
	r27.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r25,r26,r29
	r25.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// mullw r28,r29,r28
	r28.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mullw r26,r31,r3
	r26.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// add r28,r27,r28
	r28.u64 = r27.u64 + r28.u64;
	// add r27,r25,r26
	r27.u64 = r25.u64 + r26.u64;
	// add r24,r28,r24
	r24.u64 = r28.u64 + r24.u64;
	// add r23,r27,r23
	r23.u64 = r27.u64 + r23.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823d9080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9080;
loc_823D90B8:
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823d90dc
	if (!ctx.cr6.lt) goto loc_823D90DC;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r31,r3,16
	ctx.xer.ca = ctx.r3.u32 <= 16;
	r31.u64 = static_cast<uint64_t>(16) - ctx.r3.u64;
	// lwzx r30,r11,r4
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mullw r30,r30,r31
	r30.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r19,r30,r11
	r19.u64 = r30.u64 + ctx.r11.u64;
loc_823D90DC:
	// add r11,r23,r24
	ctx.r11.u64 = r23.u64 + r24.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// ble cr6,0x823d90f4
	if (!ctx.cr6.gt) goto loc_823D90F4;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// b 0x823d90f8
	goto loc_823D90F8;
loc_823D90F4:
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_823D90F8:
	// subf r11,r21,r18
	ctx.r11.u64 = r18.u64 - r21.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d903c
	if (!ctx.cr6.eq) goto loc_823D903C;
	// mr r27,r14
	r27.u64 = r14.u64;
	// mr r26,r14
	r26.u64 = r14.u64;
	// mr r20,r14
	r20.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x823d918c
	if (ctx.cr6.lt) goto loc_823D918C;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// subfic r29,r21,16
	ctx.xer.ca = r21.u32 <= 16;
	r29.u64 = static_cast<uint64_t>(16) - r21.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// subf r25,r5,r4
	r25.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r24,r5,r7
	r24.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r23,r7,r4
	r23.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// rlwinm r22,r30,1,0,30
	r22.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_823D9148:
	// lwzx r31,r23,r3
	r31.u64 = REX_LOAD_U32(r23.u32 + ctx.r3.u32);
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r28,r31,r29
	r28.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// mullw r30,r30,r21
	r30.s64 = int64_t(r30.s32) * int64_t(r21.s32);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// lwzx r30,r11,r25
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r28,r31,r21
	r28.s64 = int64_t(r31.s32) * int64_t(r21.s32);
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, r30.u32);
	// add r26,r30,r26
	r26.u64 = r30.u64 + r26.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823d9148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9148;
loc_823D918C:
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823d91b8
	if (!ctx.cr6.lt) goto loc_823D91B8;
	// rlwinm r3,r22,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r21,16
	ctx.xer.ca = r21.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - r21.u64;
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwzx r5,r3,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r5,r21
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r21.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stwx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_823D91B8:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r6,r26,r11
	ctx.r6.u64 = ctx.r11.u64 - r26.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r5,r27,r6
	ctx.r5.u64 = ctx.r6.u64 - r27.u64;
	// subf r6,r20,r5
	ctx.r6.u64 = ctx.r5.u64 - r20.u64;
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r5,r6,r10
	ctx.r5.u64 = uint32_t((ctx.r10.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r6.s32 / ctx.r10.s32 : 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// andc r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823d9200
	if (!ctx.cr6.gt) goto loc_823D9200;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D91F0:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d91f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D91F0;
loc_823D9200:
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x823d9224
	if (!ctx.cr0.gt) goto loc_823D9224;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D9214:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d9214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9214;
loc_823D9224:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d934c
	if (!ctx.cr6.gt) goto loc_823D934C;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// subf r27,r8,r9
	r27.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r29,r8,r7
	r29.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// li r25,7
	r25.s64 = 7;
loc_823D9244:
	// lwz r11,32(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 32);
	// li r4,4
	ctx.r4.s64 = 4;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// subf r24,r7,r8
	r24.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mullw r6,r24,r16
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(r16.s32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r30,r6,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823e8310
	ctx.lr = 0x823D9274;
	sub_823E8310(ctx, base);
	// subfic r11,r3,50
	ctx.xer.ca = ctx.r3.u32 <= 50;
	ctx.r11.u64 = static_cast<uint64_t>(50) - ctx.r3.u64;
	// lwzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r3,r11,r24
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// mullw r11,r3,r16
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r16.s32);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// divw r5,r6,r4
	ctx.r5.u64 = uint32_t((ctx.r4.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r6.s32 / ctx.r4.s32 : 0);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r3,r5,r30
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r9,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// adde r11,r7,r10
	temp.u8 = (ctx.r7.u32 + ctx.r10.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andc r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// stwx r11,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, ctx.r11.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r4,r16,r6
	ctx.r4.s64 = int64_t(r16.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823d930c
	if (!ctx.cr6.gt) goto loc_823D930C;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r16
	ctx.r11.u64 = uint32_t((r16.s32 && !(ctx.r11.s32 == INT32_MIN && r16.s32 == -1)) ? ctx.r11.s32 / r16.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// andc r8,r16,r10
	ctx.r8.u64 = r16.u64 & ~ctx.r10.u64;
	// twllei r16,0
	if (r16.s32 == 0 || r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_823D930C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x823d931c
	if (!ctx.cr6.gt) goto loc_823D931C;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
loc_823D931C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// mullw r9,r16,r11
	ctx.r9.s64 = int64_t(r16.s32) * int64_t(ctx.r11.s32);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r7,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r7.u32);
	// bge 0x823d933c
	if (!ctx.cr0.lt) goto loc_823D933C;
	// stwx r14,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, r14.u32);
loc_823D933C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823d9244
	if (!ctx.cr0.eq) goto loc_823D9244;
loc_823D934C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823EBA30) {
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
	ctx.lr = 0x823EBA38;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,28(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// bl 0x82393af8
	ctx.lr = 0x823EBA5C;
	sub_82393AF8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebcf8
	if (ctx.cr6.eq) goto loc_823EBCF8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBA74;
	sub_823E2DA8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823ebac0
	if (!ctx.cr6.gt) goto loc_823EBAC0;
	// addi r31,r24,4
	r31.s64 = r24.s64 + 4;
loc_823EBA88:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBA94;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823ebaac
	if (!ctx.cr6.lt) goto loc_823EBAAC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823EBAAC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823eba88
	if (ctx.cr6.lt) goto loc_823EBA88;
loc_823EBAC0:
	// addic. r26,r29,1
	ctx.xer.ca = r29.u32 > 4294967294;
	r26.s64 = r29.s64 + 1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r22,1
	r22.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// ble 0x823ebb98
	if (!ctx.cr0.gt) goto loc_823EBB98;
	// addi r28,r24,320
	r28.s64 = r24.s64 + 320;
	// addi r30,r24,256
	r30.s64 = r24.s64 + 256;
loc_823EBAD8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBAE4;
	sub_823E2DA8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,-128(r30)
	REX_STORE_U32(r30.u32 + -128, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBAF8;
	sub_823E2DA8(ctx, base);
	// stw r3,-64(r30)
	REX_STORE_U32(r30.u32 + -64, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// beq cr6,0x823ebb18
	if (ctx.cr6.eq) goto loc_823EBB18;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBB14;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823EBB18:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// lwz r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ebcdc
	if (!ctx.cr6.lt) goto loc_823EBCDC;
	// lwz r11,-64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -64);
	// li r29,0
	r29.s64 = 0;
	// slw. r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x823ebb84
	if (!ctx.cr0.gt) goto loc_823EBB84;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_823EBB44:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBB50;
	sub_823E2DA8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// lwz r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ebcdc
	if (!ctx.cr6.lt) goto loc_823EBCDC;
	// lwz r11,-64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ebb44
	if (ctx.cr6.lt) goto loc_823EBB44;
loc_823EBB84:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x823ebad8
	if (ctx.cr6.lt) goto loc_823EBAD8;
loc_823EBB98:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBBA4;
	sub_823E2DA8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,832(r24)
	REX_STORE_U32(r24.u32 + 832, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBBB8;
	sub_823E2DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ebc4c
	if (!ctx.cr6.gt) goto loc_823EBC4C;
	// addi r28,r24,4
	r28.s64 = r24.s64 + 4;
loc_823EBBDC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x823ebc38
	if (!ctx.cr6.lt) goto loc_823EBC38;
	// addi r11,r30,211
	ctx.r11.s64 = r30.s64 + 211;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r24
	r31.u64 = ctx.r11.u64 + r24.u64;
loc_823EBC04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EBC10;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ebcdc
	if (ctx.cr6.lt) goto loc_823EBCDC;
	// slw r11,r22,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ebcdc
	if (!ctx.cr6.lt) goto loc_823EBCDC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// blt cr6,0x823ebc04
	if (ctx.cr6.lt) goto loc_823EBC04;
loc_823EBC38:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ebbdc
	if (ctx.cr6.lt) goto loc_823EBBDC;
loc_823EBC4C:
	// slw r11,r22,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// addi r31,r21,2
	r31.s64 = r21.s64 + 2;
	// stw r11,840(r24)
	REX_STORE_U32(r24.u32 + 840, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r24,836
	ctx.r11.s64 = r24.s64 + 836;
	// stw r10,836(r24)
	REX_STORE_U32(r24.u32 + 836, ctx.r10.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823ebc80
	if (!ctx.cr6.gt) goto loc_823EBC80;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823EBC74:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ebc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBC74;
loc_823EBC80:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-17896
	ctx.r6.s64 = ctx.r11.s64 + -17896;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0028
	ctx.lr = 0x823EBC98;
	sub_826A0028(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x823ebcd0
	if (!ctx.cr6.gt) goto loc_823EBCD0;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_823EBCA8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823ebcdc
	if (ctx.cr6.eq) goto loc_823EBCDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// blt cr6,0x823ebca8
	if (ctx.cr6.lt) goto loc_823EBCA8;
loc_823EBCD0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1ce8
	return;
loc_823EBCDC:
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EBCEC;
	sub_823EF5F0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EBCF8;
	sub_82393BF0(ctx, base);
loc_823EBCF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823FB000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823FB008;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,11020(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 11020);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823fb09c
	if (ctx.cr6.eq) goto loc_823FB09C;
	// lwz r11,11964(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fb040
	if (ctx.cr6.eq) goto loc_823FB040;
	// lwz r11,11972(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11972);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x823fb044
	if (ctx.cr6.lt) goto loc_823FB044;
loc_823FB040:
	// li r28,0
	r28.s64 = 0;
loc_823FB044:
	// lbz r11,12260(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb060
	if (ctx.cr0.eq) goto loc_823FB060;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823fb0a4
	if (ctx.cr6.eq) goto loc_823FB0A4;
	// lwz r31,12264(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12264);
loc_823FB060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823FB068;
	sub_823EF2F8(ctx, base);
loc_823FB068:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823fb09c
	if (ctx.cr6.eq) goto loc_823FB09C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f7e50
	ctx.lr = 0x823FB080;
	sub_823F7E50(ctx, base);
	// lbz r11,12260(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12260);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb09c
	if (ctx.cr0.eq) goto loc_823FB09C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,11020(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 11020);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823ef110
	ctx.lr = 0x823FB09C;
	sub_823EF110(ctx, base);
loc_823FB09C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823FB0A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef110
	ctx.lr = 0x823FB0AC;
	sub_823EF110(ctx, base);
	// b 0x823fb068
	goto loc_823FB068;
}

DEFINE_REX_FUNC(sub_823FEFA0) {
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
	ctx.lr = 0x823FEFA8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
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
	// bl 0x82404718
	ctx.lr = 0x823FEFD4;
	sub_82404718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404730
	ctx.lr = 0x823FEFE4;
	sub_82404730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ff004
	if (!ctx.cr0.lt) goto loc_823FF004;
loc_823FEFEC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404890
	ctx.lr = 0x823FEFF8;
	sub_82404890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf0
	return;
loc_823FF004:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r23,388(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r27,380(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r24,3
	r24.s64 = 3;
	// lwz r22,364(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,356(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r24.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x823fe7c8
	ctx.lr = 0x823FF068;
	sub_823FE7C8(ctx, base);
	// b 0x823fefec
	goto loc_823FEFEC;
}

DEFINE_REX_FUNC(sub_82403460) {
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
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x82403468;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// stw r3,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// stw r19,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// bl 0x8243c4f8
	ctx.lr = 0x8240349C;
	sub_8243C4F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824034b0
	if (ctx.cr0.eq) goto loc_824034B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82403968
	goto loc_82403968;
loc_824034B0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r11,3720
	ctx.r6.s64 = ctx.r11.s64 + 3720;
	// addi r3,r9,17784
	ctx.r3.s64 = ctx.r9.s64 + 17784;
	// addi r5,r10,2520
	ctx.r5.s64 = ctx.r10.s64 + 2520;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8243f628
	ctx.lr = 0x824034D0;
	sub_8243F628(ctx, base);
	// lis r18,9345
	r18.s64 = 612433920;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240391c
	if (ctx.cr0.eq) goto loc_8240391C;
	// bl 0x8243c698
	ctx.lr = 0x824034E4;
	sub_8243C698(ctx, base);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240391c
	if (ctx.cr0.eq) goto loc_8240391C;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826a4760
	ctx.lr = 0x824034F8;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82403848
	if (!ctx.cr0.eq) goto loc_82403848;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,2424
	ctx.r5.s64 = ctx.r10.s64 + 2424;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82442278
	ctx.lr = 0x82403524;
	sub_82442278(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8243f790
	ctx.lr = 0x82403530;
	sub_8243F790(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x824402c8
	ctx.lr = 0x82403558;
	sub_824402C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r24,r10,134
	r24.u64 = ctx.r10.u64 | 134;
	// ori r21,r9,134
	r21.u64 = ctx.r9.u64 | 134;
	// li r20,1
	r20.s64 = 1;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// ori r27,r7,74
	r27.u64 = ctx.r7.u64 | 74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824035c8
	if (ctx.cr6.eq) goto loc_824035C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824035b8
	if (ctx.cr6.eq) goto loc_824035B8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824035ac
	if (ctx.cr6.eq) goto loc_824035AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82403848
	if (!ctx.cr6.eq) goto loc_82403848;
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// b 0x824035d0
	goto loc_824035D0;
loc_824035AC:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// b 0x824035d0
	goto loc_824035D0;
loc_824035B8:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// b 0x824035d0
	goto loc_824035D0;
loc_824035C8:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
loc_824035D0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lis r9,13873
	ctx.r9.s64 = 909180928;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// lis r7,13873
	ctx.r7.s64 = 909180928;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// ori r23,r10,6
	r23.u64 = ctx.r10.u64 | 6;
	// ori r28,r9,21024
	r28.u64 = ctx.r9.u64 | 21024;
	// ori r29,r8,90
	r29.u64 = ctx.r8.u64 | 90;
	// ori r30,r7,19521
	r30.u64 = ctx.r7.u64 | 19521;
	// ori r25,r6,10
	r25.u64 = ctx.r6.u64 | 10;
	// ori r26,r5,6
	r26.u64 = ctx.r5.u64 | 6;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82403660
	if (!ctx.cr6.eq) goto loc_82403660;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824403e8
	ctx.lr = 0x82403614;
	sub_824403E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x8240365c
	if (ctx.cr6.eq) goto loc_8240365C;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// beq cr6,0x82403654
	if (ctx.cr6.eq) goto loc_82403654;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// beq cr6,0x82403644
	if (ctx.cr6.eq) goto loc_82403644;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bne cr6,0x82403848
	if (!ctx.cr6.eq) goto loc_82403848;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82403660
	goto loc_82403660;
loc_82403644:
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r11,r11,88
	ctx.r11.u64 = ctx.r11.u64 | 88;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82403660
	goto loc_82403660;
loc_82403654:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x82403660
	goto loc_82403660;
loc_8240365C:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_82403660:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82403674
	if (!ctx.cr6.lt) goto loc_82403674;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82440408
	ctx.lr = 0x82403674;
	sub_82440408(ctx, base);
loc_82403674:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82403694
	if (!ctx.cr6.eq) goto loc_82403694;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82403694
	if (!ctx.cr6.lt) goto loc_82403694;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82440650
	ctx.lr = 0x82403694;
	sub_82440650(ctx, base);
loc_82403694:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82440288
	ctx.lr = 0x824036A4;
	sub_82440288(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x824036c0
	if (ctx.cr0.eq) goto loc_824036C0;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8243f568
	ctx.lr = 0x824036BC;
	sub_8243F568(ctx, base);
	// b 0x824036e4
	goto loc_824036E4;
loc_824036C0:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// bl 0x82440248
	ctx.lr = 0x824036C8;
	sub_82440248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824036e4
	if (ctx.cr0.eq) goto loc_824036E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f2,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f1,17776(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 17776);
	// bl 0x82440610
	ctx.lr = 0x824036E4;
	sub_82440610(ctx, base);
loc_824036E4:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824401e0
	ctx.lr = 0x824036F4;
	sub_824401E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403758
	if (ctx.cr0.eq) goto loc_82403758;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82440650
	ctx.lr = 0x82403704;
	sub_82440650(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82403754
	if (ctx.cr0.eq) goto loc_82403754;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x8240374c
	if (ctx.cr6.eq) goto loc_8240374C;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82403744
	if (ctx.cr6.eq) goto loc_82403744;
	// lis r10,3633
	ctx.r10.s64 = 238092288;
	// ori r10,r10,21022
	ctx.r10.u64 = ctx.r10.u64 | 21022;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82403758
	if (!ctx.cr6.eq) goto loc_82403758;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x82403758
	goto loc_82403758;
loc_82403744:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// b 0x82403758
	goto loc_82403758;
loc_8240374C:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82403758
	goto loc_82403758;
loc_82403754:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_82403758:
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8240377c
	if (!ctx.cr6.eq) goto loc_8240377C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x8240377c
	if (ctx.cr6.eq) goto loc_8240377C;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x82403784
	if (!ctx.cr6.eq) goto loc_82403784;
loc_8240377C:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824403d8
	ctx.lr = 0x82403784;
	sub_824403D8(ctx, base);
loc_82403784:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824037a0
	if (ctx.cr6.eq) goto loc_824037A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82440460
	ctx.lr = 0x8240379C;
	sub_82440460(ctx, base);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
loc_824037A0:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8243faa8
	ctx.lr = 0x824037AC;
	sub_8243FAA8(ctx, base);
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82403800
	if (ctx.cr6.gt) goto loc_82403800;
	// beq cr6,0x824037f0
	if (ctx.cr6.eq) goto loc_824037F0;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x824037f8
	if (ctx.cr6.eq) goto loc_824037F8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// beq cr6,0x8240382c
	if (ctx.cr6.eq) goto loc_8240382C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,26
	ctx.r10.u64 = ctx.r10.u64 | 26;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8240382c
	if (ctx.cr6.eq) goto loc_8240382C;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bne cr6,0x8240381c
	if (!ctx.cr6.eq) goto loc_8240381C;
loc_824037F0:
	// mr r30,r20
	r30.u64 = r20.u64;
	// b 0x82403830
	goto loc_82403830;
loc_824037F8:
	// li r30,2
	r30.s64 = 2;
	// b 0x82403830
	goto loc_82403830;
loc_82403800:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x8240382c
	if (ctx.cr6.eq) goto loc_8240382C;
	// addis r11,r11,-13873
	ctx.r11.s64 = ctx.r11.s64 + -909180928;
	// addic. r11,r11,-19457
	ctx.xer.ca = ctx.r11.u32 > 19456;
	ctx.r11.s64 = ctx.r11.s64 + -19457;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824037f8
	if (ctx.cr0.eq) goto loc_824037F8;
	// cmplwi cr6,r11,1567
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1567, ctx.xer);
	// beq cr6,0x82403824
	if (ctx.cr6.eq) goto loc_82403824;
loc_8240381C:
	// mr r30,r19
	r30.u64 = r19.u64;
	// b 0x82403830
	goto loc_82403830;
loc_82403824:
	// li r30,3
	r30.s64 = 3;
	// b 0x82403830
	goto loc_82403830;
loc_8240382C:
	// li r30,4
	r30.s64 = 4;
loc_82403830:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82440228
	ctx.lr = 0x8240383C;
	sub_82440228(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82403858
	if (ctx.cr6.eq) goto loc_82403858;
loc_82403848:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x82403930
	goto loc_82403930;
loc_82403858:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x82440208
	ctx.lr = 0x82403878;
	sub_82440208(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r19,52(r31)
	REX_STORE_U32(r31.u32 + 52, r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82403928
	if (ctx.cr6.eq) goto loc_82403928;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// bl 0x823f02b8
	ctx.lr = 0x824038A0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82403918
	if (ctx.cr0.eq) goto loc_82403918;
	// stw r20,56(r31)
	REX_STORE_U32(r31.u32 + 56, r20.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824038C4;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// beq 0x8240391c
	if (ctx.cr0.eq) goto loc_8240391C;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82403908
	if (ctx.cr6.eq) goto loc_82403908;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_824038E4:
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824038e4
	if (ctx.cr6.lt) goto loc_824038E4;
loc_82403908:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8243ff80
	ctx.lr = 0x82403914;
	sub_8243FF80(ctx, base);
	// b 0x8240392c
	goto loc_8240392C;
loc_82403918:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8240391C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82403930
	goto loc_82403930;
loc_82403928:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8240392C:
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82403930:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240394c
	if (ctx.cr6.eq) goto loc_8240394C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82440138
	ctx.lr = 0x8240394C;
	sub_82440138(ctx, base);
loc_8240394C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82403964
	if (ctx.cr6.eq) goto loc_82403964;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82403964;
	sub_823F0350(ctx, base);
loc_82403964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82403968:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8241C9A0) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8241C9C0;
	sub_823F0350(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8241c9dc
	if (ctx.cr6.eq) goto loc_8241C9DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241C9D4;
	sub_8241C9A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fcda8
	ctx.lr = 0x8241C9DC;
	sub_823FCDA8(ctx, base);
loc_8241C9DC:
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

DEFINE_REX_FUNC(sub_82421AE0) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421b18
	if (ctx.cr0.eq) goto loc_82421B18;
	// lbz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// beq cr6,0x82421b10
	if (ctx.cr6.eq) goto loc_82421B10;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82421b10
	if (ctx.cr6.eq) goto loc_82421B10;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82421b18
	if (!ctx.cr6.eq) goto loc_82421B18;
loc_82421B10:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82421B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82423AE0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r5,r6,1100
	ctx.r5.s64 = ctx.r6.s64 + 1100;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r11,-29108
	ctx.r6.s64 = ctx.r11.s64 + -29108;
	// beq cr6,0x82423b2c
	if (ctx.cr6.eq) goto loc_82423B2C;
	// bl 0x82423788
	ctx.lr = 0x82423B10;
	sub_82423788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82423B20;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x82423b40
	goto loc_82423B40;
loc_82423B2C:
	// bl 0x82423788
	ctx.lr = 0x82423B30;
	sub_82423788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a718
	ctx.lr = 0x82423B40;
	sub_8241A718(ctx, base);
loc_82423B40:
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

DEFINE_REX_FUNC(sub_82429550) {
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
	ctx.lr = 0x82429558;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,0
	ctx.r11.s64 = ctx.r5.s64 + 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r6,108(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,112(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r26,0
	r26.s64 = 0;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r4,92(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r26,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x824295e0
	if (ctx.cr6.lt) goto loc_824295E0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8242a6cc
	goto loc_8242A6CC;
loc_824295E0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r16,8(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r18,12(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r22,28(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r24,r22,2,0,29
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82429608;
	sub_823F02B8(ctx, base);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82429620;
	sub_823F02B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82429638;
	sub_823F02B8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// rlwinm r27,r22,4,0,27
	r27.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82429654;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242966C;
	sub_823F02B8(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429714
	if (ctx.cr6.eq) goto loc_82429714;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_8242968C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x824296b0
	if (ctx.cr6.eq) goto loc_824296B0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x824296A8;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824296c0
	if (!ctx.cr0.lt) goto loc_824296C0;
loc_824296B0:
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfd f0,176(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 176);
	// stfd f0,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.f0.u64);
loc_824296C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824296fc
	if (ctx.cr6.eq) goto loc_824296FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824296fc
	if (ctx.cr6.eq) goto loc_824296FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x82429700
	goto loc_82429700;
loc_824296FC:
	// li r11,31
	ctx.r11.s64 = 31;
loc_82429700:
	// stwx r11,r30,r23
	REX_STORE_U32(r30.u32 + r23.u32, ctx.r11.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8242968c
	if (!ctx.cr0.eq) goto loc_8242968C;
loc_82429714:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82429724;
	sub_826A1E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82429734;
	sub_826A1E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r19,-1
	r19.s64 = -1;
	// li r14,1
	r14.s64 = 1;
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r19.u32);
	// mr r23,r14
	r23.u64 = r14.u64;
	// lfd f30,3728(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// stfd f30,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, f30.u64);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// bne cr6,0x82429778
	if (!ctx.cr6.eq) goto loc_82429778;
	// li r17,255
	r17.s64 = 255;
loc_82429778:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8242a638
	if (ctx.cr6.eq) goto loc_8242A638;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// b 0x82429798
	goto loc_82429798;
loc_82429794:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82429798:
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// lwz r29,492(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// stw r25,112(r31)
	REX_STORE_U32(r31.u32 + 112, r25.u32);
	// beq cr6,0x824297f8
	if (ctx.cr6.eq) goto loc_824297F8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824297f8
	if (ctx.cr6.eq) goto loc_824297F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x824297CC;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82429c24
	if (!ctx.cr6.eq) goto loc_82429C24;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
loc_824297F8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82429808;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// beq cr6,0x82429884
	if (ctx.cr6.eq) goto loc_82429884;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x8242982C;
	sub_82434350(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82429858;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82429c24
	if (!ctx.cr6.eq) goto loc_82429C24;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
loc_82429884:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423c70
	ctx.lr = 0x82429894;
	sub_82423C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82429930
	if (ctx.cr0.lt) goto loc_82429930;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82429930
	if (ctx.cr6.eq) goto loc_82429930;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429a38
	if (ctx.cr6.eq) goto loc_82429A38;
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,0
	r30.s64 = 0;
	// subf r26,r21,r20
	r26.u64 = r20.u64 - r21.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_824298C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r28,r30,r21
	r28.u64 = r30.u64 + r21.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r11,r26,r28
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r28.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8242991c
	if (ctx.cr6.eq) goto loc_8242991C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x824298E4;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824298fc
	if (!ctx.cr0.lt) goto loc_824298FC;
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfd f0,176(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 176);
	// stfd f0,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.f0.u64);
loc_824298FC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8242991C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824298c0
	if (!ctx.cr0.eq) goto loc_824298C0;
	// b 0x82429a38
	goto loc_82429A38;
loc_82429930:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429a38
	if (ctx.cr6.eq) goto loc_82429A38;
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,0
	r30.s64 = 0;
	// subf r26,r21,r20
	r26.u64 = r20.u64 - r21.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82429948:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r28,r30,r21
	r28.u64 = r30.u64 + r21.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r11,r28,r26
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r26.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82429a28
	if (ctx.cr6.eq) goto loc_82429A28;
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfd f13,176(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 176);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82429980
	if (ctx.cr6.gt) goto loc_82429980;
	// lfd f0,168(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// lfd f13,8(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824299cc
	if (!ctx.cr6.lt) goto loc_824299CC;
loc_82429980:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x8242998C;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824299bc
	if (ctx.cr0.lt) goto loc_824299BC;
	// lfd f13,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfd f0,240(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x824299a8
	if (!ctx.cr6.gt) goto loc_824299A8;
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
loc_824299A8:
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// lfd f13,8(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824299cc
	if (!ctx.cr6.lt) goto loc_824299CC;
	// b 0x824299c8
	goto loc_824299C8;
loc_824299BC:
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfd f0,176(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 176);
loc_824299C8:
	// stfd f0,8(r29)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r29.u32 + 8, ctx.f0.u64);
loc_824299CC:
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfd f13,8(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82429a00
	if (ctx.cr6.eq) goto loc_82429A00;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82429A00:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82429A28:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82429948
	if (!ctx.cr0.eq) goto loc_82429948;
loc_82429A38:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82429ab4
	if (ctx.cr6.eq) goto loc_82429AB4;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x82429A50;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82429a84
	if (ctx.cr0.lt) goto loc_82429A84;
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// lfd f13,264(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82429a70
	if (!ctx.cr6.eq) goto loc_82429A70;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82429c24
	if (ctx.cr6.eq) goto loc_82429C24;
loc_82429A70:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82429a84
	if (ctx.cr6.gt) goto loc_82429A84;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82429a84
	if (ctx.cr6.lt) goto loc_82429A84;
	// li r23,0
	r23.s64 = 0;
loc_82429A84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfd f30,32(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 32, f30.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfd f30,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, f30.u64);
loc_82429AB4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429b84
	if (ctx.cr6.eq) goto loc_82429B84;
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r26,r30,r20
	r26.u64 = r20.u64 - r30.u64;
	// subf r27,r30,r11
	r27.u64 = ctx.r11.u64 - r30.u64;
loc_82429AD4:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r30.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82429b74
	if (ctx.cr6.eq) goto loc_82429B74;
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfd f13,176(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 176);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82429b04
	if (ctx.cr6.gt) goto loc_82429B04;
	// lfd f0,8(r29)
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lfd f13,168(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 168);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82429b50
	if (!ctx.cr6.lt) goto loc_82429B50;
loc_82429B04:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x82429B10;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82429b40
	if (ctx.cr0.lt) goto loc_82429B40;
	// lfd f13,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82429b2c
	if (!ctx.cr6.gt) goto loc_82429B2C;
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
loc_82429B2C:
	// lfd f13,8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82429b50
	if (!ctx.cr6.lt) goto loc_82429B50;
	// b 0x82429b4c
	goto loc_82429B4C;
loc_82429B40:
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfd f0,176(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 176);
loc_82429B4C:
	// stfd f0,8(r29)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r29.u32 + 8, ctx.f0.u64);
loc_82429B50:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r9,r27,r30
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stwx r11,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r11.u32);
loc_82429B74:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82429ad4
	if (!ctx.cr0.eq) goto loc_82429AD4;
loc_82429B84:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82429bc8
	if (ctx.cr6.eq) goto loc_82429BC8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82429bc0
	if (!ctx.cr6.eq) goto loc_82429BC0;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427ff0
	ctx.lr = 0x82429BB0;
	sub_82427FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82429bc0
	if (ctx.cr0.eq) goto loc_82429BC0;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// b 0x82429bc8
	goto loc_82429BC8;
loc_82429BC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82429BC8:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x82429c18
	if (ctx.cr6.eq) goto loc_82429C18;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82429c18
	if (!ctx.cr6.eq) goto loc_82429C18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x82429BEC;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82429c24
	if (!ctx.cr6.eq) goto loc_82429C24;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
loc_82429C18:
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// cmplw cr6,r25,r17
	ctx.cr6.compare<uint32_t>(r25.u32, r17.u32, ctx.xer);
	// blt cr6,0x82429794
	if (ctx.cr6.lt) goto loc_82429794;
loc_82429C24:
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x8242a638
	if (!ctx.cr6.gt) goto loc_8242A638;
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// bge cr6,0x82429c68
	if (!ctx.cr6.lt) goto loc_82429C68;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242a638
	if (!ctx.cr0.eq) goto loc_8242A638;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82429C68:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82429cd0
	if (!ctx.cr6.eq) goto loc_82429CD0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82429cd0
	if (!ctx.cr6.eq) goto loc_82429CD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8242a638
	if (ctx.cr0.eq) goto loc_8242A638;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r18
	r29.u64 = r18.u64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82429cd0
	if (!ctx.cr6.lt) goto loc_82429CD0;
	// rlwinm r30,r18,2,0,29
	r30.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
loc_82429CA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82477990
	ctx.lr = 0x82429CB0;
	sub_82477990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242a638
	if (!ctx.cr0.eq) goto loc_8242A638;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82429ca0
	if (ctx.cr6.lt) goto loc_82429CA0;
loc_82429CD0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82429cec
	if (ctx.cr6.eq) goto loc_82429CEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r28,r17
	r28.u64 = r17.u64;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_82429CEC:
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// bne cr6,0x82429d1c
	if (!ctx.cr6.eq) goto loc_82429D1C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423c70
	ctx.lr = 0x82429D04;
	sub_82423C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82429d18
	if (ctx.cr0.lt) goto loc_82429D18;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8242a638
	if (!ctx.cr6.eq) goto loc_8242A638;
loc_82429D18:
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
loc_82429D1C:
	// bge cr6,0x82429e08
	if (!ctx.cr6.lt) goto loc_82429E08;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82429e08
	if (ctx.cr6.eq) goto loc_82429E08;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82429e08
	if (!ctx.cr0.eq) goto loc_82429E08;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82429e00
	if (!ctx.cr6.lt) goto loc_82429E00;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,8208
	ctx.r7.s64 = 537919488;
loc_82429D50:
	// lwz r11,24(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82429dac
	if (ctx.cr6.gt) goto loc_82429DAC;
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,4128
	ctx.r5.s64 = 270532608;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// b 0x82429de0
	goto loc_82429DE0;
loc_82429DAC:
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82429de8
	if (ctx.cr6.eq) goto loc_82429DE8;
	// lis r5,12288
	ctx.r5.s64 = 805306368;
loc_82429DE0:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82429e00
	if (!ctx.cr6.eq) goto loc_82429E00;
loc_82429DE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82429d50
	if (ctx.cr6.lt) goto loc_82429D50;
loc_82429E00:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8242a638
	if (ctx.cr6.eq) goto loc_8242A638;
loc_82429E08:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429e44
	if (ctx.cr6.eq) goto loc_82429E44;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82429E1C:
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82429e3c
	if (ctx.cr6.eq) goto loc_82429E3C;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82429e3c
	if (ctx.cr6.eq) goto loc_82429E3C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82429E3C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82429e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429E1C;
loc_82429E44:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r30,36
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(36));
	// bl 0x823f02b8
	ctx.lr = 0x82429E50;
	sub_823F02B8(ctx, base);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242a64c
	if (ctx.cr0.eq) goto loc_8242A64C;
	// mulli r9,r30,9
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(9));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82429e80
	if (ctx.cr6.eq) goto loc_82429E80;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82429E70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82429e70
	if (ctx.cr6.lt) goto loc_82429E70;
loc_82429E80:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82429E98:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x82429e98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429E98;
	// lwz r23,200(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r24,0
	r24.s64 = 0;
	// lwz r29,196(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r21,192(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82429f54
	if (ctx.cr6.eq) goto loc_82429F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r7,r23,r21
	ctx.r7.u64 = r21.u64 - r23.u64;
	// subf r8,r29,r23
	ctx.r8.u64 = r23.u64 - r29.u64;
loc_82429ED4:
	// lwzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82429f48
	if (ctx.cr6.eq) goto loc_82429F48;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82429f48
	if (ctx.cr6.eq) goto loc_82429F48;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82429f38
	if (ctx.cr6.eq) goto loc_82429F38;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r5,r11,r20
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,20(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,116(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82429f40
	if (!ctx.cr6.eq) goto loc_82429F40;
loc_82429F38:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82429F40:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82429F48:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82429ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429ED4;
loc_82429F54:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423d38
	ctx.lr = 0x82429F68;
	sub_82423D38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82429F9C;
	sub_82478758(ctx, base);
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r5,4368
	ctx.r5.s64 = 286261248;
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82429FC8;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r25,r24,12
	r25.u64 = r24.u32 & 0xFFFFF;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// oris r5,r25,4384
	ctx.r5.u64 = r25.u64 | 287309824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r14,52(r31)
	REX_STORE_U32(r31.u32 + 52, r14.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242A01C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r22,224(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// oris r5,r25,4400
	ctx.r5.u64 = r25.u64 | 288358400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A048;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a128
	if (ctx.cr6.eq) goto loc_8242A128;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r7,r23,r21
	ctx.r7.u64 = r21.u64 - r23.u64;
	// subf r6,r23,r22
	ctx.r6.u64 = r22.u64 - r23.u64;
loc_8242A06C:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfd f13,8(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8242a0d0
	if (ctx.cr6.gt) goto loc_8242A0D0;
	// stfd f0,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.f0.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r14,8,23,24
	ctx.r8.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 8) & 0x180) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE7F);
	// lfd f0,8(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stfd f0,40(r10)
	REX_STORE_U64(ctx.r10.u32 + 40, ctx.f0.u64);
	// lfd f0,0(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfd f13,8(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8242a0d0
	if (!ctx.cr6.eq) goto loc_8242A0D0;
	// ori r9,r8,128
	ctx.r9.u64 = ctx.r8.u64 | 128;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8242A0D0:
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,152(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r10,172(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bdnz 0x8242a06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A06C;
loc_8242A128:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242a154
	if (ctx.cr6.eq) goto loc_8242A154;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242a154
	if (ctx.cr6.eq) goto loc_8242A154;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8242A14C;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
loc_8242A154:
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,492(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x8242A16C;
	sub_82434350(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a1a4
	if (ctx.cr6.eq) goto loc_8242A1A4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// subf r10,r23,r21
	ctx.r10.u64 = r21.u64 - r23.u64;
loc_8242A188:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242a188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A188;
loc_8242A1A4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x8242A1B4;
	sub_82422288(ctx, base);
	// lwz r26,216(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242a248
	if (ctx.cr0.lt) goto loc_8242A248;
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8242a1d8
	if (ctx.cr6.gt) goto loc_8242A1D8;
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8242a248
	if (!ctx.cr6.lt) goto loc_8242A248;
loc_8242A1D8:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242a204
	if (ctx.cr6.eq) goto loc_8242A204;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a204
	if (!ctx.cr6.eq) goto loc_8242A204;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8242A1FC;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
loc_8242A204:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a448
	if (ctx.cr6.eq) goto loc_8242A448;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r10,r26,r21
	ctx.r10.u64 = r21.u64 - r26.u64;
loc_8242A218:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8242a23c
	if (!ctx.cr6.eq) goto loc_8242A23C;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8242A23C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242a218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A218;
	// b 0x8242a448
	goto loc_8242A448;
loc_8242A248:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bge cr6,0x8242a264
	if (!ctx.cr6.lt) goto loc_8242A264;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242a638
	if (ctx.cr0.eq) goto loc_8242A638;
loc_8242A264:
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lis r5,4416
	ctx.r5.s64 = 289406976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A28C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r14,52(r31)
	REX_STORE_U32(r31.u32 + 52, r14.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x8242a2e8
	if (ctx.cr6.eq) goto loc_8242A2E8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a2e8
	if (!ctx.cr6.eq) goto loc_8242A2E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8242A2E0;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
loc_8242A2E8:
	// lwz r7,204(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a31c
	if (ctx.cr6.eq) goto loc_8242A31C;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r10,r7,r21
	ctx.r10.u64 = r21.u64 - ctx.r7.u64;
loc_8242A300:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242a300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A300;
loc_8242A31C:
	// lwz r27,208(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// oris r28,r25,4096
	r28.u64 = r25.u64 | 268435456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A340;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a378
	if (ctx.cr6.eq) goto loc_8242A378;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8242A358:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8242a358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A358;
loc_8242A378:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,212(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A3AC;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a3e4
	if (ctx.cr6.eq) goto loc_8242A3E4;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8242A3C4:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8242a3c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A3C4;
loc_8242A3E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r14,52(r31)
	REX_STORE_U32(r31.u32 + 52, r14.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r25,8320
	ctx.r5.u64 = r25.u64 | 545259520;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A410;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a448
	if (ctx.cr6.eq) goto loc_8242A448;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8242A428:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8242a428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A428;
loc_8242A448:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r25,4096
	ctx.r5.u64 = r25.u64 | 268435456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A468;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a4a0
	if (ctx.cr6.eq) goto loc_8242A4A0;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8242A480:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8242a480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A480;
loc_8242A4A0:
	// lwz r29,220(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r25,8336
	ctx.r5.u64 = r25.u64 | 546308096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A4C4;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a4fc
	if (ctx.cr6.eq) goto loc_8242A4FC;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8242A4DC:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8242a4dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A4DC;
loc_8242A4FC:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// oris r5,r25,4432
	ctx.r5.u64 = r25.u64 | 290455552;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242A52C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242a654
	if (ctx.cr0.lt) goto loc_8242A654;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8242a5d0
	if (ctx.cr6.eq) goto loc_8242A5D0;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r7,r21,r23
	ctx.r7.u64 = r23.u64 - r21.u64;
loc_8242A54C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8242a5b0
	if (ctx.cr6.gt) goto loc_8242A5B0;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfd f0,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.f0.u64);
	// lfd f0,8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// stfd f0,40(r10)
	REX_STORE_U64(ctx.r10.u32 + 40, ctx.f0.u64);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lfd f13,0(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f0,8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8242a5b0
	if (!ctx.cr6.eq) goto loc_8242A5B0;
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8242A5B0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bdnz 0x8242a54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A54C;
loc_8242A5D0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a644
	if (ctx.cr6.eq) goto loc_8242A644;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242a644
	if (ctx.cr6.eq) goto loc_8242A644;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a644
	if (!ctx.cr6.eq) goto loc_8242A644;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a644
	if (!ctx.cr6.eq) goto loc_8242A644;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,492(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A630;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242a644
	if (!ctx.cr0.lt) goto loc_8242A644;
loc_8242A638:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x8242a654
	goto loc_8242A654;
loc_8242A644:
	// li r30,0
	r30.s64 = 0;
	// b 0x8242a654
	goto loc_8242A654;
loc_8242A64C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_8242A654:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x823f0350
	ctx.lr = 0x8242A660;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x823f0350
	ctx.lr = 0x8242A66C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x823f0350
	ctx.lr = 0x8242A678;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x823f0350
	ctx.lr = 0x8242A684;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x823f0350
	ctx.lr = 0x8242A690;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x823f0350
	ctx.lr = 0x8242A69C;
	sub_823F0350(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
loc_8242A6CC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824BB1E0) {
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
	// bl 0x82469dc0
	ctx.lr = 0x824BB1F8;
	sub_82469DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bb23c
	if (ctx.cr0.lt) goto loc_824BB23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824BB208;
	sub_82482568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bb23c
	if (ctx.cr0.lt) goto loc_824BB23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x824BB218;
	sub_824856B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bb23c
	if (ctx.cr0.lt) goto loc_824BB23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824BB228;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bb23c
	if (ctx.cr0.lt) goto loc_824BB23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824BB238;
	sub_8245FCB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BB23C:
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

DEFINE_REX_FUNC(sub_824BE0E0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// stfd f1,120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f1.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8246ce60
	ctx.lr = 0x824BE100;
	sub_8246CE60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824be144
	if (ctx.cr0.lt) goto loc_824BE144;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_824BE144:
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

DEFINE_REX_FUNC(sub_824C04B8) {
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
	ctx.lr = 0x824C04C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c0518
	if (ctx.cr6.eq) goto loc_824C0518;
loc_824C04E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824c050c
	if (!ctx.cr6.eq) goto loc_824C050C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
loc_824C050C:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c04e4
	if (!ctx.cr6.eq) goto loc_824C04E4;
loc_824C0518:
	// lwz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c0560
	if (ctx.cr6.eq) goto loc_824C0560;
loc_824C0524:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824c0554
	if (!ctx.cr6.eq) goto loc_824C0554;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_824C0554:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c0524
	if (!ctx.cr6.eq) goto loc_824C0524;
loc_824C0560:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x824c06e8
	if (!ctx.cr6.gt) goto loc_824C06E8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,76(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c6dd8
	ctx.lr = 0x824C057C;
	sub_824C6DD8(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x824c0594
	if (ctx.cr6.lt) goto loc_824C0594;
	// lis r30,15258
	r30.s64 = 999948288;
	// ori r30,r30,51712
	r30.u64 = r30.u64 | 51712;
	// b 0x824c05b4
	goto loc_824C05B4;
loc_824C0594:
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw. r30,r3,r31
	r30.u64 = uint32_t((r31.s32 && !(ctx.r3.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r3.s32 / r31.s32 : 0);
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r31,r11
	ctx.r10.u64 = r31.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt 0x824c05b4
	if (ctx.cr0.gt) goto loc_824C05B4;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_824C05B4:
	// lwz r31,68(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824c064c
	if (ctx.cr6.eq) goto loc_824C064C;
loc_824C05C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c0640
	if (!ctx.cr6.eq) goto loc_824C0640;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// bgt cr6,0x824c05f4
	if (ctx.cr6.gt) goto loc_824C05F4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x824c0614
	goto loc_824C0614;
loc_824C05F4:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c6f20
	ctx.lr = 0x824C0610;
	sub_824C6F20(ctx, base);
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
loc_824C0614:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x824c01c0
	ctx.lr = 0x824C0628;
	sub_824C01C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
loc_824C0640:
	// lwz r31,44(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824c05c0
	if (!ctx.cr6.eq) goto loc_824C05C0;
loc_824C064C:
	// lwz r31,72(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824c06e8
	if (ctx.cr6.eq) goto loc_824C06E8;
loc_824C0658:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c06dc
	if (!ctx.cr6.eq) goto loc_824C06DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// bgt cr6,0x824c068c
	if (ctx.cr6.gt) goto loc_824C068C;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x824c06b0
	goto loc_824C06B0;
loc_824C068C:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c6f20
	ctx.lr = 0x824C06AC;
	sub_824C6F20(ctx, base);
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
loc_824C06B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x824c02a0
	ctx.lr = 0x824C06C4;
	sub_824C02A0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
loc_824C06DC:
	// lwz r31,44(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824c0658
	if (!ctx.cr6.eq) goto loc_824C0658;
loc_824C06E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824CACA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,316(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CB530) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824CB538;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,460(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CB55C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CB57C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824CB59C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CB5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r8,91
	ctx.r8.s64 = 5963776;
	// lis r9,-227
	ctx.r9.s64 = -14876672;
	// lis r10,-179
	ctx.r10.s64 = -11730944;
	// lis r7,44
	ctx.r7.s64 = 2883584;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r4,r6,26345
	ctx.r4.u64 = ctx.r6.u64 | 26345;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r8,26880
	ctx.r8.u64 = ctx.r8.u64 | 26880;
	// ori r9,r9,44800
	ctx.r9.u64 = ctx.r9.u64 | 44800;
	// ori r10,r10,2944
	ctx.r10.u64 = ctx.r10.u64 | 2944;
	// ori r7,r7,36096
	ctx.r7.u64 = ctx.r7.u64 | 36096;
	// ori r5,r5,50594
	ctx.r5.u64 = ctx.r5.u64 | 50594;
	// ori r6,r3,46802
	ctx.r6.u64 = ctx.r3.u64 | 46802;
loc_824CB604:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srawi r30,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	r30.s64 = ctx.r10.s32 >> 16;
	// srawi r29,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	r29.s64 = ctx.r9.s32 >> 16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stwx r29,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r7,r7,-22554
	ctx.r7.s64 = ctx.r7.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824cb604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CB604;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824D2D48) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c6b30
	ctx.lr = 0x824D2D70;
	sub_822C6B30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824d2d80
	if (ctx.cr6.eq) goto loc_824D2D80;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824D2D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824d2d90
	if (ctx.cr6.eq) goto loc_824D2D90;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_824D2D90:
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

DEFINE_REX_FUNC(sub_824D4298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,21008
	ctx.r10.s64 = ctx.r10.s64 + 21008;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v61,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r9,20976
	ctx.r11.s64 = ctx.r9.s64 + 20976;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vupkd3d128 v62,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// vperm128 v61,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,20896
	ctx.r10.s64 = ctx.r10.s64 + 20896;
	// addi r9,r9,20880
	ctx.r9.s64 = ctx.r9.s64 + 20880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vperm128 v61,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D8700) {
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
	// addi r4,r11,28496
	ctx.r4.s64 = ctx.r11.s64 + 28496;
	// bl 0x824eac90
	ctx.lr = 0x824D8720;
	sub_824EAC90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// bl 0x824eac90
	ctx.lr = 0x824D8730;
	sub_824EAC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824DA028) {
	REX_FUNC_PROLOGUE();
	// b 0x824d8810
	sub_824D8810(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DA320) {
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
	ctx.lr = 0x824DA328;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA33C;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r21,r10,21896
	r21.s64 = ctx.r10.s64 + 21896;
	// addi r27,r11,28488
	r27.s64 = ctx.r11.s64 + 28488;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA35C;
	sub_824EAC90(ctx, base);
	// lwz r5,132(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 132);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r22,r11,-17552
	r22.s64 = ctx.r11.s64 + -17552;
	// beq cr6,0x824da37c
	if (ctx.cr6.eq) goto loc_824DA37C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824DA37C;
	sub_824D7B08(ctx, base);
loc_824DA37C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DA384;
	sub_824D8700(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r11,-17560
	r23.s64 = ctx.r11.s64 + -17560;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824da488
	if (ctx.cr6.eq) goto loc_824DA488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA3A0;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,21888
	r26.s64 = ctx.r11.s64 + 21888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA3B8;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DA3C0;
	sub_824D8700(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824da47c
	if (!ctx.cr6.lt) goto loc_824DA47C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r10,-26856
	r24.s64 = ctx.r10.s64 + -26856;
	// addi r25,r11,23592
	r25.s64 = ctx.r11.s64 + 23592;
loc_824DA3F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA3F8;
	sub_824D7948(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA408;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824da41c
	if (!ctx.cr6.eq) goto loc_824DA41C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x824da424
	goto loc_824DA424;
loc_824DA41C:
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824DA424:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824DA430;
	sub_824D7B08(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824da444
	if (!ctx.cr6.eq) goto loc_824DA444;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x824da44c
	goto loc_824DA44C;
loc_824DA444:
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824DA44C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824DA458;
	sub_824D7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824DA460;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824da3f0
	if (ctx.cr6.lt) goto loc_824DA3F0;
loc_824DA47C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA488;
	sub_824D79A8(ctx, base);
loc_824DA488:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA490;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,21876
	r26.s64 = ctx.r11.s64 + 21876;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA4A8;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DA4B0;
	sub_824D8700(ctx, base);
	// addi r29,r29,56
	r29.s64 = r29.s64 + 56;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824da530
	if (!ctx.cr6.lt) goto loc_824DA530;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,21756
	r28.s64 = ctx.r11.s64 + 21756;
loc_824DA4D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA4DC;
	sub_824D7948(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA4EC;
	sub_824EAC90(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824DA4FC;
	sub_824D7B08(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824DA50C;
	sub_824D7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824DA514;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824da4d4
	if (ctx.cr6.lt) goto loc_824DA4D4;
loc_824DA530:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA53C;
	sub_824D79A8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA548;
	sub_824D79A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824E5B08) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E5FC8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824e5ff0
	if (!ctx.cr6.eq) goto loc_824E5FF0;
	// bl 0x826b40a0
	ctx.lr = 0x824E5FF0;
	sub_826B40A0(ctx, base);
loc_824E5FF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

DEFINE_REX_FUNC(sub_824E96F8) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824e9710
	if (ctx.cr0.eq) goto loc_824E9710;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x824e9714
	goto loc_824E9714;
loc_824E9710:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824E9714:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e9728
	if (ctx.cr0.eq) goto loc_824E9728;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x824e972c
	goto loc_824E972C;
loc_824E9728:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_824E972C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e9740
	if (ctx.cr0.eq) goto loc_824E9740;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x824e9744
	goto loc_824E9744;
loc_824E9740:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_824E9744:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e9750
	if (ctx.cr0.eq) goto loc_824E9750;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_824E9750:
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EB5D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824EB5E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,28576
	r30.s64 = ctx.r11.s64 + 28576;
	// beq 0x824eb610
	if (ctx.cr0.eq) goto loc_824EB610;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-28324
	ctx.r5.s64 = ctx.r11.s64 + -28324;
	// bl 0x824eace8
	ctx.lr = 0x824EB610;
	sub_824EACE8(ctx, base);
loc_824EB610:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EB620;
	sub_824EACE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824eb640
	if (ctx.cr0.eq) goto loc_824EB640;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-28340
	ctx.r5.s64 = ctx.r11.s64 + -28340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EB640;
	sub_824EACE8(ctx, base);
loc_824EB640:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824EEDE8) {
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
	// bne cr6,0x824eee24
	if (!ctx.cr6.eq) goto loc_824EEE24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26292
	ctx.r5.s64 = ctx.r10.s64 + -26292;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x824ea978
	ctx.lr = 0x824EEE24;
	sub_824EA978(ctx, base);
loc_824EEE24:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_824EF970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EF978;
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
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ef9b4
	if (!ctx.cr6.eq) goto loc_824EF9B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26132
	ctx.r5.s64 = ctx.r11.s64 + -26132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF9B4;
	sub_824EA978(ctx, base);
loc_824EF9B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef9c8
	if (!ctx.cr6.eq) goto loc_824EF9C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824efa40
	goto loc_824EFA40;
loc_824EF9C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef9dc
	if (!ctx.cr6.eq) goto loc_824EF9DC;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ef9e8
	goto loc_824EF9E8;
loc_824EF9DC:
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824efa04
	if (!ctx.cr6.eq) goto loc_824EFA04;
loc_824EF9E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26088
	ctx.r5.s64 = ctx.r11.s64 + -26088;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFA04;
	sub_824EA978(ctx, base);
loc_824EFA04:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824efa2c
	if (!ctx.cr6.eq) goto loc_824EFA2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26048
	ctx.r5.s64 = ctx.r11.s64 + -26048;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFA2C;
	sub_824EA978(ctx, base);
loc_824EFA2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EFA34;
	sub_824EE070(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824EFA40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824F6AD0) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r10,r11,25760
	ctx.r10.s64 = ctx.r11.s64 + 25760;
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822cea50
	ctx.lr = 0x824F6B10;
	sub_822CEA50(ctx, base);
	// li r11,-1000
	ctx.r11.s64 = -1000;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1092(r31)
	REX_STORE_U32(r31.u32 + 1092, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824F7A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F7A80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f7aec
	if (!ctx.cr0.eq) goto loc_824F7AEC;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,540(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 540);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq cr6,0x824f7ae4
	if (ctx.cr6.eq) goto loc_824F7AE4;
loc_824F7AA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,32(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x824F7AC4;
	sub_824F71B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f7a20
	ctx.lr = 0x824F7AD8;
	sub_824F7A20(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f7aa8
	if (!ctx.cr6.eq) goto loc_824F7AA8;
loc_824F7AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r30)
	REX_STORE_U32(r30.u32 + 540, ctx.r11.u32);
loc_824F7AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824FEA68) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// blt cr6,0x824feaa0
	if (ctx.cr6.lt) goto loc_824FEAA0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x824feaac
	if (!ctx.cr6.gt) goto loc_824FEAAC;
loc_824FEAA0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FEAAC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824feb40
	if (ctx.cr6.eq) goto loc_824FEB40;
	// lwz r6,84(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
loc_824FEABC:
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// rldicr r12,r12,13,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 13) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x824feaa0
	if (!ctx.cr6.lt) goto loc_824FEAA0;
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824feaa0
	if (ctx.cr6.eq) goto loc_824FEAA0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824feaa0
	if (ctx.cr6.eq) goto loc_824FEAA0;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824feb14
	if (!ctx.cr6.eq) goto loc_824FEB14;
	// rlwinm. r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824feaa0
	if (ctx.cr0.eq) goto loc_824FEAA0;
loc_824FEB14:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824feaa0
	if (ctx.cr0.eq) goto loc_824FEAA0;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824feaa0
	if (!ctx.cr0.eq) goto loc_824FEAA0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824feabc
	if (ctx.cr6.lt) goto loc_824FEABC;
loc_824FEB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82505018) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82505020;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82504650
	ctx.lr = 0x82505040;
	sub_82504650(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82505120
	if (!ctx.cr6.eq) goto loc_82505120;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82505068
	if (!ctx.cr0.eq) goto loc_82505068;
	// li r10,31
	ctx.r10.s64 = 31;
	// b 0x82505074
	goto loc_82505074;
loc_82505068:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82505074:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// blt cr6,0x825050b4
	if (ctx.cr6.lt) goto loc_825050B4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825050ac
	if (ctx.cr0.eq) goto loc_825050AC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825050a4
	if (ctx.cr6.eq) goto loc_825050A4;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x825050A4;
	sub_824E4368(ctx, base);
loc_825050A4:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x825050AC;
	sub_824E4368(ctx, base);
loc_825050AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82505150
	goto loc_82505150;
loc_825050B4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825050c4
	if (!ctx.cr6.eq) goto loc_825050C4;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x825050d0
	goto loc_825050D0;
loc_825050C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825050D0:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82504ef8
	ctx.lr = 0x825050D8;
	sub_82504EF8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82504650
	ctx.lr = 0x825050EC;
	sub_82504650(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82505120
	if (!ctx.cr6.eq) goto loc_82505120;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825050ac
	if (ctx.cr0.eq) goto loc_825050AC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82505118
	if (ctx.cr6.eq) goto loc_82505118;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x82505118;
	sub_824E4368(ctx, base);
loc_82505118:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x82505120;
	sub_824E4368(ctx, base);
loc_82505120:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = r31.u32 & 0xF;
	// rlwinm r30,r31,30,2,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x82503970
	ctx.lr = 0x82505130;
	sub_82503970(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// addi r5,r30,3
	ctx.r5.s64 = r30.s64 + 3;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825041b8
	ctx.lr = 0x82505148;
	sub_825041B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
loc_82505150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82516548) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82516560
	if (!ctx.cr6.eq) goto loc_82516560;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82516560:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82516570
	if (!ctx.cr6.eq) goto loc_82516570;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82516570:
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// subf. r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x825165b8
	if (ctx.cr6.eq) goto loc_825165B8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x825165bc
	if (!ctx.cr6.eq) goto loc_825165BC;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x825165bc
	goto loc_825165BC;
loc_825165B8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_825165BC:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x825165dc
	if (ctx.cr6.eq) goto loc_825165DC;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x825165e0
	if (!ctx.cr6.eq) goto loc_825165E0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x825165e0
	goto loc_825165E0;
loc_825165DC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825165E0:
	// subf. r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251E9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251E9D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_8251E9E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// ble cr6,0x8251ea00
	if (!ctx.cr6.gt) goto loc_8251EA00;
	// bl 0x825093d0
	ctx.lr = 0x8251E9FC;
	sub_825093D0(ctx, base);
	// b 0x8251ea04
	goto loc_8251EA04;
loc_8251EA00:
	// bl 0x8251e4b0
	ctx.lr = 0x8251EA04;
	sub_8251E4B0(ctx, base);
loc_8251EA04:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251ea54
	if (ctx.cr6.eq) goto loc_8251EA54;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// beq cr6,0x8251ea60
	if (ctx.cr6.eq) goto loc_8251EA60;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8251ea6c
	if (!ctx.cr6.lt) goto loc_8251EA6C;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + r29.u64;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + r31.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x8251e9e8
	if (!ctx.cr6.gt) goto loc_8251E9E8;
loc_8251EA54:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8251EA58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8251EA60:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// b 0x8251ea58
	goto loc_8251EA58;
loc_8251EA6C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8251ea58
	goto loc_8251EA58;
}

DEFINE_REX_FUNC(sub_82523820) {
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
	ctx.lr = 0x82523828;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,44
	r29.s64 = ctx.r4.s64 + 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8252383C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825239f0
	if (!ctx.cr6.lt) goto loc_825239F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
loc_82523858:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825239e4
	if (ctx.cr6.eq) goto loc_825239E4;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825239d0
	if (ctx.cr6.eq) goto loc_825239D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825239d0
	if (ctx.cr0.eq) goto loc_825239D0;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// beq cr6,0x825239d0
	if (ctx.cr6.eq) goto loc_825239D0;
	// lbz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825239d0
	if (ctx.cr0.eq) goto loc_825239D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82504578
	ctx.lr = 0x82523898;
	sub_82504578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825239d0
	if (ctx.cr0.eq) goto loc_825239D0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r10,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_825238B4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825238f4
	if (!ctx.cr6.lt) goto loc_825238F4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// bne cr6,0x825238e8
	if (!ctx.cr6.eq) goto loc_825238E8;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r9,r9,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x6;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// andc r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_825238E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x825238b4
	goto loc_825238B4;
loc_825238F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82523948
	if (ctx.cr0.eq) goto loc_82523948;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82523904:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252392c
	if (ctx.cr6.eq) goto loc_8252392C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82523924
	if (ctx.cr6.eq) goto loc_82523924;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252392c
	if (!ctx.cr0.eq) goto loc_8252392C;
loc_82523924:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82523904
	goto loc_82523904;
loc_8252392C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r11,r10,0,19,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF) | (ctx.r11.u64 & 0x1FFE000);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82523948:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82523960
	goto loc_82523960;
loc_82523958:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82523960:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82523958
	if (!ctx.cr6.eq) goto loc_82523958;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r10,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r7,r10,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825239D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82523858
	if (!ctx.cr6.eq) goto loc_82523858;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x82523858
	goto loc_82523858;
loc_825239E4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8252383c
	goto loc_8252383C;
loc_825239F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82542B30) {
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
	ctx.lr = 0x82542B38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82130e88
	ctx.lr = 0x82542B50;
	sub_82130E88(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r30,25,25,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,115
	ctx.cr6.compare<uint32_t>(r29.u32, 115, ctx.xer);
	// beq cr6,0x82542b8c
	if (ctx.cr6.eq) goto loc_82542B8C;
	// cmplwi cr6,r29,125
	ctx.cr6.compare<uint32_t>(r29.u32, 125, ctx.xer);
	// beq cr6,0x82542b8c
	if (ctx.cr6.eq) goto loc_82542B8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82542B70;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542b94
	if (ctx.cr0.eq) goto loc_82542B94;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2288
	ctx.lr = 0x82542B8C;
	sub_825C2288(ctx, base);
loc_82542B8C:
	// li r31,0
	r31.s64 = 0;
	// b 0x82542e04
	goto loc_82542E04;
loc_82542B94:
	// cmplwi cr6,r29,110
	ctx.cr6.compare<uint32_t>(r29.u32, 110, ctx.xer);
	// bne cr6,0x82542bf0
	if (!ctx.cr6.eq) goto loc_82542BF0;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
loc_82542BA4:
	// rlwinm r11,r30,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82542bf0
	if (!ctx.cr6.lt) goto loc_82542BF0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542be4
	if (ctx.cr0.eq) goto loc_82542BE4;
	// addi r6,r26,1
	ctx.r6.s64 = r26.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82542b30
	ctx.lr = 0x82542BD4;
	sub_82542B30(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82542b8c
	if (ctx.cr6.eq) goto loc_82542B8C;
loc_82542BE4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82542ba4
	goto loc_82542BA4;
loc_82542BF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,660(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 660);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254f8d8
	ctx.lr = 0x82542C00;
	sub_8254F8D8(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r30,25,25,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,115
	ctx.cr6.compare<uint32_t>(r29.u32, 115, ctx.xer);
	// beq cr6,0x82542b8c
	if (ctx.cr6.eq) goto loc_82542B8C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82542c2c
	if (ctx.cr6.eq) goto loc_82542C2C;
	// cmplwi cr6,r29,113
	ctx.cr6.compare<uint32_t>(r29.u32, 113, ctx.xer);
	// beq cr6,0x82542c2c
	if (ctx.cr6.eq) goto loc_82542C2C;
	// cmplwi cr6,r29,124
	ctx.cr6.compare<uint32_t>(r29.u32, 124, ctx.xer);
	// bne cr6,0x82542b8c
	if (!ctx.cr6.eq) goto loc_82542B8C;
loc_82542C2C:
	// rlwinm. r11,r30,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542e04
	if (!ctx.cr0.eq) goto loc_82542E04;
	// rlwinm. r11,r30,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542e04
	if (!ctx.cr0.eq) goto loc_82542E04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x82542C44;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542cc0
	if (ctx.cr0.eq) goto loc_82542CC0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ r30.u64;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542c84
	if (ctx.cr0.eq) goto loc_82542C84;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,652(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 652);
	// rlwinm r5,r30,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255e778
	ctx.lr = 0x82542C7C;
	sub_8255E778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82542C84;
	sub_8250AED8(ctx, base);
loc_82542C84:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82531ba8
	ctx.lr = 0x82542C98;
	sub_82531BA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542dac
	if (ctx.cr0.eq) goto loc_82542DAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538a80
	ctx.lr = 0x82542CB8;
	sub_82538A80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82542dac
	goto loc_82542DAC;
loc_82542CC0:
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(r29.u32, 100, ctx.xer);
	// bne cr6,0x82542dac
	if (!ctx.cr6.eq) goto loc_82542DAC;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r30,31,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r30,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// bne 0x82542d74
	if (!ctx.cr0.eq) goto loc_82542D74;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,7296
	ctx.r10.s64 = 7296;
	// rlwinm r9,r11,0,27,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwimi r10,r11,30,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwinm r9,r9,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,68
	ctx.r9.s64 = 68;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82542CFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542d64
	if (ctx.cr6.eq) goto loc_82542D64;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542d5c
	if (ctx.cr6.eq) goto loc_82542D5C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r11,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82542d5c
	if (ctx.cr0.eq) goto loc_82542D5C;
	// rlwinm r8,r11,22,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r7,r11,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r11,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82542D5C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82542cfc
	goto loc_82542CFC;
loc_82542D64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82542D6C;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_82542D74:
	// rlwinm. r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542dac
	if (!ctx.cr0.eq) goto loc_82542DAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82542dac
	if (!ctx.cr6.gt) goto loc_82542DAC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwimi r11,r10,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r5,660(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 660);
	// bl 0x8254f428
	ctx.lr = 0x82542DAC;
	sub_8254F428(ctx, base);
loc_82542DAC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82542e04
	if (!ctx.cr6.eq) goto loc_82542E04;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82542DB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542df0
	if (ctx.cr6.eq) goto loc_82542DF0;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542de8
	if (ctx.cr6.eq) goto loc_82542DE8;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x82542de8
	if (!ctx.cr6.eq) goto loc_82542DE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82542df4
	if (!ctx.cr0.eq) goto loc_82542DF4;
loc_82542DE8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82542db8
	goto loc_82542DB8;
loc_82542DF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82542DF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542e04
	if (ctx.cr6.eq) goto loc_82542E04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825335b8
	ctx.lr = 0x82542E04;
	sub_825335B8(ctx, base);
loc_82542E04:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82130e88
	ctx.lr = 0x82542E10;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8255DB50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255db88
	if (ctx.cr0.eq) goto loc_8255DB88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8255db94
	goto loc_8255DB94;
loc_8255DB88:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8255DB94:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255dbac
	if (ctx.cr6.eq) goto loc_8255DBAC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_8255DBAC:
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8256C548) {
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
	ctx.lr = 0x8256C550;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
loc_8256C564:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
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
	// b 0x8256c5cc
	goto loc_8256C5CC;
loc_8256C580:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256c5c8
	if (!ctx.cr6.eq) goto loc_8256C5C8;
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
loc_8256C594:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256c5c8
	if (ctx.cr6.eq) goto loc_8256C5C8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c6828
	ctx.lr = 0x8256C5AC;
	sub_825C6828(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r19,1
	r19.s64 = 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8256c5c0
	if (!ctx.cr6.eq) goto loc_8256C5C0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8256C5C0:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8256c594
	goto loc_8256C594;
loc_8256C5C8:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
loc_8256C5CC:
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c5e0
	if (!ctx.cr0.eq) goto loc_8256C5E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8256c580
	if (!ctx.cr6.eq) goto loc_8256C580;
loc_8256C5E0:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
loc_8256C5E4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r21,r10,r11
	r21.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8256d814
	if (ctx.cr6.eq) goto loc_8256D814;
loc_8256C5FC:
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256c614
	if (ctx.cr0.eq) goto loc_8256C614;
	// lwz r10,20(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// b 0x8256c61c
	goto loc_8256C61C;
loc_8256C614:
	// lwz r10,28(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = r21.s64 + 24;
loc_8256C61C:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256c62c
	if (ctx.cr0.eq) goto loc_8256C62C;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x8256c638
	goto loc_8256C638;
loc_8256C62C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r10,-40
	r31.s64 = ctx.r10.s64 + -40;
loc_8256C638:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8256C63C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256c6c8
	if (ctx.cr6.eq) goto loc_8256C6C8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825297d0
	ctx.lr = 0x8256C650;
	sub_825297D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x8256C658;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c6b8
	if (!ctx.cr0.eq) goto loc_8256C6B8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256c678
	if (ctx.cr0.eq) goto loc_8256C678;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x8256c684
	goto loc_8256C684;
loc_8256C678:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8256c63c
	if (!ctx.cr0.eq) goto loc_8256C63C;
loc_8256C684:
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8256c63c
	if (ctx.cr6.eq) goto loc_8256C63C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256c6a8
	if (ctx.cr0.eq) goto loc_8256C6A8;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x8256c63c
	goto loc_8256C63C;
loc_8256C6A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// b 0x8256c63c
	goto loc_8256C63C;
loc_8256C6B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2510
	ctx.lr = 0x8256C6C4;
	sub_825C2510(ctx, base);
	// b 0x8256c5fc
	goto loc_8256C5FC;
loc_8256C6C8:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
loc_8256C6CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256cd9c
	if (ctx.cr6.eq) goto loc_8256CD9C;
	// lwz r10,48(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,40(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 40);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256c710
	if (!ctx.cr0.eq) goto loc_8256C710;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8256c6cc
	goto loc_8256C6CC;
loc_8256C710:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825620e8
	ctx.lr = 0x8256C720;
	sub_825620E8(ctx, base);
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// bl 0x824f7678
	ctx.lr = 0x8256C734;
	sub_824F7678(ctx, base);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r26,1
	ctx.r10.u64 = r26.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r25,r20
	r25.u64 = r20.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r24,r20
	r24.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256c924
	if (!ctx.cr0.eq) goto loc_8256C924;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256c924
	if (ctx.cr0.eq) goto loc_8256C924;
loc_8256C76C:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256c908
	if (ctx.cr0.eq) goto loc_8256C908;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256c7a8
	if (ctx.cr0.eq) goto loc_8256C7A8;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256c79c
	if (ctx.cr0.eq) goto loc_8256C79C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// b 0x8256c7b0
	goto loc_8256C7B0;
loc_8256C79C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// b 0x8256c7b0
	goto loc_8256C7B0;
loc_8256C7A8:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
loc_8256C7B0:
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
	// b 0x8256c8cc
	goto loc_8256C8CC;
loc_8256C7C4:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r9,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c814
	if (!ctx.cr0.eq) goto loc_8256C814;
	// rlwinm. r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c814
	if (!ctx.cr0.eq) goto loc_8256C814;
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// beq cr6,0x8256c814
	if (ctx.cr6.eq) goto loc_8256C814;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8256C7E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256c874
	if (ctx.cr6.eq) goto loc_8256C874;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256c80c
	if (ctx.cr6.eq) goto loc_8256C80C;
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256c814
	if (ctx.cr0.eq) goto loc_8256C814;
loc_8256C80C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8256c7e8
	goto loc_8256C7E8;
loc_8256C814:
	// oris r11,r9,8192
	ctx.r11.u64 = ctx.r9.u64 | 536870912;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c84c
	if (!ctx.cr0.eq) goto loc_8256C84C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256c84c
	if (ctx.cr0.eq) goto loc_8256C84C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256c858
	if (!ctx.cr6.gt) goto loc_8256C858;
loc_8256C84C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8256C858;
	sub_8251FE00(ctx, base);
loc_8256C858:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,1
	r27.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_8256C874:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c88c
	if (!ctx.cr0.eq) goto loc_8256C88C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256c7c4
	if (!ctx.cr6.eq) goto loc_8256C7C4;
loc_8256C88C:
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8256c8d4
	if (ctx.cr6.eq) goto loc_8256C8D4;
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8256c8bc
	if (ctx.cr6.eq) goto loc_8256C8BC;
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256c8bc
	if (!ctx.cr0.eq) goto loc_8256C8BC;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8256c8c4
	goto loc_8256C8C4;
loc_8256C8BC:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8256C8C4:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c8d4
	if (!ctx.cr0.eq) goto loc_8256C8D4;
loc_8256C8CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256c7c4
	if (!ctx.cr6.eq) goto loc_8256C7C4;
loc_8256C8D4:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8256C8D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256c908
	if (ctx.cr6.eq) goto loc_8256C908;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256c900
	if (!ctx.cr0.eq) goto loc_8256C900;
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c900
	if (!ctx.cr0.eq) goto loc_8256C900;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_8256C900:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8256c8d8
	goto loc_8256C8D8;
loc_8256C908:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256c924
	if (!ctx.cr0.eq) goto loc_8256C924;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256c76c
	if (!ctx.cr6.eq) goto loc_8256C76C;
loc_8256C924:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c934
	if (!ctx.cr0.eq) goto loc_8256C934;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// beq cr6,0x8256ca40
	if (ctx.cr6.eq) goto loc_8256CA40;
loc_8256C934:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// li r27,1
	r27.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256ca40
	if (!ctx.cr0.eq) goto loc_8256CA40;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256ca40
	if (ctx.cr0.eq) goto loc_8256CA40;
loc_8256C950:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256ca24
	if (ctx.cr0.eq) goto loc_8256CA24;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256ca24
	if (!ctx.cr0.eq) goto loc_8256CA24;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256ca24
	if (ctx.cr0.eq) goto loc_8256CA24;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r9,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8256c9b4
	if (ctx.cr6.eq) goto loc_8256C9B4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8256c9b4
	if (ctx.cr6.eq) goto loc_8256C9B4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8256c9b4
	if (ctx.cr6.eq) goto loc_8256C9B4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8256c9b4
	if (ctx.cr6.eq) goto loc_8256C9B4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8256c9b4
	if (ctx.cr6.eq) goto loc_8256C9B4;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// bne cr6,0x8256c9b8
	if (!ctx.cr6.eq) goto loc_8256C9B8;
loc_8256C9B4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8256C9B8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256c9c8
	if (!ctx.cr0.eq) goto loc_8256C9C8;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x8256ca24
	if (!ctx.cr6.eq) goto loc_8256CA24;
loc_8256C9C8:
	// oris r11,r9,8192
	ctx.r11.u64 = ctx.r9.u64 | 536870912;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256ca00
	if (!ctx.cr0.eq) goto loc_8256CA00;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256ca00
	if (ctx.cr0.eq) goto loc_8256CA00;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256ca0c
	if (!ctx.cr6.gt) goto loc_8256CA0C;
loc_8256CA00:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8256CA0C;
	sub_8251FE00(ctx, base);
loc_8256CA0C:
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
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_8256CA24:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256ca40
	if (!ctx.cr0.eq) goto loc_8256CA40;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256c950
	if (!ctx.cr6.eq) goto loc_8256C950;
loc_8256CA40:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cc14
	if (!ctx.cr0.eq) goto loc_8256CC14;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256cc14
	if (ctx.cr0.eq) goto loc_8256CC14;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// lwzx r29,r10,r4
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8256cab4
	if (!ctx.cr0.eq) goto loc_8256CAB4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	ctx.lr = 0x8256CAB4;
	sub_824E4308(ctx, base);
loc_8256CAB4:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8256CABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256cb84
	if (ctx.cr6.eq) goto loc_8256CB84;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256cb7c
	if (ctx.cr0.eq) goto loc_8256CB7C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cb7c
	if (!ctx.cr0.eq) goto loc_8256CB7C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256cb7c
	if (ctx.cr0.eq) goto loc_8256CB7C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x8256cb0c
	if (ctx.cr6.lt) goto loc_8256CB0C;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8256cb10
	if (!ctx.cr6.gt) goto loc_8256CB10;
loc_8256CB0C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8256CB10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256cb7c
	if (ctx.cr0.eq) goto loc_8256CB7C;
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256cb7c
	if (!ctx.cr0.eq) goto loc_8256CB7C;
	// oris r11,r10,8192
	ctx.r11.u64 = ctx.r10.u64 | 536870912;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256cb58
	if (!ctx.cr0.eq) goto loc_8256CB58;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256cb58
	if (ctx.cr0.eq) goto loc_8256CB58;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256cb64
	if (!ctx.cr6.gt) goto loc_8256CB64;
loc_8256CB58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8256CB64;
	sub_8251FE00(ctx, base);
loc_8256CB64:
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
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_8256CB7C:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x8256cabc
	goto loc_8256CABC;
loc_8256CB84:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8256CB88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256ca40
	if (ctx.cr6.eq) goto loc_8256CA40;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cc0c
	if (!ctx.cr0.eq) goto loc_8256CC0C;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256cc0c
	if (ctx.cr0.eq) goto loc_8256CC0C;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256cbe8
	if (!ctx.cr0.eq) goto loc_8256CBE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256cbe8
	if (ctx.cr0.eq) goto loc_8256CBE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256cbf4
	if (!ctx.cr6.gt) goto loc_8256CBF4;
loc_8256CBE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8256CBF4;
	sub_8251FE00(ctx, base);
loc_8256CBF4:
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
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_8256CC0C:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8256cb88
	goto loc_8256CB88;
loc_8256CC14:
	// lwz r10,976(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 976);
	// clrlwi. r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r11,r22,972
	ctx.r11.s64 = r22.s64 + 972;
	// stw r28,976(r22)
	REX_STORE_U32(r22.u32 + 976, r28.u32);
	// bne 0x8256cc34
	if (!ctx.cr0.eq) goto loc_8256CC34;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// beq cr6,0x8256cda8
	if (ctx.cr6.eq) goto loc_8256CDA8;
loc_8256CC34:
	// lwz r10,40(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 40);
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r27,r10,20,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// stw r9,40(r22)
	REX_STORE_U32(r22.u32 + 40, ctx.r9.u32);
	// bne 0x8256cd88
	if (!ctx.cr0.eq) goto loc_8256CD88;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256cd88
	if (ctx.cr0.eq) goto loc_8256CD88;
loc_8256CC60:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256cd6c
	if (ctx.cr0.eq) goto loc_8256CD6C;
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// beq 0x8256cca4
	if (ctx.cr0.eq) goto loc_8256CCA4;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256cc98
	if (ctx.cr0.eq) goto loc_8256CC98;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// b 0x8256ccac
	goto loc_8256CCAC;
loc_8256CC98:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// b 0x8256ccac
	goto loc_8256CCAC;
loc_8256CCA4:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
loc_8256CCAC:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256cd58
	if (ctx.cr0.eq) goto loc_8256CD58;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x8256cd64
	goto loc_8256CD64;
loc_8256CCBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256ccf0
	if (!ctx.cr0.eq) goto loc_8256CCF0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825513e0
	ctx.lr = 0x8256CCD4;
	sub_825513E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256CCE8;
	sub_825C2288(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x8256ccf8
	goto loc_8256CCF8;
loc_8256CCF0:
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8256CCF8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cd14
	if (!ctx.cr0.eq) goto loc_8256CD14;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8256ccbc
	if (!ctx.cr0.eq) goto loc_8256CCBC;
loc_8256CD14:
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8256cd6c
	if (ctx.cr6.eq) goto loc_8256CD6C;
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8256cd48
	if (ctx.cr6.eq) goto loc_8256CD48;
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256cd48
	if (!ctx.cr0.eq) goto loc_8256CD48;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8256cd54
	goto loc_8256CD54;
loc_8256CD48:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8256CD54:
	// bne 0x8256cd6c
	if (!ctx.cr0.eq) goto loc_8256CD6C;
loc_8256CD58:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_8256CD64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256ccbc
	if (!ctx.cr6.eq) goto loc_8256CCBC;
loc_8256CD6C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cd88
	if (!ctx.cr0.eq) goto loc_8256CD88;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256cc60
	if (!ctx.cr6.eq) goto loc_8256CC60;
loc_8256CD88:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7a78
	ctx.lr = 0x8256CD94;
	sub_824F7A78(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256c564
	if (!ctx.cr0.eq) goto loc_8256C564;
loc_8256CD9C:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8256c5e4
	goto loc_8256C5E4;
loc_8256CDA8:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
loc_8256CDAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256d3c4
	if (ctx.cr6.eq) goto loc_8256D3C4;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256cdcc
	if (ctx.cr0.eq) goto loc_8256CDCC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8256cdac
	goto loc_8256CDAC;
loc_8256CDCC:
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256ce6c
	if (!ctx.cr0.eq) goto loc_8256CE6C;
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256ce6c
	if (ctx.cr0.eq) goto loc_8256CE6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x8256ce6c
	if (!ctx.cr6.eq) goto loc_8256CE6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8256CE0C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = r31.s64 + -20;
	// lwzx r28,r3,r11
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r29,28(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8256CE20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256ce58
	if (ctx.cr6.eq) goto loc_8256CE58;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r21.u32, ctx.xer);
	// beq cr6,0x8256ce40
	if (ctx.cr6.eq) goto loc_8256CE40;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c6828
	ctx.lr = 0x8256CE40;
	sub_825C6828(ctx, base);
loc_8256CE40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8256ce50
	if (!ctx.cr6.eq) goto loc_8256CE50;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8256CE50:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8256ce20
	goto loc_8256CE20;
loc_8256CE58:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256CE6C;
	sub_825C2288(ctx, base);
loc_8256CE6C:
	// lwz r9,40(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 40);
	// lwz r10,108(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 108);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// ori r8,r9,4096
	ctx.r8.u64 = ctx.r9.u64 | 4096;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,40(r22)
	REX_STORE_U32(r22.u32 + 40, ctx.r8.u32);
	// rlwinm r25,r9,20,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// stw r29,108(r22)
	REX_STORE_U32(r22.u32 + 108, r29.u32);
	// bne 0x8256cecc
	if (!ctx.cr0.eq) goto loc_8256CECC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256cecc
	if (ctx.cr0.eq) goto loc_8256CECC;
loc_8256CE9C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256ceb4
	if (ctx.cr0.eq) goto loc_8256CEB4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// beq cr6,0x8256ceb4
	if (ctx.cr6.eq) goto loc_8256CEB4;
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r29.u32);
loc_8256CEB4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256cecc
	if (!ctx.cr0.eq) goto loc_8256CECC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256ce9c
	if (!ctx.cr6.eq) goto loc_8256CE9C;
loc_8256CECC:
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// addi r30,r21,12
	r30.s64 = r21.s64 + 12;
loc_8256CED4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// beq cr6,0x8256cf04
	if (ctx.cr6.eq) goto loc_8256CF04;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825c6828
	ctx.lr = 0x8256CEEC;
	sub_825C6828(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8256cefc
	if (!ctx.cr6.eq) goto loc_8256CEFC;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8256CEFC:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8256ced4
	goto loc_8256CED4;
loc_8256CF04:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8256CF0C;
	sub_825C69A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82551798
	ctx.lr = 0x8256CF18;
	sub_82551798(ctx, base);
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// addi r28,r21,32
	r28.s64 = r21.s64 + 32;
	// mr r27,r20
	r27.u64 = r20.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d028
	if (!ctx.cr0.eq) goto loc_8256D028;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256d028
	if (ctx.cr0.eq) goto loc_8256D028;
loc_8256CF3C:
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_8256CF40:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256cf78
	if (ctx.cr6.eq) goto loc_8256CF78;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256cf64
	if (ctx.cr6.eq) goto loc_8256CF64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x8256CF64;
	sub_8250B470(ctx, base);
loc_8256CF64:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8256cf40
	if (!ctx.cr6.eq) goto loc_8256CF40;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8256cf40
	goto loc_8256CF40;
loc_8256CF78:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256CF8C;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8256cfe4
	if (ctx.cr6.eq) goto loc_8256CFE4;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256cfac
	if (ctx.cr0.eq) goto loc_8256CFAC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8256cfb4
	goto loc_8256CFB4;
loc_8256CFAC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8256CFB4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256cfd4
	if (!ctx.cr6.eq) goto loc_8256CFD4;
loc_8256CFBC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d028
	if (!ctx.cr0.eq) goto loc_8256D028;
	// b 0x8256d018
	goto loc_8256D018;
loc_8256CFD4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d028
	if (!ctx.cr0.eq) goto loc_8256D028;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8256d01c
	goto loc_8256D01C;
loc_8256CFE4:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256cff8
	if (ctx.cr0.eq) goto loc_8256CFF8;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8256d004
	goto loc_8256D004;
loc_8256CFF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8256D004:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8256cfbc
	if (ctx.cr6.eq) goto loc_8256CFBC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8256d028
	if (!ctx.cr6.eq) goto loc_8256D028;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8256D018:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8256D01C:
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256cf3c
	if (!ctx.cr6.eq) goto loc_8256CF3C;
loc_8256D028:
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r28,r21,24
	r28.s64 = r21.s64 + 24;
	// mr r27,r20
	r27.u64 = r20.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d138
	if (!ctx.cr0.eq) goto loc_8256D138;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256d138
	if (ctx.cr0.eq) goto loc_8256D138;
loc_8256D04C:
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_8256D050:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256d088
	if (ctx.cr6.eq) goto loc_8256D088;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256d074
	if (ctx.cr6.eq) goto loc_8256D074;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x8256D074;
	sub_8250B470(ctx, base);
loc_8256D074:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8256d050
	if (!ctx.cr6.eq) goto loc_8256D050;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8256d050
	goto loc_8256D050;
loc_8256D088:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256D09C;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8256d0f4
	if (ctx.cr6.eq) goto loc_8256D0F4;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d0bc
	if (ctx.cr0.eq) goto loc_8256D0BC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8256d0c4
	goto loc_8256D0C4;
loc_8256D0BC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8256D0C4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256d0e4
	if (!ctx.cr6.eq) goto loc_8256D0E4;
loc_8256D0CC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d138
	if (!ctx.cr0.eq) goto loc_8256D138;
	// b 0x8256d128
	goto loc_8256D128;
loc_8256D0E4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d138
	if (!ctx.cr0.eq) goto loc_8256D138;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8256d12c
	goto loc_8256D12C;
loc_8256D0F4:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256d108
	if (ctx.cr0.eq) goto loc_8256D108;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8256d114
	goto loc_8256D114;
loc_8256D108:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8256D114:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8256d0cc
	if (ctx.cr6.eq) goto loc_8256D0CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8256d138
	if (!ctx.cr6.eq) goto loc_8256D138;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8256D128:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8256D12C:
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256d04c
	if (!ctx.cr6.eq) goto loc_8256D04C;
loc_8256D138:
	// lwz r31,20(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r26,r21,16
	r26.s64 = r21.s64 + 16;
	// mr r27,r20
	r27.u64 = r20.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d240
	if (!ctx.cr0.eq) goto loc_8256D240;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8256d240
	if (ctx.cr0.eq) goto loc_8256D240;
loc_8256D154:
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8256D15C:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256d1a4
	if (ctx.cr6.eq) goto loc_8256D1A4;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256d190
	if (ctx.cr6.eq) goto loc_8256D190;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d190
	if (ctx.cr0.eq) goto loc_8256D190;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x8256D190;
	sub_8250B470(ctx, base);
loc_8256D190:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8256d15c
	if (!ctx.cr6.eq) goto loc_8256D15C;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8256d15c
	goto loc_8256D15C;
loc_8256D1A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256d1c4
	if (!ctx.cr6.eq) goto loc_8256D1C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256D1C4;
	sub_825C2288(ctx, base);
loc_8256D1C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8256d1f8
	if (ctx.cr6.eq) goto loc_8256D1F8;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
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
	// beq cr6,0x8256d214
	if (ctx.cr6.eq) goto loc_8256D214;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d240
	if (!ctx.cr0.eq) goto loc_8256D240;
	// b 0x8256d234
	goto loc_8256D234;
loc_8256D1F8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
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
	// bne cr6,0x8256d22c
	if (!ctx.cr6.eq) goto loc_8256D22C;
loc_8256D214:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d240
	if (!ctx.cr0.eq) goto loc_8256D240;
	// b 0x8256d238
	goto loc_8256D238;
loc_8256D22C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8256d240
	if (!ctx.cr6.eq) goto loc_8256D240;
loc_8256D234:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8256D238:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256d154
	if (!ctx.cr6.eq) goto loc_8256D154;
loc_8256D240:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7a78
	ctx.lr = 0x8256D24C;
	sub_824F7A78(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d28c
	if (!ctx.cr0.eq) goto loc_8256D28C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256d28c
	if (ctx.cr0.eq) goto loc_8256D28C;
loc_8256D260:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8256d274
	if (ctx.cr0.eq) goto loc_8256D274;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8256D274:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d28c
	if (!ctx.cr0.eq) goto loc_8256D28C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256d260
	if (!ctx.cr6.eq) goto loc_8256D260;
loc_8256D28C:
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d2a0
	if (ctx.cr0.eq) goto loc_8256D2A0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82562650
	ctx.lr = 0x8256D2A0;
	sub_82562650(ctx, base);
loc_8256D2A0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8256D2A8;
	sub_8257DFD8(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
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
	// b 0x8256d3a8
	goto loc_8256D3A8;
loc_8256D2C4:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d3a4
	if (!ctx.cr0.eq) goto loc_8256D3A4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256d3a4
	if (ctx.cr0.eq) goto loc_8256D3A4;
loc_8256D2DC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8256d388
	if (!ctx.cr6.eq) goto loc_8256D388;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8256D2F0:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256d388
	if (ctx.cr6.eq) goto loc_8256D388;
	// stb r20,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r20.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r20,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 8);
	// bl 0x825c6880
	ctx.lr = 0x8256D31C;
	sub_825C6880(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ff888
	ctx.lr = 0x8256D324;
	sub_824FF888(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8256d364
	if (ctx.cr0.eq) goto loc_8256D364;
loc_8256D32C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8256D344;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8256d35c
	if (ctx.cr6.eq) goto loc_8256D35C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ff888
	ctx.lr = 0x8256D354;
	sub_824FF888(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8256d32c
	if (!ctx.cr0.eq) goto loc_8256D32C;
loc_8256D35C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256d374
	if (!ctx.cr6.eq) goto loc_8256D374;
loc_8256D364:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x8256D374;
	sub_8250B470(ctx, base);
loc_8256D374:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8256d2f0
	if (!ctx.cr6.eq) goto loc_8256D2F0;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// b 0x8256d2f0
	goto loc_8256D2F0;
loc_8256D388:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d3a4
	if (!ctx.cr0.eq) goto loc_8256D3A4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256d2dc
	if (!ctx.cr6.eq) goto loc_8256D2DC;
loc_8256D3A4:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
loc_8256D3A8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256c564
	if (!ctx.cr0.eq) goto loc_8256C564;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// bne cr6,0x8256d2c4
	if (!ctx.cr6.eq) goto loc_8256D2C4;
	// b 0x8256c564
	goto loc_8256C564;
loc_8256D3C4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x8256D3D0;
	sub_824E4368(ctx, base);
loc_8256D3D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256d3e8
	if (ctx.cr6.eq) goto loc_8256D3E8;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8256d3f0
	if (!ctx.cr6.eq) goto loc_8256D3F0;
loc_8256D3E8:
	// stw r24,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r24.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_8256D3F0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d408
	if (!ctx.cr0.eq) goto loc_8256D408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256d3d0
	if (!ctx.cr6.eq) goto loc_8256D3D0;
loc_8256D408:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r23,r19
	r23.u64 = r19.u64;
	// beq 0x8256d6f8
	if (ctx.cr0.eq) goto loc_8256D6F8;
	// mr r23,r20
	r23.u64 = r20.u64;
	// li r19,1
	r19.s64 = 1;
loc_8256D41C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82551798
	ctx.lr = 0x8256D428;
	sub_82551798(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8256D434;
	sub_8257DFD8(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
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
	// b 0x8256d694
	goto loc_8256D694;
loc_8256D450:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_8256D454:
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256d690
	if (ctx.cr6.eq) goto loc_8256D690;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8256d684
	if (!ctx.cr6.eq) goto loc_8256D684;
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8256D484:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8256d540
	if (ctx.cr6.eq) goto loc_8256D540;
	// stw r20,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r20,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, r20.u8);
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x825c6880
	ctx.lr = 0x8256D4B0;
	sub_825C6880(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ff888
	ctx.lr = 0x8256D4B8;
	sub_824FF888(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8256d4f8
	if (ctx.cr0.eq) goto loc_8256D4F8;
loc_8256D4C0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8256D4D8;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8256d4f0
	if (ctx.cr6.eq) goto loc_8256D4F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ff888
	ctx.lr = 0x8256D4E8;
	sub_824FF888(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8256d4c0
	if (!ctx.cr0.eq) goto loc_8256D4C0;
loc_8256D4F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8256d52c
	if (!ctx.cr6.eq) goto loc_8256D52C;
loc_8256D4F8:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x8256D50C;
	sub_8250B470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7708
	ctx.lr = 0x8256D514;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d52c
	if (ctx.cr0.eq) goto loc_8256D52C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2510
	ctx.lr = 0x8256D528;
	sub_825C2510(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_8256D52C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8256d484
	if (!ctx.cr6.eq) goto loc_8256D484;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// b 0x8256d484
	goto loc_8256D484;
loc_8256D540:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256d67c
	if (!ctx.cr6.eq) goto loc_8256D67C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8256D560;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825bb860
	ctx.lr = 0x8256D584;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r28,r10,-36
	r28.s64 = ctx.r10.s64 + -36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x824f71b8
	ctx.lr = 0x8256D5D4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,0,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000) | (ctx.r10.u64 & 0xFFFFFFFF00007FFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r9,r10,0,3,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF8000) | (ctx.r9.u64 & 0xFFFFFFFFE0007FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8256D600:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256d664
	if (ctx.cr6.eq) goto loc_8256D664;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256d650
	if (ctx.cr6.eq) goto loc_8256D650;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8256d630
	goto loc_8256D630;
loc_8256D628:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8256D630:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256d628
	if (!ctx.cr6.eq) goto loc_8256D628;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
loc_8256D650:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256d600
	if (!ctx.cr6.eq) goto loc_8256D600;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8256d600
	goto loc_8256D600;
loc_8256D664:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256D678;
	sub_825C2288(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8256D67C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d450
	if (!ctx.cr0.eq) goto loc_8256D450;
loc_8256D684:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8256d454
	goto loc_8256D454;
loc_8256D690:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
loc_8256D694:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d6ac
	if (!ctx.cr0.eq) goto loc_8256D6AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bne cr6,0x8256d450
	if (!ctx.cr6.eq) goto loc_8256D450;
loc_8256D6AC:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
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
	// b 0x8256d6d8
	goto loc_8256D6D8;
loc_8256D6C4:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8256d6d8
	if (!ctx.cr6.eq) goto loc_8256D6D8;
	// stw r24,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r24.u32);
	// li r25,1
	r25.s64 = 1;
loc_8256D6D8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d6f0
	if (!ctx.cr0.eq) goto loc_8256D6F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256d6c4
	if (!ctx.cr6.eq) goto loc_8256D6C4;
loc_8256D6F0:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d41c
	if (!ctx.cr0.eq) goto loc_8256D41C;
loc_8256D6F8:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d83c
	if (ctx.cr0.eq) goto loc_8256D83C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d808
	if (!ctx.cr0.eq) goto loc_8256D808;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256d808
	if (ctx.cr0.eq) goto loc_8256D808;
loc_8256D720:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d7ec
	if (ctx.cr0.eq) goto loc_8256D7EC;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256d768
	if (ctx.cr6.eq) goto loc_8256D768;
loc_8256D740:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256d768
	if (ctx.cr6.eq) goto loc_8256D768;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r10,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8256d760
	if (!ctx.cr0.eq) goto loc_8256D760;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d7ec
	if (!ctx.cr0.eq) goto loc_8256D7EC;
loc_8256D760:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8256d740
	goto loc_8256D740;
loc_8256D768:
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8256D76C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8256d7dc
	if (ctx.cr6.eq) goto loc_8256D7DC;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d78c
	if (ctx.cr0.eq) goto loc_8256D78C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x8256d798
	goto loc_8256D798;
loc_8256D78C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_8256D798:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x8256D7A8;
	sub_825C2288(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8256D7AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256d7d4
	if (ctx.cr6.eq) goto loc_8256D7D4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bne cr6,0x8256d7c8
	if (!ctx.cr6.eq) goto loc_8256D7C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8256d7ac
	goto loc_8256D7AC;
loc_8256D7C8:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6828
	ctx.lr = 0x8256D7D4;
	sub_825C6828(ctx, base);
loc_8256D7D4:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x8256d76c
	goto loc_8256D76C;
loc_8256D7DC:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_8256D7EC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d808
	if (!ctx.cr0.eq) goto loc_8256D808;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256d720
	if (!ctx.cr6.eq) goto loc_8256D720;
loc_8256D808:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d83c
	if (ctx.cr0.eq) goto loc_8256D83C;
	// li r19,1
	r19.s64 = 1;
loc_8256D814:
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lwz r11,108(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 108);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// stw r24,108(r22)
	REX_STORE_U32(r22.u32 + 108, r24.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8256d3f0
	goto loc_8256D3F0;
loc_8256D83C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
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
loc_8256D854:
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
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256d8b4
	if (ctx.cr6.eq) goto loc_8256D8B4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256d8a0
	if (!ctx.cr0.eq) goto loc_8256D8A0;
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d8a0
	if (!ctx.cr0.eq) goto loc_8256D8A0;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d8a0
	if (ctx.cr0.eq) goto loc_8256D8A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82562650
	ctx.lr = 0x8256D898;
	sub_82562650(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256d8a8
	if (!ctx.cr0.eq) goto loc_8256D8A8;
loc_8256D8A0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8256d854
	goto loc_8256D854;
loc_8256D8A8:
	// li r19,1
	r19.s64 = 1;
	// li r23,1
	r23.s64 = 1;
	// b 0x8256d83c
	goto loc_8256D83C;
loc_8256D8B4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256d8c4
	if (ctx.cr0.eq) goto loc_8256D8C4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8256D8C4;
	sub_8257DFD8(ctx, base);
loc_8256D8C4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_825FB6E0) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB704;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31912
	ctx.r11.s64 = ctx.r11.s64 + -31912;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x825d7d20
	ctx.lr = 0x825FB738;
	sub_825D7D20(ctx, base);
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

DEFINE_REX_FUNC(sub_825FD8D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FDB50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30340
	ctx.r3.s64 = ctx.r11.s64 + -30340;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FE2D0) {
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
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825fe300
	goto loc_825FE300;
loc_825FE2F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x825fd4b8
	ctx.lr = 0x825FE2FC;
	sub_825FD4B8(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825FE300:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825fe2f0
	if (!ctx.cr6.eq) goto loc_825FE2F0;
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

DEFINE_REX_FUNC(sub_82607EC0) {
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
	// bl 0x82607ce0
	ctx.lr = 0x82607ED8;
	sub_82607CE0(ctx, base);
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8260ACE0) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260AD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260ad40
	if (ctx.cr0.lt) goto loc_8260AD40;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260AD24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260ad40
	if (ctx.cr0.lt) goto loc_8260AD40;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260AD40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260AD40:
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

DEFINE_REX_FUNC(sub_8260C948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260C950;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
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
	ctx.lr = 0x8260C974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,536
	ctx.r3.s64 = r31.s64 + 536;
	// bl 0x82613af8
	ctx.lr = 0x8260C980;
	sub_82613AF8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E850) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260E9B0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
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
	ctx.lr = 0x8260E9E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
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
	ctx.lr = 0x8260EA14;
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

DEFINE_REX_FUNC(sub_826116F0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826117B0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826117DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82611804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
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
	ctx.lr = 0x82611820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826148A8) {
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
	// lwz r30,476(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 476);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82612c18
	ctx.lr = 0x826148C8;
	sub_82612C18(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r3,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// beq cr6,0x82614930
	if (ctx.cr6.eq) goto loc_82614930;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8261493c
	if (!ctx.cr6.eq) goto loc_8261493C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826137d0
	ctx.lr = 0x826148E4;
	sub_826137D0(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82614928
	if (ctx.cr6.eq) goto loc_82614928;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82614920
	if (!ctx.cr6.gt) goto loc_82614920;
loc_82614900:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82610b90
	ctx.lr = 0x82614910;
	sub_82610B90(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82614900
	if (ctx.cr6.lt) goto loc_82614900;
loc_82614920:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
loc_82614928:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613e20
	ctx.lr = 0x82614930;
	sub_82613E20(ctx, base);
loc_82614930:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613d28
	ctx.lr = 0x82614938;
	sub_82613D28(ctx, base);
	// b 0x826149a0
	goto loc_826149A0;
loc_8261493C:
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826149a0
	if (ctx.cr6.eq) goto loc_826149A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826137d0
	ctx.lr = 0x82614950;
	sub_826137D0(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82614964
	if (ctx.cr6.eq) goto loc_82614964;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82614968
	goto loc_82614968;
loc_82614964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82614968:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826149a0
	if (ctx.cr6.eq) goto loc_826149A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612f88
	ctx.lr = 0x8261497C;
	sub_82612F88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826149a0
	if (!ctx.cr0.eq) goto loc_826149A0;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826149a0
	if (!ctx.cr6.eq) goto loc_826149A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613700
	ctx.lr = 0x82614998;
	sub_82613700(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
loc_826149A0:
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

DEFINE_REX_FUNC(sub_8261AF68) {
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
	// addi r4,r11,-9184
	ctx.r4.s64 = ctx.r11.s64 + -9184;
	// bl 0x8262b390
	ctx.lr = 0x8261AF88;
	sub_8262B390(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13688
	ctx.r10.s64 = ctx.r10.s64 + -13688;
	// addi r9,r9,-13708
	ctx.r9.s64 = ctx.r9.s64 + -13708;
	// sth r11,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r11.u16);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// addi r3,r10,20576
	ctx.r3.s64 = ctx.r10.s64 + 20576;
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x8260b4a0
	ctx.lr = 0x8261AFCC;
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

DEFINE_REX_FUNC(sub_8261E5B0) {
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
	ctx.lr = 0x8261E5B8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r16,2
	r16.s64 = 2;
	// mr r19,r28
	r19.u64 = r28.u64;
	// li r15,3
	r15.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ee28
	if (ctx.cr6.eq) goto loc_8261EE28;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261ee28
	if (ctx.cr6.eq) goto loc_8261EE28;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261ee28
	if (ctx.cr6.eq) goto loc_8261EE28;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r28,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r28.u16);
	// beq cr6,0x8261e604
	if (ctx.cr6.eq) goto loc_8261E604;
	// sth r28,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r28.u16);
loc_8261E604:
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// li r26,32767
	r26.s64 = 32767;
	// li r23,5
	r23.s64 = 5;
	// li r21,1
	r21.s64 = 1;
	// ori r25,r11,4
	r25.u64 = ctx.r11.u64 | 4;
	// li r27,8
	r27.s64 = 8;
	// li r17,4
	r17.s64 = 4;
	// li r24,7
	r24.s64 = 7;
	// li r22,6
	r22.s64 = 6;
loc_8261E628:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8261e628
	if (ctx.cr6.gt) goto loc_8261E628;
	// lis r12,-32158
	ctx.r12.s64 = -2107506688;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6580
	ctx.r12.s64 = ctx.r12.s64 + -6580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8261E9A0;
	case 1:
		goto loc_8261E628;
	case 2:
		goto loc_8261E9C0;
	case 3:
		goto loc_8261EA88;
	case 4:
		goto loc_8261E674;
	case 5:
		goto loc_8261E738;
	case 6:
		goto loc_8261E7E4;
	case 7:
		goto loc_8261E824;
	case 8:
		goto loc_8261E868;
	case 9:
		goto loc_8261E92C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8261E674:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261e6e4
	if (!ctx.cr6.eq) goto loc_8261E6E4;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8261e6d0
	if (!ctx.cr6.gt) goto loc_8261E6D0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_8261E698:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r26,112(r3)
	REX_STORE_U16(ctx.r3.u32 + 112, r26.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261e698
	if (ctx.cr6.lt) goto loc_8261E698;
loc_8261E6D0:
	// stw r23,32(r29)
	REX_STORE_U32(r29.u32 + 32, r23.u32);
	// stw r28,36(r29)
	REX_STORE_U32(r29.u32 + 36, r28.u32);
	// stw r28,40(r29)
	REX_STORE_U32(r29.u32 + 40, r28.u32);
	// sth r28,150(r29)
	REX_STORE_U16(r29.u32 + 150, r28.u16);
	// sth r28,152(r29)
	REX_STORE_U16(r29.u32 + 152, r28.u16);
loc_8261E6E4:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8261e734
	if (!ctx.cr6.gt) goto loc_8261E734;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_8261E6FC:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r21,490(r3)
	REX_STORE_U16(ctx.r3.u32 + 490, r21.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261e6fc
	if (ctx.cr6.lt) goto loc_8261E6FC;
loc_8261E734:
	// sth r21,730(r31)
	REX_STORE_U16(r31.u32 + 730, r21.u16);
loc_8261E738:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8261e79c
	if (ctx.cr6.eq) goto loc_8261E79C;
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 504);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x8261e794
	if (!ctx.cr6.eq) goto loc_8261E794;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82638888
	ctx.lr = 0x8261E76C;
	sub_82638888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261ee30
	if (ctx.cr6.eq) goto loc_8261EE30;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ee30
	if (ctx.cr6.eq) goto loc_8261EE30;
	// stw r27,32(r29)
	REX_STORE_U32(r29.u32 + 32, r27.u32);
	// mr r19,r17
	r19.u64 = r17.u64;
	// stw r21,216(r29)
	REX_STORE_U32(r29.u32 + 216, r21.u32);
	// sth r28,16(r29)
	REX_STORE_U16(r29.u32 + 16, r28.u16);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261E794:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x8261ee30
	if (ctx.cr6.lt) goto loc_8261EE30;
loc_8261E79C:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8261e7e4
	if (!ctx.cr6.eq) goto loc_8261E7E4;
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e7d8
	if (ctx.cr6.eq) goto loc_8261E7D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8261e7cc
	if (!ctx.cr6.eq) goto loc_8261E7CC;
	// stw r24,32(r29)
	REX_STORE_U32(r29.u32 + 32, r24.u32);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261E7CC:
	// lbz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261e7e0
	if (ctx.cr6.eq) goto loc_8261E7E0;
loc_8261E7D8:
	// stw r27,32(r29)
	REX_STORE_U32(r29.u32 + 32, r27.u32);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261E7E0:
	// stw r22,32(r29)
	REX_STORE_U32(r29.u32 + 32, r22.u32);
loc_8261E7E4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8261e820
	if (ctx.cr6.lt) goto loc_8261E820;
	// addi r30,r29,224
	r30.s64 = r29.s64 + 224;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_8261E7F8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82638d80
	ctx.lr = 0x8261E808;
	sub_82638D80(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261ee30
	if (ctx.cr6.lt) goto loc_8261EE30;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8261e7f8
	if (!ctx.cr6.eq) goto loc_8261E7F8;
loc_8261E820:
	// stw r24,32(r29)
	REX_STORE_U32(r29.u32 + 32, r24.u32);
loc_8261E824:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8261e840
	if (ctx.cr6.gt) goto loc_8261E840;
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
	// b 0x8261e84c
	goto loc_8261E84C;
loc_8261E840:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82639020
	ctx.lr = 0x8261E848;
	sub_82639020(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_8261E84C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x8261ee30
	if (ctx.cr6.lt) goto loc_8261EE30;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e864
	if (ctx.cr6.eq) goto loc_8261E864;
	// sth r28,16(r29)
	REX_STORE_U16(r29.u32 + 16, r28.u16);
loc_8261E864:
	// stw r27,32(r29)
	REX_STORE_U32(r29.u32 + 32, r27.u32);
loc_8261E868:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x8261e874
	if (!ctx.cr6.eq) goto loc_8261E874;
	// addi r20,r1,80
	r20.s64 = ctx.r1.s64 + 80;
loc_8261E874:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8261e8ac
	if (!ctx.cr6.eq) goto loc_8261E8AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x826e1550
	ctx.lr = 0x8261E89C;
	sub_826E1550(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8261e8b0
	if (ctx.cr6.eq) goto loc_8261E8B0;
	// sth r28,0(r20)
	REX_STORE_U16(r20.u32 + 0, r28.u16);
	// b 0x8261e8b0
	goto loc_8261E8B0;
loc_8261E8AC:
	// bl 0x826e9d70
	ctx.lr = 0x8261E8B0;
	sub_826E9D70(ctx, base);
loc_8261E8B0:
	// lhz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 220);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,220(r29)
	REX_STORE_U16(r29.u32 + 220, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8261e92c
	if (!ctx.cr6.gt) goto loc_8261E92C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_8261E8D4:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,114(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8261ec54
	if (!ctx.cr6.lt) goto loc_8261EC54;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r9,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// lhz r5,580(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8261e8d4
	if (ctx.cr6.lt) goto loc_8261E8D4;
loc_8261E92C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8261e964
	if (!ctx.cr6.eq) goto loc_8261E964;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8261e964
	if (!ctx.cr6.eq) goto loc_8261E964;
	// lbz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261e958
	if (ctx.cr6.eq) goto loc_8261E958;
	// stw r21,372(r11)
	REX_STORE_U32(ctx.r11.u32 + 372, r21.u32);
loc_8261E958:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,708(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 708);
	// bl 0x826e6f48
	ctx.lr = 0x8261E964;
	sub_826E6F48(ctx, base);
loc_8261E964:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ee20
	if (ctx.cr6.eq) goto loc_8261EE20;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8261ed44
	if (!ctx.cr6.eq) goto loc_8261ED44;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8261eae4
	if (!ctx.cr6.gt) goto loc_8261EAE4;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261E9A0:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// stw r16,32(r29)
	REX_STORE_U32(r29.u32 + 32, r16.u32);
	// stw r16,52(r29)
	REX_STORE_U32(r29.u32 + 52, r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261e628
	if (!ctx.cr6.gt) goto loc_8261E628;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r29)
	REX_STORE_U32(r29.u32 + 164, ctx.r11.u32);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261E9C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,440(r11)
	REX_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r28,216(r29)
	REX_STORE_U32(r29.u32 + 216, r28.u32);
	// sth r28,220(r29)
	REX_STORE_U16(r29.u32 + 220, r28.u16);
	// stw r28,380(r31)
	REX_STORE_U32(r31.u32 + 380, r28.u32);
	// stw r28,288(r29)
	REX_STORE_U32(r29.u32 + 288, r28.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,176(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8261e9f8
	if (!ctx.cr6.eq) goto loc_8261E9F8;
	// sth r28,210(r31)
	REX_STORE_U16(r31.u32 + 210, r28.u16);
	// b 0x8261ea34
	goto loc_8261EA34;
loc_8261E9F8:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8261ea18
	if (!ctx.cr6.gt) goto loc_8261EA18;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261EA18:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261ea34
	if (ctx.cr6.lt) goto loc_8261EA34;
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
	// stw r28,388(r31)
	REX_STORE_U32(r31.u32 + 388, r28.u32);
loc_8261EA34:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ea80
	if (ctx.cr6.eq) goto loc_8261EA80;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8261EA44:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r28,114(r10)
	REX_STORE_U16(ctx.r10.u32 + 114, r28.u16);
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8261ea6c
	if (!ctx.cr6.eq) goto loc_8261EA6C;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
loc_8261EA6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261ea44
	if (ctx.cr6.lt) goto loc_8261EA44;
loc_8261EA80:
	// stw r15,32(r29)
	REX_STORE_U32(r29.u32 + 32, r15.u32);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261EA88:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ee18
	if (ctx.cr6.eq) goto loc_8261EE18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263a230
	ctx.lr = 0x8261EA9C;
	sub_8263A230(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261ee30
	if (ctx.cr6.lt) goto loc_8261EE30;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261eadc
	if (ctx.cr6.eq) goto loc_8261EADC;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8261EAB8:
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
	// sth r28,116(r10)
	REX_STORE_U16(ctx.r10.u32 + 116, r28.u16);
	// lhz r8,34(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261eab8
	if (ctx.cr6.lt) goto loc_8261EAB8;
loc_8261EADC:
	// stw r17,32(r29)
	REX_STORE_U32(r29.u32 + 32, r17.u32);
	// b 0x8261e628
	goto loc_8261E628;
loc_8261EAE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8261edb4
	if (ctx.cr6.lt) goto loc_8261EDB4;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8261edb4
	if (!ctx.cr6.lt) goto loc_8261EDB4;
	// lwz r9,708(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8261eb18
	if (ctx.cr6.eq) goto loc_8261EB18;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x8261eb28
	goto loc_8261EB28;
loc_8261EB18:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635d20
	ctx.lr = 0x8261EB24;
	sub_82635D20(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8261EB28:
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8261ebec
	if (!ctx.cr6.gt) goto loc_8261EBEC;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8261ebec
	if (!ctx.cr6.eq) goto loc_8261EBEC;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261eb70
	if (ctx.cr6.lt) goto loc_8261EB70;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 392);
	// stw r8,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r8.u32);
	// b 0x8261eb80
	goto loc_8261EB80;
loc_8261EB70:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_8261EB80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e1470
	ctx.lr = 0x8261EB88;
	sub_826E1470(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8261ebec
	if (ctx.cr6.lt) goto loc_8261EBEC;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ebec
	if (ctx.cr6.eq) goto loc_8261EBEC;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261ebb8
	if (ctx.cr6.eq) goto loc_8261EBB8;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x8261ebcc
	goto loc_8261EBCC;
loc_8261EBB8:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261ebcc
	if (ctx.cr6.eq) goto loc_8261EBCC;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_8261EBCC:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8261ebec
	if (!ctx.cr6.lt) goto loc_8261EBEC;
	// stw r28,388(r31)
	REX_STORE_U32(r31.u32 + 388, r28.u32);
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
	// stw r28,380(r31)
	REX_STORE_U32(r31.u32 + 380, r28.u32);
loc_8261EBEC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8261ec44
	if (ctx.cr6.lt) goto loc_8261EC44;
	// lwz r11,708(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261ec44
	if (!ctx.cr6.eq) goto loc_8261EC44;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ec20
	if (ctx.cr6.eq) goto loc_8261EC20;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x8261ec38
	goto loc_8261EC38;
loc_8261EC20:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// beq cr6,0x8261ec38
	if (ctx.cr6.eq) goto loc_8261EC38;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_8261EC38:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
loc_8261EC44:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8261ec60
	if (!ctx.cr6.lt) goto loc_8261EC60;
loc_8261EC54:
	// lis r19,-32764
	r19.s64 = -2147221504;
	// ori r19,r19,2
	r19.u64 = r19.u64 | 2;
	// b 0x8261ee30
	goto loc_8261EE30;
loc_8261EC60:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r11,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r11.u16);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8261ed44
	if (ctx.cr6.eq) goto loc_8261ED44;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x8261ec80
	if (!ctx.cr6.eq) goto loc_8261EC80;
	// addi r20,r1,80
	r20.s64 = ctx.r1.s64 + 80;
loc_8261EC80:
	// sth r28,0(r20)
	REX_STORE_U16(r20.u32 + 0, r28.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8261ed2c
	if (ctx.cr6.gt) goto loc_8261ED2C;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,-2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x8261eccc
	if (ctx.cr6.eq) goto loc_8261ECCC;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r6,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r5,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x8261ecf8
	goto loc_8261ECF8;
loc_8261ECCC:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ecf8
	if (ctx.cr6.eq) goto loc_8261ECF8;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r5,r9,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
loc_8261ECF8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e6a68
	ctx.lr = 0x8261ED0C;
	sub_826E6A68(ctx, base);
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 0);
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r6.u16);
loc_8261ED2C:
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 0);
	// ld r10,184(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,184(r29)
	REX_STORE_U64(r29.u32 + 184, ctx.r10.u64);
loc_8261ED44:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ede8
	if (ctx.cr6.eq) goto loc_8261EDE8;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ede8
	if (ctx.cr6.eq) goto loc_8261EDE8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8261ED60:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lwz r11,424(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 424);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// bgt cr6,0x8261edc0
	if (ctx.cr6.gt) goto loc_8261EDC0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-2(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// sth r6,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r6.u16);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r28,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r28.u16);
	// sth r21,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r21.u16);
	// b 0x8261edd4
	goto loc_8261EDD4;
loc_8261EDB4:
	// lis r19,-32768
	r19.s64 = -2147483648;
	// ori r19,r19,16389
	r19.u64 = r19.u64 | 16389;
	// b 0x8261ee30
	goto loc_8261EE30;
loc_8261EDC0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
loc_8261EDD4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261ed60
	if (ctx.cr6.lt) goto loc_8261ED60;
loc_8261EDE8:
	// stw r21,52(r29)
	REX_STORE_U32(r29.u32 + 52, r21.u32);
	// stw r16,32(r29)
	REX_STORE_U32(r29.u32 + 32, r16.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8261ee08
	if (!ctx.cr6.gt) goto loc_8261EE08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e5bf0
	ctx.lr = 0x8261EE08;
	sub_826E5BF0(ctx, base);
loc_8261EE08:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8261ee30
	if (ctx.cr6.gt) goto loc_8261EE30;
loc_8261EE18:
	// mr r19,r17
	r19.u64 = r17.u64;
	// b 0x8261ee30
	goto loc_8261EE30;
loc_8261EE20:
	// stw r17,32(r29)
	REX_STORE_U32(r29.u32 + 32, r17.u32);
	// b 0x8261ee30
	goto loc_8261EE30;
loc_8261EE28:
	// lis r19,-32761
	r19.s64 = -2147024896;
	// ori r19,r19,87
	r19.u64 = r19.u64 | 87;
loc_8261EE30:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8261ee5c
	if (ctx.cr6.eq) goto loc_8261EE5C;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ee5c
	if (ctx.cr6.eq) goto loc_8261EE5C;
	// stw r15,692(r29)
	REX_STORE_U32(r29.u32 + 692, r15.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// stw r11,700(r29)
	REX_STORE_U32(r29.u32 + 700, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_8261EE5C:
	// stw r16,692(r29)
	REX_STORE_U32(r29.u32 + 692, r16.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8265A750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8265A758;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265a7d8
	if (ctx.cr6.eq) goto loc_8265A7D8;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-23160
	ctx.r11.s64 = ctx.r11.s64 + -23160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265a7b8
	if (ctx.cr6.eq) goto loc_8265A7B8;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-26576
	ctx.r11.s64 = ctx.r11.s64 + -26576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a798
	if (!ctx.cr6.eq) goto loc_8265A798;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8265a7bc
	if (ctx.cr0.eq) goto loc_8265A7BC;
loc_8265A798:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-27872
	ctx.r11.s64 = ctx.r11.s64 + -27872;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265a7b8
	if (ctx.cr6.eq) goto loc_8265A7B8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,24696
	ctx.r11.s64 = ctx.r11.s64 + 24696;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a7cc
	if (!ctx.cr6.eq) goto loc_8265A7CC;
loc_8265A7B8:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
loc_8265A7BC:
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// b 0x8265a8dc
	goto loc_8265A8DC;
loc_8265A7CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x8265a8dc
	goto loc_8265A8DC;
loc_8265A7D8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a8cc
	if (ctx.cr6.eq) goto loc_8265A8CC;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// addi r30,r31,108
	r30.s64 = r31.s64 + 108;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8265A800;
	sub_826A1E70(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8265A810;
	sub_826A2E60(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265a834
	if (ctx.cr0.eq) goto loc_8265A834;
	// lwz r10,740(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 740);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r10.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8265a844
	goto loc_8265A844;
loc_8265A834:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r4,254
	ctx.r4.s64 = 254;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_8265A844:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8265a86c
	if (ctx.cr6.eq) goto loc_8265A86C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8265a86c
	if (ctx.cr6.eq) goto loc_8265A86C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265a8cc
	if (!ctx.cr6.eq) goto loc_8265A8CC;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a8cc
	if (ctx.cr0.eq) goto loc_8265A8CC;
loc_8265A86C:
	// std r28,200(r31)
	REX_STORE_U64(r31.u32 + 200, r28.u64);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r28,208(r31)
	REX_STORE_U64(r31.u32 + 208, r28.u64);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// std r28,216(r31)
	REX_STORE_U64(r31.u32 + 216, r28.u64);
	// stw r28,224(r31)
	REX_STORE_U32(r31.u32 + 224, r28.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826b48d8
	ctx.lr = 0x8265A890;
	sub_826B48D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a8bc
	if (ctx.cr0.eq) goto loc_8265A8BC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265a8bc
	if (ctx.cr6.eq) goto loc_8265A8BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x8265A8A8;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265a8dc
	if (ctx.cr0.lt) goto loc_8265A8DC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8265a8dc
	goto loc_8265A8DC;
loc_8265A8BC:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,24696
	ctx.r11.s64 = ctx.r11.s64 + 24696;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x8265a8d8
	goto loc_8265A8D8;
loc_8265A8CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656078
	ctx.lr = 0x8265A8D8;
	sub_82656078(ctx, base);
loc_8265A8D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8265A8DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82661668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82661670;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x826615a0
	ctx.lr = 0x82661684;
	sub_826615A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82661698
	if (!ctx.cr0.eq) goto loc_82661698;
loc_8266168C:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x826616d0
	goto loc_826616D0;
loc_82661698:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c810
	ctx.lr = 0x826616A8;
	sub_8264C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826616c4
	if (ctx.cr0.eq) goto loc_826616C4;
	// cmpwi cr6,r3,10102
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10102, ctx.xer);
	// bne cr6,0x8266168c
	if (!ctx.cr6.eq) goto loc_8266168C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826616d0
	goto loc_826616D0;
loc_826616C4:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,4(r30)
	REX_STORE_U16(r30.u32 + 4, ctx.r11.u16);
loc_826616D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82663D38) {
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
	ctx.lr = 0x82663D40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,132
	r30.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663D60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661398
	ctx.lr = 0x82663D6C;
	sub_82661398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82663d90
	if (!ctx.cr0.eq) goto loc_82663D90;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,4105
	r29.u64 = r29.u64 | 4105;
	// bl 0x827938b4
	ctx.lr = 0x82663D84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82663e6c
	goto loc_82663E6C;
loc_82663D90:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82663dc4
	if (!ctx.cr6.eq) goto loc_82663DC4;
	// lwz r31,212(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82663dec
	if (ctx.cr6.eq) goto loc_82663DEC;
loc_82663DA4:
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
	// bne 0x82663da4
	if (!ctx.cr0.eq) goto loc_82663DA4;
	// b 0x82663dec
	goto loc_82663DEC;
loc_82663DC4:
	// lwz r31,88(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82663dec
	if (ctx.cr6.eq) goto loc_82663DEC;
loc_82663DD0:
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
	// bne 0x82663dd0
	if (!ctx.cr0.eq) goto loc_82663DD0;
loc_82663DEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663DF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82663e60
	if (ctx.cr6.eq) goto loc_82663E60;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82663e18
	if (!ctx.cr6.lt) goto loc_82663E18;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4097
	r29.u64 = r29.u64 | 4097;
	// b 0x82663e2c
	goto loc_82663E2C;
loc_82663E18:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82663E28;
	sub_826A1E70(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_82663E2C:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x82663e2c
	if (!ctx.cr0.eq) goto loc_82663E2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82663e68
	if (!ctx.cr6.eq) goto loc_82663E68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82663E5C;
	sub_8265D850(ctx, base);
	// b 0x82663e68
	goto loc_82663E68;
loc_82663E60:
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82663E68:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_82663E6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82670328) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-10804
	ctx.r10.s64 = ctx.r10.s64 + -10804;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82670660) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82670680:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826706a0
	if (ctx.cr6.eq) goto loc_826706A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82670680
	if (ctx.cr6.lt) goto loc_82670680;
	// blr 
	return;
loc_826706A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82671478) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82671480;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r10,180(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 180);
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82676238
	ctx.lr = 0x826714C0;
	sub_82676238(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82671550
	if (ctx.cr0.eq) goto loc_82671550;
	// lwz r6,188(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 188);
	// li r10,0
	ctx.r10.s64 = 0;
loc_826714F0:
	// lwzx r8,r10,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r5,236(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8267150c
	if (!ctx.cr6.eq) goto loc_8267150C;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// beq cr6,0x82671520
	if (ctx.cr6.eq) goto loc_82671520;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8267150C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826714f0
	if (ctx.cr6.lt) goto loc_826714F0;
	// b 0x82671550
	goto loc_82671550;
loc_82671520:
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82671550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82675A58) {
	REX_FUNC_PROLOGUE();
	// b 0x82677468
	sub_82677468(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675A80) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-208
	ctx.r3.s64 = ctx.r3.s64 + -208;
	// b 0x82678388
	sub_82678388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675B68) {
	REX_FUNC_PROLOGUE();
	// b 0x8267a260
	sub_8267A260(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675C50) {
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
	ctx.lr = 0x82675C58;
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
	// beq cr6,0x82675cd4
	if (ctx.cr6.eq) goto loc_82675CD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82675cbc
	if (ctx.cr6.lt) goto loc_82675CBC;
	// beq cr6,0x82675ca0
	if (ctx.cr6.eq) goto loc_82675CA0;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x82675ce4
	goto loc_82675CE4;
loc_82675CA0:
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
	// bl 0x82679a28
	ctx.lr = 0x82675CB8;
	sub_82679A28(ctx, base);
	// b 0x82675ce4
	goto loc_82675CE4;
loc_82675CBC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676860
	ctx.lr = 0x82675CD0;
	sub_82676860(ctx, base);
	// b 0x82675ce4
	goto loc_82675CE4;
loc_82675CD4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82680570
	ctx.lr = 0x82675CE4;
	sub_82680570(ctx, base);
loc_82675CE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826778A8) {
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
	// lwz r3,280(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826778d4
	if (!ctx.cr6.eq) goto loc_826778D4;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4099
	ctx.r4.u64 = ctx.r4.u64 | 4099;
	// b 0x82677904
	goto loc_82677904;
loc_826778D4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,364
	ctx.r4.s64 = r31.s64 + 364;
	// bl 0x8264cf10
	ctx.lr = 0x826778E8;
	sub_8264CF10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826778f8
	if (ctx.cr0.eq) goto loc_826778F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82677904
	goto loc_82677904;
loc_826778F8:
	// bl 0x8264d050
	ctx.lr = 0x826778FC;
	sub_8264D050(ctx, base);
	// bl 0x826610a8
	ctx.lr = 0x82677900;
	sub_826610A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82677904:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676f20
	ctx.lr = 0x8267790C;
	sub_82676F20(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82677928
	if (!ctx.cr0.eq) goto loc_82677928;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82677928
	if (!ctx.cr0.eq) goto loc_82677928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826777a0
	ctx.lr = 0x82677928;
	sub_826777A0(ctx, base);
loc_82677928:
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

DEFINE_REX_FUNC(sub_8267A1F0) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq 0x8267a248
	if (ctx.cr0.eq) goto loc_8267A248;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x826793d0
	ctx.lr = 0x8267A248;
	sub_826793D0(ctx, base);
loc_8267A248:
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

DEFINE_REX_FUNC(sub_8267C6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// addi r10,r3,572
	ctx.r10.s64 = ctx.r3.s64 + 572;
	// b 0x8267c6f4
	goto loc_8267C6F4;
loc_8267C6B4:
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8267c6f0
	if (!ctx.cr6.eq) goto loc_8267C6F0;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r7,-1
	ctx.r7.s64 = -1;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8267c6f0
	if (!ctx.cr6.eq) goto loc_8267C6F0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
loc_8267C6F0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_8267C6F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne 0x8267c6b4
	if (!ctx.cr0.eq) goto loc_8267C6B4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82680148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82680150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,22236
	r29.s64 = ctx.r11.s64 + 22236;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x827938a4
	ctx.lr = 0x8268016C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(r30.s32, 4096, ctx.xer);
	// bgt cr6,0x82680464
	if (ctx.cr6.gt) goto loc_82680464;
	// beq cr6,0x8268044c
	if (ctx.cr6.eq) goto loc_8268044C;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82680554
	if (ctx.cr6.gt) goto loc_82680554;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10408
	ctx.r12.s64 = ctx.r12.s64 + -10408;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// nop 
	// addi r12,r12,428
	ctx.r12.s64 = ctx.r12.s64 + 428;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826801AC;
	case 1:
		goto loc_826801D4;
	case 2:
		goto loc_826801F8;
	case 3:
		goto loc_82680210;
	case 4:
		goto loc_82680224;
	case 5:
		goto loc_8268023C;
	case 6:
		goto loc_82680254;
	case 7:
		goto loc_8268026C;
	case 8:
		goto loc_82680284;
	case 9:
		goto loc_8268029C;
	case 10:
		goto loc_826802B4;
	case 11:
		goto loc_826802CC;
	case 12:
		goto loc_826802E4;
	case 13:
		goto loc_826802FC;
	case 14:
		goto loc_82680314;
	case 15:
		goto loc_8268032C;
	case 16:
		goto loc_82680344;
	case 17:
		goto loc_8268035C;
	case 18:
		goto loc_82680374;
	case 19:
		goto loc_8268038C;
	case 20:
		goto loc_826803A4;
	case 21:
		goto loc_826803BC;
	case 22:
		goto loc_826803D4;
	case 23:
		goto loc_826803EC;
	case 24:
		goto loc_82680404;
	case 25:
		goto loc_82680554;
	case 26:
		goto loc_8268041C;
	case 27:
		goto loc_82680434;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826801AC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268055c
	if (!ctx.cr6.lt) goto loc_8268055C;
loc_826801CC:
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826801D4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8268055c
	if (!ctx.cr6.gt) goto loc_8268055C;
	// b 0x826801cc
	goto loc_826801CC;
loc_826801F8:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680210:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r31,0
	r31.s64 = 0;
	// stw r11,22104(r10)
	REX_STORE_U32(ctx.r10.u32 + 22104, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680224:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268023C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680254:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,104(r10)
	REX_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268026C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680284:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268029C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,116(r9)
	REX_STORE_U16(ctx.r9.u32 + 116, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826802B4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,118(r9)
	REX_STORE_U16(ctx.r9.u32 + 118, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826802CC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,120(r9)
	REX_STORE_U16(ctx.r9.u32 + 120, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826802E4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,122(r9)
	REX_STORE_U16(ctx.r9.u32 + 122, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826802FC:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680314:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268032C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680344:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268035C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680374:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268038C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826803A4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,124(r10)
	REX_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826803BC:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826803D4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826803EC:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680404:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268041C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680434:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268044C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680464:
	// addi r11,r30,-4099
	ctx.r11.s64 = r30.s64 + -4099;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82680554
	if (ctx.cr6.gt) goto loc_82680554;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826804ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826804AC;
	// bdzf 4*cr6+eq,0x826804c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826804C4;
	// bdzf 4*cr6+eq,0x826804dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826804DC;
	// bdzf 4*cr6+eq,0x826804f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826804F4;
	// bdzf 4*cr6+eq,0x8268050c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8268050C;
	// bdzf 4*cr6+eq,0x82680524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82680524;
	// bne cr6,0x8268053c
	if (!ctx.cr6.eq) goto loc_8268053C;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_826804AC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,56(r9)
	REX_STORE_U16(ctx.r9.u32 + 56, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826804C4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,58(r9)
	REX_STORE_U16(ctx.r9.u32 + 58, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826804DC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r11,22104
	ctx.r9.s64 = ctx.r11.s64 + 22104;
	// sth r10,60(r9)
	REX_STORE_U16(ctx.r9.u32 + 60, ctx.r10.u16);
	// b 0x8268055c
	goto loc_8268055C;
loc_826804F4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268050C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,128(r10)
	REX_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680524:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_8268053C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// b 0x8268055c
	goto loc_8268055C;
loc_82680554:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
loc_8268055C:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x827938b4
	ctx.lr = 0x82680564;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82699318) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82699328
	if (ctx.cr6.lt) goto loc_82699328;
	// li r4,255
	ctx.r4.s64 = 255;
loc_82699328:
	// lbz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82699370
	if (!ctx.cr6.eq) goto loc_82699370;
	// lbz r11,21(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 21);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r6)
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r10.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826993d8
	if (!ctx.cr0.eq) goto loc_826993D8;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x826993d8
	if (ctx.cr6.lt) goto loc_826993D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, ctx.r11.u8);
	// b 0x826993d8
	goto loc_826993D8;
loc_82699370:
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,16(r6)
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lha r11,-10(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + -10));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826993d8
	if (!ctx.cr6.gt) goto loc_826993D8;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,32700
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32700, ctx.xer);
	// stb r10,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// ble cr6,0x826993d8
	if (!ctx.cr6.gt) goto loc_826993D8;
	// li r11,32700
	ctx.r11.s64 = 32700;
	// sth r11,16(r6)
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
loc_826993D8:
	// lbz r11,21(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269C7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8269C7F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,26384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26384);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8269c3a0
	ctx.lr = 0x8269C81C;
	sub_8269C3A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8269c910
	if (!ctx.cr0.eq) goto loc_8269C910;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8880(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8880);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c86c
	if (ctx.cr6.eq) goto loc_8269C86C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c86c
	if (!ctx.cr0.eq) goto loc_8269C86C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269c86c
	if (!ctx.cr6.eq) goto loc_8269C86C;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// b 0x8269c8dc
	goto loc_8269C8DC;
loc_8269C86C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2252);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8269c8e0
	if (!ctx.cr6.eq) goto loc_8269C8E0;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8269c8e0
	if (!ctx.cr0.eq) goto loc_8269C8E0;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x8269c8e0
	if (!ctx.cr6.lt) goto loc_8269C8E0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793714
	ctx.lr = 0x8269C8A8;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c8e0
	if (!ctx.cr0.eq) goto loc_8269C8E0;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8269c8e0
	if (!ctx.cr6.eq) goto loc_8269C8E0;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269c8e0
	if (ctx.cr0.eq) goto loc_8269C8E0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269c8e0
	if (ctx.cr0.eq) goto loc_8269C8E0;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_8269C8DC:
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_8269C8E0:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8864(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8864);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c910
	if (ctx.cr6.eq) goto loc_8269C910;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8269c458
	ctx.lr = 0x8269C90C;
	sub_8269C458(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8269C910:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826a5af0
	ctx.lr = 0x8269C918;
	sub_826A5AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826A22F8) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x826a231c
	goto loc_826A231C;
loc_826A2308:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_826A231C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x826a2308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_826A2308;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x826a234c
	if (ctx.cr0.eq) goto loc_826A234C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x826a2370
	if (!ctx.cr0.eq) goto loc_826A2370;
loc_826A2338:
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x826a2338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2338;
loc_826A234C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_826A2358:
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x826a2358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2358;
	// blr 
	return;
loc_826A2370:
	// lbz r7,3(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x826a2370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2370;
	// b 0x826a234c
	goto loc_826A234C;
}

DEFINE_REX_FUNC(__savevmx_111) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_108) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826A9CF4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// lwz r30,180(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x826a9d2c
	goto loc_826A9D2C;
loc_826A9D2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b03f0
	ctx.lr = 0x826A9D34;
	sub_826B03F0(ctx, base);
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

DEFINE_REX_FUNC(sub_826AAAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x826aaad8
	goto loc_826AAAD8;
loc_826AAAD8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x826aaae8
	if (ctx.cr6.eq) goto loc_826AAAE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a96a8
	ctx.lr = 0x826AAAE8;
	sub_826A96A8(ctx, base);
loc_826AAAE8:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826ADD38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826ADD40;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f2,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stfd f1,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826ad840
	ctx.lr = 0x826ADD70;
	sub_826AD840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826adda8
	if (!ctx.cr0.eq) goto loc_826ADDA8;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ad438
	ctx.lr = 0x826ADDA4;
	sub_826AD438(ctx, base);
	// lwz r30,292(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_826ADDA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adae0
	ctx.lr = 0x826ADDB0;
	sub_826ADAE0(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,29524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826adde8
	if (!ctx.cr6.eq) goto loc_826ADDE8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826adde8
	if (ctx.cr6.eq) goto loc_826ADDE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f2,-3744(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x826adb28
	ctx.lr = 0x826ADDE4;
	sub_826ADB28(ctx, base);
	// b 0x826ade00
	goto loc_826ADE00;
loc_826ADDE8:
	// bl 0x826ada98
	ctx.lr = 0x826ADDEC;
	sub_826ADA98(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x826adf00
	ctx.lr = 0x826ADDFC;
	sub_826ADF00(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
loc_826ADE00:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B3CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826B3CC0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82793934
	ctx.lr = 0x826B3CDC;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827939e4
	ctx.lr = 0x826B3D18;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826b3d40
	if (!ctx.cr0.lt) goto loc_826B3D40;
	// bl 0x823f0020
	ctx.lr = 0x826B3D24;
	sub_823F0020(ctx, base);
	// bl 0x823ee280
	ctx.lr = 0x826B3D28;
	sub_823EE280(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x826b3d38
	if (!ctx.cr6.eq) goto loc_826B3D38;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823f0188
	ctx.lr = 0x826B3D38;
	sub_823F0188(ctx, base);
loc_826B3D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b3dc0
	goto loc_826B3DC0;
loc_826B3D40:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82793b94
	ctx.lr = 0x826B3D58;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827938d4
	ctx.lr = 0x826B3D64;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x826b3d78
	if (!ctx.cr6.lt) goto loc_826B3D78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0020
	ctx.lr = 0x826B3D74;
	sub_823F0020(ctx, base);
	// b 0x826b3d38
	goto loc_826B3D38;
loc_826B3D78:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// mulld r10,r10,r8
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// beq cr6,0x826b3da4
	if (ctx.cr6.eq) goto loc_826B3DA4;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_826B3DA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826b3db0
	if (ctx.cr6.eq) goto loc_826B3DB0;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
loc_826B3DB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826b3dbc
	if (ctx.cr6.eq) goto loc_826B3DBC;
	// std r11,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r11.u64);
loc_826B3DBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B3DC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826BA9A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826BA9B0;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA9D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ba9e0
	if (ctx.cr6.lt) goto loc_826BA9E0;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
loc_826BA9E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826BC3E0) {
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
	// addi r10,r11,28840
	ctx.r10.s64 = ctx.r11.s64 + 28840;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826bc158
	ctx.lr = 0x826BC40C;
	sub_826BC158(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826bc42c
	if (ctx.cr6.eq) goto loc_826BC42C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32771
	ctx.r4.u64 = ctx.r4.u64 | 32771;
	// bl 0x823f0350
	ctx.lr = 0x826BC428;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826BC42C:
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

DEFINE_REX_FUNC(sub_826C1398) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826c0a40
	ctx.lr = 0x826C13C8;
	sub_826C0A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1AE0) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C1B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826C3508) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82793e24
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C3618) {
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
	ctx.lr = 0x826C3644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | r30.u64;
	// stw r7,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3664;
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

DEFINE_REX_FUNC(sub_826C7250) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C8808) {
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
	ctx.lr = 0x826C8810;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c8848
	if (!ctx.cr6.eq) goto loc_826C8848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c8600
	ctx.lr = 0x826C8840;
	sub_826C8600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c8858
	if (ctx.cr6.lt) goto loc_826C8858;
loc_826C8848:
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
loc_826C8858:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c8898
	if (ctx.cr6.lt) goto loc_826C8898;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8538
	ctx.lr = 0x826C8884;
	sub_826B8538(ctx, base);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826c88c0
	if (!ctx.cr6.eq) goto loc_826C88C0;
	// lis r28,-32688
	r28.s64 = -2142240768;
loc_826C8898:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c88b4
	if (ctx.cr6.eq) goto loc_826C88B4;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r30,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r30.u32);
loc_826C88B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826C88C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826c88d4
	if (!ctx.cr6.eq) goto loc_826C88D4;
loc_826C88C8:
	// lis r28,-32688
	r28.s64 = -2142240768;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// b 0x826c8898
	goto loc_826C8898;
loc_826C88D4:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c88c8
	if (ctx.cr6.eq) goto loc_826C88C8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826c88f4
	if (ctx.cr6.eq) goto loc_826C88F4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C88F4;
	sub_826A1E70(ctx, base);
loc_826C88F4:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D6160) {
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
	ctx.lr = 0x826D6168;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r24,r4,-24
	r24.s64 = ctx.r4.s64 + -24;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// bctrl 
	ctx.lr = 0x826D61A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bge cr6,0x826d61d0
	if (!ctx.cr6.lt) goto loc_826D61D0;
loc_826D61BC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cec
	return;
loc_826D61D0:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D61E8;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r28,2
	r28.s64 = 2;
	// lhz r10,58(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826d61bc
	if (ctx.cr6.gt) goto loc_826D61BC;
	// lhz r27,80(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r22,r27
	r22.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826d622c
	if (!ctx.cr6.eq) goto loc_826D622C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// addic. r30,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	r30.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// b 0x826d6540
	goto loc_826D6540;
loc_826D622C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6240;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r29,r22,4,0,27
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r27,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, r27.u16);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// bl 0x826c6880
	ctx.lr = 0x826D6288;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826D62A8;
	sub_826A2E60(ctx, base);
	// addi r10,r22,1
	ctx.r10.s64 = r22.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d61bc
	if (ctx.cr6.lt) goto loc_826D61BC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r21,r30
	r21.u64 = r30.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ble cr6,0x826d6524
	if (!ctx.cr6.gt) goto loc_826D6524;
loc_826D62CC:
	// addi r29,r28,2
	r29.s64 = r28.s64 + 2;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826d61bc
	if (ctx.cr6.gt) goto loc_826D61BC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D62F0;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lhz r30,0(r27)
	r30.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826d63b4
	if (ctx.cr6.eq) goto loc_826D63B4;
	// add r28,r30,r29
	r28.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826d61bc
	if (ctx.cr6.gt) goto loc_826D61BC;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6330;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D634C;
	sub_826A2E60(ctx, base);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D6368;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d63b4
	if (ctx.cr6.eq) goto loc_826D63B4;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d63b4
	if (!ctx.cr6.gt) goto loc_826D63B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D63A0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826d63a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D63A0;
loc_826D63B4:
	// addi r28,r9,4
	r28.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826d61bc
	if (ctx.cr6.gt) goto loc_826D61BC;
	// addi r26,r27,8
	r26.s64 = r27.s64 + 8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D63DC;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// addi r29,r27,10
	r29.s64 = r27.s64 + 10;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D6404;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D6428;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D6444;
	sub_826A2E60(ctx, base);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 0);
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// bgt cr6,0x826d61bc
	if (ctx.cr6.gt) goto loc_826D61BC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D646C;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d6514
	if (ctx.cr6.eq) goto loc_826D6514;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826d64f0
	if (ctx.cr6.eq) goto loc_826D64F0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d64f0
	if (ctx.cr6.eq) goto loc_826D64F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d64d4
	if (!ctx.cr6.eq) goto loc_826D64D4;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d6514
	if (!ctx.cr6.gt) goto loc_826D6514;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D64BC:
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
	// bdnz 0x826d64bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D64BC;
	// b 0x826d6514
	goto loc_826D6514;
loc_826D64D4:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x826d6514
	if (!ctx.cr6.eq) goto loc_826D6514;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x826d6510
	goto loc_826D6510;
loc_826D64F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
loc_826D6510:
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_826D6514:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(r21.s32, r22.s32, ctx.xer);
	// blt cr6,0x826d62cc
	if (ctx.cr6.lt) goto loc_826D62CC;
loc_826D6524:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,58(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r9.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r24
	ctx.r6.u64 = r24.u64 - ctx.r7.u64;
	// subf. r30,r28,r6
	r30.u64 = ctx.r6.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
loc_826D6540:
	// beq 0x826d6578
	if (ctx.cr0.eq) goto loc_826D6578;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D655C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6578
	if (ctx.cr6.lt) goto loc_826D6578;
	// ld r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_826D6578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826F1E00) {
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
	ctx.lr = 0x826F1E08;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,36(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// lwz r26,48(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// lwz r24,44(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bge cr6,0x826f1f48
	if (!ctx.cr6.lt) goto loc_826F1F48;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826f1e78
	if (ctx.cr6.eq) goto loc_826F1E78;
	// subfic r11,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x826f1e54
	if (ctx.cr6.lt) goto loc_826F1E54;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_826F1E54:
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// srw r9,r24,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (r24.u32 >> (r26.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r8,r9
	r28.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r24,r7,r24
	r24.u64 = ctx.r7.u64 & r24.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_826F1E78:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,3720
	ctx.r9.s64 = ctx.r11.s64 + 3720;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826f1ec0
	if (!ctx.cr6.eq) goto loc_826F1EC0;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// bgt cr6,0x826f1efc
	if (ctx.cr6.gt) goto loc_826F1EFC;
loc_826F1E94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826f1efc
	if (ctx.cr6.eq) goto loc_826F1EFC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// ble cr6,0x826f1e94
	if (!ctx.cr6.gt) goto loc_826F1E94;
	// b 0x826f1efc
	goto loc_826F1EFC;
loc_826F1EC0:
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// bgt cr6,0x826f1efc
	if (ctx.cr6.gt) goto loc_826F1EFC;
loc_826F1EC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826f1efc
	if (ctx.cr6.eq) goto loc_826F1EFC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826F1EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// ble cr6,0x826f1ec8
	if (!ctx.cr6.gt) goto loc_826F1EC8;
loc_826F1EFC:
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// bge cr6,0x826f1f48
	if (!ctx.cr6.lt) goto loc_826F1F48;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638bf0
	ctx.lr = 0x826F1F2C;
	sub_82638BF0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1f68
	if (ctx.cr6.lt) goto loc_826F1F68;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x826f1f48
	if (!ctx.cr6.lt) goto loc_826F1F48;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_826F1F48:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subfic r10,r25,32
	ctx.xer.ca = r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r25.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - r25.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r4.u32);
loc_826F1F68:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826FC4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc4dc
	if (!ctx.cr6.eq) goto loc_826FC4DC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826FC4DC:
	// lwz r10,22260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22260);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826fc504
	if (!ctx.cr6.eq) goto loc_826FC504;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826FC504:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,22256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22256);
	// lwz r8,3932(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3932);
	// lfd f0,21784(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 21784);
	// ori r7,r10,39848
	ctx.r7.u64 = ctx.r10.u64 | 39848;
	// lwz r6,22156(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 22156);
	// lwz r5,22088(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r4,3684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3684);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// bl 0x82716ae0
	ctx.lr = 0x826FC564;
	sub_82716AE0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82703A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82703A08;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,14924(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14924);
	// lwz r29,14928(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,14916(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 14916);
	// lwz r30,14920(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14920);
	// bne cr6,0x82703b7c
	if (!ctx.cr6.eq) goto loc_82703B7C;
	// lwz r11,15596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703b7c
	if (!ctx.cr6.eq) goto loc_82703B7C;
	// lwz r11,3720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,3732(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// stw r9,3436(r3)
	REX_STORE_U32(ctx.r3.u32 + 3436, ctx.r9.u32);
	// lwz r7,608(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// stw r7,608(r8)
	REX_STORE_U32(ctx.r8.u32 + 608, ctx.r7.u32);
	// lwz r5,3720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// lwz r4,3732(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// lwz r3,596(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 596);
	// stw r3,596(r4)
	REX_STORE_U32(ctx.r4.u32 + 596, ctx.r3.u32);
	// lwz r11,3720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3720);
	// lwz r9,3732(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// lwz r8,600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// stw r8,600(r9)
	REX_STORE_U32(ctx.r9.u32 + 600, ctx.r8.u32);
	// lwz r7,3720(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3720);
	// lwz r5,3732(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// lwz r4,604(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 604);
	// stw r4,604(r5)
	REX_STORE_U32(ctx.r5.u32 + 604, ctx.r4.u32);
	// lwz r3,15932(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82703af4
	if (ctx.cr6.eq) goto loc_82703AF4;
	// lwz r11,20640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703af4
	if (!ctx.cr6.eq) goto loc_82703AF4;
	// lwz r10,3732(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,584(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 584);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// stw r7,584(r10)
	REX_STORE_U32(ctx.r10.u32 + 584, ctx.r7.u32);
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r6,3720(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3720);
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,14916(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14916);
	// stw r5,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lwz r4,14920(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14920);
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r3,14904(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14904);
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lwz r10,14932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14932);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r9,14936(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14936);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82703AF4:
	// lwz r11,22112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82703b48
	if (!ctx.cr6.eq) goto loc_82703B48;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82703b48
	if (!ctx.cr6.gt) goto loc_82703B48;
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x82703b48
	if (!ctx.cr6.gt) goto loc_82703B48;
	// lwz r11,20624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20624);
	// lwz r9,22412(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22412);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,20628(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20628);
	// lwz r7,22416(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22416);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,22420(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22420);
	// lwz r9,22424(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22424);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82703B48:
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// lwz r3,3812(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// bl 0x826a1e70
	ctx.lr = 0x82703B58;
	sub_826A1E70(ctx, base);
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r3,3816(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82703B6C;
	sub_826A1E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r3,3820(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// bl 0x826a1e70
	ctx.lr = 0x82703B7C;
	sub_826A1E70(ctx, base);
loc_82703B7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8271AE38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8271AE40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,15504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// li r29,1
	r29.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r29,15552(r3)
	REX_STORE_U32(ctx.r3.u32 + 15552, r29.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8271ae68
	if (ctx.cr6.eq) goto loc_8271AE68;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8271aed8
	if (ctx.cr6.lt) goto loc_8271AED8;
loc_8271AE68:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r9,28464
	ctx.r4.s64 = ctx.r9.s64 + 28464;
	// addi r3,r8,28500
	ctx.r3.s64 = ctx.r8.s64 + 28500;
	// addi r9,r7,28536
	ctx.r9.s64 = ctx.r7.s64 + 28536;
	// stw r4,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r4.u32);
	// addi r8,r6,28572
	ctx.r8.s64 = ctx.r6.s64 + 28572;
	// stw r3,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r3.u32);
	// addi r7,r5,28608
	ctx.r7.s64 = ctx.r5.s64 + 28608;
	// stw r9,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r9.u32);
	// addi r11,r11,28628
	ctx.r11.s64 = ctx.r11.s64 + 28628;
	// stw r8,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r8.u32);
	// stw r7,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r7.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// stw r11,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r11.u32);
	// bne cr6,0x8271aebc
	if (!ctx.cr6.eq) goto loc_8271AEBC;
	// stw r11,1860(r31)
	REX_STORE_U32(r31.u32 + 1860, ctx.r11.u32);
loc_8271AEBC:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8271aed0
	if (!ctx.cr6.eq) goto loc_8271AED0;
	// stw r29,432(r31)
	REX_STORE_U32(r31.u32 + 432, r29.u32);
	// stw r29,440(r31)
	REX_STORE_U32(r31.u32 + 440, r29.u32);
	// b 0x8271aed8
	goto loc_8271AED8;
loc_8271AED0:
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
loc_8271AED8:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8271af58
	if (ctx.cr6.lt) goto loc_8271AF58;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r3,-32138
	ctx.r3.s64 = -2106195968;
	// addi r11,r11,27744
	ctx.r11.s64 = ctx.r11.s64 + 27744;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, ctx.r11.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r11,r3,17824
	ctx.r11.s64 = ctx.r3.s64 + 17824;
	// addi r10,r10,27472
	ctx.r10.s64 = ctx.r10.s64 + 27472;
	// addi r9,r9,27848
	ctx.r9.s64 = ctx.r9.s64 + 27848;
	// stw r11,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r11.u32);
	// addi r8,r8,27912
	ctx.r8.s64 = ctx.r8.s64 + 27912;
	// stw r10,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r10.u32);
	// addi r7,r7,27344
	ctx.r7.s64 = ctx.r7.s64 + 27344;
	// stw r9,1804(r31)
	REX_STORE_U32(r31.u32 + 1804, ctx.r9.u32);
	// addi r6,r6,27408
	ctx.r6.s64 = ctx.r6.s64 + 27408;
	// stw r8,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r8.u32);
	// addi r5,r5,27576
	ctx.r5.s64 = ctx.r5.s64 + 27576;
	// stw r7,1816(r31)
	REX_STORE_U32(r31.u32 + 1816, ctx.r7.u32);
	// addi r4,r4,27640
	ctx.r4.s64 = ctx.r4.s64 + 27640;
	// stw r6,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r6.u32);
	// stw r5,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r4.u32);
	// bl 0x82703898
	ctx.lr = 0x8271AF54;
	sub_82703898(ctx, base);
	// b 0x8271afa4
	goto loc_8271AFA4;
loc_8271AF58:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32143
	ctx.r7.s64 = -2106523648;
	// addi r6,r11,28712
	ctx.r6.s64 = ctx.r11.s64 + 28712;
	// addi r5,r10,28648
	ctx.r5.s64 = ctx.r10.s64 + 28648;
	// addi r4,r9,28832
	ctx.r4.s64 = ctx.r9.s64 + 28832;
	// stw r6,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, ctx.r6.u32);
	// addi r3,r8,28896
	ctx.r3.s64 = ctx.r8.s64 + 28896;
	// stw r5,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r5.u32);
	// addi r11,r7,21016
	ctx.r11.s64 = ctx.r7.s64 + 21016;
	// stw r4,1804(r31)
	REX_STORE_U32(r31.u32 + 1804, ctx.r4.u32);
	// stw r3,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r3.u32);
	// stw r3,1816(r31)
	REX_STORE_U32(r31.u32 + 1816, ctx.r3.u32);
	// stw r4,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r4.u32);
	// stw r5,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r5.u32);
	// stw r6,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r6.u32);
	// stw r11,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r11.u32);
loc_8271AFA4:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8271b024
	if (!ctx.cr6.eq) goto loc_8271B024;
	// lwz r10,1836(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// lwz r9,1840(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1840);
	// lwz r8,1864(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// lwz r7,1828(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1828);
	// lwz r6,1804(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1804);
	// lwz r5,1808(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// lwz r4,1788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// stw r10,1852(r31)
	REX_STORE_U32(r31.u32 + 1852, ctx.r10.u32);
	// stw r9,1856(r31)
	REX_STORE_U32(r31.u32 + 1856, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,1860(r31)
	REX_STORE_U32(r31.u32 + 1860, ctx.r8.u32);
	// stw r30,1796(r31)
	REX_STORE_U32(r31.u32 + 1796, r30.u32);
	// stw r7,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r7.u32);
	// stw r6,20976(r31)
	REX_STORE_U32(r31.u32 + 20976, ctx.r6.u32);
	// stw r5,20980(r31)
	REX_STORE_U32(r31.u32 + 20980, ctx.r5.u32);
	// beq cr6,0x8271b024
	if (ctx.cr6.eq) goto loc_8271B024;
	// lwz r10,1824(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1824);
	// lwz r9,1844(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1844);
	// lwz r8,1848(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1848);
	// lwz r7,1868(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1868);
	// lwz r6,1816(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lwz r5,1820(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1820);
	// stw r29,1796(r31)
	REX_STORE_U32(r31.u32 + 1796, r29.u32);
	// stw r10,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r10.u32);
	// stw r9,1852(r31)
	REX_STORE_U32(r31.u32 + 1852, ctx.r9.u32);
	// stw r8,1856(r31)
	REX_STORE_U32(r31.u32 + 1856, ctx.r8.u32);
	// stw r7,1860(r31)
	REX_STORE_U32(r31.u32 + 1860, ctx.r7.u32);
	// stw r6,20976(r31)
	REX_STORE_U32(r31.u32 + 20976, ctx.r6.u32);
	// stw r5,20980(r31)
	REX_STORE_U32(r31.u32 + 20980, ctx.r5.u32);
loc_8271B024:
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// lis r8,-32138
	ctx.r8.s64 = -2106195968;
	// addi r7,r10,15400
	ctx.r7.s64 = ctx.r10.s64 + 15400;
	// addi r6,r9,18152
	ctx.r6.s64 = ctx.r9.s64 + 18152;
	// addi r5,r8,12272
	ctx.r5.s64 = ctx.r8.s64 + 12272;
	// stw r7,15804(r31)
	REX_STORE_U32(r31.u32 + 15804, ctx.r7.u32);
	// stw r6,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, ctx.r6.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r5,3084(r31)
	REX_STORE_U32(r31.u32 + 3084, ctx.r5.u32);
	// blt cr6,0x8271b078
	if (ctx.cr6.lt) goto loc_8271B078;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// addi r7,r10,22776
	ctx.r7.s64 = ctx.r10.s64 + 22776;
	// addi r6,r9,31776
	ctx.r6.s64 = ctx.r9.s64 + 31776;
	// addi r5,r8,25032
	ctx.r5.s64 = ctx.r8.s64 + 25032;
	// stw r7,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, ctx.r7.u32);
	// stw r6,3080(r31)
	REX_STORE_U32(r31.u32 + 3080, ctx.r6.u32);
	// stw r5,3088(r31)
	REX_STORE_U32(r31.u32 + 3088, ctx.r5.u32);
	// b 0x8271b084
	goto loc_8271B084;
loc_8271B078:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r10,-28072
	ctx.r9.s64 = ctx.r10.s64 + -28072;
	// stw r9,3080(r31)
	REX_STORE_U32(r31.u32 + 3080, ctx.r9.u32);
loc_8271B084:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b148
	if (ctx.cr6.eq) goto loc_8271B148;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,3188(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// adde r9,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r9,1932(r31)
	REX_STORE_U32(r31.u32 + 1932, ctx.r9.u32);
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// adde r10,r3,r4
	temp.u8 = (ctx.r3.u32 + ctx.r4.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r9,29896
	ctx.r7.s64 = ctx.r9.s64 + 29896;
	// stw r10,1936(r31)
	REX_STORE_U32(r31.u32 + 1936, ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8271b0dc
	if (!ctx.cr6.eq) goto loc_8271B0DC;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r9,r10,-9072
	ctx.r9.s64 = ctx.r10.s64 + -9072;
	// b 0x8271b0e4
	goto loc_8271B0E4;
loc_8271B0DC:
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// addi r9,r10,23600
	ctx.r9.s64 = ctx.r10.s64 + 23600;
loc_8271B0E4:
	// stw r9,3180(r31)
	REX_STORE_U32(r31.u32 + 3180, ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8271b11c
	if (ctx.cr6.lt) goto loc_8271B11C;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// addi r9,r11,2384
	ctx.r9.s64 = ctx.r11.s64 + 2384;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// addi r8,r10,-8192
	ctx.r8.s64 = ctx.r10.s64 + -8192;
	// stw r9,3096(r31)
	REX_STORE_U32(r31.u32 + 3096, ctx.r9.u32);
	// addi r10,r11,-22048
	ctx.r10.s64 = ctx.r11.s64 + -22048;
	// stw r8,3100(r31)
	REX_STORE_U32(r31.u32 + 3100, ctx.r8.u32);
	// stw r10,20948(r31)
	REX_STORE_U32(r31.u32 + 20948, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8271B11C:
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r9,r11,5680
	ctx.r9.s64 = ctx.r11.s64 + 5680;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// addi r8,r10,6048
	ctx.r8.s64 = ctx.r10.s64 + 6048;
	// stw r9,3096(r31)
	REX_STORE_U32(r31.u32 + 3096, ctx.r9.u32);
	// addi r10,r11,-22048
	ctx.r10.s64 = ctx.r11.s64 + -22048;
	// stw r8,3100(r31)
	REX_STORE_U32(r31.u32 + 3100, ctx.r8.u32);
	// stw r10,20948(r31)
	REX_STORE_U32(r31.u32 + 20948, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8271B148:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// stw r29,1936(r31)
	REX_STORE_U32(r31.u32 + 1936, r29.u32);
	// lis r8,-32143
	ctx.r8.s64 = -2106523648;
	// addi r7,r10,13504
	ctx.r7.s64 = ctx.r10.s64 + 13504;
	// addi r6,r9,6776
	ctx.r6.s64 = ctx.r9.s64 + 6776;
	// stw r11,15500(r31)
	REX_STORE_U32(r31.u32 + 15500, ctx.r11.u32);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// addi r5,r8,7144
	ctx.r5.s64 = ctx.r8.s64 + 7144;
	// stw r7,3180(r31)
	REX_STORE_U32(r31.u32 + 3180, ctx.r7.u32);
	// addi r10,r11,-22048
	ctx.r10.s64 = ctx.r11.s64 + -22048;
	// stw r6,3096(r31)
	REX_STORE_U32(r31.u32 + 3096, ctx.r6.u32);
	// stw r5,3100(r31)
	REX_STORE_U32(r31.u32 + 3100, ctx.r5.u32);
	// stw r10,20948(r31)
	REX_STORE_U32(r31.u32 + 20948, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82731ED8) {
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
	ctx.lr = 0x82731EE0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// lhz r8,52(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lhz r11,74(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// rlwinm r28,r8,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lhz r7,76(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r8,1356(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 1356);
	// rotlwi r22,r11,3
	r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rotlwi r20,r11,4
	r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rotlwi r14,r7,3
	r14.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r10,r22,r5
	ctx.r10.u64 = r22.u64 + ctx.r5.u64;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// dcbt r3,r10
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r7,r10
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r4,r10
	// neg r27,r11
	r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r27,r10
	// dcbt r22,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// add r10,r20,r5
	ctx.r10.u64 = r20.u64 + ctx.r5.u64;
	// dcbt r3,r10
	// dcbt r7,r10
	// dcbt r4,r10
	// dcbt r27,r10
	// dcbt r20,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// dcbt r0,r5
	// dcbt r11,r5
	// dcbt r6,r5
	// dcbt r9,r5
	// lwz r3,20904(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 20904);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82731fec
	if (ctx.cr6.eq) goto loc_82731FEC;
	// lwz r11,20908(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82731fec
	if (ctx.cr6.eq) goto loc_82731FEC;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82731fec
	if (!ctx.cr6.eq) goto loc_82731FEC;
	// lwz r10,22196(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 22196);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82731ff0
	goto loc_82731FF0;
loc_82731FEC:
	// lwz r11,22196(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22196);
loc_82731FF0:
	// stw r11,22192(r19)
	REX_STORE_U32(r19.u32 + 22192, ctx.r11.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82732318
	if (!ctx.cr6.lt) goto loc_82732318;
	// addi r29,r8,180
	r29.s64 = ctx.r8.s64 + 180;
	// addi r23,r28,-1
	r23.s64 = r28.s64 + -1;
	// rlwinm r25,r15,2,0,29
	r25.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8273200C:
	// lwz r11,22164(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82732044
	if (ctx.cr6.eq) goto loc_82732044;
	// cmplw cr6,r15,r23
	ctx.cr6.compare<uint32_t>(r15.u32, r23.u32, ctx.xer);
	// bge cr6,0x8273203c
	if (!ctx.cr6.lt) goto loc_8273203C;
	// lwz r11,22192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22192);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273203c
	if (!ctx.cr6.eq) goto loc_8273203C;
	// li r18,0
	r18.s64 = 0;
	// b 0x82732050
	goto loc_82732050;
loc_8273203C:
	// li r18,1
	r18.s64 = 1;
	// b 0x82732050
	goto loc_82732050;
loc_82732044:
	// subfc r11,r23,r15
	ctx.xer.ca = r15.u32 >= r23.u32;
	ctx.r11.u64 = r15.u64 - r23.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r18,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r18.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82732050:
	// add r3,r24,r22
	ctx.r3.u64 = r24.u64 + r22.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// mr r17,r24
	r17.u64 = r24.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732068;
	sub_82743BF8(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82732084
	if (!ctx.cr6.eq) goto loc_82732084;
	// add r3,r24,r20
	ctx.r3.u64 = r24.u64 + r20.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// bl 0x82743bf8
	ctx.lr = 0x82732084;
	sub_82743BF8(ctx, base);
loc_82732084:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82732214
	if (!ctx.cr6.gt) goto loc_82732214;
	// addi r30,r24,16
	r30.s64 = r24.s64 + 16;
	// addi r19,r22,-16
	r19.s64 = r22.s64 + -16;
	// addi r16,r20,-16
	r16.s64 = r20.s64 + -16;
loc_827320A0:
	// addic. r21,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r21.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x82732130
	if (!ctx.cr0.eq) goto loc_82732130;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r30,r20
	ctx.r11.u64 = r30.u64 + r20.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_82732130:
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r3,r19,r28
	ctx.r3.u64 = r19.u64 + r28.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732148;
	sub_82743BF8(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82732164
	if (!ctx.cr6.eq) goto loc_82732164;
	// li r6,16
	ctx.r6.s64 = 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r16,r28
	ctx.r3.u64 = r16.u64 + r28.u64;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// bl 0x82743bf8
	ctx.lr = 0x82732164;
	sub_82743BF8(ctx, base);
loc_82732164:
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r27,r30,-13
	r27.s64 = r30.s64 + -13;
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// bl 0x82744028
	ctx.lr = 0x8273218C;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x827321b0
	if (ctx.cr6.lt) goto loc_827321B0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x827321B0;
	sub_82744028(ctx, base);
loc_827321B0:
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r27,r30,-5
	r27.s64 = r30.s64 + -5;
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// bl 0x82744028
	ctx.lr = 0x827321D8;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x827321fc
	if (ctx.cr6.lt) goto loc_827321FC;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x827321FC;
	sub_82744028(ctx, base);
loc_827321FC:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,16
	r17.s64 = r17.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827320a0
	if (ctx.cr6.lt) goto loc_827320A0;
loc_82732214:
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 82);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// bne cr6,0x827322a0
	if (!ctx.cr6.eq) goto loc_827322A0;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r24,r22
	ctx.r11.u64 = r24.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r24,r22
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r24,r20
	ctx.r11.u64 = r24.u64 + r20.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r24,r20
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r24
	// dcbt r10,r24
	// dcbt r5,r24
	// dcbt r9,r24
loc_827322A0:
	// lbz r30,1244(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r28,r17,3
	r28.s64 = r17.s64 + 3;
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x82744028
	ctx.lr = 0x827322C8;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x827322ec
	if (ctx.cr6.lt) goto loc_827322EC;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82744028
	ctx.lr = 0x827322EC;
	sub_82744028(ctx, base);
loc_827322EC:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8273200c
	if (ctx.cr6.lt) goto loc_8273200C;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_82732318:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r14,r30
	ctx.r11.u64 = r14.u64 + r30.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r30
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r22,r30
	r22.u64 = r30.u64;
	// mr r24,r15
	r24.u64 = r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82732540
	if (!ctx.cr6.lt) goto loc_82732540;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_82732388:
	// lwz r11,22164(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827323c0
	if (ctx.cr6.eq) goto loc_827323C0;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(r24.u32, r20.u32, ctx.xer);
	// bge cr6,0x827323b8
	if (!ctx.cr6.lt) goto loc_827323B8;
	// lwz r11,22192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827323b8
	if (!ctx.cr6.eq) goto loc_827323B8;
	// li r27,0
	r27.s64 = 0;
	// b 0x827323d0
	goto loc_827323D0;
loc_827323B8:
	// li r27,1
	r27.s64 = 1;
	// b 0x827323e4
	goto loc_827323E4;
loc_827323C0:
	// subfc r11,r20,r24
	ctx.xer.ca = r24.u32 >= r20.u32;
	ctx.r11.u64 = r24.u64 - r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r27,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r27.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x827323e4
	if (!ctx.cr0.eq) goto loc_827323E4;
loc_827323D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r22,r14
	ctx.r3.u64 = r22.u64 + r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82743bf8
	ctx.lr = 0x827323E4;
	sub_82743BF8(ctx, base);
loc_827323E4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r22,8
	r26.s64 = r22.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x827324c4
	if (!ctx.cr6.gt) goto loc_827324C4;
	// addi r30,r26,8
	r30.s64 = r26.s64 + 8;
	// addi r28,r14,-8
	r28.s64 = r14.s64 + -8;
loc_82732400:
	// addic. r29,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r29.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82732464
	if (!ctx.cr0.eq) goto loc_82732464;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r26,r14
	ctx.r11.u64 = r26.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
loc_82732464:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82732480
	if (!ctx.cr6.eq) goto loc_82732480;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r28,r30
	ctx.r3.u64 = r28.u64 + r30.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82743bf8
	ctx.lr = 0x82732480;
	sub_82743BF8(ctx, base);
loc_82732480:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// addi r3,r30,-13
	ctx.r3.s64 = r30.s64 + -13;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// bl 0x82744028
	ctx.lr = 0x82732494;
	sub_82744028(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82732400
	if (ctx.cr6.lt) goto loc_82732400;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_827324C4:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bne cr6,0x8273252c
	if (!ctx.cr6.eq) goto loc_8273252C;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r22,r14
	ctx.r11.u64 = r22.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r22,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8273252C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(r24.u32, r29.u32, ctx.xer);
	// blt cr6,0x82732388
	if (ctx.cr6.lt) goto loc_82732388;
	// b 0x82732544
	goto loc_82732544;
loc_82732540:
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82732544:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r14,r25
	ctx.r11.u64 = r14.u64 + r25.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r25
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r23,r15
	r23.u64 = r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82732758
	if (!ctx.cr6.lt) goto loc_82732758;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_827325B0:
	// lwz r11,22164(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827325e8
	if (ctx.cr6.eq) goto loc_827325E8;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// bge cr6,0x827325e0
	if (!ctx.cr6.lt) goto loc_827325E0;
	// lwz r11,22192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827325e0
	if (!ctx.cr6.eq) goto loc_827325E0;
	// li r24,0
	r24.s64 = 0;
	// b 0x827325f8
	goto loc_827325F8;
loc_827325E0:
	// li r24,1
	r24.s64 = 1;
	// b 0x8273260c
	goto loc_8273260C;
loc_827325E8:
	// subfc r11,r20,r23
	ctx.xer.ca = r23.u32 >= r20.u32;
	ctx.r11.u64 = r23.u64 - r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x8273260c
	if (!ctx.cr0.eq) goto loc_8273260C;
loc_827325F8:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r25,r14
	ctx.r3.u64 = r25.u64 + r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82743bf8
	ctx.lr = 0x8273260C;
	sub_82743BF8(ctx, base);
loc_8273260C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r25,8
	r30.s64 = r25.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x827326e0
	if (!ctx.cr6.gt) goto loc_827326E0;
	// add r29,r30,r14
	r29.u64 = r30.u64 + r14.u64;
	// subfic r27,r14,-5
	ctx.xer.ca = r14.u32 <= 4294967291;
	r27.u64 = static_cast<uint64_t>(-5) - r14.u64;
loc_82732628:
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82732690
	if (!ctx.cr0.eq) goto loc_82732690;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r30,r14
	ctx.r11.u64 = r30.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_82732690:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x827326ac
	if (!ctx.cr6.eq) goto loc_827326AC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82743bf8
	ctx.lr = 0x827326AC;
	sub_82743BF8(ctx, base);
loc_827326AC:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// bl 0x82744028
	ctx.lr = 0x827326C0;
	sub_82744028(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82732628
	if (ctx.cr6.lt) goto loc_82732628;
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_827326E0:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bne cr6,0x82732748
	if (!ctx.cr6.eq) goto loc_82732748;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r25,r14
	ctx.r11.u64 = r25.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r25,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_82732748:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r23,r29
	ctx.cr6.compare<uint32_t>(r23.u32, r29.u32, ctx.xer);
	// blt cr6,0x827325b0
	if (ctx.cr6.lt) goto loc_827325B0;
loc_82732758:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8275C9C0) {
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
	ctx.lr = 0x8275C9C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8275c9e8
	if (ctx.cr6.lt) goto loc_8275C9E8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_8275C9E8:
	// srawi r28,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	r28.s64 = ctx.r6.s32 >> 3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r11,r6
	r26.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble cr6,0x8275ca54
	if (!ctx.cr6.gt) goto loc_8275CA54;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_8275CA00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8275ca3c
	if (!ctx.cr6.gt) goto loc_8275CA3C;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
loc_8275CA1C:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x8275ca1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CA1C;
loc_8275CA3C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CA44;
	sub_826A1E70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// bne 0x8275ca00
	if (!ctx.cr0.eq) goto loc_8275CA00;
loc_8275CA54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8275F0C8) {
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
	ctx.lr = 0x8275F0D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x8275ef98
	ctx.lr = 0x8275F100;
	sub_8275EF98(ctx, base);
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 8);
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// subfic r11,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r29.u32);
	// extsh r30,r7
	r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8275f1f0
	if (ctx.cr6.lt) goto loc_8275F1F0;
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
	// bge cr6,0x8275f1e8
	if (!ctx.cr6.lt) goto loc_8275F1E8;
loc_8275F150:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8275f17c
	if (ctx.cr6.lt) goto loc_8275F17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8275F16C;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8275f150
	if (ctx.cr6.eq) goto loc_8275F150;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8275f230
	goto loc_8275F230;
loc_8275F17C:
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
loc_8275F1E8:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8275f230
	goto loc_8275F230;
loc_8275F1F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8275F1F8;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_8275F200:
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
	ctx.lr = 0x8275F218;
	sub_82725F80(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8275f200
	if (ctx.cr6.lt) goto loc_8275F200;
loc_8275F230:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275f24c
	if (ctx.cr6.eq) goto loc_8275F24C;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8275F24C:
	// cmpwi cr6,r30,1099
	ctx.cr6.compare<int32_t>(r30.s32, 1099, ctx.xer);
	// beq cr6,0x8275f264
	if (ctx.cr6.eq) goto loc_8275F264;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lbzx r28,r30,r27
	r28.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// lbzx r30,r30,r11
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// b 0x8275f3bc
	goto loc_8275F3BC;
loc_8275F264:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8275f2d4
	if (!ctx.cr6.lt) goto loc_8275F2D4;
loc_8275F27C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275f2d4
	if (ctx.cr6.eq) goto loc_8275F2D4;
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
	// bge 0x8275f2c4
	if (!ctx.cr0.lt) goto loc_8275F2C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F2C4;
	sub_82725E38(ctx, base);
loc_8275F2C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8275f27c
	if (ctx.cr6.gt) goto loc_8275F27C;
loc_8275F2D4:
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
	// bge 0x8275f30c
	if (!ctx.cr0.lt) goto loc_8275F30C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F30C;
	sub_82725E38(ctx, base);
loc_8275F30C:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8275f384
	if (!ctx.cr6.lt) goto loc_8275F384;
loc_8275F32C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275f384
	if (ctx.cr6.eq) goto loc_8275F384;
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
	// bge 0x8275f374
	if (!ctx.cr0.lt) goto loc_8275F374;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F374;
	sub_82725E38(ctx, base);
loc_8275F374:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8275f32c
	if (ctx.cr6.gt) goto loc_8275F32C;
loc_8275F384:
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
	// bge 0x8275f3bc
	if (!ctx.cr0.lt) goto loc_8275F3BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F3BC;
	sub_82725E38(ctx, base);
loc_8275F3BC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8275f3e4
	if (!ctx.cr6.gt) goto loc_8275F3E4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// b 0x8275f400
	goto loc_8275F400;
loc_8275F3E4:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8275f3fc
	if (!ctx.cr6.lt) goto loc_8275F3FC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// b 0x8275f400
	goto loc_8275F400;
loc_8275F3FC:
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
loc_8275F400:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8275f428
	if (!ctx.cr6.gt) goto loc_8275F428;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
	// b 0x8275f444
	goto loc_8275F444;
loc_8275F428:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8275f440
	if (!ctx.cr6.lt) goto loc_8275F440;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
	// b 0x8275f444
	goto loc_8275F444;
loc_8275F440:
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
loc_8275F444:
	// lwz r11,452(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 452);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,332(r26)
	REX_STORE_U32(r26.u32 + 332, ctx.r10.u32);
	// bne cr6,0x8275f528
	if (!ctx.cr6.eq) goto loc_8275F528;
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8275f478
	if (!ctx.cr6.eq) goto loc_8275F478;
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8275f528
	if (ctx.cr6.eq) goto loc_8275F528;
loc_8275F478:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge cr6,0x8275f4ec
	if (!ctx.cr6.lt) goto loc_8275F4EC;
loc_8275F494:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275f4ec
	if (ctx.cr6.eq) goto loc_8275F4EC;
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
	// bge 0x8275f4dc
	if (!ctx.cr0.lt) goto loc_8275F4DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F4DC;
	sub_82725E38(ctx, base);
loc_8275F4DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8275f494
	if (ctx.cr6.gt) goto loc_8275F494;
loc_8275F4EC:
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
	// bge 0x8275f524
	if (!ctx.cr0.lt) goto loc_8275F524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F524;
	sub_82725E38(ctx, base);
loc_8275F524:
	// stw r30,332(r26)
	REX_STORE_U32(r26.u32 + 332, r30.u32);
loc_8275F528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8277F8C8) {
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
	ctx.lr = 0x8277F8D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,13214
	ctx.r11.s64 = ctx.r4.s64 + 13214;
	// lwz r24,21928(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r23,r10,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r23,r3
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277f930
	if (ctx.cr6.eq) goto loc_8277F930;
	// addi r10,r4,13218
	ctx.r10.s64 = ctx.r4.s64 + 13218;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + r24.u64;
	// ori r6,r9,40248
	ctx.r6.u64 = ctx.r9.u64 | 40248;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r8,40252
	ctx.r4.u64 = ctx.r8.u64 | 40252;
	// stwx r11,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r3,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8277F930:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8271b190
	ctx.lr = 0x8277F93C;
	sub_8271B190(ctx, base);
	// addi r26,r3,512
	r26.s64 = ctx.r3.s64 + 512;
	// li r30,0
	r30.s64 = 0;
	// stwx r3,r23,r31
	REX_STORE_U32(r23.u32 + r31.u32, ctx.r3.u32);
	// addi r28,r26,-2
	r28.s64 = r26.s64 + -2;
	// addi r27,r26,2
	r27.s64 = r26.s64 + 2;
loc_8277F950:
	// lwz r11,22016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22016);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277f974
	if (!ctx.cr6.lt) goto loc_8277F974;
	// lwz r11,22032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22032);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// srawi r29,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r29.s64 = ctx.r9.s32 >> 8;
	// b 0x8277f99c
	goto loc_8277F99C;
loc_8277F974:
	// lwz r10,22036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22036);
	// lwz r11,22024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22024);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8277F99C:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F9AC;
	sub_82799390(ctx, base);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F9C4;
	sub_82799390(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r22,2(r28)
	ea = 2 + r28.u32;
	REX_STORE_U16(ea, r22.u16);
	r28.u32 = ea;
	// sthu r3,-2(r27)
	ea = -2 + r27.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r27.u32 = ea;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x8277f950
	if (ctx.cr6.lt) goto loc_8277F950;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F9EC;
	sub_82799390(ctx, base);
	// sth r3,-512(r26)
	REX_STORE_U16(r26.u32 + -512, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8271b190
	ctx.lr = 0x8277F9FC;
	sub_8271B190(ctx, base);
	// addi r10,r25,13218
	ctx.r10.s64 = r25.s64 + 13218;
	// addi r26,r3,128
	r26.s64 = ctx.r3.s64 + 128;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	r30.s64 = 0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// addi r28,r26,-2
	r28.s64 = r26.s64 + -2;
	// rlwinm r25,r9,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r26,2
	r27.s64 = r26.s64 + 2;
	// stwx r3,r25,r31
	REX_STORE_U32(r25.u32 + r31.u32, ctx.r3.u32);
loc_8277FA20:
	// lwz r11,22020(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22020);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277fa4c
	if (!ctx.cr6.lt) goto loc_8277FA4C;
	// lwz r11,22032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22032);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// srawi r7,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 7;
	// rlwinm r4,r8,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r7,0,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8277fa84
	goto loc_8277FA84;
loc_8277FA4C:
	// lwz r11,22036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22036);
	// lwz r9,22028(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22028);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r4,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 7;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8277FA84:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277FA94;
	sub_82799390(ctx, base);
	// sthu r3,2(r28)
	ea = 2 + r28.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r28.u32 = ea;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277FAAC;
	sub_82799390(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r3,-2(r27)
	ea = -2 + r27.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r27.u32 = ea;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x8277fa20
	if (ctx.cr6.lt) goto loc_8277FA20;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// li r4,-128
	ctx.r4.s64 = -128;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277FAD0;
	sub_82799390(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// sth r3,-128(r26)
	REX_STORE_U16(r26.u32 + -128, ctx.r3.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwzx r6,r23,r31
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + r31.u32);
	// ori r9,r11,40248
	ctx.r9.u64 = ctx.r11.u64 | 40248;
	// stwx r6,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// ori r7,r10,40252
	ctx.r7.u64 = ctx.r10.u64 | 40252;
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// stwx r5,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8278B4C8) {
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
	ctx.lr = 0x8278B4D0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,292(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r19,r9,r10
	r19.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r10,14588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// lwz r28,14596(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r29,14540(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14540);
	// lwz r27,14544(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 14544);
	// lwz r26,14548(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 14548);
	// lwz r25,14504(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 14504);
	// lwz r23,14512(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 14512);
	// lwz r24,14508(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 14508);
	// lwz r21,52(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r30,r28,r11
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// srawi r10,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// add r26,r26,r11
	r26.u64 = r26.u64 + ctx.r11.u64;
	// add r29,r29,r9
	r29.u64 = r29.u64 + ctx.r9.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// add r9,r24,r10
	ctx.r9.u64 = r24.u64 + ctx.r10.u64;
	// lwz r24,14480(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 14480);
	// add r11,r23,r10
	ctx.r11.u64 = r23.u64 + ctx.r10.u64;
	// add r22,r26,r5
	r22.u64 = r26.u64 + ctx.r5.u64;
	// add r29,r29,r3
	r29.u64 = r29.u64 + ctx.r3.u64;
	// add r25,r27,r4
	r25.u64 = r27.u64 + ctx.r4.u64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// add r26,r9,r7
	r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r23,r11,r8
	r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8278b594
	if (ctx.cr6.eq) goto loc_8278B594;
	// lwz r28,14624(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14624);
	// cmpw cr6,r24,r28
	ctx.cr6.compare<int32_t>(r24.s32, r28.s32, ctx.xer);
	// blt cr6,0x8278b560
	if (ctx.cr6.lt) goto loc_8278B560;
	// rotlwi r24,r28,0
	r24.u64 = __builtin_rotateleft32(r28.u32, 0);
loc_8278B560:
	// lwz r11,14488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14488);
	// lwz r20,14628(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 14628);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// blt cr6,0x8278b578
	if (ctx.cr6.lt) goto loc_8278B578;
	// rotlwi r21,r20,0
	r21.u64 = __builtin_rotateleft32(r20.u32, 0);
loc_8278B578:
	// lwz r17,14632(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 14632);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// bge cr6,0x8278b58c
	if (!ctx.cr6.lt) goto loc_8278B58C;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// b 0x8278b5ac
	goto loc_8278B5AC;
loc_8278B58C:
	// lwz r18,14632(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 14632);
	// b 0x8278b5ac
	goto loc_8278B5AC;
loc_8278B594:
	// lwz r11,14648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14648);
	// lwz r10,14488(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14488);
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
loc_8278B5AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed6a8
	ctx.lr = 0x8278B5B4;
	sub_823ED6A8(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278b604
	if (ctx.cr6.eq) goto loc_8278B604;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b604
	if (ctx.cr6.eq) goto loc_8278B604;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b634
	if (!ctx.cr6.gt) goto loc_8278B634;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8278B5DC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276b7f8
	ctx.lr = 0x8278B5EC;
	sub_8276B7F8(ctx, base);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bne 0x8278b5dc
	if (!ctx.cr0.eq) goto loc_8278B5DC;
	// b 0x8278b634
	goto loc_8278B634;
loc_8278B604:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b634
	if (!ctx.cr6.gt) goto loc_8278B634;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8278B610:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276bac8
	ctx.lr = 0x8278B620;
	sub_8276BAC8(ctx, base);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bne 0x8278b610
	if (!ctx.cr0.eq) goto loc_8278B610;
loc_8278B634:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ed6a8
	ctx.lr = 0x8278B63C;
	sub_823ED6A8(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278b694
	if (ctx.cr6.eq) goto loc_8278B694;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b694
	if (ctx.cr6.eq) goto loc_8278B694;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b6cc
	if (!ctx.cr6.gt) goto loc_8278B6CC;
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8278B66C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8276b7f8
	ctx.lr = 0x8278B67C;
	sub_8276B7F8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r26,r20,r26
	r26.u64 = r20.u64 + r26.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bne 0x8278b66c
	if (!ctx.cr0.eq) goto loc_8278B66C;
	// b 0x8278b6cc
	goto loc_8278B6CC;
loc_8278B694:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b6cc
	if (!ctx.cr6.gt) goto loc_8278B6CC;
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8278B6A8:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8276bac8
	ctx.lr = 0x8278B6B8;
	sub_8276BAC8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r26,r20,r26
	r26.u64 = r20.u64 + r26.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bne 0x8278b6a8
	if (!ctx.cr0.eq) goto loc_8278B6A8;
loc_8278B6CC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ed6a8
	ctx.lr = 0x8278B6D4;
	sub_823ED6A8(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278b730
	if (ctx.cr6.eq) goto loc_8278B730;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b730
	if (ctx.cr6.eq) goto loc_8278B730;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b768
	if (!ctx.cr6.gt) goto loc_8278B768;
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8278B704:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8276b7f8
	ctx.lr = 0x8278B714;
	sub_8276B7F8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r23,r17,r23
	r23.u64 = r17.u64 + r23.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bne 0x8278b704
	if (!ctx.cr0.eq) goto loc_8278B704;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
loc_8278B730:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278b768
	if (!ctx.cr6.gt) goto loc_8278B768;
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8278B744:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8276bac8
	ctx.lr = 0x8278B754;
	sub_8276BAC8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r23,r17,r23
	r23.u64 = r17.u64 + r23.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bne 0x8278b744
	if (!ctx.cr0.eq) goto loc_8278B744;
loc_8278B768:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_827AE300) {
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
	ctx.lr = 0x827AE308;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,616(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 616);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r10,52(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r22,0
	r22.s64 = 0;
	// lwz r5,1312(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r14,r9,31,1,31
	r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r10,428(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 428);
	// mullw r11,r4,r14
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(r14.s32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// lwz r9,1164(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 1164);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r4,74(r29)
	ctx.r4.u64 = REX_LOAD_U16(r29.u32 + 74);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r31,76(r29)
	r31.u64 = REX_LOAD_U16(r29.u32 + 76);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r14,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r14.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bne cr6,0x827ae3c4
	if (!ctx.cr6.eq) goto loc_827AE3C4;
	// lwz r9,1368(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 1368);
	// lwz r10,22488(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22488);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// rlwinm r9,r6,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r9,1368(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 1368);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,22500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22500);
	// stw r22,0(r30)
	REX_STORE_U32(r30.u32 + 0, r22.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,4(r30)
	REX_STORE_U32(r30.u32 + 4, r22.u32);
	// sth r22,16(r30)
	REX_STORE_U16(r30.u32 + 16, r22.u16);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// b 0x827ae434
	goto loc_827AE434;
loc_827AE3C4:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// mullw r10,r14,r7
	ctx.r10.s64 = int64_t(r14.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r27,r31,3,0,28
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r14,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r29
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r26,20(r30)
	REX_STORE_U32(r30.u32 + 20, r26.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r7,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mullw r3,r27,r7
	ctx.r3.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r5,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r5.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r6,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// sth r11,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r11.u16);
loc_827AE434:
	// sth r22,18(r30)
	REX_STORE_U16(r30.u32 + 18, r22.u16);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bge cr6,0x827ae854
	if (!ctx.cr6.lt) goto loc_827AE854;
	// li r15,16
	r15.s64 = 16;
	// li r16,32
	r16.s64 = 32;
	// li r17,48
	r17.s64 = 48;
	// li r18,64
	r18.s64 = 64;
	// li r19,80
	r19.s64 = 80;
	// li r20,96
	r20.s64 = 96;
	// li r21,112
	r21.s64 = 112;
loc_827AE460:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// sth r22,18(r30)
	REX_STORE_U16(r30.u32 + 18, r22.u16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// beq cr6,0x827ae7f8
	if (ctx.cr6.eq) goto loc_827AE7F8;
loc_827AE480:
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// rldicl r9,r10,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ae798
	if (ctx.cr6.eq) goto loc_827AE798;
	// rldicl r8,r10,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFF;
	// lwz r9,388(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 388);
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32119
	ctx.r7.s64 = -2104950784;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,14288(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 14288);
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x827ae594
	if (ctx.cr6.gt) goto loc_827AE594;
	// lis r12,-32133
	ctx.r12.s64 = -2105868288;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6936
	ctx.r12.s64 = ctx.r12.s64 + -6936;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_827AE510;
	case 1:
		goto loc_827AE520;
	case 2:
		goto loc_827AE52C;
	case 3:
		goto loc_827AE534;
	case 4:
		goto loc_827AE594;
	case 5:
		goto loc_827AE594;
	case 6:
		goto loc_827AE594;
	case 7:
		goto loc_827AE594;
	case 8:
		goto loc_827AE510;
	case 9:
		goto loc_827AE520;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_827AE510:
	// lwz r10,560(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 560);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827ae540
	goto loc_827AE540;
loc_827AE520:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,568(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 568);
	// b 0x827ae53c
	goto loc_827AE53C;
loc_827AE52C:
	// lwz r11,576(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 576);
	// b 0x827ae538
	goto loc_827AE538;
loc_827AE534:
	// lwz r11,580(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 580);
loc_827AE538:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_827AE53C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827AE540:
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r0,r10
	// lhz r11,90(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 90);
	// dcbt r11,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// dcbt r9,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// dcbt r5,r10
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rotlwi r6,r11,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_827AE594:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r27,r22
	r27.u64 = r22.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,14288(r7)
	REX_STORE_U32(ctx.r7.u32 + 14288, ctx.r11.u32);
loc_827AE5B0:
	// srawi r26,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r26.s64 = r27.s32 >> 2;
	// addi r11,r27,140
	ctx.r11.s64 = r27.s64 + 140;
	// addi r10,r26,2
	ctx.r10.s64 = r26.s64 + 2;
	// rldicl r9,r25,20,44
	ctx.r9.u64 = __builtin_rotateleft64(r25.u64, 20) & 0xFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r8,r23,31
	ctx.r8.u64 = r23.u32 & 0x1;
	// rlwinm r5,r11,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwzx r10,r7,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// lwzx r9,r6,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r24,r10,r9
	r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x827ae784
	if (!ctx.cr6.eq) goto loc_827AE784;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ae784
	if (ctx.cr6.eq) goto loc_827AE784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ae728
	if (!ctx.cr6.eq) goto loc_827AE728;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r5,r29,168
	ctx.r5.s64 = r29.s64 + 168;
	// lwz r4,444(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 444);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r31,40(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827ae64c
	if (ctx.cr6.lt) goto loc_827AE64C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82731930
	ctx.lr = 0x827AE644;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827ae6ac
	goto loc_827AE6AC;
loc_827AE64C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827ae6a8
	if (!ctx.cr6.gt) goto loc_827AE6A8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827AE658:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r15,r3,24,8,31
	r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r15,r7
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// lbzx r15,r10,r4
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r14,r15,r5
	r14.u64 = REX_LOAD_U8(r15.u32 + ctx.r5.u32);
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rotlwi r15,r15,1
	r15.u64 = __builtin_rotateleft32(r15.u32, 1);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// or r9,r14,r9
	ctx.r9.u64 = r14.u64 | ctx.r9.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r3,r15,r31
	REX_STORE_U16(r15.u32 + r31.u32, ctx.r3.u16);
	// bdnz 0x827ae658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AE658;
	// lwz r14,100(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r15,16
	r15.s64 = 16;
loc_827AE6A8:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_827AE6AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827ae718
	if (!ctx.cr6.eq) goto loc_827AE718;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r15
	ea = (r31.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r18
	ea = (r31.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r19
	ea = (r31.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r20
	ea = (r31.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r21
	ea = (r31.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827ae76c
	goto loc_827AE76C;
loc_827AE718:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ae860
	ctx.lr = 0x827AE724;
	sub_827AE860(ctx, base);
	// b 0x827ae76c
	goto loc_827AE76C;
loc_827AE728:
	// rldicl r10,r25,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r25.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r9,r5,r29
	ctx.r9.u64 = ctx.r5.u64 + r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AE76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AE76C:
	// addi r11,r26,45
	ctx.r11.s64 = r26.s64 + 45;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lhzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + r29.u32);
	// bl 0x827bb558
	ctx.lr = 0x827AE784;
	sub_827BB558(ctx, base);
loc_827AE784:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r23,r23,31,1,31
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r25,r25,8,55
	r25.u64 = __builtin_rotateleft64(r25.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// blt cr6,0x827ae5b0
	if (ctx.cr6.lt) goto loc_827AE5B0;
loc_827AE798:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lhz r8,18(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 18);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// sth r6,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r6.u16);
	// blt cr6,0x827ae480
	if (ctx.cr6.lt) goto loc_827AE480;
	// lwz r28,348(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_827AE7F8:
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r8,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r8.u16);
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x827ae460
	if (ctx.cr6.lt) goto loc_827AE460;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_827AE854:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827BADF8) {
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
	ctx.lr = 0x827BAE00;
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
	// beq cr6,0x827bb298
	if (ctx.cr6.eq) goto loc_827BB298;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x827bb0dc
	if (ctx.cr6.eq) goto loc_827BB0DC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bb070
	if (!ctx.cr6.gt) goto loc_827BB070;
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
loc_827BAE98:
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
	// bdnz 0x827bae98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BAE98;
	// lwz r28,1068(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827BB070:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bb358
	if (!ctx.cr6.gt) goto loc_827BB358;
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
loc_827BB0A4:
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
	// bdnz 0x827bb0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BB0A4;
	// b 0x827bb358
	goto loc_827BB358;
loc_827BB0DC:
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
loc_827BB260:
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
	// bdnz 0x827bb260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BB260;
	// b 0x827bb358
	goto loc_827BB358;
loc_827BB298:
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
loc_827BB358:
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
	// bl 0x827b98b0
	ctx.lr = 0x827BB370;
	sub_827B98B0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x826a1cd0
	return;
}

